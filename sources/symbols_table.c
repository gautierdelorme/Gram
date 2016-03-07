#include <stdio.h>
#include <stdlib.h>
#include "symbols_table.h"

Table* symbols_table;

void new_symbols_table() {
  symbols_table = malloc(sizeof(Table));
  symbols_table->symbols = NULL;
  symbols_table->height = 0;
}

void print_symbols_table() {
  Symbol* symbols = symbols_table->symbols;
  printf("TABLE SYMBOLS\n");
  while (symbols != NULL) {
    printf("symbol %s @%d\n",symbols->name, symbols->addr);
    symbols = symbols->next;
  }
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
  printf("ADD\n");
  //print_symbols_table();
}

void add_symbol(char* name, int depth) {
  Symbol* s = new_symbol(name, depth);
  Symbol* symbols = symbols_table->symbols;
  while ((symbols != NULL) && (symbols->name != s->name) && (symbols->depth != s->depth)) {
    symbols = symbols->next;
  }
  if (symbols ==  NULL) {
    perform_add_symbol(s);
  } else {
    raise_error("ERROR SYMBOL %s ALREADY IN THE TABLE", s->name);
  }
}

void remove_symbol(int depth) {
  while ((symbols_table->symbols != NULL) && (symbols_table->symbols->depth == depth)) {
    symbols_table->symbols = symbols_table->symbols->next;
  }
  symbols_table->height--;
  printf("REMOVE\n");
  //print_symbols_table();
}
