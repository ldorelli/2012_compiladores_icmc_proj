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
     IDENT = 258,
     OP_AT = 259,
     OP_DF = 260,
     OP_GE = 261,
     OP_LE = 262,
     OP_GR = 263,
     OP_LS = 264,
     OP_PL = 265,
     OP_MI = 266,
     OP_ML = 267,
     OP_DV = 268,
     OP_EQ = 269,
     SB_PV = 270,
     SB_PF = 271,
     SB_DP = 272,
     SB_VG = 273,
     SB_PO = 274,
     SB_PC = 275,
     ER_IDG = 276,
     ER_IFL = 277,
     ER_NMF = 278,
     ER_CIN = 279,
     ER_CNF = 280,
     NRO_INTEIRO = 281,
     NRO_REAL = 282,
     PROGRAM = 283,
     BEG = 284,
     END = 285,
     CONST = 286,
     VAR = 287,
     REAL = 288,
     INTEGER = 289,
     CHAR = 290,
     PROCEDURE = 291,
     IF = 292,
     ELSE = 293,
     READLN = 294,
     WRITELN = 295,
     REPEAT = 296,
     THEN = 297,
     UNTIL = 298,
     WHILE = 299,
     DO = 300,
     FUNCTION = 301
   };
#endif
/* Tokens.  */
#define IDENT 258
#define OP_AT 259
#define OP_DF 260
#define OP_GE 261
#define OP_LE 262
#define OP_GR 263
#define OP_LS 264
#define OP_PL 265
#define OP_MI 266
#define OP_ML 267
#define OP_DV 268
#define OP_EQ 269
#define SB_PV 270
#define SB_PF 271
#define SB_DP 272
#define SB_VG 273
#define SB_PO 274
#define SB_PC 275
#define ER_IDG 276
#define ER_IFL 277
#define ER_NMF 278
#define ER_CIN 279
#define ER_CNF 280
#define NRO_INTEIRO 281
#define NRO_REAL 282
#define PROGRAM 283
#define BEG 284
#define END 285
#define CONST 286
#define VAR 287
#define REAL 288
#define INTEGER 289
#define CHAR 290
#define PROCEDURE 291
#define IF 292
#define ELSE 293
#define READLN 294
#define WRITELN 295
#define REPEAT 296
#define THEN 297
#define UNTIL 298
#define WHILE 299
#define DO 300
#define FUNCTION 301




/* Copy the first part of user declarations.  */
#line 51 "syntax.yacc"
 
	#include "symbolTable.h"
	#define YYSTYPE  STable_Entry
	#include  "lex.yy.c"
	#include <string.h>

	char errv[100]; 
	int yydebug = 1;
	extern int yylineno;
	SymbolTable tables[10]; // ate 10 escopo
	int scope;

	/* Tamanho realista */
	/* Vai guardar coisas como lista de parametros ou variaveis */
	STable_Entry parameterList[400];
	int paramQty;
	/* Numero de parametros da lista de parametros que ja tem tipo definido */
	int definedParams;
	int validProcedure;
