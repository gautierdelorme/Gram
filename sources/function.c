#include "function.h"
#include <stdlib.h>
#include <stdio.h>

void print_function(Function *self);

Function* new_function(char* name, int addr){
  Function* f = malloc(sizeof(Function));
  f->name = name;
  f->addr = addr;
  f->next = NULL;
  f->print_function = print_function;
  return f;
}

void print_function(Function *self) {
  printf("%6s|%6d\n",self->name, self->addr);
}
