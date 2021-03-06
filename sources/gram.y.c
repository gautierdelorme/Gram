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
     tERROR = 284
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
#line 174 "gram.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 187 "gram.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   235

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  179

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    13,    16,    17,    21,    22,
      23,    31,    35,    36,    41,    42,    45,    48,    51,    54,
      57,    60,    61,    62,    70,    71,    75,    76,    77,    78,
      86,    88,    90,    93,    98,   102,   106,   110,   114,   118,
     122,   126,   130,   134,   138,   143,   149,   157,   158,   164,
     165,   172,   173,   182,   183,   184,   194,   195,   196,   205,
     206,   207,   217,   218,   219,   227,   228,   234,   235,   236,
     245,   246,   254,   255,   256,   265,   266,   271,   272,   280,
     281,   282,   287
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    35,    31,    -1,    -1,     3,    15,    33,
      16,    22,    -1,    47,    34,    -1,    -1,    21,    47,    34,
      -1,    -1,    -1,    28,     3,    15,    37,    16,    36,    70,
      -1,    28,     3,    38,    -1,    -1,    21,    28,     3,    38,
      -1,    -1,    40,    39,    -1,    44,    39,    -1,    49,    39,
      -1,    48,    39,    -1,    32,    39,    -1,    72,    39,    -1,
      -1,    -1,    24,    15,    47,    41,    16,    70,    42,    -1,
      -1,    25,    43,    70,    -1,    -1,    -1,    -1,    26,    45,
      15,    47,    46,    16,    70,    -1,     4,    -1,     3,    -1,
       8,     3,    -1,     3,    19,    47,    20,    -1,    47,     6,
      47,    -1,    47,     7,    47,    -1,    47,     8,    47,    -1,
      47,     9,    47,    -1,    15,    47,    16,    -1,    47,    14,
      47,    -1,    47,    12,    47,    -1,    47,    13,    47,    -1,
      47,    10,    47,    -1,    47,    11,    47,    -1,     3,     5,
      47,    22,    -1,     8,     3,     5,    47,    22,    -1,     3,
      19,    47,    20,     5,    47,    22,    -1,    -1,    28,     3,
      50,    59,    22,    -1,    -1,    28,     8,     3,    51,    59,
      22,    -1,    -1,    28,     3,    19,     4,    20,    52,    59,
      22,    -1,    -1,    -1,    28,     8,     3,     5,    53,    47,
      54,    59,    22,    -1,    -1,    -1,    28,     3,     5,    55,
      47,    56,    59,    22,    -1,    -1,    -1,    28,    23,     3,
       5,    57,    47,    58,    59,    22,    -1,    -1,    -1,    21,
       3,     5,    60,    47,    61,    59,    -1,    -1,    21,     8,
       3,    62,    59,    -1,    -1,    -1,    21,     8,     3,     5,
      63,    47,    64,    59,    -1,    -1,    21,     3,    19,     4,
      20,    65,    59,    -1,    -1,    -1,    21,    23,     3,     5,
      66,    47,    67,    59,    -1,    -1,    21,     3,    68,    59,
      -1,    -1,    21,     3,    19,    47,    20,    69,    59,    -1,
      -1,    -1,    17,    71,    39,    18,    -1,    27,    15,     3,
      16,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    43,    48,    49,    50,    51,    53,
      53,    60,    63,    64,    67,    69,    70,    71,    72,    73,
      74,    75,    77,    77,    82,    82,    89,    91,    94,    91,
     104,   109,   115,   121,   131,   136,   141,   146,   151,   152,
     157,   162,   167,   172,   178,   187,   192,   203,   203,   206,
     206,   210,   210,   214,   217,   214,   222,   224,   222,   229,
     231,   229,   236,   238,   236,   243,   243,   247,   250,   247,
     255,   255,   259,   261,   259,   266,   266,   269,   269,   272,
     274,   274,   279
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
  "tWHILE", "tPRT", "tINT", "tERROR", "$accept", "Input", "FunctionCall",
  "Arguments", "ArgumentsNext", "Function", "@1", "Params", "ParamsNext",
  "Content", "If", "@2", "IfNext", "@3", "While", "@4", "@5", "Arithm",
  "Affectation", "Declarations", "@6", "@7", "@8", "@9", "@10", "@11",
  "@12", "@13", "@14", "DeclarationsNext", "@15", "@16", "@17", "@18",
  "@19", "@20", "@21", "@22", "@23", "@24", "Body", "@25", "Print", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    31,    32,    33,    33,    34,    34,    36,
      35,    37,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    39,    41,    40,    43,    42,    42,    45,    46,    44,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    48,    50,    49,    51,
      49,    52,    49,    53,    54,    49,    55,    56,    49,    57,
      58,    49,    60,    61,    59,    62,    59,    63,    64,    59,
      65,    59,    66,    67,    59,    68,    59,    69,    59,    59,
      71,    70,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     2,     0,     3,     0,     0,
       7,     3,     0,     4,     0,     2,     2,     2,     2,     2,
       2,     0,     0,     7,     0,     3,     0,     0,     0,     7,
       1,     1,     2,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     5,     7,     0,     5,     0,
       6,     0,     8,     0,     0,     9,     0,     0,     8,     0,
       0,     9,     0,     0,     7,     0,     5,     0,     0,     8,
       0,     7,     0,     0,     8,     0,     4,     0,     7,     0,
       0,     4,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,     0,     1,     2,    12,     0,     0,
      14,     9,     0,    11,     0,     0,    80,    10,    14,    21,
      13,     0,     0,     0,    27,     0,     0,    21,     0,    21,
      21,    21,    21,    21,     0,     6,     0,     0,     0,     0,
       0,    47,     0,     0,    19,    81,    15,    16,    18,    17,
      20,    31,    30,     0,     0,     0,     0,     8,     0,     0,
      22,     0,     0,    56,     0,    79,    49,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,     5,     0,     0,     0,    28,     0,     0,
       0,     0,     0,    53,    79,    59,     0,    38,    34,    35,
      36,    37,    42,    43,    40,    41,    39,     4,     8,     0,
      45,     0,     0,    82,    57,    51,    75,     0,     0,    48,
       0,     0,     0,    33,     7,     0,    26,     0,    79,    79,
      62,     0,    79,    65,     0,    54,    50,    60,    46,    24,
      23,    29,     0,     0,     0,    30,     0,    76,    67,    79,
      72,    79,    79,     0,    58,    52,    63,    70,    77,     0,
      66,     0,     0,     0,    25,    79,    79,    79,    68,    73,
      55,    61,    64,    71,    78,    79,    79,    69,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    27,    56,    83,     3,    14,     9,    13,    28,
      29,    86,   140,   153,    30,    39,   112,    55,    31,    32,
      65,    94,   129,   120,   151,    89,   128,   122,   152,    92,
     144,   165,   149,   159,   175,   166,   161,   176,   132,   167,
      17,    19,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
     -23,    10,    14,   -23,     3,  -106,  -106,    -5,    61,    51,
      52,  -106,    37,  -106,    53,    69,  -106,  -106,    52,     1,
    -106,    16,    72,    63,  -106,    64,     7,     1,    62,     1,
       1,     1,     1,     1,    73,    73,    73,    81,    73,    74,
      87,    -3,    88,    92,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,    75,  -106,   103,    73,    49,    94,   125,   141,    73,
     205,    73,    95,  -106,   104,    86,   107,   118,    73,  -106,
     194,    73,    73,    73,    73,    73,    73,    73,    73,    73,
    -106,   105,    73,  -106,   120,    91,   112,   205,   119,    73,
     109,     9,   121,  -106,    86,  -106,   156,  -106,    -1,    -1,
    -106,  -106,   214,   214,    44,    44,    44,  -106,   125,    73,
    -106,    53,   124,  -106,   205,  -106,    15,   139,   142,  -106,
      73,   122,    73,  -106,  -106,   108,   131,    53,    86,    86,
    -106,   184,    86,   152,   153,   205,  -106,   205,  -106,  -106,
    -106,  -106,   137,   138,    73,   151,   171,  -106,  -106,    86,
    -106,    86,    86,    53,  -106,  -106,   205,  -106,  -106,    73,
    -106,    73,   150,   164,  -106,    86,    86,    86,   205,   205,
    -106,  -106,  -106,  -106,  -106,    86,    86,  -106,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,   170,  -106,  -106,    66,  -106,  -106,  -106,   157,   202,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,   -35,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   -83,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -105,  -106,  -106
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      57,    58,    63,    60,    21,     1,   126,    73,    74,    22,
      41,   121,   116,     4,     5,    42,    64,   117,     7,    70,
     130,    34,   141,     8,    85,    23,    87,    24,    25,    26,
      43,    35,   118,    96,   131,    36,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   142,   143,   108,   164,   147,
      71,    72,    73,    74,   114,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    10,    15,   160,    11,   162,   163,
      16,    80,    18,    12,   125,    37,    51,    52,    38,    40,
      45,    53,   172,   173,   174,   135,    59,   137,    54,    61,
      62,    66,   177,   178,    68,    67,   146,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    69,    91,    90,   156,
      81,    88,    93,   110,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    95,   168,   109,   169,   107,   111,   115,
     138,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     127,   113,   133,   119,   136,   134,    82,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   139,   148,   150,   154,
     155,    84,    71,    72,    73,    74,    75,    76,    77,    78,
      79,   157,   170,     6,   124,    20,   123,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   171,    51,   145,     0,
       0,   158,    53,     0,     0,     0,     0,     0,     0,    54,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      97,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      71,    72,    73,    74,     0,     0,    77,    78,    79,    44,
       0,    46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
      35,    36,     5,    38,     3,    28,   111,     8,     9,     8,
       3,    94,     3,     3,     0,     8,    19,     8,    15,    54,
       5,     5,   127,    28,    59,    24,    61,    26,    27,    28,
      23,    15,    23,    68,    19,    19,    71,    72,    73,    74,
      75,    76,    77,    78,    79,   128,   129,    82,   153,   132,
       6,     7,     8,     9,    89,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     3,    28,   149,    16,   151,   152,
      17,    22,     3,    21,   109,     3,     3,     4,    15,    15,
      18,     8,   165,   166,   167,   120,     5,   122,    15,    15,
       3,     3,   175,   176,    19,     3,   131,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     3,    21,     4,   144,
      16,    16,     5,    22,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     5,   159,     5,   161,    22,    16,    20,
      22,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      16,    22,     3,    22,    22,     3,    21,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    25,     5,     5,    22,
      22,    20,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    20,    22,     3,   108,    18,    20,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    22,     3,     4,    -1,
      -1,    20,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    27,
      -1,    29,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    31,    35,     3,     0,    31,    15,    28,    37,
       3,    16,    21,    38,    36,    28,    17,    70,     3,    71,
      38,     3,     8,    24,    26,    27,    28,    32,    39,    40,
      44,    48,    49,    72,     5,    15,    19,     3,    15,    45,
      15,     3,     8,    23,    39,    18,    39,    39,    39,    39,
      39,     3,     4,     8,    15,    47,    33,    47,    47,     5,
      47,    15,     3,     5,    19,    50,     3,     3,    19,     3,
      47,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      22,    16,    21,    34,    20,    47,    41,    47,    16,    55,
       4,    21,    59,     5,    51,     5,    47,    16,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    22,    47,     5,
      22,    16,    46,    22,    47,    20,     3,     8,    23,    22,
      53,    59,    57,    20,    34,    47,    70,    16,    56,    52,
       5,    19,    68,     3,     3,    47,    22,    47,    22,    25,
      42,    70,    59,    59,    60,     4,    47,    59,     5,    62,
       5,    54,    58,    43,    22,    22,    47,    20,    20,    63,
      59,    66,    59,    59,    70,    61,    65,    69,    47,    47,
      22,    22,    59,    59,    59,    64,    67,    59,    59
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
                        assembly_manager->write_fun_assembly("%s:", (yyvsp[(2) - (5)].var));
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
                        symbols_table->add_variable((yyvsp[(2) - (3)].var), 0, 0);
                      ;}
    break;

  case 13:
#line 64 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(3) - (4)].var), 0, 0);
                      ;}
    break;

  case 22:
#line 77 "sources/gram.y"
    {
                        int l = labels_table->add_label();
                        assembly_manager->write_assembly("JMF %d %d", (yyvsp[(3) - (3)].nb), l);
                      ;}
    break;

  case 24:
#line 82 "sources/gram.y"
    {
                        labels_table->update_label(assembly_manager->cpt+1);
                        int l = labels_table->add_label();
                        assembly_manager->write_assembly("JMP %d", l);
                      ;}
    break;

  case 25:
#line 86 "sources/gram.y"
    {
                        labels_table->update_label(assembly_manager->cpt);
                      ;}
    break;

  case 26:
#line 89 "sources/gram.y"
    {labels_table->update_label(assembly_manager->cpt);;}
    break;

  case 27:
#line 91 "sources/gram.y"
    {
                        labels_table->add_label_while();
                        labels_table->update_label(assembly_manager->cpt);
                      ;}
    break;

  case 28:
#line 94 "sources/gram.y"
    {
                        int k = labels_table->add_label();
                        assembly_manager->write_assembly("JMF %d %d", (yyvsp[(4) - (4)].nb), k);
                      ;}
    break;

  case 29:
#line 98 "sources/gram.y"
    {
                        int l = labels_table->disabled_last_while();
                        assembly_manager->write_assembly("JMP %d", l);
                        labels_table->update_label(assembly_manager->cpt);
                      ;}
    break;

  case 30:
#line 104 "sources/gram.y"
    {
                        int n = symbols_table->add_tmp_variable();
                        assembly_manager->write_assembly("AFC %d %d", n, (yyvsp[(1) - (1)].nb));
                        (yyval.nb) = n;
                      ;}
    break;

  case 31:
#line 109 "sources/gram.y"
    {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol((yyvsp[(1) - (1)].var));
                        assembly_manager->write_assembly("COP %d %d", n, m);
                        (yyval.nb) = n;
                      ;}
    break;

  case 32:
#line 115 "sources/gram.y"
    {
                        int n = symbols_table->add_tmp_variable();
                        int m = symbols_table->get_addr_symbol((yyvsp[(2) - (2)].var));
                        assembly_manager->write_assembly("COPA %d %d", n, m);
                        (yyval.nb) = n;
                      ;}
    break;

  case 33:
#line 121 "sources/gram.y"
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

  case 34:
#line 131 "sources/gram.y"
    {
                        assembly_manager->write_assembly("ADD %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 35:
#line 136 "sources/gram.y"
    {
                        assembly_manager->write_assembly("SOU %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 36:
#line 141 "sources/gram.y"
    {
                        assembly_manager->write_assembly("MUL %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 37:
#line 146 "sources/gram.y"
    {
                        assembly_manager->write_assembly("DIV %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 38:
#line 151 "sources/gram.y"
    { (yyval.nb) = (yyvsp[(2) - (3)].nb); ;}
    break;

  case 39:
#line 152 "sources/gram.y"
    {
                        assembly_manager->write_assembly("EQU %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 40:
#line 157 "sources/gram.y"
    {
                        assembly_manager->write_assembly("SUP %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 41:
#line 162 "sources/gram.y"
    {
                        assembly_manager->write_assembly("INF %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 42:
#line 167 "sources/gram.y"
    {
                        assembly_manager->write_assembly("AND %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 43:
#line 172 "sources/gram.y"
    {
                        assembly_manager->write_assembly("OR %d %d %d", (yyvsp[(1) - (3)].nb), (yyvsp[(1) - (3)].nb), (yyvsp[(3) - (3)].nb));
                        symbols_table->remove_tmp_variable();
                        (yyval.nb) = (yyvsp[(1) - (3)].nb);
                      ;}
    break;

  case 44:
#line 178 "sources/gram.y"
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

  case 45:
#line 187 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(2) - (5)].var));
                        assembly_manager->write_assembly("COPB %d %d", n, (yyvsp[(4) - (5)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 46:
#line 192 "sources/gram.y"
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

  case 47:
#line 203 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (2)].var), 0, 0);
                      ;}
    break;

  case 49:
#line 206 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (3)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 51:
#line 210 "sources/gram.y"
    {
                        int n = symbols_table->add_array((yyvsp[(2) - (5)].var), (yyvsp[(4) - (5)].nb));
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 53:
#line 214 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (4)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 54:
#line 217 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (6)].var));
                        assembly_manager->write_assembly("COPB %d %d", n, (yyvsp[(6) - (6)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 56:
#line 222 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (3)].var), 1, 0);
                      ;}
    break;

  case 57:
#line 224 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(2) - (5)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(5) - (5)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 59:
#line 229 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(3) - (4)].var), 1, 1);
                      ;}
    break;

  case 60:
#line 231 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (6)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(6) - (6)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 62:
#line 236 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (3)].var), 1, 0);
                      ;}
    break;

  case 63:
#line 238 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(2) - (5)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(5) - (5)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 65:
#line 243 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (3)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 67:
#line 247 "sources/gram.y"
    {
                        int n = symbols_table->add_pointer((yyvsp[(3) - (4)].var), 0);
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 68:
#line 250 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (6)].var));
                        assembly_manager->write_assembly("COPB %d %d", n, (yyvsp[(6) - (6)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 70:
#line 255 "sources/gram.y"
    {
                        int n = symbols_table->add_array((yyvsp[(2) - (5)].var), (yyvsp[(4) - (5)].nb));
                        assembly_manager->write_assembly("AFC %d %d", n, n+1);
                      ;}
    break;

  case 72:
#line 259 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(3) - (4)].var), 1, 1);
                      ;}
    break;

  case 73:
#line 261 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (6)].var));
                        assembly_manager->write_assembly("COP %d %d", n, (yyvsp[(6) - (6)].nb));
                        symbols_table->remove_tmp_variable();
                      ;}
    break;

  case 75:
#line 266 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (2)].var), 0, 0);
                      ;}
    break;

  case 77:
#line 269 "sources/gram.y"
    {
                        symbols_table->add_variable((yyvsp[(2) - (5)].var), 0, 0);
                      ;}
    break;

  case 80:
#line 274 "sources/gram.y"
    {symbols_table->current_depth++;;}
    break;

  case 81:
#line 274 "sources/gram.y"
    {
                        symbols_table->remove_symbol();
                        symbols_table->current_depth--;
                      ;}
    break;

  case 82:
#line 279 "sources/gram.y"
    {
                        int n = symbols_table->get_addr_symbol((yyvsp[(3) - (5)].var));
                        assembly_manager->write_assembly("PRI %d", n);
                      ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1973 "gram.tab.c"
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


#line 283 "sources/gram.y"


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

