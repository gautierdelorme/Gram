#include <stdio.h>
#include <stdlib.h>
#include "symbols_table.h"

Table* symbols_table;

void init_symbols_table() {
  symbols_table = malloc(sizeof(Table));
  symbols_table->height = 0;
}

Symbol* create_symbol(char* name, TYPE type){
  Symbol* s = malloc(sizeof(Symbol));
  s->name = name;
  s->type = type;
  s->addr = -1;
  s->init = -1;
  s->constant = -1;
  s->depth = -1;
  s->next = NULL;
  return s;
}

void add_symbol(char* name, TYPE type) {
  Symbol* s = create_symbol(name, type);
  s->addr = symbols_table->height;
  if (symbols_table->symbols == NULL) {
    symbols_table->symbols = s;
  } else {
    s->next = symbols_table->symbols;
    symbols_table->symbols = s;
  }
  symbols_table->height++;
}

Symbol* get_symbol(char* name) {
  Symbol* s = symbols_table->symbols;
  while (s->next != NULL && s->name != name) {
    s = s->next
  }
  return s;
}

void remove_symbol(int depth) {
  while (symbols_table->symbols != NULL && symbols_table->symbols->depth == depth) {
    symbols_table->symbols = symbols_table->symbols->next;
  }
}
