%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "gram.y.h"
  #include "symbols_table.h"
  #include "labels_table.h"
  #include "error.h"
  #include "assembly.h"

  // FIX WARNING YACC
  int yylex();
  int yyerror();
%}

%union
{
  int nb;
  char *var;
}

%type <nb>Arithm

%token  <var> tID
        <nb> tNB
        tEQU tADD tSUB tSTAR tDIV
        tAND tOR tGTH tLTH tEEQU
        tPO tPC tBO tBC tSBO tSBC tCOM tSM
        tCONST tIF tWHILE tPRT
        tINT tERROR

%left tAND tOR
%left tEEQU tGTH tLTH
%left tADD tSUB
%left tSTAR tDIV

%start Input
%%

Input           :     Function Input
                |     ;

Function        :     tINT tID tPO Params tPC Body

Params          :     tINT tID ParamsNext
                |     ;
ParamsNext      :     tCOM tINT tID ParamsNext
                |     ;

If              :     tIF tPO Arithm {
                        int l = labels_table->add_label();
                        assembly_manager->write_assembly("JMF %d %d", $3, l);
                      }
                      tPC Body {
                        labels_table->update_label(assembly_manager->cpt);
                      }

While           :     tWHILE tPO Arithm {
                        labels_table->add_label_while();
                        labels_table->update_label(assembly_manager->cpt);
                        int k = labels_table->add_label();
                        assembly_manager->write_assembly("JMF %d %d", $3, k);
                      }
                      tPC Body {
                        int l = labels_table->disabled_last_while();
                        assembly_manager->write_assembly("JMP %d", l);
                        labels_table->update_label(assembly_manager->cpt);
                      }

Arithm          :     tNB {
                        int n = symbols_table->add_tmp_variable();
                        assembly_manager->write_assembly("AFC %d %d", n, $1);
                        $$ = n;
                      }
                |     tID {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol($1);
                        assembly_manager->write_assembly("COP %d %d", n, m);
                        $$ = n;
                      }
                |     tSTAR tID {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol($2);
                        assembly_manager->write_assembly("COPA %d %d", n, m);
                        $$ = n;
                      }
                |     tID tSBO Arithm tSBC {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol($1);
                        assembly_manager->write_assembly("ADD %d %d %d", n, m, $3);
                        assembly_manager->write_assembly("COPA %d %d", n, n);
                        $$ = n;
                      }
                |     Arithm tADD Arithm {
                        assembly_manager->write_assembly("ADD %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tSUB Arithm {
                        assembly_manager->write_assembly("SOU %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tSTAR Arithm {
                        assembly_manager->write_assembly("MUL %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tDIV Arithm {
                        assembly_manager->write_assembly("DIV %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     tPO Arithm tPC { $$ = $2; }
                |     Arithm tEEQU Arithm {
                        assembly_manager->write_assembly("EQU %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tGTH Arithm {
                        assembly_manager->write_assembly("SUP %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tLTH Arithm {
                        assembly_manager->write_assembly("INF %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tAND Arithm {
                        assembly_manager->write_assembly("AND %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }
                |     Arithm tOR Arithm {
                        assembly_manager->write_assembly("OR %d %d %d", $1, $1, $3);
                        symbols_table->remove_tmp_variable();
                        $$ = $1;
                      }

Affectation     :     tID tEQU Arithm tSM {
                        if (symbols_table->not_constant($1)) {
                          int n = symbols_table->get_addr_symbol($1);
                          assembly_manager->write_assembly("COP %d %d", n, $3);
                          symbols_table->remove_tmp_variable();
                        } else {
                          error_manager->raise_error("ERROR %s is a constant", $1);
                        }
                      }
                |     tSTAR tID tEQU Arithm tSM {
                        int n = symbols_table->get_addr_symbol($2);
                        assembly_manager->write_assembly("COPB %d %d", n, $4);
                        symbols_table->remove_tmp_variable();
                      }
                |     tID tSBO Arithm tSBC tEQU Arithm tSM {
                        int n = symbols_table->get_addr_symbol($1);
                        assembly_manager->write_assembly("ADD %d %d %d", $3, n, $3);
                        assembly_manager->write_assembly("COPB %d %d", $3, $6);
                        symbols_table->remove_tmp_variable();
                      }

Declarations    :     tINT tID DeclarationsNext tSM {
                        symbols_table->add_variable($2, 0, 0);
                      }
                |     tINT tID tEQU {symbols_table->add_variable($2, 1, 0);} Arithm DeclarationsNext tSM {
                        int n = symbols_table->get_addr_symbol($2);
                        assembly_manager->write_assembly("COP %d %d", n, $5);
                        symbols_table->remove_tmp_variable();
                      }
                |     tINT tCONST tID tEQU {symbols_table->add_variable($3, 1, 1);} Arithm DeclarationsNext tSM  {
                        int n = symbols_table->get_addr_symbol($3);
                        assembly_manager->write_assembly("COP %d %d", n, $6);
                        symbols_table->remove_tmp_variable();
                      }
DeclarationsNext:     tCOM tID tEQU {symbols_table->add_variable($2, 1, 0);} Arithm DeclarationsNext {
                        int n = symbols_table->get_addr_symbol($2);
                        assembly_manager->write_assembly("COP %d %d", n, $5);
                        symbols_table->remove_tmp_variable();
                      }
                |     tCOM tCONST tID tEQU {symbols_table->add_variable($3, 1, 1);} Arithm DeclarationsNext {
                        int n = symbols_table->get_addr_symbol($3);
                        assembly_manager->write_assembly("COP %d %d", n, $6);
                        symbols_table->remove_tmp_variable();
                      }
                |     tCOM tID DeclarationsNext {
                        symbols_table->add_variable($2, 0, 0);
                      }
                |     ;

Body            :     tBO {symbols_table->current_depth++;} Content tBC  {
                        symbols_table->remove_symbol();
                        symbols_table->current_depth--;
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
  error_manager->raise_error("ERROR YACC %s", s);
  return 1;
}

int main(void) {
  new_error_manager();
  new_assembly_manager();
  new_symbols_table();
  new_labels_table();
  yyparse();
  assembly_manager->close_assembly();
  assembly_manager->second_wave();
  return 0;
}
