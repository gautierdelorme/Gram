#include "label.h"
#include <stdlib.h>
#include <stdio.h>

Label* new_label(char* name){
  Label* l = malloc(sizeof(Label));
  l->name = name;
  l->addr = -1;
  l->next = NULL;
  return l;
}

void print_label(Label* l) {
  printf("%6s|%6d\n",l->name, l->addr);
}
