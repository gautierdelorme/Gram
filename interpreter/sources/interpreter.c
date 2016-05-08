#include <stdio.h>
#include <stdlib.h>
#include "interpreter.h"
#include "error.h"
#include <string.h>

void start_interpreter();

void new_interpreter() {
  if (interpreter == NULL) {
    interpreter = malloc(sizeof(Interpreter));
    interpreter->current_line = 1;
    interpreter->start = start_interpreter;
  } else {
    error_manager->raise_error("ERROR INTERPRETER ALREADY EXISTING");
  }
}

void start_interpreter() {
  while (interpreter->current_line <= instructions_memory->size()) {
    printf("%s\n", (instructions_memory->get(interpreter->current_line))->name);
    interpreter->current_line++;
  }
}
