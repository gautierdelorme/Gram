/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     tSBO = 274,
     tSBC = 275,
     tCOM = 276,
     tSM = 277,
     tCONST = 278,
     tIF = 279,
     tELSE = 280,
     tWHILE = 281,
     tPRT = 282,
     tINT = 283,
     tERROR = 284,
     tMAIN = 285
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
#define tSBO 274
#define tSBC 275
#define tCOM 276
#define tSM 277
#define tCONST 278
#define tIF 279
#define tELSE 280
#define tWHILE 281
#define tPRT 282
#define tINT 283
#define tERROR 284
#define tMAIN 285




/* Copy the first part of user declarations.  */
#line 1 "sources/gram.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include "gram.y.h"
  #include "symbols_table.h"
  #include "functions_table.h"
  #include "labels_table.h"
  #include "error.h"
  #include "assembly.h"

  // FIX WARNING YACC
  int yylex();
  int yyerror();


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "sources/gram.y"
{
  int nb;
  char *var;
}
/* Line 193 of yacc.c.  */
#line 176 "gram.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 189 "gram.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    14,    17,    18,    22,    23,
      24,    32,    33,    40,    44,    45,    50,    51,    54,    57,
      60,    63,    66,    69,    70,    71,    79,    80,    84,    85,
      86,    87,    95,    97,    99,   102,   107,   111,   115,   119,
     123,   127,   131,   135,   139,   143,   147,   152,   158,   166,
     171,   177,   185,   186,   195,   196,   204,   205,   214,   215,
     222,   228,   229,   238,   246,   247,   255,   259,   266,   267,
     268,   273
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      32,     0,    -1,    36,    32,    -1,    38,    -1,     3,    15,
      34,    16,    22,    -1,    50,    35,    -1,    -1,    21,    50,
      35,    -1,    -1,    -1,    28,     3,    15,    40,    16,    37,
      60,    -1,    -1,    30,    15,    40,    16,    39,    60,    -1,
      28,     3,    41,    -1,    -1,    21,    28,     3,    41,    -1,
      -1,    43,    42,    -1,    47,    42,    -1,    52,    42,    -1,
      51,    42,    -1,    33,    42,    -1,    62,    42,    -1,    -1,
      -1,    24,    15,    50,    44,    16,    60,    45,    -1,    -1,
      25,    46,    60,    -1,    -1,    -1,    -1,    26,    48,    15,
      50,    49,    16,    60,    -1,     4,    -1,     3,    -1,     8,
       3,    -1,     3,    19,    50,    20,    -1,    50,     6,    50,
      -1,    50,     7,    50,    -1,    50,     8,    50,    -1,    50,
       9,    50,    -1,    15,    50,    16,    -1,    50,    14,    50,
      -1,    50,    12,    50,    -1,    50,    13,    50,    -1,    50,
      10,    50,    -1,    50,    11,    50,    -1,     3,     5,    50,
      22,    -1,     8,     3,     5,    50,    22,    -1,     3,    19,
      50,    20,     5,    50,    22,    -1,    28,     3,    56,    22,
      -1,    28,     8,     3,    56,    22,    -1,    28,     3,    19,
       4,    20,    56,    22,    -1,    -1,    28,     8,     3,     5,
      53,    50,    56,    22,    -1,    -1,    28,     3,     5,    54,
      50,    56,    22,    -1,    -1,    28,    23,     3,     5,    55,
      50,    56,    22,    -1,    -1,    21,     3,     5,    57,    50,
      56,    -1,    21,     8,     3,    56,    22,    -1,    -1,    21,
       8,     3,     5,    58,    50,    56,    22,    -1,    21,     3,
      19,     4,    20,    56,    22,    -1,    -1,    21,    23,     3,
       5,    59,    50,    56,    -1,    21,     3,    56,    -1,    21,
       3,    19,    50,    20,    56,    -1,    -1,    -1,    17,    61,
      42,    18,    -1,    27,    15,     3,    16,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    43,    48,    49,    50,    51,    53,
      53,    60,    60,    67,    70,    71,    74,    76,    77,    78,
      79,    80,    81,    82,    84,    84,    89,    89,    96,    98,
     101,    98,   111,   116,   122,   128,   138,   143,   148,   153,
     158,   159,   164,   169,   174,   179,   185,   194,   199,   210,
     213,   217,   221,   221,   229,   229,   236,   236,   243,   243,
     250,   254,   254,   262,   265,   265,   272,   275,   278,   280,
     280,   285
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tID", "tNB", "tEQU", "tADD", "tSUB",
  "tSTAR", "tDIV", "tAND", "tOR", "tGTH", "tLTH", "tEEQU", "tPO", "tPC",
  "tBO", "tBC", "tSBO", "tSBC", "tCOM", "tSM", "tCONST", "tIF", "tELSE",
  "tWHILE", "tPRT", "tINT", "tERROR", "tMAIN", "$accept", "Input",
  "FunctionCall", "Arguments", "ArgumentsNext", "Function", "@1", "Main",
  "@2", "Params", "ParamsNext", "Content", "If", "@3", "IfNext", "@4",
  "While", "@5", "@6", "Arithm", "Affectation", "Declarations", "@7", "@8",
  "@9", "DeclarationsNext", "@10", "@11", "@12", "Body", "@13", "Print", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    32,    33,    34,    34,    35,    35,    37,
      36,    39,    38,    40,    40,    41,    41,    42,    42,    42,
      42,    42,    42,    42,    44,    43,    46,    45,    45,    48,
      49,    47,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    51,    52,
      52,    52,    53,    52,    54,    52,    55,    52,    57,    56,
      56,    58,    56,    56,    59,    56,    56,    56,    56,    61,
      60,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     5,     2,     0,     3,     0,     0,
       7,     0,     6,     3,     0,     4,     0,     2,     2,     2,
       2,     2,     2,     0,     0,     7,     0,     3,     0,     0,
       0,     7,     1,     1,     2,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     5,     7,     4,
       5,     7,     0,     8,     0,     7,     0,     8,     0,     6,
       5,     0,     8,     7,     0,     7,     3,     6,     0,     0,
       4,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,     0,    14,     1,     2,
      14,     0,     0,     0,    16,    11,     9,     0,    13,     0,
       0,     0,    69,    12,    10,    16,    23,    15,     0,     0,
       0,    29,     0,     0,    23,     0,    23,    23,    23,    23,
      23,     0,     6,     0,     0,     0,     0,     0,    68,     0,
       0,    21,    70,    17,    18,    20,    19,    22,    33,    32,
       0,     0,     0,     0,     8,     0,     0,    24,     0,     0,
      54,     0,     0,     0,    68,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,     5,     0,     0,     0,    30,     0,     0,     0,    68,
       0,     0,    49,    52,     0,    56,     0,    40,    36,    37,
      38,    39,    44,    45,    42,    43,    41,     4,     8,     0,
      47,     0,     0,    71,    68,    68,    58,     0,    66,    68,
       0,     0,    50,     0,    35,     7,     0,    28,     0,     0,
       0,     0,    32,     0,    61,     0,    64,    68,    68,    48,
      26,    25,    31,    55,    51,    68,    68,    68,     0,    60,
       0,     0,     0,     0,    59,     0,    67,    68,    68,    53,
      57,    27,    63,     0,    65,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    34,    63,    91,     4,    20,     5,    19,    12,
      18,    35,    36,    94,   151,   163,    37,    46,   122,    62,
      38,    39,   131,    97,   133,    73,   141,   158,   160,    23,
      26,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
     -21,     3,     4,    24,   -21,   -53,    33,    23,   -53,   -53,
      23,    54,    39,    51,    47,   -53,   -53,    48,   -53,    63,
      63,    78,   -53,   -53,   -53,    47,     2,   -53,    64,    81,
      70,   -53,    72,     0,     2,    71,     2,     2,     2,     2,
       2,    67,    67,    67,    83,    67,    76,    90,    13,    91,
      94,   -53,   -53,   -53,   -53,   -53,   -53,   -53,    79,   -53,
      96,    67,    52,    86,   138,   170,    67,   234,    67,   104,
     -53,   129,     8,    99,    12,   127,    67,   -53,   223,    67,
      67,    67,    67,    67,    67,    67,    67,    67,   -53,   116,
      67,   -53,   148,   100,   139,   234,   132,    67,   136,    31,
     155,   166,   -53,   -53,   135,   -53,   185,   -53,    45,    45,
     -53,   -53,   128,   128,     6,     6,     6,   -53,   138,    67,
     -53,    63,   156,   -53,   154,   149,   -53,   213,   -53,    16,
     168,    67,   -53,    67,   -53,   -53,   117,   146,    63,   152,
     163,    67,   167,   200,   -53,   164,   -53,   154,   154,   -53,
     -53,   -53,   -53,   -53,   -53,   154,   149,   149,    67,   -53,
      67,   178,   179,    63,   -53,   180,   -53,   154,   154,   -53,
     -53,   -53,   -53,   181,   -53,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   184,   -53,   -53,    97,   -53,   -53,   -53,   -53,   194,
     193,   215,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -41,
     -53,   -53,   -53,   -53,   -53,   -52,   -53,   -53,   -53,   -20,
     -53,   -53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      24,    64,    65,    48,    67,    28,     6,     1,    49,     2,
      29,    99,    79,    80,    81,    82,   100,   103,    70,     7,
      78,   144,   104,    50,     8,    93,    30,    95,    31,    32,
      33,   101,    71,    72,    72,   106,   126,    72,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   128,    10,   118,
     127,    11,    72,    81,    82,    15,   124,    14,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    16,    17,    41,
      58,    59,   139,   140,    88,    60,    21,   145,   136,    42,
      22,    25,    61,    43,    44,    45,   143,    47,    66,    52,
     147,    68,   148,    69,    74,   161,   162,    75,    76,    77,
     155,   137,    89,   164,   165,   166,    79,    80,    81,    82,
      83,    84,    85,    86,    87,   173,   174,   167,   152,   168,
      96,   102,   120,    79,    80,    81,    82,    83,    84,    85,
      86,    87,   105,    98,    79,    80,    81,    82,   117,   149,
      85,    86,    87,   171,    79,    80,    81,    82,    83,    84,
      85,    86,    87,   119,   123,   121,   125,   132,   129,    90,
      79,    80,    81,    82,    83,    84,    85,    86,    87,   130,
      72,   150,   138,   146,   153,    72,    79,    80,    81,    82,
      83,    84,    85,    86,    87,   154,   159,   156,     9,     0,
      92,    79,    80,    81,    82,    83,    84,    85,    86,    87,
     169,   170,   172,   175,    13,   134,    79,    80,    81,    82,
      83,    84,    85,    86,    87,   135,    58,   142,    27,     0,
     157,    60,     0,     0,     0,     0,     0,     0,    61,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,   107,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    51,
       0,    53,    54,    55,    56,    57
};

