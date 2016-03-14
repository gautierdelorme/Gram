#include "label.h"
#include <stdlib.h>
#include <stdio.h>

Label* new_label(int index){
  Label* l = malloc(sizeof(Label));
  l->index = index;
  l->addr = -1;
  l->init = 0;
  l->next = NULL;
  return l;
}

void print_label(Label* l) {
  printf("%6d|%6d|%6s\n",l->index, l->addr, (l->init == 0 ? "NO" : "YES"));
}
