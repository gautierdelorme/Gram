#include "label.h"
#include <stdlib.h>
#include <stdio.h>

void set_is_while(Label* self);
void print_label(Label* self);

Label* new_label(int index){
  Label* l = malloc(sizeof(Label));
  l->index = index;
  l->addr = -1;
  l->init = 0;
  l->is_while = 0;
  l->next = NULL;
  l->set_is_while = set_is_while;
  l->print_label = print_label;
  return l;
}

void set_is_while(Label *self) {
  self->is_while = 1;
}

void print_label(Label *self) {
  printf("%6d|%6d|%6s\n",self->index, self->addr, (self->init == 0 ? "NO" : "YES"));
}
