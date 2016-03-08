%{
#include "gram.y.h"
#include <stdlib.h>
%}

WHITESPACES [ \t]+
DIGIT       [0-9]
ALPHABET    [a-zA-Z]
DIGITS      {DIGIT}+
EXP         [eE][+-]?{DIGITS}
NUMBER      {DIGITS}{EXP}?
ID          {ALPHABET}+{DIGIT}*{ALPHABET}*

%%
{WHITESPACES} { }
{NUMBER}  {
  yylval.nb = atoi(yytext);
  return tNB;
}
"=" {
  return tEQU;
}
"==" {
  return tEEQU;
}
">" {
  return tGTH;
}
"<" {
  return tLTH;
}
"+" {
  return tADD;
}
"-" {
  return tSUB;
}
"*" {
  return tMUL;
}
"/" {
  return tDIV;
}
"int" {
  return tINT;
}
"(" {
  return tPO;
}
")" {
  return tPC;
}
"{" {
  return tBO;
}
"}" {
  return tBC;
}
"," {
  return tCOM;
}
";" {
  return tSM;
}
"const" {
  return tCONST;
}
"if" {
  return tIF;
}
"while" {
  return tWHILE;
}
"printf" {
  return tPRT;
}
"&&" {
  return tAND;
}
"||" {
  return tOR;
}
{ID}  {
  char* newID = malloc(sizeof(strlen(yytext)+1));
  strcpy(newID, yytext);
  yylval.var = newID;
  return tID;
}
. {
  printf("tERROR\n");
  return tERROR;
}