static const yytype_int16 yycheck[] =
{
      20,    42,    43,     3,    45,     3,     3,    28,     8,    30,
       8,     3,     6,     7,     8,     9,     8,     5,     5,    15,
      61,     5,    74,    23,     0,    66,    24,    68,    26,    27,
      28,    23,    19,    21,    21,    76,     5,    21,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    99,    15,    90,
      19,    28,    21,     8,     9,    16,    97,     3,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    16,    21,     5,
       3,     4,   124,   125,    22,     8,    28,   129,   119,    15,
      17,     3,    15,    19,     3,    15,   127,    15,     5,    18,
     131,    15,   133,     3,     3,   147,   148,     3,    19,     3,
     141,   121,    16,   155,   156,   157,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   167,   168,   158,   138,   160,
      16,    22,    22,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     5,     4,     6,     7,     8,     9,    22,    22,
      12,    13,    14,   163,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     5,    22,    16,    20,    22,     3,    21,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     3,
      21,    25,    16,     5,    22,    21,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    22,    22,    20,     4,    -1,
      20,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      22,    22,    22,    22,    10,    20,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   118,     3,     4,    25,    -1,
      20,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    34,
      -1,    36,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    30,    32,    36,    38,     3,    15,     0,    32,
      15,    28,    40,    40,     3,    16,    16,    21,    41,    39,
      37,    28,    17,    60,    60,     3,    61,    41,     3,     8,
      24,    26,    27,    28,    33,    42,    43,    47,    51,    52,
      62,     5,    15,    19,     3,    15,    48,    15,     3,     8,
      23,    42,    18,    42,    42,    42,    42,    42,     3,     4,
       8,    15,    50,    34,    50,    50,     5,    50,    15,     3,
       5,    19,    21,    56,     3,     3,    19,     3,    50,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    22,    16,
      21,    35,    20,    50,    44,    50,    16,    54,     4,     3,
       8,    23,    22,     5,    56,     5,    50,    16,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    22,    50,     5,
      22,    16,    49,    22,    50,    20,     5,    19,    56,     3,
       3,    53,    22,    55,    20,    35,    50,    60,    16,    56,
      56,    57,     4,    50,     5,    56,     5,    50,    50,    22,
      25,    45,    60,    22,    22,    50,    20,    20,    58,    22,
      59,    56,    56,    46,    56,    56,    56,    50,    50,    22,
      22,    60,    22,    56,    56,    22
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 43 "sources/gram.y"
    {
                        int n = functions_table->get_addr_function((yyvsp[(1) - (5)].var));
                        assembly_manager->write_assembly("CALL %d", n);
                      ;}
    break;

  case 9:
#line 53 "sources/gram.y"
    {
                        functions_table->add_function((yyvsp[(2) - (5)].var), assembly_manager->cpt);
                        //assembly_manager->write_fun_assembly("%s:", $2);
                      ;}
    break;

  case 10:
#line 56 "sources/gram.y"
    {
                        symbols_table->remove_symbol();
                        assembly_manager->write_assembly("RET");
                      ;}
    break;

  case 11:
#line 60 "sources/gram.y"
    {
                        //assembly_manager->write_fun_assembly("main:");
                      ;}
    break;

  case 12:
#line 62 "sources/gram.y"
    {
                        symbols_table->remove_symbol();
                        assembly_manager->write_assembly("RET");
                      ;}
    break;

  case 13:
#line 67 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (3)].var), 0, 0);
                      ;}
    break;

  case 15:
#line 71 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(3) - (4)].var), 0, 0);
                      ;}
    break;

  case 24:
#line 84 "sources/gram.y"
    {
                        int l = labels_table->add_label();
                        assembly_manager->write_assembly("JMF %d %d", (yyvsp[(3) - (3)].nb), l);
                      ;}
    break;

  case 26:
#line 89 "sources/gram.y"
    {
                        labels_table->update_label(assembly_manager->cpt+1);
                        int l = labels_table->add_label();
                        assembly_manager->write_assembly("JMP %d", l);
                      ;}
    break;

  case 27:
#line 93 "sources/gram.y"
    {
                        labels_table->update_label(assembly_manager->cpt);
                      ;}
    break;

  case 28:
#line 96 "sources/gram.y"
    {labels_table->update_label(assembly_manager->cpt);;}
    break;

  case 29:
#line 98 "sources/gram.y"
    {
                        labels_table->add_label_while();
                        labels_table->update_label(assembly_manager->cpt);
                      ;}
    break;

  case 30:
#line 101 "sources/gram.y"
    {
                        int k = labels_table->add_label();
                        assembly_manager->write_assembly("JMF %d %d", (yyvsp[(4) - (4)].nb), k);
                      ;}
    break;

  case 31:
#line 105 "sources/gram.y"
    {
                        int l = labels_table->disabled_last_while();
                        assembly_manager->write_assembly("JMP %d", l);
                        labels_table->update_label(assembly_manager->cpt);
                      ;}
    break;

  case 32:
