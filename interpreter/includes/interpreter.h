#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "instructions_memory.h"
#include "data_memory.h"

#define  DEBUG_INTERPRETER 0

typedef struct Interpreter{
  int current_line;
  int cpt_line;
  int start_line;
  int end_line;
	void (*start)();
  void (*set_start_line)();
  void (*set_end_line)();
  void (*read_line)();
} Interpreter;

Interpreter* interpreter;

void new_interpreter();

#endif
