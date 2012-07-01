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
	#include "commands.h"

	/* Código */
	int code[50000][2];
	int codeLine;
	int usedAddress;
	int procedureCount ;
	int generateCode;
	int mainLine;

	char errv[100]; 
	int yydebug = 1;
	extern int yylineno;
	
	SymbolTable tables[10]; // ate 10 escopo
	int variablesPerScope[10];
	int scope;
	
	FILE * file;	

	/* Tamanho realista */
	/* Vai guardar coisas como lista de parametros ou variaveis */
	STable_Entry parameterList[400];
	int paramQty;
	/* Numero de parametros da lista de parametros que ja tem tipo definido */
	int definedParams;
	int validProcedure;
#line 84 "syntax.yacc"
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
#line 233 "y.tab.c"

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
#define YYLAST   264

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  256

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
       0,     0,     3,     4,    11,    16,    22,    23,    30,    34,
      35,    44,    49,    53,    54,    55,    56,    67,    72,    76,
      77,    78,    79,    80,    92,    98,   103,   104,   106,   109,
     112,   115,   118,   120,   123,   126,   129,   131,   134,   137,
     139,   143,   147,   148,   149,   155,   162,   166,   168,   171,
     176,   179,   181,   182,   189,   195,   198,   201,   206,   209,
     210,   211,   212,   221,   222,   223,   232,   238,   243,   250,
     251,   252,   259,   267,   274,   278,   279,   283,   287,   288,
     289,   295,   297,   302,   306,   308,   309,   313,   316,   318,
     320,   322,   324,   326,   328,   331,   332,   337,   339,   343,
     344,   348,   349,   354,   355,   356,   361,   362,   363,   368,
     371,   372,   374,   376,   377,   379,   381,   383,   385,   387,
     389,   391,   393,   395,   396
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    28,     3,    15,    49,    50,    16,
      -1,    28,     1,    50,    16,    -1,     1,    15,   102,    50,
      16,    -1,    -1,    52,    29,    51,    70,    30,   102,    -1,
      53,    55,    58,    -1,    -1,    31,     3,   102,     4,   100,
      15,    54,    53,    -1,     1,    62,   102,    53,    -1,    31,
       1,    53,    -1,    -1,    -1,    -1,    32,    56,    94,   102,
      17,   101,    15,   102,    57,    55,    -1,     1,    63,   102,
      55,    -1,    32,     1,    55,    -1,    -1,    -1,    -1,    -1,
      36,     3,    59,   102,    65,    60,    15,    69,   102,    61,
      58,    -1,    36,     1,    69,   102,    58,    -1,     1,    64,
     102,    58,    -1,    -1,    15,    -1,    31,   103,    -1,    32,
     103,    -1,    36,   103,    -1,    29,   103,    -1,    15,    -1,
      32,   103,    -1,    36,   103,    -1,    29,   103,    -1,    15,
      -1,    36,   103,    -1,    29,   103,    -1,    30,    -1,    19,
      66,    20,    -1,    19,     1,    20,    -1,    -1,    -1,    94,
      17,   101,    67,    68,    -1,     1,    94,    17,   101,   102,
      68,    -1,     1,    68,   102,    -1,     1,    -1,    15,    66,
      -1,     1,    15,   102,    66,    -1,     1,    66,    -1,     1,
      -1,    -1,    55,    29,   102,    70,    30,    15,    -1,    55,
      29,   102,    70,    30,    -1,    55,     1,    -1,     1,    69,
      -1,    71,    15,   102,    70,    -1,     1,    70,    -1,    -1,
      -1,    -1,    39,   102,    19,    72,    94,    73,    20,   102,
      -1,    -1,    -1,    40,    74,   102,    19,    94,    75,    20,
     102,    -1,    29,   102,    70,    30,   102,    -1,     3,   102,
       4,    85,    -1,    41,   102,    70,    43,   102,    83,    -1,
      -1,    -1,     3,    76,   102,    79,    77,   102,    -1,    37,
     102,    83,    42,   102,    71,    78,    -1,    44,   102,    83,
      45,   102,    71,    -1,    38,   102,    71,    -1,    -1,    19,
      80,    20,    -1,    19,     1,    20,    -1,    -1,    -1,     3,
      81,   102,    82,   102,    -1,     1,    -1,    15,   102,    80,
     102,    -1,     1,    80,   102,    -1,     1,    -1,    -1,    85,
      84,    85,    -1,    85,     1,    -1,    14,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,    86,    92,
      -1,    -1,    97,    88,    87,    90,    -1,   100,    -1,    19,
      85,    20,    -1,    -1,     3,    89,    79,    -1,    -1,    99,
      88,    91,    90,    -1,    -1,    -1,    98,    86,    93,    92,
      -1,    -1,    -1,     3,    95,   102,    96,    -1,    18,    94,
      -1,    -1,    10,    -1,    11,    -1,    -1,    10,    -1,    11,
      -1,    12,    -1,    13,    -1,    27,    -1,    26,    -1,    34,
      -1,    33,    -1,    35,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    92,   102,   104,   110,   109,   119,   125,
     124,   139,   141,   142,   149,   151,   147,   196,   198,   199,
     207,   246,   277,   204,   294,   296,   297,   302,   303,   304,
     305,   306,   311,   312,   313,   314,   319,   320,   321,   322,
     327,   329,   330,   338,   335,   347,   349,   351,   356,   358,
     360,   362,   363,   368,   370,   374,   376,   381,   383,   384,
     390,   396,   389,   449,   456,   448,   503,   506,   547,   552,
     565,   551,   607,   608,   613,   614,   619,   621,   622,   628,
     627,   644,   649,   651,   653,   654,   659,   676,   681,   682,
     683,   684,   685,   686,   691,   702,   701,   722,   733,   736,
     735,   778,   777,   803,   809,   808,   824,   829,   829,   839,
     840,   845,   846,   847,   852,   853,   858,   859,   864,   865,
     870,   871,   872,   877,   882
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
  "@1", "corpo", "@2", "dc", "dc_c", "@3", "dc_v", "@4", "@5", "dc_p",
  "@6", "@7", "@8", "err_c", "err_v", "err_p", "parametros", "lista_par",
  "@9", "mais_par", "corpo_p", "comandos", "cmd", "@10", "@11", "@12",
  "@13", "@14", "@15", "pfalsa", "lista_arg", "argumentos", "@16",
  "mais_ident", "condicao", "relacao", "expressao", "termo", "@17",
  "fator", "@18", "mais_fatores", "@19", "outros_termos", "@20",
  "variaveis", "@21", "mais_var", "op_un", "op_ad", "op_mul", "numero",
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
       0,    47,    49,    48,    48,    48,    51,    50,    52,    54,
      53,    53,    53,    53,    56,    57,    55,    55,    55,    55,
      59,    60,    61,    58,    58,    58,    58,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    64,
      65,    65,    65,    67,    66,    66,    66,    66,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    70,    70,    70,
      72,    73,    71,    74,    75,    71,    71,    71,    71,    76,
      77,    71,    71,    71,    78,    78,    79,    79,    79,    81,
      80,    80,    82,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    84,    84,    85,    87,    86,    88,    88,    89,
      88,    91,    90,    90,    93,    92,    92,    95,    94,    96,
      96,    97,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     4,     5,     0,     6,     3,     0,
       8,     4,     3,     0,     0,     0,    10,     4,     3,     0,
       0,     0,     0,    11,     5,     4,     0,     1,     2,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     2,     1,
       3,     3,     0,     0,     5,     6,     3,     1,     2,     4,
       2,     1,     0,     6,     5,     2,     2,     4,     2,     0,
       0,     0,     8,     0,     0,     8,     5,     4,     6,     0,
       0,     6,     7,     6,     3,     0,     3,     3,     0,     0,
       5,     1,     4,     3,     1,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     2,     0,     4,     1,     3,     0,
       3,     0,     4,     0,     0,     4,     0,     0,     4,     2,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   123,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     2,     0,    27,   124,   124,   124,
     124,   123,     0,   123,     4,     6,     0,     0,     0,     0,
       5,    31,    28,    29,    30,     0,    12,     0,     0,    32,
     124,   124,   124,   123,     0,     0,     0,     0,     8,     0,
      11,     0,     0,    69,   123,   123,   123,    63,   123,   123,
       0,     0,    35,    33,    34,     0,    18,   107,   123,    36,
     124,    39,   124,   123,     0,    20,     3,   119,   118,     0,
      58,   123,     0,     0,   113,     0,   123,     0,   113,   123,
     123,    17,   123,     0,    38,    37,     0,     0,     0,   123,
     123,     9,    78,   113,     0,   111,   112,     0,     0,   106,
       0,    60,     0,     0,     0,     7,     0,   110,     0,    25,
       0,    56,    55,   123,     0,    42,     0,     0,    70,    67,
     123,   123,    87,    89,    90,    91,    92,    93,    88,   113,
     114,   115,    94,   113,    99,   113,    95,    97,     0,     0,
     123,   123,    57,     0,   108,   121,   120,   122,     0,     0,
      24,     0,    21,    10,     0,    79,     0,   123,    66,     0,
      86,   104,    78,     0,   103,    61,    64,   113,     0,   109,
     123,     0,     0,     0,     0,     0,    77,   123,    76,    71,
      75,   106,   100,    98,   116,   117,    96,     0,     0,     0,
      68,    73,    15,    54,     0,     0,    41,   123,     0,    40,
       0,     0,     0,   123,    72,   105,   101,   123,   123,     0,
      53,     0,   123,    50,    48,    46,     0,    43,   123,     0,
     123,   123,     0,   103,    62,    65,    16,     0,   123,     0,
      22,    81,   123,     0,    80,    74,   102,    49,     0,    44,
       0,    83,   123,    45,    23,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    29,    11,    38,    12,    13,   126,    98,    45,
     219,    48,   100,   185,   250,    21,    43,    73,   162,   183,
     239,   207,    99,    60,    61,   148,   198,    86,   199,    81,
     167,   214,   128,   166,   187,   231,   107,   139,   108,   109,
     174,   146,   172,   196,   233,   142,   191,   184,    92,   154,
     110,   143,   197,   147,   158,     8,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -225
