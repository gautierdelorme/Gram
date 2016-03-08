%{
  #include <stdio.h>
  #include <stdlib.h>

  #include "gram.y.h"
  #include "symbols_table.h"
  #include "error.h"

  int current_depth;
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

Function        :     tINT tID tPO Params tPC Body

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

Affectation     :     tID tEQU Arithm tSM

Declarations    :     tINT tID DeclarationsNext tSM               {add_variable($2, current_depth, 0);}
                |     tINT tID tEQU Arithm DeclarationsNext tSM   {add_variable($2, current_depth, 1);}
DeclarationsNext:     tCOM tID tEQU Arithm DeclarationsNext       {add_variable($2, current_depth, 1);}
                |     tCOM tID DeclarationsNext                   {add_variable($2, current_depth, 0);}
                |     ;

Body            :     tBO {current_depth++;} Content tBC {remove_symbol(current_depth);current_depth--;}

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
  raise_error("ERROR YACC %s", s);
}

int main(void) {
  current_depth = 0;
  new_symbols_table();
  yyparse();
}
