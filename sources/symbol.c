#include "symbol.h"
#include <stdlib.h>
#include <stdio.h>

void print_symbol(Symbol *self);

Symbol* new_symbol(char* name, int depth, int init, int constant, int size){
  Symbol* s = malloc(sizeof(Symbol));
  s->name = name;
  s->addr = -1;
  s->init = init;
  s->constant = constant;
  s->depth = depth;
  s->next = NULL;
  s->size = size;
  s->print_symbol = print_symbol;
  return s;
}

void print_symbol(Symbol *self) {
  printf("%6s|%6d|%6d|%6s|%6s\n",self->name, self->addr, self->depth, (self->init == 0 ? "NO" : "YES"), (self->constant == 0 ? "NO" : "YES"));
}
