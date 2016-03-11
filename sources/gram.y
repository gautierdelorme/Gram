%{
  #include <stdio.h>
  #include <stdlib.h>

  #include "gram.y.h"
  #include "symbols_table.h"
  #include "labels_table.h"
  #include "error.h"
  #include "assembly.h"

  int current_depth;
%}

%union
{
  int nb;
  char *var;
}

%type <nb>Arithm
%type <nb>Conditions

%token  <var> tID
        <nb> tNB
        tEQU tADD tSUB tMUL tDIV
        tAND tOR tGTH tLTH tEEQU
        tPO tPC tBO tBC tCOM tSM
        tCONST tIF tWHILE tPRT
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

If              :     tIF tPO Conditions {
                        int l = add_label();
                        write_assembly("JMF %d %d", $3, l);
                      }
                      tPC Body {
                        update_label(get_cpt_asm());
                      }

While           :     tWHILE tPO Conditions tPC Body

Arithm          :     tNB {
                        int n = add_tmp_variable();
                        write_assembly("AFC %d %d", n, $1);
                        $$ = n;
                      }
                |     tID {
                        int n = add_tmp_variable();
                        int m = get_addr_symbol($1, current_depth);
                        write_assembly("COP %d %d", n, m);
                        $$ = n;
                      }
                |     Arithm tADD Arithm {
                        write_assembly("ADD %d %d %d", $1, $1, $3);
                        remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tSUB Arithm {
                        write_assembly("SOU %d %d %d", $1, $1, $3);
                        remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tMUL Arithm {
                        write_assembly("MUL %d %d %d", $1, $1, $3);
                        remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tDIV Arithm {
                        write_assembly("DIV %d %d %d", $1, $1, $3);
                        remove_tmp_variable();
                        $$ = $1;
                      }
                |     tPO Arithm tPC { $$ = $2; }

Affectation     :     tID tEQU Arithm tSM {
                        if (not_constant($1, current_depth)) {
                          int n = get_addr_symbol($1, current_depth);
                          write_assembly("COP %d %d", n, $3);
                          remove_tmp_variable();
                        } else {
                          raise_error("ERROR %s is a constant", $1);
                        }
                      }

Declarations    :     tINT tID DeclarationsNext tSM {
                        add_variable($2, current_depth, 0, 0);
                      }
                |     tINT tID tEQU {add_variable($2, current_depth, 1, 0);} Arithm DeclarationsNext tSM {
                        int n = get_addr_symbol($2, current_depth);
                        write_assembly("COP %d %d", n, $5);
                        remove_tmp_variable();
                      }
                |     tINT tCONST tID tEQU {add_variable($3, current_depth, 1, 1);} Arithm DeclarationsNext tSM  {
                        int n = get_addr_symbol($3, current_depth);
                        write_assembly("COP %d %d", n, $6);
                        remove_tmp_variable();
                      }
DeclarationsNext:     tCOM tID tEQU {add_variable($2, current_depth, 1, 0);} Arithm DeclarationsNext {
                        int n = get_addr_symbol($2, current_depth);
                        write_assembly("COP %d %d", n, $5);
                        remove_tmp_variable();
                      }
                |     tCOM tCONST tID tEQU {add_variable($3, current_depth, 1, 1);} Arithm DeclarationsNext {
                        int n = get_addr_symbol($3, current_depth);
                        write_assembly("COP %d %d", n, $6);
                        remove_tmp_variable();
                      }
                |     tCOM tID DeclarationsNext {
                        add_variable($2, current_depth, 0, 0);
                      }
                |     ;

Body            :     tBO {current_depth++;} Content tBC  {
                        remove_symbol(current_depth);
                        current_depth--;
                      }

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
  init_assembly();
  new_symbols_table();
  new_labels_table();
  current_depth = 0;
  yyparse();
  close_assembly();
}