#line 71 "syntax.yacc"
 void yyerror(const char*); 

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 220 "y.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   263

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  247

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    11,    16,    22,    28,    32,    33,
      42,    47,    51,    52,    53,    54,    65,    70,    74,    75,
      76,    77,    78,    90,    96,   101,   102,   104,   107,   110,
     113,   116,   118,   121,   124,   127,   129,   132,   135,   137,
     141,   145,   146,   147,   153,   160,   164,   166,   169,   174,
     177,   179,   180,   187,   193,   196,   199,   204,   207,   208,
     209,   210,   219,   220,   221,   230,   236,   241,   248,   253,
     261,   268,   272,   273,   277,   281,   282,   287,   289,   294,
     298,   300,   301,   305,   308,   310,   312,   314,   316,   318,
     320,   323,   327,   329,   333,   336,   340,   341,   345,   346,
     347,   352,   355,   356,   358,   360,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   380
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    28,     3,    15,    49,    50,    16,
      -1,    28,     1,    50,    16,    -1,     1,    15,    94,    50,
      16,    -1,    51,    29,    69,    30,    94,    -1,    52,    54,
      57,    -1,    -1,    31,     3,    94,     4,    92,    15,    53,
      52,    -1,     1,    61,    94,    52,    -1,    31,     1,    52,
      -1,    -1,    -1,    -1,    32,    55,    86,    94,    17,    93,
      15,    94,    56,    54,    -1,     1,    62,    94,    54,    -1,
      32,     1,    54,    -1,    -1,    -1,    -1,    -1,    36,     3,
      58,    94,    64,    59,    15,    68,    94,    60,    57,    -1,
      36,     1,    68,    94,    57,    -1,     1,    63,    94,    57,
      -1,    -1,    15,    -1,    31,    95,    -1,    32,    95,    -1,
      36,    95,    -1,    29,    95,    -1,    15,    -1,    32,    95,
      -1,    36,    95,    -1,    29,    95,    -1,    15,    -1,    36,
      95,    -1,    29,    95,    -1,    30,    -1,    19,    65,    20,
      -1,    19,     1,    20,    -1,    -1,    -1,    86,    17,    93,
      66,    67,    -1,     1,    86,    17,    93,    94,    67,    -1,
       1,    67,    94,    -1,     1,    -1,    15,    65,    -1,     1,
      15,    94,    65,    -1,     1,    65,    -1,     1,    -1,    -1,
      54,    29,    94,    69,    30,    15,    -1,    54,    29,    94,
      69,    30,    -1,    54,     1,    -1,     1,    68,    -1,    70,
      15,    94,    69,    -1,     1,    69,    -1,    -1,    -1,    -1,
      39,    94,    19,    71,    86,    72,    20,    94,    -1,    -1,
      -1,    40,    73,    94,    19,    86,    74,    20,    94,    -1,
      29,    94,    69,    30,    94,    -1,     3,    94,     4,    81,
      -1,    41,    94,    69,    43,    94,    79,    -1,     3,    94,
      76,    94,    -1,    37,    94,    79,    42,    94,    70,    75,
      -1,    44,    94,    79,    45,    94,    70,    -1,    38,    94,
      70,    -1,    -1,    19,    77,    20,    -1,    19,     1,    20,
      -1,    -1,     3,    94,    78,    94,    -1,     1,    -1,    15,
      94,    77,    94,    -1,     1,    77,    94,    -1,     1,    -1,
      -1,    81,    80,    81,    -1,    81,     1,    -1,    14,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,
      82,    85,    -1,    89,    83,    84,    -1,    92,    -1,    19,
      81,    20,    -1,     3,    76,    -1,    91,    83,    84,    -1,
      -1,    90,    82,    85,    -1,    -1,    -1,     3,    87,    94,
      88,    -1,    18,    86,    -1,    -1,    10,    -1,    11,    -1,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,    27,
      -1,    26,    -1,    34,    -1,    33,    -1,    35,    -1,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    79,    89,    91,    96,   101,   107,   106,
     121,   123,   124,   131,   133,   129,   167,   169,   170,   178,
     211,   234,   175,   242,   244,   245,   250,   251,   252,   253,
     254,   259,   260,   261,   262,   267,   268,   269,   270,   275,
     277,   278,   286,   283,   295,   297,   299,   304,   306,   308,
     310,   311,   316,   318,   321,   323,   328,   330,   331,   337,
     343,   336,   386,   393,   385,   431,   434,   457,   458,   459,
     460,   465,   466,   471,   473,   474,   479,   481,   486,   488,
     490,   491,   496,   498,   503,   504,   505,   506,   507,   508,
     513,   523,   538,   539,   541,   546,   564,   569,   579,   584,
     584,   594,   595,   600,   601,   602,   607,   608,   613,   614,
     619,   620,   625,   626,   627,   632,   637
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"identificador\"", "\":=\"", "\"<>\"",
  "\">=\"", "\"<=\"", "\">\"", "\"<\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\"=\"", "\";\"", "\".\"", "\":\"", "SB_VG", "\"(\"", "\")\"",
  "\"Identificador_muito_grande\"", "\"Inteiro_fora_dos_limites\"",
  "\"Numero_mal_formado\"", "\"Caracter_nao_identificado\"",
  "\"Comentario_nao_fechado\"", "\"numero_inteiro\"", "\"numero_real\"",
  "\"program\"", "\"begin\"", "\"end\"", "\"const\"", "\"var\"",
  "\"real\"", "\"integer\"", "\"char\"", "\"procedure\"", "\"if\"",
  "\"else\"", "\"readln\"", "\"writeln\"", "\"repeat\"", "\"then\"",
  "\"until\"", "\"while\"", "\"do\"", "\"function\"", "$accept", "program",
  "@1", "corpo", "dc", "dc_c", "@2", "dc_v", "@3", "@4", "dc_p", "@5",
  "@6", "@7", "err_c", "err_v", "err_p", "parametros", "lista_par", "@8",
  "mais_par", "corpo_p", "comandos", "cmd", "@9", "@10", "@11", "@12",
  "pfalsa", "lista_arg", "argumentos", "mais_ident", "condicao", "relacao",
  "expressao", "termo", "fator", "mais_fatores", "outros_termos",
  "variaveis", "@13", "mais_var", "op_un", "op_ad", "op_mul", "numero",
  "tipo_var", "ok", "less", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    49,    48,    48,    48,    50,    51,    53,    52,
      52,    52,    52,    55,    56,    54,    54,    54,    54,    58,
      59,    60,    57,    57,    57,    57,    61,    61,    61,    61,
      61,    62,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    64,    66,    65,    65,    65,    65,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    69,    69,    69,    71,
      72,    70,    73,    74,    70,    70,    70,    70,    70,    70,
      70,    75,    75,    76,    76,    76,    77,    77,    78,    78,
      78,    78,    79,    79,    80,    80,    80,    80,    80,    80,
      81,    82,    83,    83,    83,    84,    84,    85,    85,    87,
      86,    88,    88,    89,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    94,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     4,     5,     5,     3,     0,     8,
       4,     3,     0,     0,     0,    10,     4,     3,     0,     0,
       0,     0,    11,     5,     4,     0,     1,     2,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     2,     1,     3,
       3,     0,     0,     5,     6,     3,     1,     2,     4,     2,
       1,     0,     6,     5,     2,     2,     4,     2,     0,     0,
       0,     8,     0,     0,     8,     5,     4,     6,     4,     7,
       6,     3,     0,     3,     3,     0,     4,     1,     4,     3,
       1,     0,     3,     2,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     2,     3,     0,     3,     0,     0,
       4,     2,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   115,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     2,     0,    26,   116,   116,   116,
     116,   115,     0,   115,     4,     0,     0,     0,     0,     0,
       5,    30,    27,    28,    29,     0,    11,     0,     0,   115,
     115,   115,   115,    62,   115,   115,     0,     0,    31,   116,
     116,   116,   115,     0,     0,     0,     0,     7,     0,    10,
       0,    57,    75,     0,   105,     0,   115,     0,   105,   115,
     115,    34,    32,    33,     0,    17,    99,   115,    35,   116,
      38,   116,   115,     0,    19,     3,   111,   110,     0,   105,
       0,   115,     0,   103,   104,     0,     0,    98,     0,    59,
       0,     0,     0,     6,     0,    16,   115,     0,    37,    36,
       0,     0,     0,   115,   115,     8,    66,     0,   115,     0,
      68,   115,   115,    83,    85,    86,    87,    88,    89,    84,
     105,   106,   107,    90,   105,    75,   105,    96,    92,     0,
       0,   115,   115,    56,   102,     0,    24,     0,    55,    54,
     115,     0,    41,     0,    74,     0,    73,    65,     0,    82,
      98,    94,     0,   108,   109,    91,     0,    60,    63,   105,
       0,     0,   100,   113,   112,   114,     0,     0,    23,     0,
      20,     9,     0,   115,   115,    72,    97,    93,    96,     0,
       0,    67,    70,   101,   115,     0,     0,     0,     0,     0,
      77,   115,     0,    76,   115,    69,    95,   115,   115,    14,
      53,     0,     0,    40,   115,     0,    39,     0,     0,    79,
     115,     0,    61,    64,     0,    52,     0,   115,    49,    47,
      45,     0,    42,   115,    78,    71,    15,     0,   115,     0,
      21,    48,     0,    43,     0,    44,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    29,    11,    12,    13,   153,   112,    54,   224,
      57,   114,   199,   244,    21,    52,    82,   180,   197,   239,
     214,   113,    46,    47,   139,   189,    66,   190,   205,    91,
     119,   184,    95,   130,    96,    97,   137,   165,   133,   198,
     106,   172,    98,   134,   166,   138,   176,     8,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -185
