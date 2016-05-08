#include <stdio.h>
#include <stdlib.h>
#include "interpreter.h"
#include "error.h"
#include <string.h>

void add(int addr_res, int addr_var1, int addr_var2);
void sub(int addr_res, int addr_var1, int addr_var2);
void mul(int addr_res, int addr_var1, int addr_var2);
void divv(int addr_res, int addr_var1, int addr_var2);
void inf(int addr_res, int addr_var1, int addr_var2);
void equ(int addr_res, int addr_var1, int addr_var2);
void sup(int addr_res, int addr_var1, int addr_var2);
void and(int addr_res, int addr_var1, int addr_var2);
void or(int addr_res, int addr_var1, int addr_var2);
void jmf(int cond, int line);
void afc(int addr_res, int val);
void cop(int addr_res, int addr_val);
void copa(int addr_res, int addr_addr_val);
void copb(int addr_addr_res, int val);
void jmp(int line);
void call(int line);
void pri(int addr_val);
void ret();

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
    Instruction *in = instructions_memory->get(interpreter->current_line);
    if (strcmp(in->name, "ADD" ) == 0) {
      add(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "AFC" ) == 0) {
      afc(in->params[0], in->params[1]);
    } else if (strcmp(in->name, "COP" ) == 0) {
      cop(in->params[0], in->params[1]);
    } else if (strcmp(in->name, "PRI" ) == 0) {
      pri(in->params[0]);
    } else if (strcmp(in->name, "RET" ) == 0) {
      ret();
    }
  }
}

void add(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1+val2);
  interpreter->current_line++;
}

void afc(int addr_res, int val) {
  data_memory->put(addr_res, val);
  interpreter->current_line++;
}

void cop(int addr_res, int addr_val) {
  int val = data_memory->get(addr_val);
  data_memory->put(addr_res, val);
  interpreter->current_line++;
}

void pri(int addr_val) {
  int val = data_memory->get(addr_val);
  printf(">> Value at @%d is %d.\n", addr_val, val);
  interpreter->current_line++;
}

void ret() {
  interpreter->current_line++;
}
