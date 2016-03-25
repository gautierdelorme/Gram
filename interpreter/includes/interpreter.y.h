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
     tNB = 258,
     tADD = 259,
     tSOU = 260,
     tMUL = 261,
     tDIV = 262,
     tAFC = 263,
     tCOP = 264,
     tCOPB = 265,
     tCOPA = 266,
     tEQU = 267,
     tSUP = 268,
     tINF = 269,
     tAND = 270,
     tOR = 271,
     tJMF = 272,
     tJMP = 273,
     tERROR = 274
   };
#endif
/* Tokens.  */
#define tNB 258
#define tADD 259
#define tSOU 260
#define tMUL 261
#define tDIV 262
#define tAFC 263
#define tCOP 264
#define tCOPB 265
#define tCOPA 266
#define tEQU 267
#define tSUP 268
#define tINF 269
#define tAND 270
#define tOR 271
#define tJMF 272
#define tJMP 273
#define tERROR 274




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "interpreter.y"
{
  int nb;
}
/* Line 1529 of yacc.c.  */
#line 91 "interpreter.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

