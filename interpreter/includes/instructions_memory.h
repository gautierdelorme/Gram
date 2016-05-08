#ifndef INSTRUCTIONS_MEMORY_H
#define INSTRUCTIONS_MEMORY_H

#include "instruction.h"

#define  DEBUG_INSTRUCTIONS_MEMORY 1

typedef struct Instructions_Memory{
	Instruction* instructions;
  int height;
	void (*add_instruction)(char* name, int nb_params, ...);
  Instruction* (*get)(int index);
  int (*size)();
	void (*clear)();
} Instructions_Memory;

Instructions_Memory* instructions_memory;

void new_instructions_memory();

#endif
