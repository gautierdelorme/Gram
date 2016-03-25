%{
  #include <stdio.h>
  #include <stdlib.h>

  #include "interpreter.y.h"

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
        tJMF tJMP tERROR

%start INS
%%

INS             :     Add INS |  Sub INS | Mul INS | Div INS | Jump INS | JumpFalse INS | Affectation INS
                |     Copy INS | CopyPointer INS | CopyInPointer INS | Inf INS | Equal INS | Sup INS
                |     And INS | Or INS |;

Add             :     tADD tNB tNB tNB {printf("end Add");}

Sub             :     tSOU tNB tNB tNB;

Mul             :     tMUL tNB tNB tNB;

Div             :     tDIV tNB tNB tNB;

JumpFalse       :     tJMF tNB tNB {printf("end JumpFalse");}

Jump            :     tJMP tNB {printf("end Jump");}

Affectation     :     tAFC tNB tNB {printf("end Affectation");}

Copy            :     tCOP tNB tNB;

CopyPointer     :     tCOPA tNB tNB;

CopyInPointer   :     tCOPB tNB tNB;

Inf             :     tINF tNB tNB tNB;

Equal           :     tEQU tNB tNB tNB;

Sup             :     tSUP tNB tNB tNB;

And             :     tAND tNB tNB tNB;

Or              :     tOR tNB tNB tNB;

%%

int yyerror(char *s) {
  printf("error : %s\n", s);
  return 1;
}

int main(void) {
  yyparse();
  return 0;
}