static const yytype_int16 yypact[] =
{
      12,     2,    25,    50,  -225,    17,    10,  -225,    17,   149,
      91,    14,    52,   107,  -225,    77,  -225,  -225,  -225,  -225,
    -225,  -225,    17,  -225,  -225,  -225,   129,   146,    30,    17,
    -225,  -225,  -225,  -225,  -225,    17,  -225,   101,    83,  -225,
    -225,  -225,  -225,  -225,   107,   122,   147,   166,  -225,   115,
    -225,   178,    60,   133,  -225,  -225,  -225,  -225,  -225,  -225,
     111,   136,  -225,  -225,  -225,   107,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,   116,  -225,  -225,  -225,  -225,   148,
    -225,  -225,   169,    83,   213,   168,  -225,   131,   213,  -225,
    -225,  -225,  -225,   177,  -225,  -225,    30,    26,    13,  -225,
    -225,  -225,   179,   213,   207,  -225,  -225,   191,   221,   229,
      61,  -225,   222,   200,   197,  -225,    60,   226,   -14,  -225,
      53,  -225,  -225,  -225,    30,   227,    17,   181,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,   213,
    -225,  -225,  -225,   213,  -225,   213,  -225,  -225,   122,   122,
    -225,  -225,  -225,   122,  -225,  -225,  -225,  -225,   230,    83,
    -225,   187,  -225,  -225,   228,  -225,   232,  -225,  -225,   113,
    -225,  -225,   179,   233,   203,  -225,  -225,   213,   113,  -225,
    -225,   217,   118,   234,   238,   236,  -225,  -225,  -225,  -225,
     211,   229,  -225,  -225,  -225,  -225,  -225,    61,   237,   239,
    -225,  -225,  -225,   241,   188,   231,  -225,  -225,   243,  -225,
     -14,   116,   198,  -225,  -225,  -225,  -225,  -225,  -225,   107,
    -225,   199,  -225,  -225,  -225,  -225,   -14,  -225,  -225,   192,
    -225,  -225,   113,   203,  -225,  -225,  -225,   231,  -225,   205,
    -225,  -225,  -225,   235,  -225,  -225,  -225,  -225,   205,  -225,
      30,  -225,  -225,  -225,  -225,  -225
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,   127,  -225,  -225,   -12,  -225,    -8,  -225,
    -225,   -95,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -193,
    -225,  -224,   -93,   -44,  -162,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,    78,  -152,  -225,  -225,   -82,  -225,   -94,   119,
    -225,    64,  -225,    31,  -225,    67,  -225,   -42,  -225,  -225,
    -225,  -225,  -225,   212,  -143,   -21,    56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -125
static const yytype_int16 yytable[] =
{
      35,   119,    37,    68,   121,    28,   114,   190,    80,   129,
      36,   223,   224,     1,   122,   249,   201,     4,     9,   155,
     156,   157,    65,    50,   253,    14,     5,    97,     6,   160,
      24,    46,    82,    83,    84,    85,    66,    87,    88,   104,
       2,    39,   123,   113,   247,   170,   -13,    93,    10,   -13,
       7,   173,    96,   -13,    44,    40,   -14,    91,   120,   -26,
     102,    52,    42,    53,   144,   112,    47,   227,   115,   116,
     245,   117,   152,    31,    32,    33,    34,   242,   124,   125,
     145,    25,  -124,   238,    52,  -124,    53,    77,    78,    54,
     -59,   252,    22,    30,    23,   200,    62,    55,    64,    56,
      57,    58,   159,   -59,    59,    51,   175,   176,    26,   168,
     169,   179,    54,   -59,   163,   181,    53,    97,   228,   204,
      55,    67,    56,    57,    58,    67,    94,    59,    95,   177,
     178,    76,    52,   205,    53,    15,   -19,  -123,   206,    27,
     208,    89,    54,   -19,    39,   -19,   189,    44,    27,   -14,
      55,    90,    56,    57,    58,   254,    49,    59,    40,   202,
      54,    41,    69,   101,    16,    42,   212,    74,    55,    75,
      56,    57,    58,   103,   -59,    59,    70,    71,    17,   208,
      18,    19,   164,    72,   165,    20,   225,   111,   182,   221,
      67,    67,   232,   241,   118,   165,   234,   235,   127,   229,
     204,   237,    67,   222,    77,    78,   204,   240,   -51,   243,
     244,   236,   -84,   230,   205,   194,   195,   248,   -85,   -47,
     205,   251,   132,   105,   106,   -52,   133,   134,   135,   136,
     137,   255,   221,   131,    67,   138,   241,   130,   165,   140,
     141,   149,   151,   150,   153,   180,   161,   203,   186,   213,
     192,   211,   188,   193,   209,   210,   220,   217,   215,   218,
     226,   216,   171,    79,   246
};

static const yytype_uint8 yycheck[] =
{
      21,    96,    23,    45,    97,    13,    88,   169,    52,   103,
      22,   204,   205,     1,     1,   239,   178,    15,     1,    33,
      34,    35,    43,    35,   248,    15,     1,     1,     3,   124,
      16,     1,    53,    54,    55,    56,    44,    58,    59,    83,
      28,    15,    29,    87,   237,   139,    29,    68,    31,    32,
       0,   145,    73,    36,     1,    29,     3,    65,    32,    29,
      81,     1,    36,     3,     3,    86,    36,   210,    89,    90,
     232,    92,   116,    17,    18,    19,    20,   229,    99,   100,
      19,    29,    29,   226,     1,    32,     3,    26,    27,    29,
      30,   243,     1,    16,     3,   177,    40,    37,    42,    39,
      40,    41,   123,    43,    44,     4,   148,   149,     1,   130,
     131,   153,    29,    30,   126,   159,     3,     1,   211,     1,
      37,     3,    39,    40,    41,     3,    70,    44,    72,   150,
     151,    16,     1,    15,     3,     8,    29,     4,    20,    32,
     182,    30,    29,    36,    15,    29,   167,     1,    32,     3,
      37,    15,    39,    40,    41,   250,    29,    44,    29,   180,
      29,    32,    15,    15,    15,    36,   187,     1,    37,     3,
      39,    40,    41,     4,    43,    44,    29,    30,    29,   221,
      31,    32,     1,    36,     3,    36,   207,    19,     1,     1,
       3,     3,   213,     1,    17,     3,   217,   218,    19,     1,
       1,   222,     3,    15,    26,    27,     1,   228,    20,   230,
     231,   219,    20,    15,    15,    12,    13,   238,    20,    20,
      15,   242,     1,    10,    11,    20,     5,     6,     7,     8,
       9,   252,     1,    42,     3,    14,     1,    30,     3,    10,
      11,    19,    45,    43,    18,    15,    19,    30,    20,    38,
     172,    15,    20,    20,    20,    17,    15,    20,   191,    20,
      17,   197,   143,    51,   233
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    48,    15,     1,     3,     0,   102,     1,
      31,    50,    52,    53,    15,    50,    15,    29,    31,    32,
      36,    62,     1,     3,    16,    29,     1,    32,    55,    49,
      16,   103,   103,   103,   103,   102,    53,   102,    51,    15,
      29,    32,    36,    63,     1,    56,     1,    36,    58,    50,
      53,     4,     1,     3,    29,    37,    39,    40,    41,    44,
      70,    71,   103,   103,   103,   102,    55,     3,    94,    15,
      29,    30,    36,    64,     1,     3,    16,    26,    27,   100,
      70,    76,   102,   102,   102,   102,    74,   102,   102,    30,
      15,    55,    95,   102,   103,   103,   102,     1,    55,    69,
      59,    15,   102,     4,    70,    10,    11,    83,    85,    86,
      97,    19,   102,    70,    83,   102,   102,   102,    17,    58,
      32,    69,     1,    29,   102,   102,    54,    19,    79,    85,
      30,    42,     1,     5,     6,     7,     8,     9,    14,    84,
      10,    11,    92,    98,     3,    19,    88,   100,    72,    19,
      43,    45,    70,    18,    96,    33,    34,    35,   101,   102,
      58,    19,    65,    53,     1,     3,    80,    77,   102,   102,
      85,    86,    89,    85,    87,    94,    94,   102,   102,    94,
      15,    70,     1,    66,    94,    60,    20,    81,    20,   102,
      71,    93,    79,    20,    12,    13,    90,    99,    73,    75,
      83,    71,   102,    30,     1,    15,    20,    68,    94,    20,
      17,    15,   102,    38,    78,    92,    88,    20,    20,    57,
      15,     1,    15,    66,    66,   102,    17,   101,    69,     1,
      15,    82,   102,    91,   102,   102,    55,   102,   101,    67,
     102,     1,    80,   102,   102,    71,    90,    66,   102,    68,
      61,   102,    80,    68,    58,   102
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
#line 93 "syntax.yacc"
    {
			/* Adiciona o programa na tabela de simbolos */
			STable_Entry programEntry;
			programEntry.category = PROGRAM;
			strcpy(programEntry.name, (yyvsp[(2) - (3)]).name);
			symbolTable_add(&tables[scope], programEntry);
		}
    break;

  case 4:
#line 102 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 5:
#line 104 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 6:
#line 110 "syntax.yacc"
    {
			/* Altera a linha do inicio do programa */
			mainLine = codeLine;
		}
    break;

  case 9:
#line 125 "syntax.yacc"
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

  case 11:
#line 139 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 12:
#line 141 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 14:
#line 149 "syntax.yacc"
    { paramQty = 0; definedParams = 0; }
    break;

  case 15:
#line 151 "syntax.yacc"
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
						generateCode = 0;
						fprintf(stderr, "Erro na linha %d: redeclaracao da variavel %s.\n"
							"\tDefinicao previa na linha %d.\n", 
							yylineno,
							parameterList[i].name, entry->line);
					} else if(entry->category == PROCEDURE) {
						generateCode = 0; 
						fprintf(stderr, "Erro na linha %d: %s previamente definido como procedimento.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, parameterList[i].name, entry->line );
					} else if(entry->category == CONST) {
						generateCode = 0; 
						fprintf(stderr, "Erro na linha %d: %s previamente definido como constante.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, parameterList[i].name, entry->line );
					}
				} else {
					/* Se nao existe ainda */
					parameterList[i].type = (yyvsp[(6) - (8)]).type;
					parameterList[i].category = VAR;
					parameterList[i].line = yylineno;
					/* 
					 	Aumenta 1 no espaco para variaveis globais 
						Codigo de alocacao 
					 */
					code[codeLine][0] = ALME;
					code[codeLine++][1] = 1;
					parameterList[i].address = usedAddress++;
					variablesPerScope[scope]++;
					symbolTable_add(&tables[scope], parameterList[i]);
				}
			}

		}
    break;

  case 17:
#line 196 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 18:
#line 198 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 20:
#line 207 "syntax.yacc"
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
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Redefinicao do procedimento %s.\n"
							"\tDefinicao previa na linha %d\n", 
							yylineno, entry->name, entry->line
						);
				} else if(entry->category == VAR) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: %s previamente definido como variavel.\n"
							"\tDefinicao previa na linha %d.\n", 
							yylineno, entry->name, entry->line
						);
				} else if(entry->category == PROGRAM) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: %s previamente definido como nome do programa.\n"
							"\tDefinicao previa na linha %d.\n",
							yylineno, entry->name, entry->line );
				}
			} else {
				procedureCount++;
				symbolTable_add(&tables[scope], procEntry);
			}
		}
    break;

  case 21:
#line 246 "syntax.yacc"
    {
			/* Inicia a tabela para o novo escopo */
			symbolTable_init(&tables[scope+1], 0);
			int i;
			/* Adiciona os parametros na tabela de simbolos do escopo global -
				que contem todos os procedimentos */
			if(validProcedure) {
				for(i = 0; i < paramQty; i++) { 
					int x = symbolTable_addParameter(&tables[0], (yyvsp[(2) - (5)]).name, parameterList[i]);
					if(x < 0) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Parametro %s redefinido. \n" 
								"\tPreviamente definido como parametro %d.\n", 
							yylineno, parameterList[i].name, 
							- x - 1);
					} 
					/* Adiciona a variavel no escopo novo */
					parameterList[i].address = usedAddress++;
					
					code[codeLine++][0] = COPVL; 
					symbolTable_add(&tables[scope+1], parameterList[i]);
				}
			}
			usedAddress -= paramQty;
			/* Aumenta um escopo - para as variaveis locais */
			scope++;
		}
    break;

  case 22:
#line 277 "syntax.yacc"
    {
			STable_Entry * entry = symbolTable_find(&tables[0], (yyvsp[(2) - (9)]).name);
			/* Saiu do procedimento */
			if(entry) {

				/* Desaloca memoria */
				code[codeLine][0] = DESM;
				code[codeLine++][1] = variablesPerScope[scope] + entry->paramQty;	
			}
			code[codeLine++][0] = RTPR;
			symbolTable_erase(&tables[scope], &tables[scope]);
			variablesPerScope[scope] = 0;
			scope--;

		}
    break;

  case 24:
#line 294 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 25:
#line 296 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 41:
#line 329 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 43:
#line 338 "syntax.yacc"
    {
			int i;
			/* Altera o tipo dos parametros até agora */
			for(i = definedParams; i < paramQty; i++) 
				parameterList[i].type = (yyvsp[(3) - (3)]).type;
			definedParams = paramQty;
		}
    break;

  case 45:
#line 347 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 46:
#line 349 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 47:
#line 351 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 49:
#line 358 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 50:
#line 360 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 51:
#line 362 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 54:
#line 370 "syntax.yacc"
    { 
			generateCode = 0; 
			sprintf(errv, "syntax error, unexpected %s, expecting ;", yytext); yyerror (errv); yyerrok; }
    break;

  case 55:
#line 374 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 56:
#line 376 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 58:
#line 383 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 60:
#line 390 "syntax.yacc"
    { 
			/* Prepara os parametros */
			paramQty = 0;
			definedParams = 0;
		}
    break;

  case 61:
#line 396 "syntax.yacc"
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
					generateCode = 0; 
					printf("Erro na linha %d: Variavel %s usada e nao declarada.\n", yylineno, entry->name);
				} else {
					/* Se as variaveis sao identificadores de programa ou procedure */
					if(entry->category == CONST) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Constante %s usada em leitura.\n", yylineno, entry->name);
					} else if(entry->category == PROCEDURE) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Procedimento %s usada em leitura.\n", yylineno, entry->name);
					} else if(entry->category == PROGRAM) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Nome do programa usada em leitura.\n", yylineno);
					} else if(type == -1) type = entry->type;
					else if(entry->type != type) badTypes = 1, generateCode = 0; ;
					
					/* Geração de código */
					code[codeLine++][0] = LEIT;
					code[codeLine][0] = ARMZ;
					code[codeLine++][1] = entry->address;
				}
			}
			if(badTypes) 
			{
				generateCode = 0; 
				/* Tipos diferentes (se nao houve algum erro anterior) */
				fprintf(stderr,
					"Erro na linha %d: tipos diferentes no comando readln.\n", 
					yylineno);
			} 
		}
    break;

  case 63:
#line 449 "syntax.yacc"
    {
			paramQty = 0;
			definedParams = 0;
		}
    break;

  case 64:
#line 456 "syntax.yacc"
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
					generateCode = 0; 
					fprintf(stderr,
						"Erro na linha %d: Variavel %s usada e nao declarada.\n", yylineno, entry->name);
				} else {
					/* Se as variaveis sao identificadores de programa ou procedure */
					if(entry->category == PROCEDURE) {
						generateCode = 0; 
						fprintf(stderr, 
							"Erro na linha %d: Procedimento %s usada em escrita.\n", yylineno, entry->name);
					} else if(entry->category == PROGRAM) {
						generateCode = 0; 
						fprintf(stderr,
							"Erro na linha %d: Nome do programa usada em escrita.\n", yylineno);
					} else if(type == -1) type = entry->type;
					else if(entry->type != type) badTypes = 1, generateCode = 0; 
					
					/* Geração de código */
					code[codeLine][0] = CRVL;
					code[codeLine++][1] = entry->address;
					code[codeLine++][0] = IMPR;
				} 
			}
			if(badTypes) 
			{
				generateCode = 0; 
				/* Tipos diferentes (se nao houve algum erro anterior) */
				printf("Erro na linha %d: tipos diferentes no comando writeln.\n", 
					yylineno);
			}
		}
    break;

  case 67:
#line 507 "syntax.yacc"
    {
			STable_Entry * entry = 0;

			/* Procura em todos os escopos aceitaveis */
			int cscope = 0;
			for(cscope = 0; !entry && cscope <= scope; cscope++) 
			 	entry = symbolTable_find(&tables[cscope], (yyvsp[(1) - (4)]).name);

			 if(!entry) 
			 {
			 	generateCode = 0; 
			 	/* Variavel nao declarada */
			 	fprintf(stderr, "Erro na linha %d: Variavel %s nao declarada.\n", 
			 		yylineno, (yyvsp[(1) - (4)]).name);
			 } else {
			 	/* Erro de atribuicao */
			 	if(entry->category == CONST) {
			 		generateCode = 0; 
			 		fprintf(stderr, "Erro na linha %d: Atribuindo uma expressao a constante.\n", 
			 			yylineno);
			 	} else if(entry->category == PROCEDURE) {
			 		generateCode = 0; 
			 		fprintf(stderr, "Erro na linha %d: Atribuindo uma expressao a procedimento.\n", 
			 			yylineno);
			 	} else if(entry->category == PROGRAM) {
			 		generateCode = 0; 
			 		fprintf(stderr, "Erro na linha %d: Nome do programa utilizado em expressao.\n", 
			 			yylineno);
			 	} else if (entry->type == INTEGER && (yyvsp[(4) - (4)]).type == REAL) {
			 		generateCode = 0; 
			 		fprintf(stderr, "Erro na linha %d: Atribuicao de real a inteiro.\n", 
			 			yylineno, (yyvsp[(1) - (4)]).name);
			 	} 

			 	/* Geração de código */
			 	code[codeLine][0] = ARMZ;
			 	code[codeLine++][1] = entry->address;
			 }
		}
    break;

  case 69:
