#include "symbol.h"
#include <stdlib.h>
#include <stdio.h>

Symbol* new_symbol(char* name, int depth, int init, int constant, TYPE type){
  Symbol* s = malloc(sizeof(Symbol));
  s->name = name;
  s->type = type;
  s->addr = -1;
  s->init = init;
  s->constant = constant;
  s->depth = depth;
  s->next = NULL;
  return s;
}

void print_symbol(Symbol* s) {
  printf("%6s|%6d|%6d|%6s|%6s|%6s\n",s->name, s->addr, s->depth, (s->type == 0 ? "INT" : "FUN"), (s->init == 0 ? "NO" : "YES"), (s->constant == 0 ? "NO" : "YES"));
}
