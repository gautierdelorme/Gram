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
        tRET tPRI
        tJMF tJMP tCALL tERROR

%start INS
%%

INS             :     Add INS |  Sub INS | Mul INS | Div INS | Jump INS | JumpFalse INS | Affectation INS
                |     Copy INS | CopyPointer INS | CopyInPointer INS | Inf INS | Equal INS | Sup INS
                |     And INS | Or INS | Call INS | Ret INS | Pri INS
                | ;

Add             :     tADD tNB tNB tNB {printf("end Add");}

Sub             :     tSOU tNB tNB tNB {printf("end Sub");}

Mul             :     tMUL tNB tNB tNB {printf("end Mul");}

Div             :     tDIV tNB tNB tNB {printf("end Div");}

JumpFalse       :     tJMF tNB tNB {printf("end JumpFalse");}

Jump            :     tJMP tNB {printf("end Jump");}

Affectation     :     tAFC tNB tNB {printf("end Affectation");}

Copy            :     tCOP tNB tNB {printf("end Copy");}

CopyPointer     :     tCOPA tNB tNB {printf("end CopyPointer");}

CopyInPointer   :     tCOPB tNB tNB {printf("end CopyInPointer");}

Inf             :     tINF tNB tNB tNB {printf("end Inf");}

Equal           :     tEQU tNB tNB tNB {printf("end Equal");}

Sup             :     tSUP tNB tNB tNB {printf("end Sup");}

And             :     tAND tNB tNB tNB {printf("end And");}

Or              :     tOR tNB tNB tNB {printf("end Or");}

Call            :     tCALL tNB {printf("end Call");}

Ret             :     tRET {printf("end Ret");}

Pri             :     tPRI tNB {printf("end Pri");}

%%

int yyerror(char *s) {
  printf("error : %s\n", s);
  return 1;
}

int main(void) {
  yyparse();
  return 0;
}
