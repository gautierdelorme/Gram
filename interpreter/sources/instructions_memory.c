#include <stdio.h>
#include <stdlib.h>
#include "instructions_memory.h"
#include "error.h"
#include <string.h>
#include <stdarg.h>

void add_instruction(char* name, int nb_params, ...);
Instruction* get_instruction(int index);
void clear_instructions_memory();
int size_instructions_memory();

void new_instructions_memory() {
  if (instructions_memory == NULL) {
    instructions_memory = malloc(sizeof(Instructions_Memory));
    instructions_memory->instructions = NULL;
    instructions_memory->height = 0;
    instructions_memory->add_instruction = add_instruction;
    instructions_memory->get = get_instruction;
    instructions_memory->clear = clear_instructions_memory;
    instructions_memory->size = size_instructions_memory;
  } else {
    error_manager->raise_error("ERROR INSTRUCTIONS MEMORY ALREADY EXISTING");
  }
}

void print_instructions_memory() {
  Instruction* instructions = instructions_memory->instructions;
  printf("-------------------\n");
  printf("N| NAME | ARGS\n");
  printf("-------------------\n");
  int cpt=1;
  while (instructions != NULL) {
    printf("%d", cpt);
    instructions->print_instruction(instructions);
    instructions = instructions->next;
    cpt++;
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

Instruction* get_instruction(int index) {
  if (index > instructions_memory->height) {
    error_manager->raise_error("ERROR GETTING INSTRUCTION: index out of bounds.");
    return NULL;
  } else {
    int cpt = 1;
    Instruction* instructions = instructions_memory->instructions;
    while (cpt < index) {
      instructions = instructions->next;
      cpt++;
    }
    return instructions;
  }
}

int size_instructions_memory() {
  return instructions_memory->height;
}

void clear_instructions_memory() {
  instructions_memory->instructions = NULL;
  instructions_memory->height = 0;
}
