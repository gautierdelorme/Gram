#include "symbol.h"
#include <stdlib.h>

Symbol* new_symbol(char* name, int depth, int init, TYPE type){
  Symbol* s = malloc(sizeof(Symbol));
  s->name = name;
  s->type = type;
  s->addr = -1;
  s->init = init;
  s->constant = -1;
  s->depth = depth;
  s->next = NULL;
  return s;
}

void print_symbol(Symbol* s) {
  printf("%6s|%6d|%6d|%6d|%6d\n",s->name, s->addr, s->depth, s->type, s->init);
}