#line 552 "syntax.yacc"
    { 
			/* Busca o procedimento */
			STable_Entry * entry = symbolTable_find(&tables[0], (yyvsp[(1) - (1)]).name);
			if(!entry) {
				generateCode = 0; 
				fprintf(stderr, "Erro na linha %d: Procedimento %s nao declarado.\n", 
					yylineno, (yyvsp[(1) - (1)]).name);
			} 
			paramQty = 0; 
			definedParams = 0;
		}
    break;

  case 70:
#line 565 "syntax.yacc"
    {
			/* Busca o procedimento */
			STable_Entry * entry = symbolTable_find(&tables[0], (yyvsp[(1) - (4)]).name);

			if(entry) {
				/* Se o procedimento existe, confira os parametros */
				ParameterNode * node; 
				/* Numero de parametros do procedimento */
				int qty = entry->paramQty;
				node = entry->parameters;

				if(qty < paramQty) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Excesso de parametros na chamada"
						" do procedimento %s. %d parametro%c esperado%c, %d parametro%c obtido%c. \n",
						yylineno, entry->name, qty, (qty==1)?'\0':'s', (qty==1)?'\0':'s',
						paramQty, (paramQty==1)?'\0':'s', (paramQty==1)?'\0':'s');
				} else if(qty > paramQty) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Falta de parametros na chamada"
						" do procedimento %s. %d parametro%c esperado%c, %d parametro%c obtido%c. \n",
						yylineno, entry->name, qty, (qty==1)?'\0':'s', (qty==1)?'\0':'s',
						paramQty, (paramQty==1)?'\0':'s', (paramQty==1)?'\0':'s');
				} 
				
				int i;
				int checkCount = (paramQty<qty)?paramQty:qty;
				for(i = 0; i < checkCount ; i++) {
					if(parameterList[i].type != node->value.type) {
						generateCode = 0; 
						fprintf(stderr, "Erro na linha %d: Parametro %d do procedimento %s:\n\t"
							"%s obtido, %s esperado. \n",
							yylineno, i+1, entry->name,
							(parameterList[i].type==REAL)?"Real":"Inteiro",
							(node->value.type==REAL)?"Real":"Inteiro" );
						node = node->next;
					}				
				}
			} 
		}
    break;

  case 77:
#line 621 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 79:
#line 628 "syntax.yacc"
    {
			STable_Entry * entry = 0;
			int cscope = 0;
			for(cscope = 0; !entry && cscope <= scope; cscope++) {
				entry = symbolTable_find(&tables[cscope], (yyvsp[(1) - (1)]).name);
			}
			if(!entry) {
				generateCode = 0; 
				fprintf(stderr, "Erro na linha %d: Parametro %s nao declarada.\n",
					yylineno, (yyvsp[(1) - (1)]).name);
			} 
			/* Adiciona na lista de parametros, mesmo que seja nao declarada */
			parameterList[paramQty++] = (yyvsp[(1) - (1)]);
		}
    break;

  case 81:
#line 644 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 83:
#line 651 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 84:
#line 653 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 86:
#line 660 "syntax.yacc"
    {
			if((yyvsp[(2) - (3)]).category == OP_EQ) {
				code[codeLine++][0] = CPIG;
			} else if((yyvsp[(2) - (3)]).category == OP_DF) {
				code[codeLine++][0] = CDES;
			} else if((yyvsp[(2) - (3)]).category == OP_GR) {
				code[codeLine++][0] = CPMA;
			} else if((yyvsp[(2) - (3)]).category == OP_LS) {
				code[codeLine++][0] = CPME;
			} else if((yyvsp[(2) - (3)]).category == OP_GE) {
				code[codeLine++][0] = CPMI;
			} else if((yyvsp[(2) - (3)]).category == OP_LE) {
				code[codeLine++][0] = CPMI;
			}
		}
    break;

  case 87:
