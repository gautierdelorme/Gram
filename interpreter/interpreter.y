%{
  #include <stdio.h>
  #include <stdlib.h>

  #include "interpreter.y.h"

  // FIX WARNING YACC
  int yylex();
  int yyerror();
%}

%start Input
%%
Input           :     ;
%%

int yyerror(char *s) {
  return 1;
}

int main(void) {
  yyparse();
  return 0;
}
