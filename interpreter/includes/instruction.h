#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#define  MAX_PARAMS 4

typedef struct Instruction {
	char* name;
	int nb_params;
  int params[MAX_PARAMS];
  struct Instruction* next;
  void (*print_instruction)(struct Instruction*);
} Instruction;

Instruction* new_instruction(char* name, int nb_params, int params[]);

#endif
