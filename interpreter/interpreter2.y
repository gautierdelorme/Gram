%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "gram.y.h"
  #include "symbols_table.h"
  #include "labels_table.h"
  #include "error.h"
  #include "assembly.h"
%}

%union
{
  int nb;
  char *var;
}

%token
        <nb> tNB
        tADD tSOU tMUL tDIV
        tAFC tCOP tCOPB tCOPA
        tEQU tSUP tINF tAND tOR
        tJMF tJMP

%start INS
%%

INS             :     Add |  Sub | Mul | Div | Jump | JumpFalse | Affection
                |     Copy | CopyPointer | CopyInPointer | Inf | Equal | Sup
                |     And | Or

Add             :     tADD tNB tNB tNB

Sub             :     tSOU tNB tNB tNB

Mul             :     tMUL tNB tNB tNB

Div             :     tDIV tNB tNB tNB

JumpFalse       :     tJMF tNB tNB

Jump            :     tJMP tNB

Affectation     :     tAFC tNB tNB

Copy            :     tCOP tNB tNB

CopyPointer     :     tCOPA tNB tNB

CopyInPointer   :     tCOPB tNB tNB

Inf             :     tINF tNB tNB tNB

Equal           :     tEQU tNB tNB tNB

Sup             :     tSUP tNB tNB tNB

And             :     tAND tNB tNB tNB

Or              :     tOR tNB tNB tNB

%%

int yyerror(char *s) {
  raise_error("ERROR YACC %s", s);
  return 1;
}

int main(void) {

  return 0;
}