#line 676 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 94:
#line 692 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).type == REAL || (yyvsp[(2) - (2)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(1) - (2)]).type == ERROR || (yyvsp[(2) - (2)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 95:
#line 702 "syntax.yacc"
    { 
			if((yyvsp[(1) - (2)]).category == OP_MI) 
				code[codeLine++][0] = INVE;
		}
    break;

  case 96:
#line 707 "syntax.yacc"
    {

			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if((yyvsp[(2) - (4)]).type == REAL || (yyvsp[(3) - (4)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(2) - (4)]).type == ERROR || (yyvsp[(3) - (4)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 97:
#line 723 "syntax.yacc"
    { 
			/* Geração de código */
			code[codeLine][0] = CRCT;
			/* Checa o tipo do numero, para usar o campo correto */
			if((yyvsp[(1) - (1)]).category == NRO_REAL)
				code[codeLine++][1] = (yyvsp[(1) - (1)]).rval;
			else code[codeLine++][1] = (yyvsp[(1) - (1)]).ival;

			(yyval).type = (yyvsp[(1) - (1)]).type; 
		}
    break;

  case 99:
#line 736 "syntax.yacc"
    {
			/* Busca o identificador na tabela de simbolos */
			STable_Entry * entry = 0;
			int cscope;
			for(cscope = 0; !entry && cscope <= scope; cscope++)
				entry = symbolTable_find(&tables[cscope], (yyvsp[(1) - (1)]).name);
			
			if(!entry) {
				generateCode = 0; 
				/* Se o identificador nao existe */
				fprintf(stderr, "Erro na linha %d: Identificador %s nao declarado.\n", 
					yylineno, (yyvsp[(1) - (1)]).name);
				(yyval).type = ERROR;
			} else {
				if(entry->category == VAR || entry->category == CONST)
				{
					strcpy((yyval).name, entry->name);
					(yyval).type = entry->type;
				} else if(entry->category == PROCEDURE) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Nome de procedimento usado em artimetica.\n", 
						yylineno);
					(yyval).type = ERROR;
				} else if(entry->category == PROGRAM) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Nome do programa usado em artimetica.\n", 
						yylineno);
					(yyval).type = ERROR;
				}

				/* Geração de código */
				code[codeLine][0] = CRVL;
				code[codeLine++][1] = entry->address;
			}
		}
    break;

  case 101:
#line 778 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).category == OP_ML)
				code[codeLine++][0] = MULT;
			else code[codeLine++][1] = DIVI;

		}
    break;

  case 102:
#line 785 "syntax.yacc"
    {
			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if((yyvsp[(1) - (4)]).category == OP_DV) {
				if((yyvsp[(2) - (4)]).type != INTEGER || (yyvsp[(3) - (4)]).type != INTEGER) 
				{
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Divisao de numeros nao inteiros.\n", 
						yylineno);
				}
			}

			if((yyvsp[(2) - (4)]).type == REAL || (yyvsp[(3) - (4)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(2) - (4)]).type == ERROR || (yyvsp[(3) - (4)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 104:
#line 809 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).category == OP_PL)
				code[codeLine++][0] = SOMA;
			else code[codeLine++][0] = SUBT;
		}
    break;

  case 105:
#line 815 "syntax.yacc"
    {
			/* 	
				Se algum fator for real, real. Se algum for erro, erro.
				Se nao, integer 
			*/
			if((yyvsp[(2) - (4)]).type == REAL || (yyvsp[(3) - (4)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(2) - (4)]).type == ERROR || (yyvsp[(3) - (4)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 107:
#line 829 "syntax.yacc"
    { 
			/* Adiciona a lista de parametros */
			(yyvsp[(1) - (1)]).category = VAR;
			parameterList[paramQty++] = (yyvsp[(1) - (1)]); 
		}
    break;

  case 123:
#line 877 "syntax.yacc"
    { yyerrok; }
    break;

  case 124:
#line 882 "syntax.yacc"
    { yyless(0); }
    break;


/* Line 1267 of yacc.c.  */
#line 2386 "y.tab.c"
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


#line 884 "syntax.yacc"



void yyerror(const char *s) {

	generateCode = 0; 
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
	codeLine = 0;
	usedAddress = 0;
	generateCode = 1;

	int i;

	for(i = 0; i < 10; i++) {
		variablesPerScope[i] = 0;
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

	file = fopen("code.code", "w");

	code[codeLine++][0] = INPP;
	/* Pula para a main */
	code[codeLine++][0] = DSVI;

	/*Processa*/
	yyparse();

	code[1][1] = mainLine;
	code[codeLine++][0] = PARA;
	
	if(generateCode) {
		fprintf(stderr, "Codigo compilado com sucesso.\n");
		flushCode(file, code, &codeLine);
	}

	fclose(file);
	return 0;
}


