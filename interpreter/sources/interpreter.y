%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "interpreter.y.h"
  #include "error.h"
  #include "instructions_memory.h"
  #include "data_memory.h"
  #include "interpreter.h"

  // FIX WARNING YACC
  int yylex();
  int yyerror();
%}

%union
{
  int nb;
}

%token  <nb> tNB
        tADD tSOU tMUL tDIV
        tAFC tCOP tCOPB tCOPA
        tEQU tSUP tINF tAND tOR
        tRET tPRI tMAIN tID tCOL
        tJMF tJMP tCALL tERROR

%start Start
%%

Start           :     Functions Main

Functions       :     Function Functions
                |     ;

Function        :     tID tCOL {
                        interpreter->read_line();
                        instructions_memory->add_instruction("NOP", 0);
                      } INS Ret

Main            :     tMAIN tCOL {
                        interpreter->read_line();
                        instructions_memory->add_instruction("NOP", 0);
                        interpreter->set_start_line();
                      } INS Ret {
                        interpreter->set_end_line();
                      }

INS             :     Add INS |  Sub INS | Mul INS | Div INS | Jmp INS | Jmf INS | Afc INS
                |     Cop INS | Copa INS | Copb INS | Inf INS | Equ INS | Sup INS
                |     And INS | Or INS | Call INS | Pri INS
                |     ;

Add             :     tADD tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("ADD", 3, $2, $3, $4);
                      }

Sub             :     tSOU tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("SUB", 3, $2, $3, $4);
                      }

Mul             :     tMUL tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("MUL", 3, $2, $3, $4);
                      }

Div             :     tDIV tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("DIV", 3, $2, $3, $4);
                      }

Inf             :     tINF tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("INF", 3, $2, $3, $4);
                      }

Equ             :     tEQU tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("EQU", 3, $2, $3, $4);
                      }

Sup             :     tSUP tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("SUP", 3, $2, $3, $4);
                      }

And             :     tAND tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("AND", 3, $2, $3, $4);
                      }

Or              :     tOR tNB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("OR", 3, $2, $3, $4);
                      }

Jmf             :     tJMF tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("JMF", 2, $2, $3);
                      }

Afc             :     tAFC tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("AFC", 2, $2, $3);
                      }

Cop             :     tCOP tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("COP", 2, $2, $3);
                      }

Copa            :     tCOPA tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("COPA", 2, $2, $3);
                      }

Copb            :     tCOPB tNB tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("COPB", 2, $2, $3);
                      }

Jmp             :     tJMP tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("JMP", 1, $2);
                      }

Call            :     tCALL tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("CALL", 1, $2);
                      }

Pri             :     tPRI tNB {
                        interpreter->read_line();
                        instructions_memory->add_instruction("PRI", 1, $2);
                      }

Ret             :     tRET {
                        interpreter->read_line();
                        instructions_memory->add_instruction("RET", 0);
                      }

%%

int yyerror(char *s) {
  error_manager->raise_error("ERROR YACC %s", s);
  return 1;
}

void init() {
  new_error_manager();
  new_instructions_memory();
  new_data_memory();
  new_interpreter();
}

void clear() {
  instructions_memory->clear();
}

int main(void) {
  init();
  yyparse();
  interpreter->start();
  clear();
  return 0;
}
