#include "instruction.h"
#include <stdlib.h>
#include <stdio.h>

void print_instruction(Instruction* self);

Instruction* new_instruction(char* name, int nb_params, int params[]){
  Instruction* in = malloc(sizeof(Instruction));
  in->name = name;
  in->nb_params = nb_params;
  in->next = NULL;
  in->print_instruction = print_instruction;
  for (int i = 0; i < nb_params; i++) {
    in->params[i] = params[i];
  }
  return in;
}

void print_instruction(Instruction *self) {
  printf("%6s|", self->name);
  for (int i = 0; i < self->nb_params; i++) {
    printf("%4d", self->params[i]);
  }
  printf("\n");
}
