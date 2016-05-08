#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "instructions_memory.h"
#include "data_memory.h"

#define  DEBUG_INTERPRETER 0

typedef struct Interpreter{
  int current_line;
	void (*start)();
} Interpreter;

Interpreter* interpreter;

void new_interpreter();

#endif
