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
void jmf(int addr_cond, int line);
void afc(int addr_res, int val);
void cop(int addr_res, int addr_val);
void copa(int addr_res, int addr_addr_val);
void copb(int addr_addr_res, int val);
void jmp(int line);
void call(int line);
void pri(int addr_val);
void ret();
void nop();

void start_interpreter();
void set_start_line();
void set_end_line();
void read_line();

void new_interpreter() {
  if (interpreter == NULL) {
    new_data_memory();
    interpreter = malloc(sizeof(Interpreter));
    interpreter->cpt_line = 0;
    interpreter->current_line = 0;
    interpreter->start_line = 0;
    interpreter->end_line = 0;
    interpreter->start = start_interpreter;
    interpreter->set_start_line = set_start_line;
    interpreter->set_end_line = set_end_line;
    interpreter->read_line = read_line;
  } else {
    error_manager->raise_error("ERROR INTERPRETER ALREADY EXISTING");
  }
}

void set_start_line() {
  interpreter->start_line = interpreter->cpt_line+1;
  interpreter->current_line = interpreter->start_line;
}

void set_end_line() {
  interpreter->end_line = interpreter->cpt_line;
}

void read_line() {
  interpreter->cpt_line++;
}

void start_interpreter() {
  while (interpreter->current_line != interpreter->end_line) {
    Instruction *in = instructions_memory->get(interpreter->current_line);
    if (strcmp(in->name, "ADD" ) == 0) {
      add(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "SUB" ) == 0) {
      sub(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "MUL" ) == 0) {
      mul(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "DIV" ) == 0) {
      divv(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "INF" ) == 0) {
      inf(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "EQU" ) == 0) {
      equ(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "SUP" ) == 0) {
      sup(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "AND" ) == 0) {
      and(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "OR" ) == 0) {
      or(in->params[0], in->params[1], in->params[2]);
    } else if (strcmp(in->name, "JMF" ) == 0) {
      jmf(in->params[0], in->params[1]);
    } else if (strcmp(in->name, "AFC" ) == 0) {
      afc(in->params[0], in->params[1]);
    } else if (strcmp(in->name, "COP" ) == 0) {
      cop(in->params[0], in->params[1]);
    } else if (strcmp(in->name, "COPA" ) == 0) {
      copa(in->params[0], in->params[1]);
    } else if (strcmp(in->name, "COPB" ) == 0) {
      copb(in->params[0], in->params[1]);
    } else if (strcmp(in->name, "JMP" ) == 0) {
      jmp(in->params[0]);
    } else if (strcmp(in->name, "PRI" ) == 0) {
      pri(in->params[0]);
    } else if (strcmp(in->name, "CALL" ) == 0) {
      call(in->params[0]);
    } else if (strcmp(in->name, "RET" ) == 0) {
      ret();
    } else if (strcmp(in->name, "NOP" ) == 0) {
      nop();
    } else {
      error_manager->raise_error("ERROR ASSEMBLY INSTRUCTION NOT DEFINED.");
    }
  }
}

void add(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 + val2);
  if (DEBUG_INTERPRETER) {
    printf("add %d + %d = %d at @%d\n", val1, val2, val1 + val2, addr_res);
  }
  interpreter->current_line++;
}

void sub(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 - val2);
  interpreter->current_line++;
}

void mul(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 * val2);
  if (DEBUG_INTERPRETER) {
    printf("mul %d * %d = %d at @%d\n", val1, val2, val1 * val2, addr_res);
  }
  interpreter->current_line++;
}

void divv(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 / val2);
  interpreter->current_line++;
}

void inf(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 < val2);
  interpreter->current_line++;
}

void equ(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 == val2);
  interpreter->current_line++;
}

void sup(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 > val2);
  interpreter->current_line++;
}

void and(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 && val2);
  interpreter->current_line++;
}

void or(int addr_res, int addr_var1, int addr_var2) {
  int val1 = data_memory->get(addr_var1);
  int val2 = data_memory->get(addr_var2);
  data_memory->put(addr_res, val1 || val2);
  interpreter->current_line++;
}

void jmf(int addr_cond, int line) {
  if (data_memory->get(addr_cond) == 1) {
    interpreter->current_line++;
  } else {
    interpreter->current_line = line;
  }
}

void afc(int addr_res, int val) {
  data_memory->put(addr_res, val);
  if (DEBUG_INTERPRETER) {
    printf("afc %d to @%d\n", val, addr_res);
  }
  interpreter->current_line++;
}

void cop(int addr_res, int addr_val) {
  int val = data_memory->get(addr_val);
  data_memory->put(addr_res, val);
  if (DEBUG_INTERPRETER) {
    printf("cop from @%d to @%d : %d\n", addr_val, addr_res, val);
  }
  interpreter->current_line++;
}

void copa(int addr_res, int addr_addr_val) {
  int val = data_memory->get(data_memory->get(addr_addr_val));
  data_memory->put(addr_res, val);
  if (DEBUG_INTERPRETER) {
    printf("cop(a) from (@%d)@%d to @%d : %d\n", addr_addr_val, data_memory->get(addr_addr_val), addr_res, val);
  }
  interpreter->current_line++;
}

void copb(int addr_addr_res, int addr_val) {
  int val = data_memory->get(addr_val);
  data_memory->put(data_memory->get(addr_addr_res), val);
  if (DEBUG_INTERPRETER) {
    printf("cop(b) from @%d to (@%d)@%d : %d\n", addr_val, addr_addr_res, data_memory->get(addr_addr_res), val);
  }
  interpreter->current_line++;
}

void jmp(int line) {
  interpreter->current_line = line;
}

void call(int line) {
  interpreter->current_line++;
}

void pri(int addr_val) {
  int val = data_memory->get(addr_val);
  printf("\033[32;4m>>>  Value at @%d is %d.\033[0m\n", addr_val, val);
  interpreter->current_line++;
}

void ret() {
  interpreter->current_line++;
}

void nop() {
  interpreter->current_line++;
}
