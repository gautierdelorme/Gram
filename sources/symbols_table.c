#include <stdio.h>
#include <stdlib.h>
#include "symbols_table.h"

Table* symbols_table;

void init_symbols_table() {
  symbols_table = malloc(sizeof(Table));
  symbols_table->symbols = NULL;
  symbols_table->height = 0;
}

Symbol* create_symbol(char* name, TYPE type, int depth){
  Symbol* s = malloc(sizeof(Symbol));
  s->name = name;
  s->type = type;
  s->addr = -1;
  s->init = -1;
  s->constant = -1;
  s->depth = depth;
  s->next = NULL;
  return s;
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

void add_symbol(char* name, TYPE type, int depth) {
  Symbol* s = create_symbol(name, type, depth);
  Symbol* symbols = symbols_table->symbols;
  // SEGMENTATION FAULT HERE
  while ((symbols != NULL) && (symbols->name != s->name) && (symbols->depth != s->depth)) {
    symbols = symbols->next;
  }
  if (symbols ==  NULL) {
    perform_add_symbol(s);
  } else {
    printf(">>> ERROR SYMBOL ALREADY IN THE TABLE <<<\n");
    exit(1);
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
