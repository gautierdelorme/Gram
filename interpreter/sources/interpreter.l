%{
#include "interpreter.y.h"
#include <stdlib.h>
%}
%option noinput
%option nounput

WHITESPACES [ \t]+
DIGIT       [0-9]
DIGITS      {DIGIT}+
EXP         [eE][+-]?{DIGITS}
NUMBER      {DIGITS}{EXP}?
ALPHABET    [a-zA-Z]
FUNCTIONS   {ALPHABET}+{DIGIT}*{ALPHABET}*

%%

{WHITESPACES} { }
{NUMBER}  {
  yylval.nb = atoi(yytext);
  return tNB;
}
"main" {
  return tMAIN;
}
"ADD" {
  return tADD;
}
"CALL" {
  return tCALL;
}
"RET" {
  return tRET;
}
"PRI" {
  return tPRI;
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
":" {
  return tCOL;
}
{FUNCTIONS} {
  return tID;
}
. {
  printf("tERROR\n");
  return tERROR;
}
