%{
#include "gram.y.h"
#include <stdlib.h>
%}
%option noinput
%option nounput
WHITESPACES [ \t]+
DIGIT       [0-9]
ALPHABET    [a-zA-Z]
DIGITS      {DIGIT}+
EXP         [eE][+-]?{DIGITS}
NUMBER      {DIGITS}{EXP}?
ID          {ALPHABET}+{DIGIT}*{ALPHABET}*
COMMENTS    ("/*"([^*]|\*+[^*/])*\*+"/")|("//".*)

%%
{WHITESPACES} { }
{COMMENTS} { }
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
  return tSTAR;
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
"[" {
  return tSBO;
}
"]" {
  return tSBC;
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
"else" {
  return tELSE;
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
\n {}
. {
  printf("tERROR\n");
  return tERROR;
}