#line 111 "sources/gram.y"
    {
                        int n = symbols_table->add_tmp_variable();
                        assembly_manager->write_assembly("AFC %d %d", n, (yyvsp[(1) - (1)].nb));
                        (yyval.nb) = n;
                      ;}
    break;

  case 33:
#line 116 "sources/gram.y"
    {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol((yyvsp[(1) - (1)].var));
                        assembly_manager->write_assembly("COP %d %d", n, m);
                        (yyval.nb) = n;
                      ;}
    break;

  case 34:
#line 122 "sources/gram.y"
    {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol((yyvsp[(2) - (2)].var));
                        assembly_manager->write_assembly("COPA %d %d", n, m);
                        (yyval.nb) = n;
                      ;}
    break;

  case 35:
#line 128 "sources/gram.y"
    {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol((yyvsp[(1) - (4)].var));
                        int o = symbols_table->add_tmp_variable();
                        assembly_manager->write_assembly("COP %d %d", o, m);
                        assembly_manager->write_assembly("ADD %d %d %d", o, o, (yyvsp[(3) - (4)].nb));
                        assembly_manager->write_assembly("COPA %d %d", n, o);
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = n;
                      ;}
    break;

  case 36:
#line 138 "sources/gram.y"
    {
                        assembly_manager->write_assembly("ADD %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 37:
#line 143 "sources/gram.y"
    {
                        assembly_manager->write_assembly("SOU %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 38:
#line 148 "sources/gram.y"
    {
                        assembly_manager->write_assembly("MUL %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 39:
#line 153 "sources/gram.y"
    {
                        assembly_manager->write_assembly("DIV %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 40:
#line 158 "sources/gram.y"
    { (yyval.nb) = (yyvsp[(2) - (3)].nb); ;}
    break;

  case 41:
#line 159 "sources/gram.y"
    {
                        assembly_manager->write_assembly("EQU %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 42:
#line 164 "sources/gram.y"
    {
                        assembly_manager->write_assembly("SUP %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 43:
#line 169 "sources/gram.y"
    {
                        assembly_manager->write_assembly("INF %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 44:
#line 174 "sources/gram.y"
    {
                        assembly_manager->write_assembly("AND %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 45:
#line 179 "sources/gram.y"
    {
                        assembly_manager->write_assembly("OR %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 46:
#line 185 "sources/gram.y"
    {
                        if (symbols_table->not_constant((yyvsp[(1) - (4)].var))) {
                          int n = symbols_table->get_addr_symbol((yyvsp[(1) - (4)].var));
                          assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(3) - (4)].nb));
                          symbols_table->remove_tmp_variable();
                        } else {
                          error_manager->raise_error("ERROR %s is a constant", (yyvsp[(1) - (4)].var));
                        }
                      ;}
    break;

  case 47:
#line 194 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(2) - (5)].var));
                        assembly_manager->write_assembly("COPB %d %d", n, (yyvsp[(4) - (5)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 48:
#line 199 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(1) - (7)].var));
                        int m = symbols_table->add_tmp_variable();
                        assembly_manager->write_assembly("COP %d %d", m, n);
                        assembly_manager->write_assembly("ADD %d %d %d", m, m, (yyvsp[(3) - (7)].nb));
                        assembly_manager->write_assembly("COPB %d %d", m, (yyvsp[(6) - (7)].nb));
                        symbols_table->remove_tmp_variable();
                        symbols_table->remove_tmp_variable();
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 49:
#line 210 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (4)].var), 0, 0);
                      ;}
    break;

  case 50:
#line 213 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (5)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 51:
#line 217 "sources/gram.y"
    {
                        int n = symbols_table->add_array((yyvsp[(2) - (7)].var), (yyvsp[(4) - (7)].nb));
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 52:
#line 221 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (4)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 53:
#line 224 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (8)].var));
                        assembly_manager->write_assembly("COPB %d %d", n, (yyvsp[(6) - (8)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 54:
#line 229 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (3)].var), 1, 0);
                      ;}
    break;

  case 55:
#line 231 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(2) - (7)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(5) - (7)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 56:
#line 236 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(3) - (4)].var), 1, 1);
                      ;}
    break;

  case 57:
#line 238 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (8)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(6) - (8)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 58:
#line 243 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (3)].var), 1, 0);
                      ;}
    break;

  case 59:
#line 245 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(2) - (6)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(5) - (6)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 60:
#line 250 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (5)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 61:
#line 254 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (4)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 62:
#line 257 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (8)].var));
                        assembly_manager->write_assembly("COPB %d %d", n, (yyvsp[(6) - (8)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 63:
#line 262 "sources/gram.y"
    {
                        symbols_table->add_array((yyvsp[(2) - (7)].var), (yyvsp[(4) - (7)].nb));
                      ;}
    break;

  case 64:
#line 265 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(3) - (4)].var), 1, 1);
                      ;}
    break;

  case 65:
#line 267 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (7)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(6) - (7)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 66:
#line 272 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (3)].var), 0, 0);
                      ;}
    break;

  case 67:
#line 275 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (6)].var), 0, 0);
                      ;}
    break;

  case 69:
#line 280 "sources/gram.y"
    {symbols_table->current_depth++;;}
    break;

  case 70:
#line 280 "sources/gram.y"
    {
                        symbols_table->remove_symbol();
                        symbols_table->current_depth--;
                      ;}
    break;

  case 71:
#line 285 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (5)].var));
                        assembly_manager->write_assembly("PRI %d", n);
                      ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1985 "gram.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 289 "sources/gram.y"


int yyerror(char *s) {
  error_manager->raise_error("ERROR YACC %s", s);
  return 1;
}

void init() {
  new_error_manager();
  new_assembly_manager();
  new_symbols_table();
  new_functions_table();
  new_labels_table();
}

void clear() {
  assembly_manager->close_assembly();
  assembly_manager->second_wave();
  functions_table->clear();
  labels_table->clear();
}

int main(void) {
  init();
  yyparse();
  clear();
  return 0;
}

