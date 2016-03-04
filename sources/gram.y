%{
  #include <stdio.h>
  #include <stdlib.h>

  #include "gram.h"
  #include "symbols_table.h"
%}

%union
{
  int nb;
  char *var;
}

%token  <var> tID
        <nb> tNB
        tEQU tADD tSUB tMUL tDIV
        tAND tOR tGTH tLTH tEEQU
        tPO tPC tBO tBC tCOM tSM
        tIF tWHILE tPRT
        tINT tERROR

%left tADD tSUB
%left tMUL tDIV

%start Input
%%

Input           :     Function Input
                |     ;

Function        :     tINT tID tPO Params tPC Body                {add_symbol($2, FUN);}

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

If              :     tIF tPO Conditions tPC Body

While           :     tWHILE tPO Conditions tPC Body

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

Affectation      :     tID tEQU Arithm tSM

Declarations    :     tINT tID DeclarationsNext tSM               {add_symbol($2, INT);}
                |     tINT tID tEQU Arithm DeclarationsNext tSM
DeclarationsNext:     tCOM tID tEQU Arithm DeclarationsNext
                |     tCOM tID DeclarationsNext
                |     ;

Body            :     tBO {current_depth++;} Content tBC {remove_symbols(current_depth);current_depth--;}

Print           :     tPRT tPO tID tPC tSM

Arguments       :     tID Arguments
                |     ;

FunctionCall    :     tID tPO Arguments tPC tSM

Content         :     If Content
                |     While Content
                |     Declarations Content
                |     Affectation Content
                |     FunctionCall Content
                |     Print Content
                |     ;
%%

int yyerror(char *s) {
  printf("%s\n",s);
}

int main(void) {
  int current_depth = 0;
  init_symbols_table();
  yyparse();
}