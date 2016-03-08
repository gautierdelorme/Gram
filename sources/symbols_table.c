#include <stdio.h>
#include <stdlib.h>
#include "symbols_table.h"
#include "error.h"

Table* symbols_table;

void new_symbols_table() {
  symbols_table = malloc(sizeof(Table));
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
  print_symbols_table();
}

void add_symbol(char* name, int depth, int init, int constant, TYPE type) {
  printf("ADDING %s\n", name);
  Symbol* s = new_symbol(name, depth, init, constant, type);
  Symbol* symbols = symbols_table->symbols;
  while ((symbols != NULL) && ((symbols->name != s->name) || (symbols->depth != s->depth))) {
    symbols = symbols->next;
  }
  if (symbols ==  NULL) {
    perform_add_symbol(s);
  } else {
    raise_error("ERROR SYMBOL %s ALREADY IN THE TABLE", s->name);
  }
}

void add_variable(char* name, int depth, int init, int constant) {
  add_symbol(name, depth, init, constant, INT);
}

void add_function(char* name, int depth) {
  add_symbol(name, depth, 0, 0, FUN);
}

void remove_symbol(int depth) {
  printf("REMOVING level %d\n", depth);
  while ((symbols_table->symbols != NULL) && (symbols_table->symbols->depth == depth)) {
    symbols_table->symbols = symbols_table->symbols->next;
    symbols_table->height--;
  }
  print_symbols_table();
}
