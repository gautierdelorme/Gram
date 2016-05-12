#include <stdio.h>
#include <stdlib.h>
#include "symbols_table.h"
#include "error.h"
#include <string.h>

int add_variable(char* name, int init, int constant);
int add_pointer(char* name, int init);
int add_array(char* name, int size);
void remove_symbol();
int get_addr_symbol(char* name);
int add_tmp_variable();
void remove_tmp_variable();
int not_constant(char* name);

void new_symbols_table() {
  if (symbols_table == NULL) {
    symbols_table = malloc(sizeof(Symbols_Table));
    symbols_table->current_depth = 0;
    symbols_table->symbols = NULL;
    symbols_table->height = 0;
    symbols_table->add_variable = add_variable;
    symbols_table->add_pointer = add_pointer;
    symbols_table->add_array = add_array;
    symbols_table->remove_symbol = remove_symbol;
    symbols_table->get_addr_symbol = get_addr_symbol;
    symbols_table->add_tmp_variable = add_tmp_variable;
    symbols_table->remove_tmp_variable = remove_tmp_variable;
    symbols_table->not_constant = not_constant;
  } else {
    error_manager->raise_error("ERROR SYMBOLS TABLE ALREADY EXISTING");
  }
}

void print_symbols_table() {
  Symbol* symbols = symbols_table->symbols;
  printf("-----------------------------------------\n");
  printf(" NAME | ADDR |DEPTH | INIT |CONST \n");
  printf("-----------------------------------------\n");
  while (symbols != NULL) {
    symbols->print_symbol(symbols);
    symbols = symbols->next;
  }
  printf("-----------------------------------------\n");
}

int perform_add_symbol(Symbol* s) {
  s->addr = symbols_table->height;
  if (symbols_table->symbols == NULL) {
    symbols_table->symbols = s;
  } else {
    s->next = symbols_table->symbols;
    symbols_table->symbols = s;
  }
  symbols_table->height += symbols_table->symbols->size;
  if (DEBUG_SYMBOLS_TABLE) {
    print_symbols_table();
  }
  return s->addr;
}

int add_symbol(char* name, int init, int constant, int size) {
  Symbol* s = new_symbol(name, symbols_table->current_depth, init, constant, size);
  Symbol* symbols = symbols_table->symbols;
  while ((symbols != NULL) && ((strcmp(symbols->name, s->name) != 0) || (strcmp(s->name, "-1") == 0) || (symbols->depth != s->depth))) {
    symbols = symbols->next;
  }
  if (symbols !=  NULL) {
    error_manager->raise_error("ERROR SYMBOL %s level %d ALREADY IN THE SYMBOLS TABLE", s->name, s->depth);
  }
  return perform_add_symbol(s);
}

int add_variable(char* name, int init, int constant) {
  return add_symbol(name, init, constant, 1);
}

int add_pointer(char* name, int init) {
  return add_symbol(name, init, 0, 2);
}

int add_array(char* name, int size) {
  return add_symbol(name, 0, 0, size+1);
}

Symbol* get_symbol(char* name) {
  Symbol* symbols = symbols_table->symbols;
  while ((symbols != NULL) && ((strcmp(symbols->name, name) != 0) || (symbols->depth > symbols_table->current_depth))) {
    symbols = symbols->next;
  }
  if (symbols ==  NULL) {
    error_manager->raise_error("SYMBOL %s level %d NOT IN THE TABLE", name, symbols_table->current_depth);
  }
  return symbols;
}

int get_addr_symbol(char* name) {
  return get_symbol(name)->addr;
}

void remove_symbol() {
  while ((symbols_table->symbols != NULL) && (symbols_table->symbols->depth == symbols_table->current_depth)) {
    symbols_table->height -= symbols_table->symbols->size;
    symbols_table->symbols = symbols_table->symbols->next;
  }
  if (DEBUG_SYMBOLS_TABLE) {
    print_symbols_table();
  }
}

int add_tmp_variable() {
  add_variable("-1", -1, -1);
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

int not_constant(char* name) {
  return get_symbol(name)->constant == 0;
}
