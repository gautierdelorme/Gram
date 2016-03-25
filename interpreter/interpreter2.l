%{
#include "gram.y.h"
#include <stdlib.h>
%}

WHITESPACES [ \t]+
DIGIT       [0-9]
DIGITS      {DIGIT}+
EXP         [eE][+-]?{DIGITS}
NUMBER      {DIGITS}{EXP}?

%%
{WHITESPACES} { }
{NUMBER}  {
  yylval.nb = atoi(yytext);
  return tNB;
}
"ADD" {
  return tADD;
}
"AFC" {
  return tAFC;
}
"COP" {
  return tCOP;
}
"COPA" {
  return tCOPA;
}
"COPB" {
  return tCOPB;
}
"EQU" {
  return tEQU;
}
"SOU" {
  return tSOU;
}
"MUL" {
  return tMUL;
}
"DIV" {
  return tDIV;
}
"INF" {
  return tINF;
}
"SUP" {
  return tSUP;
}
"AND" {
  return tAND;
}
"OR" {
  return tOR;
}
"JMF" {
  return tJMF;
}
"JMP" {
  return tJMP;
}
. {
  printf("tERROR\n");
  return tERROR;
}
