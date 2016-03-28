/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tID = 258,
     tNB = 259,
     tEQU = 260,
     tADD = 261,
     tSUB = 262,
     tSTAR = 263,
     tDIV = 264,
     tAND = 265,
     tOR = 266,
     tGTH = 267,
     tLTH = 268,
     tEEQU = 269,
     tPO = 270,
     tPC = 271,
     tBO = 272,
     tBC = 273,
     tCOM = 274,
     tSM = 275,
     tCONST = 276,
     tIF = 277,
     tWHILE = 278,
     tPRT = 279,
     tINT = 280,
     tERROR = 281
   };
#endif
/* Tokens.  */
#define tID 258
#define tNB 259
#define tEQU 260
#define tADD 261
#define tSUB 262
#define tSTAR 263
#define tDIV 264
#define tAND 265
#define tOR 266
#define tGTH 267
#define tLTH 268
#define tEEQU 269
#define tPO 270
#define tPC 271
#define tBO 272
#define tBC 273
#define tCOM 274
#define tSM 275
#define tCONST 276
#define tIF 277
#define tWHILE 278
#define tPRT 279
#define tINT 280
#define tERROR 281




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "sources/gram.y"
{
  int nb;
  char *var;
}
/* Line 1529 of yacc.c.  */
#line 106 "gram.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

