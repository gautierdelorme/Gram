%{
#include "gram.h"
#include <stdio.h>
#include <stdlib.h>
%}

%union
{
  int nb;
  char *var;
}

%token <var> tID
%token <nb> tNB
%token  tEQU tADD tSUB tMUL tDIV
        tAND tOR tGTH tLTH tEEQU
        tPO tPC tBO tBC tCOM tSM
        tIF tWHILE tPRT
        tINT tERROR

%start Input
%%

Input           :     Function Input
                |     ;

Function        :     tINT tID tPO Params tPC Body {printf(">>> FUNCTION\n");}

Params          :     tINT tID ParamsNext
                |     ;
ParamsNext      :     tCOM tINT tID ParamsNext
                |     ;

Condition       :     Arithm tEEQU Arithm
                |     Arithm tGTH Arithm
                |     Arithm tLTH Arithm
Conditions      :     Condition ConditionsNext
                |     tPO Condition tPC ConditionsNext
ConditionsNext  :     tOR Conditions
                |     tAND Conditions
                |     ;

If              :     tIF tPO Conditions tPC Body {printf(">>> IF\n");}

While           :     tWHILE tPO Conditions tPC Body {printf(">>> WHILE\n");}

Arithm          :     tID ArithmNext
                |     tNB ArithmNext
                |     tPO Arithm tPC ArithmNext
ArithmNext      :     tADD tID ArithmNext
                |     tSUB tID ArithmNext
                |     tMUL tID ArithmNext
                |     tDIV tID ArithmNext
                |     tADD tNB ArithmNext
                |     tSUB tNB ArithmNext
                |     tMUL tNB ArithmNext
                |     tDIV tNB ArithmNext
                |     ;

Allocation      :     tID tEQU Arithm tSM {printf(">>> ALLOCATION \n");}

Declarations    :     tINT tID DeclarationsNext tSM {printf(">>> DECLARATION \n");}
                |     tINT tID tEQU Arithm DeclarationsNext tSM  {printf(">>> DECLARATION + ALLOCATION\n");}
DeclarationsNext:     tCOM tID tEQU Arithm DeclarationsNext
                |     tCOM tID DeclarationsNext
                |     ;

Body            :     tBO Content tBC

Print           :     tPRT tPO tID tPC tSM {printf(">>> PRINT \n");}

Arguments       :     tID Arguments
                |     ;

FunctionCall    :     tID tPO Arguments tPC tSM {printf(">>> FUNCTION CALL \n");}

Content         :     If Content
                |     While Content
                |     Declarations Content
                |     Allocation Content
                |     FunctionCall Content
                |     Print Content
                |     ;
%%

int yyerror(char *s) {
  printf("%s\n",s);
}

int main(void) {
  yyparse();
}
