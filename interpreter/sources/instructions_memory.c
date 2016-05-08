#include <stdio.h>
#include <stdlib.h>
#include "instructions_memory.h"
#include "error.h"
#include <string.h>
#include <stdarg.h>

void add_instruction(char* name, int nb_params, ...);
void clear_instructions_memory();

void new_instructions_memory() {
  if (instructions_memory == NULL) {
    instructions_memory = malloc(sizeof(Instructions_Memory));
    instructions_memory->instructions = NULL;
    instructions_memory->height = 0;
    instructions_memory->add_instruction = add_instruction;
    instructions_memory->clear = clear_instructions_memory;
  } else {
    error_manager->raise_error("ERROR INSTRUCTIONS MEMORY ALREADY EXISTING");
  }
}

void print_instructions_memory() {
  Instruction* instructions = instructions_memory->instructions;
  printf("-------------------\n");
  printf(" NAME | ARGS\n");
  printf("-------------------\n");
  while (instructions != NULL) {
    instructions->print_instruction(instructions);
    instructions = instructions->next;
  }
  printf("-------------------\n");
}

void perform_add_instruction(Instruction* in) {
  if (instructions_memory->instructions == NULL) {
    instructions_memory->instructions = in;
  } else {
    Instruction* instructions = instructions_memory->instructions;
    while (instructions->next != NULL) {
      instructions = instructions->next;
    }
    instructions->next = in;
  }
  instructions_memory->height++;
  if (DEBUG_INSTRUCTIONS_MEMORY) {
    print_instructions_memory();
  }
}

void add_instruction(char* name, int nb_params, ...) {
  int params[nb_params];
  va_list args;
  va_start(args, nb_params);
    for(int i=0; i<nb_params; i++) {
      params[i] = va_arg(args, int);
    }
  va_end(args);
  Instruction* in = new_instruction(name, nb_params, params);
  perform_add_instruction(in);
}

void clear_instructions_memory() {
  instructions_memory->instructions = NULL;
  instructions_memory->height = 0;
}