static const yytype_int16 yypact[] =
{
      13,    40,    37,    22,  -185,    52,    45,  -185,    52,    67,
     175,    55,    66,   135,  -185,    91,  -185,  -185,  -185,  -185,
    -185,  -185,    52,  -185,  -185,    86,   159,   178,    33,    52,
    -185,  -185,  -185,  -185,  -185,    52,  -185,   107,    36,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,    94,   130,  -185,  -185,
    -185,  -185,  -185,   135,   163,   103,   197,  -185,   181,  -185,
     184,  -185,   115,    86,   222,   150,  -185,   109,   222,  -185,
    -185,  -185,  -185,  -185,   135,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,    85,  -185,  -185,  -185,  -185,   160,   222,
     204,  -185,   172,  -185,  -185,   174,   217,   224,    32,  -185,
     220,   198,   191,  -185,    36,  -185,  -185,   223,  -185,  -185,
      33,   136,     7,  -185,  -185,  -185,  -185,   228,  -185,   229,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
     222,  -185,  -185,  -185,   222,   231,   222,   225,  -185,   163,
     163,  -185,  -185,  -185,   233,   124,  -185,   153,  -185,  -185,
    -185,    33,   234,    52,  -185,   140,  -185,  -185,    65,  -185,
     224,  -185,   232,  -185,  -185,  -185,    32,  -185,  -185,   222,
      65,   163,  -185,  -185,  -185,  -185,   230,    86,  -185,   218,
    -185,  -185,   141,  -185,  -185,   205,  -185,  -185,   225,   235,
     236,  -185,  -185,  -185,  -185,   212,   189,   237,   241,   239,
    -185,  -185,   226,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
     244,   193,   227,  -185,  -185,   243,  -185,   124,    85,  -185,
    -185,    65,  -185,  -185,   135,  -185,   200,  -185,  -185,  -185,
    -185,   124,  -185,  -185,  -185,  -185,  -185,   227,  -185,   169,
    -185,  -185,   169,  -185,    33,  -185,  -185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,    17,  -185,   -18,  -185,   -10,  -185,  -185,
    -101,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -183,  -185,
    -111,  -105,   -37,  -143,  -185,  -185,  -185,  -185,  -185,   111,
    -150,  -185,   -61,  -185,   -73,   110,    81,    73,   102,   -49,
    -185,  -185,  -185,  -185,  -185,   203,  -184,   -21,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -117
static const yytype_int16 yytable[] =
{
      35,    61,    37,    28,    36,    77,   148,   102,   149,   146,
      31,    32,    33,    34,     1,   185,   116,    59,    62,    63,
      64,    65,     7,    67,    68,    15,    92,   192,   228,   229,
     101,    74,   201,   232,    55,   135,   150,    38,     5,    39,
       6,     2,    71,    75,    73,   100,    58,   238,   103,   104,
     178,   136,   220,     9,   241,     4,   107,   159,    86,    87,
      14,   110,   -25,   162,   105,    40,   -58,   143,    39,    56,
     120,    24,   108,    41,   109,    42,    43,    44,   235,   -58,
      45,   -12,    16,    10,   -12,   144,   111,    38,   -12,    39,
     167,   168,   151,   152,    40,    25,    17,   155,    18,    19,
     157,   158,    41,    20,    42,    43,    44,    30,   191,    45,
      38,    60,    39,   233,   -18,    40,   -58,    27,    78,    89,
     169,   170,   193,    41,    69,    42,    43,    44,   243,   177,
      45,   245,    79,    80,    90,   181,    26,   111,    40,    81,
     195,   182,   200,   246,   118,    70,    41,   215,    42,    43,
      44,    48,   -58,    45,    53,   183,   -13,   173,   174,   175,
     -81,   -80,   202,   203,   -18,    49,    76,    27,   147,    99,
     211,   -18,    51,   209,    48,   115,    22,   215,    23,    53,
     219,   -13,  -116,   221,   212,  -116,   222,   223,    49,   -51,
     211,    50,    76,   230,   226,    51,    76,    85,    83,   234,
      84,   211,   121,    76,   212,   117,   237,   118,   227,   213,
      86,    87,   240,   -50,   236,   212,   122,   242,   123,   196,
     -46,    76,   124,   125,   126,   127,   128,   200,   226,   118,
      76,   129,    93,    94,   131,   132,   142,   163,   164,   140,
     145,   141,   210,   204,   160,   194,   161,   188,   154,   156,
      90,   171,   187,   179,   218,   207,   208,   216,   217,   225,
     231,   206,   186,    88
};

static const yytype_uint8 yycheck[] =
{
      21,    38,    23,    13,    22,    54,   111,    68,     1,   110,
      17,    18,    19,    20,     1,   158,    89,    35,    39,    40,
      41,    42,     0,    44,    45,     8,    63,   170,   211,   212,
      67,    52,   182,   217,     1,     3,    29,     1,     1,     3,
       3,    28,    49,    53,    51,    66,    29,   231,    69,    70,
     151,    19,   202,     1,   237,    15,    77,   130,    26,    27,
      15,    82,    29,   136,    74,    29,    30,   104,     3,    36,
      91,    16,    79,    37,    81,    39,    40,    41,   221,    43,
      44,    29,    15,    31,    32,   106,     1,     1,    36,     3,
     139,   140,   113,   114,    29,    29,    29,   118,    31,    32,
     121,   122,    37,    36,    39,    40,    41,    16,   169,    44,
       1,     4,     3,   218,    29,    29,    30,    32,    15,     4,
     141,   142,   171,    37,    30,    39,    40,    41,   239,   150,
      44,   242,    29,    30,    19,   153,     1,     1,    29,    36,
     177,     1,     1,   244,     3,    15,    37,   196,    39,    40,
      41,    15,    43,    44,     1,    15,     3,    33,    34,    35,
      20,    20,   183,   184,    29,    29,     3,    32,    32,    19,
       1,    36,    36,   194,    15,    15,     1,   226,     3,     1,
     201,     3,    29,   204,    15,    32,   207,   208,    29,    20,
       1,    32,     3,   214,     1,    36,     3,    16,     1,   220,
       3,     1,    30,     3,    15,     1,   227,     3,    15,    20,
      26,    27,   233,    20,   224,    15,    42,   238,     1,     1,
      20,     3,     5,     6,     7,     8,     9,     1,     1,     3,
       3,    14,    10,    11,    10,    11,    45,    12,    13,    19,
      17,    43,    30,    38,   134,    15,   135,   166,    20,    20,
      19,    18,    20,    19,    15,    20,    20,    20,    17,    15,
      17,   188,   160,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    48,    15,     1,     3,     0,    94,     1,
      31,    50,    51,    52,    15,    50,    15,    29,    31,    32,
      36,    61,     1,     3,    16,    29,     1,    32,    54,    49,
      16,    95,    95,    95,    95,    94,    52,    94,     1,     3,
      29,    37,    39,    40,    41,    44,    69,    70,    15,    29,
      32,    36,    62,     1,    55,     1,    36,    57,    50,    52,
       4,    69,    94,    94,    94,    94,    73,    94,    94,    30,
      15,    95,    95,    95,    94,    54,     3,    86,    15,    29,
      30,    36,    63,     1,     3,    16,    26,    27,    92,     4,
      19,    76,    69,    10,    11,    79,    81,    82,    89,    19,
      94,    69,    79,    94,    94,    54,    87,    94,    95,    95,
      94,     1,    54,    68,    58,    15,    81,     1,     3,    77,
      94,    30,    42,     1,     5,     6,     7,     8,     9,    14,
      80,    10,    11,    85,    90,     3,    19,    83,    92,    71,
      19,    43,    45,    69,    94,    17,    57,    32,    68,     1,
      29,    94,    94,    53,    20,    94,    20,    94,    94,    81,
      82,    76,    81,    12,    13,    84,    91,    86,    86,    94,
      94,    18,    88,    33,    34,    35,    93,    94,    57,    19,
      64,    52,     1,    15,    78,    70,    85,    20,    83,    72,
      74,    79,    70,    86,    15,    69,     1,    65,    86,    59,
       1,    77,    94,    94,    38,    75,    84,    20,    20,    94,
      30,     1,    15,    20,    67,    86,    20,    17,    15,    94,
      77,    94,    94,    94,    56,    15,     1,    15,    65,    65,
      94,    17,    93,    68,    94,    70,    54,    94,    93,    66,
      94,    65,    94,    67,    60,    67,    57
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
        case 2:
#line 80 "syntax.yacc"
    {
			/* Adiciona o programa na tabela de simbolos */
			STable_Entry programEntry;
			programEntry.category = PROGRAM;
			strcpy(programEntry.name, (yyvsp[(2) - (3)]).name);
			symbolTable_add(&tables[scope], programEntry);
		}
    break;

  case 8:
#line 107 "syntax.yacc"
    {
			/* Adiciona constante na tabela de simbolos */
			STable_Entry constEntry;
			constEntry.category = CONST;
			constEntry.type = (yyvsp[(5) - (6)]).type;
			constEntry.ival = (yyvsp[(5) - (6)]).ival;
			constEntry.rval = (yyvsp[(5) - (6)]).rval;
			constEntry.line = yylineno;
			strcpy(constEntry.name, (yyvsp[(2) - (6)]).name);
			symbolTable_add(&tables[scope], constEntry);
		}
    break;

  case 13:
#line 131 "syntax.yacc"
    { paramQty = 0; definedParams = 0; }
    break;

  case 14:
#line 133 "syntax.yacc"
    {
			int i;
			/* Navega pelas variaveis declaradas */
			for(i = 0; i < paramQty; i++)			
			{
				STable_Entry * entry = 
					symbolTable_find(&tables[scope], parameterList[i].name);
				if(entry) {
					if(entry->category == VAR) {
						/* Se ja existe a variavel */
						fprintf(stderr, "Erro na linha %d: redeclaracao da variavel %s.\n"
							"\tDefinicao previa na linha %d.\n", 
							yylineno,
							parameterList[i].name, entry->line);
					} else if(entry->category == PROCEDURE) {
						fprintf(stderr, "Erro na linha %d: %s previamente definido como procedimento.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, parameterList[i].name, entry->line );
					} else if(entry->category == CONST) {
						fprintf(stderr, "Erro na linha %d: %s previamente definido como constante.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, parameterList[i].name, entry->line );
					}
				} else {
					/* Se nao existe ainda */
					parameterList[i].type = (yyvsp[(6) - (8)]).type;
					parameterList[i].category = VAR;
					parameterList[i].line = yylineno;
					symbolTable_add(&tables[scope], parameterList[i]);
				}
			}

		}
    break;

  case 19:
#line 178 "syntax.yacc"
    { 
			/* Zera a quantidade de parametros - sera calculada pela regra parametros */
			paramQty = 0;
			definedParams = 0;
			STable_Entry procEntry;
			procEntry.category = PROCEDURE;
			/* Copia o identificador para o nome da entrada da tabela */
			strcpy(procEntry.name, (yyvsp[(2) - (2)]).name);
			STable_Entry * entry;
			entry = symbolTable_find(&tables[scope], procEntry.name);
			validProcedure = 1;

			if(entry) {
				validProcedure = 0;
				if(entry->category == PROCEDURE) {
					fprintf(stderr, "Erro na linha %d: Redefinicao do procedimento %s.\n"
							"\tDefinicao previa na linha %d\n", 
							yylineno, entry->name, entry->line
						);
				} else if(entry->category == VAR) {
					fprintf(stderr, "Erro na linha %d: %s previamente definido como variavel.\n"
							"\tDefinicao previa na linha %d.\n", 
							yylineno, entry->name, entry->line
						);
				} else if(entry->category == PROGRAM) {
					fprintf(stderr, "Erro na linha %d: %s previamente definido como nome do programa.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, entry->name, entry->line );
				}
			} else symbolTable_add(&tables[scope], procEntry);
		}
    break;

  case 20:
#line 211 "syntax.yacc"
    {
			int i;
			/* Adiciona os parametros na tabela de simbolos do escopo global -
				que contem todos os procedimentos */
			if(validProcedure) {
				for(i = 0; i < paramQty; i++) { 
					int x = symbolTable_addParameter(&tables[0], (yyvsp[(2) - (5)]).name, parameterList[i]);
					if(x < 0) {
						fprintf(stderr,
							"Erro na linha %d: parametro %s redefinido. \n" 
								"\tPreviamente definido como parametro %d.\n", 
							yylineno, parameterList[i].name, 
							- x - 1);
					}
				}
			}
			/* Aumenta um escopo - para as variaveis locais */
			scope++;
			symbolTable_init(&tables[scope], 0);
		}
    break;

  case 21:
#line 234 "syntax.yacc"
    {
			/* Saiu do procedimento */
			symbolTable_erase(&tables[scope], &tables[scope]);
			scope--;

		}
    break;

  case 42:
#line 286 "syntax.yacc"
    {
			int i;
			/* Altera o tipo dos parametros até agora */
			for(i = definedParams; i < paramQty; i++) 
				parameterList[i].type = (yyvsp[(3) - (3)]).type;
			definedParams = paramQty;
		}
    break;

  case 53:
#line 318 "syntax.yacc"
    { 
			sprintf(errv, "syntax error, unexpected %s, expecting ;", yytext); yyerror (errv); yyerrok; }
    break;

  case 59:
#line 337 "syntax.yacc"
    { 
			/* Prepara os parametros */
			paramQty = 0;
			definedParams = 0;
		}
    break;

  case 60:
#line 343 "syntax.yacc"
    {
			int type = -1;
			int badTypes = 0, i, cscope;
			STable_Entry * entry = 0;

			for(i = 0; i < paramQty; i++) {
				int found = 0;
				entry = 0;
				/* Procura para ver se a variavel sendo impressa existe */
				for(cscope = 0; !entry && cscope <= scope; cscope++) {
					entry = symbolTable_find(&tables[cscope], parameterList[i].name);
				}
				/* Variavel usada no readln nao existe */
				if(!entry) {
					printf("Erro na linha %d: Variavel %s usada e nao declarada.\n", yylineno, entry->name);
				} else {
					/* Se as variaveis sao identificadores de programa ou procedure */
					if(entry->category == CONST) {
						fprintf(stderr,
							"Erro na linha %d: Constante %s usada em leitura.\n", yylineno, entry->name);
					} else if(entry->category == PROCEDURE) {
						fprintf(stderr,
							"Erro na linha %d: Procedimento %s usada em leitura.\n", yylineno, entry->name);
					} else if(entry->category == PROGRAM) {
						fprintf(stderr,
							"Erro na linha %d: Nome do programa usada em leitura.\n", yylineno);
					} else if(type == -1) type = entry->type;
					else if(entry->type != type) badTypes = 1;
				}
			}
			if(badTypes) 
			{
				/* Tipos diferentes (se nao houve algum erro anterior) */
				fprintf(stderr,
					"Erro na linha %d: tipos diferentes no comando readln.\n", 
					yylineno);
			}
		}
    break;

  case 62:
#line 386 "syntax.yacc"
    {
			paramQty = 0;
			definedParams = 0;
		}
    break;

  case 63:
#line 393 "syntax.yacc"
    {
			int type = -1;
			int badTypes = 0, i, cscope;
			STable_Entry * entry = 0;

			for(i = 0; i < paramQty; i++) {
				int found = 0;
				entry = 0;
				/* Procura para ver se a variavel sendo impressa existe */
				for(cscope = 0; !entry && cscope <= scope; cscope++) {
					entry = symbolTable_find(&tables[cscope], parameterList[i].name);
				}
				/* Variavel usada no readln nao existe */
				if(!entry) {
					fprintf(stderr,
						"Erro na linha %d: Variavel %s usada e nao declarada.\n", yylineno, entry->name);
				} else {
					/* Se as variaveis sao identificadores de programa ou procedure */
					if(entry->category == PROCEDURE) {
						fprintf(stderr, 
							"Erro na linha %d: Procedimento %s usada em escrita.\n", yylineno, entry->name);
					} else if(entry->category == PROGRAM) {
						fprintf(stderr,
							"Erro na linha %d: Nome do programa usada em escrita.\n", yylineno);
					} else if(type == -1) type = entry->type;
					else if(entry->type != type) badTypes = 1;
				}
			}
			if(badTypes) 
			{
				/* Tipos diferentes (se nao houve algum erro anterior) */
				printf("Erro na linha %d: tipos diferentes no comando writeln.\n", 
					yylineno);
			}
		}
    break;

  case 66:
#line 435 "syntax.yacc"
    {
			STable_Entry * entry = 0;

			/* Procura em todos os escopos aceitaveis */
			int cscope = 0;
			for(cscope = 0; !entry && cscope <= scope; cscope++) 
			 	entry = symbolTable_find(&tables[cscope], (yyvsp[(1) - (4)]).name);

			 if(!entry) 
			 {
			 	/* Variavel nao declarada */
			 	fprintf(stderr, "Erro na linha %d: Variavel %s nao declarada.\n", 
			 		yylineno, (yyvsp[(1) - (4)]).name);
			 } else {
			 	/* Erro de atribuicao */
			 	if(entry->type == INTEGER && (yyvsp[(4) - (4)]).type == REAL) {
			 		fprintf(stderr, "Erro na linha %d: Atribuicao de real a inteiro.\n", 
			 			yylineno, (yyvsp[(1) - (4)]).name);
			 	}
			 }
		}
    break;

  case 90:
#line 514 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).type == REAL || (yyvsp[(2) - (2)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(1) - (2)]).type == ERROR || (yyvsp[(2) - (2)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 91:
#line 524 "syntax.yacc"
    {
			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if((yyvsp[(2) - (3)]).type == REAL || (yyvsp[(3) - (3)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(2) - (3)]).type == ERROR || (yyvsp[(3) - (3)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 92:
#line 538 "syntax.yacc"
    { (yyval).type = (yyvsp[(1) - (1)]).type; }
    break;

  case 95:
#line 547 "syntax.yacc"
    {
			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if((yyvsp[(1) - (3)]).category == OP_DV) {
				if((yyvsp[(2) - (3)]).type != INTEGER || (yyvsp[(3) - (3)]).type != INTEGER) 
				{
					fprintf(stderr, "Erro na linha %d: Divisao de numeros nao inteiros.\n", 
						yylineno);
				}
			}

			if((yyvsp[(2) - (3)]).type == REAL || (yyvsp[(3) - (3)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(2) - (3)]).type == ERROR || (yyvsp[(3) - (3)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 97:
#line 570 "syntax.yacc"
    {
			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if((yyvsp[(2) - (3)]).type == REAL || (yyvsp[(3) - (3)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(2) - (3)]).type == ERROR || (yyvsp[(3) - (3)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 99:
#line 584 "syntax.yacc"
    { 
			/* Adiciona a lista de parametros */
			(yyvsp[(1) - (1)]).category = VAR;
			parameterList[paramQty++] = (yyvsp[(1) - (1)]); 
		}
    break;

  case 115:
#line 632 "syntax.yacc"
    { yyerrok; }
    break;

  case 116:
#line 637 "syntax.yacc"
    { yyless(0); }
    break;


/* Line 1267 of yacc.c.  */
#line 1994 "y.tab.c"
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


#line 639 "syntax.yacc"



void yyerror(const char *s) {
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	char esperado[50], obtido[50], *pos;
	int n = 0, len;
	/* Pega os tokens esperado e obtido */
	sscanf(s, "syntax error, unexpected %[^,], expecting%s%n", obtido, esperado, &n);
	if(strcmp(obtido, "$end") == 0) { /*Fim de arquivo eh representado por $end*/
		printf("Final inesperado de arquivo.\n");
	} else {
		if(n) {
			if (!strcmp (obtido, "Comentario_nao_fechado")) {
				printf ("Erro na linha %d: '%s'\n", yylineno, obtido);
			} else {
				if (!strcmp (obtido, "SB_VG"))	strcpy (obtido, ",");
				/*Mostra a linha do erro e o simbolo obtido*/
				printf("Erro na linha %d: '%s' inesperado", yylineno, obtido);
				/*Mostra a cadeia caso seja um erro lexico ou um identificador*/
				if (!strcmp (obtido, "identificador")
					|| obtido[0] >= 'A' && obtido[0] <= 'Z')	printf (" [%s]", yytext);
				/*Renomeia '$end' para 'Fim_de_arquivo'*/
				if (!strcmp (esperado, "$end"))	strcpy (esperado, "Fim_de_arquivo");
				/*Mostra o(s) simbolo(s) esperado(s)*/
				printf (", esperava '%s'",esperado);
				pos = (char*)s+n;
				len = strlen (s);
				/*Mostra todos, caso haja mais de um*/
				while (pos < s+len) {
					sscanf (pos, " or %s%n", esperado, &n);
					pos += n;
					printf (" ou '%s'", esperado);
				}
				printf ("\n");
			}
		} else
				/*Se nao estava esperando nenhum simbolo*/
				printf("Erro na linha %d: '%s' inesperado.\n", yylineno, obtido);
	}
}

int main(int argc, char **argv )
{
	scope = 0;

	int i;

	for(i = 0; i < 10; i++) {
	 	symbolTable_init(&tables[i], NULL);
	}

	/*Inicializa a trie*/
	initializeTrie(&pr);
	/*Insere as palavras reservadas na trie*/
	insert(&pr, "program", "program", PROGRAM);
	insert(&pr, "begin", "begin", BEG);
	insert(&pr, "end", "end", END);
	insert(&pr, "const", "const", CONST);
	insert(&pr, "var", "var", VAR);
	insert(&pr, "real", "real", REAL);
	insert(&pr, "integer", "integer", INTEGER);
	insert(&pr, "char", "char", CHAR);
	insert(&pr, "procedure", "procedure", PROCEDURE);
	insert(&pr, "if", "if", IF);
	insert(&pr, "else", "else", ELSE);
	insert(&pr, "readln", "readln", READLN);
	insert(&pr, "writeln", "writeln", WRITELN);
	insert(&pr, "repeat", "repeat", REPEAT);
	insert(&pr, "then", "then", THEN);
	insert(&pr, "until", "until", UNTIL);
	insert(&pr, "while", "while", WHILE);
	insert(&pr, "do", "do", DO);
	insert(&pr, "function", "function", FUNCTION);
	
	++argv, --argc;  /*Ignora o nome do programa*/
	/*Se for dado um arquivo como entrada, le do arquivo*/
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	/*Caso contrario, le da entrada padrao*/
	else
		yyin = stdin;
	/*Processa*/
	yyparse();
	return 0;
}


