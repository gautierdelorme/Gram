#include "symbol.h"
#include <stdlib.h>

Symbol* new_symbol(char* name, int depth){
  Symbol* s = malloc(sizeof(Symbol));
  s->name = name;
  s->type = INT;
  s->addr = -1;
  s->init = -1;
  s->constant = -1;
  s->depth = depth;
  s->next = NULL;
  return s;
}
