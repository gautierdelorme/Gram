#include <stdio.h>
#include <stdlib.h>
#include "symbols_table.h"
#include "error.h"
#include <string.h>

#define  DEBUG_SYMBOLS_TABLE 0

Symbols_Table* symbols_table;

void new_symbols_table() {
  symbols_table = malloc(sizeof(Symbols_Table));
  symbols_table->symbols = NULL;
  symbols_table->height = 0;
}

void print_symbols_table() {
  Symbol* symbols = symbols_table->symbols;
  printf("-----------------------------------------\n");
  printf(" NAME | ADDR |DEPTH | TYPE | INIT |CONST \n");
  printf("-----------------------------------------\n");
  while (symbols != NULL) {
    print_symbol(symbols);
    symbols = symbols->next;
  }
  printf("-----------------------------------------\n");
}

void perform_add_symbol(Symbol* s) {
  s->addr = symbols_table->height;
  if (symbols_table->symbols == NULL) {
    symbols_table->symbols = s;
  } else {
    s->next = symbols_table->symbols;
    symbols_table->symbols = s;
  }
  symbols_table->height++;
  if (DEBUG_SYMBOLS_TABLE) {
    print_symbols_table();
  }
}

void add_symbol(char* name, int depth, int init, int constant, TYPE type) {
  Symbol* s = new_symbol(name, depth, init, constant, type);
  Symbol* symbols = symbols_table->symbols;
  while ((symbols != NULL) && ((strcmp(symbols->name, s->name) != 0) || (strcmp(s->name, "-1") == 0) || (symbols->depth != s->depth))) {
    symbols = symbols->next;
  }
  if (symbols !=  NULL) {
    raise_error("ERROR SYMBOL %s level %d ALREADY IN THE SYMBOLS TABLE", s->name, s->depth);
  }
  perform_add_symbol(s);
}

void add_variable(char* name, int depth, int init, int constant) {
  add_symbol(name, depth, init, constant, INT);
}

Symbol* get_symbol(char* name, int depth) {
  Symbol* symbols = symbols_table->symbols;
  while ((symbols != NULL) && ((strcmp(symbols->name, name) != 0) || (symbols->depth > depth))) {
    symbols = symbols->next;
  }
  if (symbols ==  NULL) {
    raise_error("SYMBOL %s level %d NOT IN THE TABLE", name, depth);
  }
  return symbols;
}

int get_addr_symbol(char* name, int depth) {
  return get_symbol(name, depth)->addr;
}

void remove_symbol(int depth) {
  while ((symbols_table->symbols != NULL) && (symbols_table->symbols->depth == depth)) {
    symbols_table->symbols = symbols_table->symbols->next;
    symbols_table->height--;
  }
  if (DEBUG_SYMBOLS_TABLE) {
    print_symbols_table();
  }
}

int add_tmp_variable() {
  add_variable("-1", -1, -1, -1);
  return symbols_table->height-1;
}

void remove_tmp_variable() {
  if (symbols_table->height > 0) {
    symbols_table->symbols = symbols_table->symbols->next;
    symbols_table->height--;
  }
  if (DEBUG_SYMBOLS_TABLE) {
    print_symbols_table();
  }
}

int not_constant(char* name, int depth) {
  return get_symbol(name, depth)->constant == 0;
}
