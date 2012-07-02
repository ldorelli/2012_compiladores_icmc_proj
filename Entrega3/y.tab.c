
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 51 "syntax.yacc"
 
	#include "symbolTable.h"
	#define YYSTYPE  STable_Entry
	#include  "lex.yy.c"
	#include <string.h>
	#include "commands.h"

	/* Código */
	CodeLine code[5000000];
	int codeLine;
	int usedAddress;
	int procedureCount ;
	int generateCode;
	int mainLine;
	int desvLine;
	int scope0procedures;

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

/* Line 189 of yacc.c  */
#line 86 "syntax.yacc"
 void yyerror(const char*); 

/* Line 189 of yacc.c  */
#line 113 "y.tab.c"

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 247 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
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
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  260

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
       0,     0,     3,     4,    11,    16,    22,    23,    30,    31,
      36,    37,    46,    51,    55,    56,    57,    58,    69,    74,
      78,    79,    80,    81,    82,    94,   100,   105,   106,   108,
     111,   114,   117,   120,   122,   125,   128,   131,   133,   136,
     139,   141,   145,   149,   150,   151,   157,   164,   168,   170,
     173,   178,   181,   183,   184,   191,   197,   200,   203,   208,
     211,   212,   213,   214,   223,   224,   225,   234,   240,   245,
     246,   254,   255,   256,   263,   264,   273,   274,   275,   284,
     285,   290,   291,   295,   299,   300,   301,   307,   309,   314,
     318,   320,   321,   325,   328,   330,   332,   334,   336,   338,
     340,   343,   344,   349,   351,   355,   357,   358,   363,   364,
     365,   370,   371,   372,   377,   380,   381,   383,   385,   386,
     388,   390,   392,   394,   396,   398,   400,   402,   404,   405
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    28,     3,    15,    49,    50,    16,
      -1,    28,     1,    50,    16,    -1,     1,    15,   107,    50,
      16,    -1,    -1,    52,    29,    51,    71,    30,   107,    -1,
      -1,    54,    56,    53,    59,    -1,    -1,    31,     3,   107,
       4,   105,    15,    55,    54,    -1,     1,    63,   107,    54,
      -1,    31,     1,    54,    -1,    -1,    -1,    -1,    32,    57,
      99,   107,    17,   106,    15,   107,    58,    56,    -1,     1,
      64,   107,    56,    -1,    32,     1,    56,    -1,    -1,    -1,
      -1,    -1,    36,     3,    60,   107,    66,    61,    15,    70,
     107,    62,    59,    -1,    36,     1,    70,   107,    59,    -1,
       1,    65,   107,    59,    -1,    -1,    15,    -1,    31,   108,
      -1,    32,   108,    -1,    36,   108,    -1,    29,   108,    -1,
      15,    -1,    32,   108,    -1,    36,   108,    -1,    29,   108,
      -1,    15,    -1,    36,   108,    -1,    29,   108,    -1,    30,
      -1,    19,    67,    20,    -1,    19,     1,    20,    -1,    -1,
      -1,    99,    17,   106,    68,    69,    -1,     1,    99,    17,
     106,   107,    69,    -1,     1,    69,   107,    -1,     1,    -1,
      15,    67,    -1,     1,    15,   107,    67,    -1,     1,    67,
      -1,     1,    -1,    -1,    56,    29,   107,    71,    30,    15,
      -1,    56,    29,   107,    71,    30,    -1,    56,     1,    -1,
       1,    70,    -1,    72,    15,   107,    71,    -1,     1,    71,
      -1,    -1,    -1,    -1,    39,   107,    19,    73,    99,    74,
      20,   107,    -1,    -1,    -1,    40,    75,   107,    19,    99,
      76,    20,   107,    -1,    29,   107,    71,    30,   107,    -1,
       3,   107,     4,    91,    -1,    -1,    41,    77,   107,    71,
      43,   107,    89,    -1,    -1,    -1,     3,    78,   107,    85,
      79,   107,    -1,    -1,    37,   107,    89,    80,    42,   107,
      72,    83,    -1,    -1,    -1,    44,    81,   107,    89,    82,
      45,   107,    72,    -1,    -1,    38,   107,    84,    72,    -1,
      -1,    19,    86,    20,    -1,    19,     1,    20,    -1,    -1,
      -1,     3,    87,   107,    88,   107,    -1,     1,    -1,    15,
     107,    86,   107,    -1,     1,    86,   107,    -1,     1,    -1,
      -1,    91,    90,    91,    -1,    91,     1,    -1,    14,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,
      92,    97,    -1,    -1,   102,    94,    93,    95,    -1,   105,
      -1,    19,    91,    20,    -1,     3,    -1,    -1,   104,    94,
      96,    95,    -1,    -1,    -1,   103,    92,    98,    97,    -1,
      -1,    -1,     3,   100,   107,   101,    -1,    18,    99,    -1,
      -1,    10,    -1,    11,    -1,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    27,    -1,    26,    -1,    34,    -1,
      33,    -1,    35,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    94,   104,   106,   112,   111,   121,   121,
     127,   126,   141,   143,   144,   151,   153,   149,   198,   200,
     201,   210,   262,   297,   206,   320,   322,   323,   328,   329,
     330,   331,   332,   337,   338,   339,   340,   345,   346,   347,
     348,   353,   355,   356,   364,   361,   373,   375,   377,   382,
     384,   386,   388,   389,   394,   396,   400,   402,   407,   409,
     410,   416,   422,   415,   479,   486,   478,   536,   539,   584,
     583,   604,   617,   603,   680,   677,   708,   714,   707,   735,
     734,   750,   758,   760,   761,   767,   766,   784,   789,   791,
     793,   794,   799,   822,   827,   828,   829,   830,   831,   832,
     837,   848,   847,   870,   886,   891,   949,   948,   978,   984,
     983,  1004,  1010,  1010,  1020,  1021,  1026,  1027,  1028,  1033,
    1034,  1039,  1040,  1045,  1049,  1055,  1058,  1061,  1067,  1072
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
  "$@1", "corpo", "$@2", "dc", "$@3", "dc_c", "$@4", "dc_v", "$@5", "$@6",
  "dc_p", "$@7", "$@8", "$@9", "err_c", "err_v", "err_p", "parametros",
  "lista_par", "$@10", "mais_par", "corpo_p", "comandos", "cmd", "$@11",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "@19", "$@20",
  "pfalsa", "$@21", "lista_arg", "argumentos", "$@22", "mais_ident",
  "condicao", "relacao", "expressao", "termo", "@23", "fator",
  "mais_fatores", "@24", "outros_termos", "@25", "variaveis", "$@26",
  "mais_var", "op_un", "op_ad", "op_mul", "numero", "tipo_var", "ok",
  "less", 0
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
       0,    47,    49,    48,    48,    48,    51,    50,    53,    52,
      55,    54,    54,    54,    54,    57,    58,    56,    56,    56,
      56,    60,    61,    62,    59,    59,    59,    59,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    68,    67,    67,    67,    67,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      71,    73,    74,    72,    75,    76,    72,    72,    72,    77,
      72,    78,    79,    72,    80,    72,    81,    82,    72,    84,
      83,    83,    85,    85,    85,    87,    86,    86,    88,    88,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    93,    92,    94,    94,    94,    96,    95,    95,    98,
      97,    97,   100,    99,   101,   101,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   106,   107,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     4,     5,     0,     6,     0,     4,
       0,     8,     4,     3,     0,     0,     0,    10,     4,     3,
       0,     0,     0,     0,    11,     5,     4,     0,     1,     2,
       2,     2,     2,     1,     2,     2,     2,     1,     2,     2,
       1,     3,     3,     0,     0,     5,     6,     3,     1,     2,
       4,     2,     1,     0,     6,     5,     2,     2,     4,     2,
       0,     0,     0,     8,     0,     0,     8,     5,     4,     0,
       7,     0,     0,     6,     0,     8,     0,     0,     8,     0,
       4,     0,     3,     3,     0,     0,     5,     1,     4,     3,
       1,     0,     3,     2,     1,     1,     1,     1,     1,     1,
       2,     0,     4,     1,     3,     1,     0,     4,     0,     0,
       4,     0,     0,     4,     2,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   128,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     2,     0,    28,   129,   129,   129,
     129,   128,     0,   128,     4,     6,     0,     0,     8,     0,
       5,    32,    29,    30,    31,     0,    13,     0,     0,    33,
     129,   129,   129,   128,     0,     0,     0,     0,    12,     0,
       0,    71,   128,   128,   128,    64,    69,    76,     0,     0,
      36,    34,    35,     0,    19,   112,   128,     0,     0,     9,
       3,   124,   123,     0,    59,   128,     0,     0,   118,     0,
     128,   128,   128,   128,   128,    18,   128,     0,    37,   129,
      40,   129,   128,     0,    21,    10,    84,   118,     0,   116,
     117,    74,     0,   111,     0,    61,     0,     0,   118,     7,
       0,   115,     0,    39,    38,     0,     0,     0,   128,   128,
       0,     0,    72,    68,   128,     0,    93,    95,    96,    97,
      98,    99,    94,   118,   119,   120,   100,   118,   105,   118,
     101,   103,     0,     0,     0,    77,    58,     0,   113,   126,
     125,   127,     0,    26,     0,    57,    56,   128,     0,    43,
      11,     0,    85,     0,   128,    67,   128,    92,   109,     0,
     108,    62,    65,   128,     0,   114,   128,     0,    25,     0,
      22,    83,   128,    82,    73,     0,   111,   104,   121,   122,
     102,     0,     0,     0,   118,   128,    16,     0,     0,     0,
       0,     0,     0,    81,   110,   106,   128,   128,    70,     0,
       0,    55,     0,     0,    42,   128,     0,    41,     0,     0,
       0,   128,   128,   128,    75,   108,    63,    66,    78,    17,
      54,     0,   128,    51,    49,    47,     0,    44,   128,    87,
     128,     0,    86,    79,   107,     0,   128,     0,    23,    89,
     128,     0,    50,     0,    45,     0,    88,    80,    46,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    29,    11,    38,    12,    46,    13,   120,   117,
      45,   210,    69,   119,   201,   255,    21,    43,    92,   180,
     199,   247,   215,   118,    58,    59,   142,   192,    80,   193,
      81,    75,   164,   125,    82,   174,   224,   251,   122,   163,
     182,   222,   101,   133,   102,   103,   170,   140,   190,   225,
     136,   186,   200,    86,   148,   104,   137,   191,   141,   152,
       8,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -231
static const yytype_int16 yypact[] =
{
      11,     3,    40,    26,  -231,    19,    14,  -231,    19,   144,
     101,    42,    37,   108,  -231,    54,  -231,  -231,  -231,  -231,
    -231,  -231,    19,  -231,  -231,  -231,   176,   113,  -231,    19,
    -231,  -231,  -231,  -231,  -231,    19,  -231,    91,    83,  -231,
    -231,  -231,  -231,  -231,   108,    96,    52,    92,  -231,    47,
      39,   149,  -231,  -231,  -231,  -231,  -231,  -231,    87,   123,
    -231,  -231,  -231,   108,  -231,  -231,  -231,   168,   148,  -231,
    -231,  -231,  -231,   133,  -231,  -231,   154,    83,   230,   145,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,   164,  -231,  -231,
    -231,  -231,  -231,   134,  -231,  -231,   152,   230,   157,  -231,
    -231,  -231,   229,   234,   151,  -231,   173,    89,   230,  -231,
      39,   178,   189,  -231,  -231,    52,   110,    18,  -231,  -231,
      19,   181,  -231,  -231,  -231,   197,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,   230,  -231,  -231,  -231,   230,  -231,   230,
    -231,  -231,    96,    96,   156,  -231,  -231,    96,  -231,  -231,
    -231,  -231,   191,  -231,   118,  -231,  -231,  -231,    52,   223,
    -231,   190,  -231,   211,  -231,  -231,  -231,  -231,  -231,   226,
     235,  -231,  -231,  -231,   204,  -231,  -231,    83,  -231,   187,
    -231,  -231,  -231,  -231,  -231,   128,   234,  -231,  -231,  -231,
    -231,   151,   231,   232,   230,  -231,  -231,   220,   206,   233,
     237,   240,    74,   218,  -231,  -231,  -231,  -231,  -231,   128,
     108,   242,   212,   192,  -231,  -231,   241,  -231,   189,   134,
     159,  -231,  -231,  -231,  -231,   235,  -231,  -231,  -231,  -231,
    -231,   213,  -231,  -231,  -231,  -231,   189,  -231,  -231,  -231,
    -231,   217,  -231,  -231,  -231,   192,  -231,    95,  -231,  -231,
    -231,   128,  -231,    95,  -231,    52,  -231,  -231,  -231,  -231
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,  -231,    20,  -231,  -231,  -231,   -14,  -231,    -7,
    -231,  -231,  -114,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -188,  -231,  -230,  -112,   -43,  -174,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -148,
    -231,  -231,  -103,  -231,   -87,   122,  -231,    69,    36,  -231,
      76,  -231,   -42,  -231,  -231,  -231,  -231,  -231,   214,  -209,
     -21,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -130
static const yytype_int16 yytable[] =
{
      35,   153,    37,    66,   155,   145,    28,    74,    36,   237,
     123,   203,     1,    31,    32,    33,    34,   254,     4,   156,
       9,    48,    63,   258,   233,   234,     7,   246,    15,    14,
      76,    77,    78,    79,    98,   228,    60,    64,    62,     2,
      50,     5,    51,     6,   178,    87,   167,   157,   -14,    47,
      10,   -14,   169,    67,    96,   -14,    85,   252,    24,   106,
     107,   108,   109,   110,   144,   111,    25,   146,    52,   -60,
      30,   115,   240,    71,    72,   220,    53,   257,    54,    55,
      56,   -27,   -60,    57,    50,   113,    51,   114,    68,   221,
      50,   208,    51,   250,   -91,    49,   212,   158,   159,    65,
     171,   172,    22,   165,    23,   175,   160,   238,    70,    26,
     213,   116,    52,   -60,    44,   -53,   -15,    83,    52,    44,
      53,   -15,    54,    55,    56,    39,    53,    57,    54,    55,
      56,    51,   -60,    57,   197,   116,   177,   -20,    84,    40,
      27,   259,   154,   184,   -20,   185,    42,  -129,    95,    93,
    -129,    94,   194,  -128,   138,   196,   216,    52,    97,    16,
     239,   202,   162,   -20,   105,    53,    27,    54,    55,    56,
     139,   121,    57,    17,   209,    18,    19,    71,    72,   -90,
      20,   112,   161,    88,   162,   226,   227,   124,   198,   216,
      65,    39,   143,   231,   235,    65,   147,    89,    90,   173,
     241,   242,   243,   229,    91,    40,   176,   212,    41,    65,
     181,   245,    42,   231,   212,    65,    65,   248,   239,   249,
     162,   213,   149,   150,   151,   253,   214,   232,   213,   256,
     126,   183,   -52,   -48,   127,   128,   129,   130,   131,   166,
      99,   100,   179,   132,   134,   135,   187,   188,   189,   195,
     211,   206,   207,   217,   218,   219,   223,   230,   236,   168,
     205,   244,   204,    73
};

static const yytype_uint8 yycheck[] =
{
      21,   115,    23,    45,   116,   108,    13,    50,    22,   218,
      97,   185,     1,    17,    18,    19,    20,   247,    15,     1,
       1,    35,    43,   253,   212,   213,     0,   236,     8,    15,
      51,    52,    53,    54,    77,   209,    40,    44,    42,    28,
       1,     1,     3,     3,   158,    66,   133,    29,    29,    29,
      31,    32,   139,     1,    75,    36,    63,   245,    16,    80,
      81,    82,    83,    84,   107,    86,    29,   110,    29,    30,
      16,    92,   220,    26,    27,     1,    37,   251,    39,    40,
      41,    29,    43,    44,     1,    89,     3,    91,    36,    15,
       1,   194,     3,   241,    20,     4,     1,   118,   119,     3,
     142,   143,     1,   124,     3,   147,   120,   219,    16,     1,
      15,     1,    29,    30,     1,    20,     3,    30,    29,     1,
      37,     3,    39,    40,    41,    15,    37,    44,    39,    40,
      41,     3,    43,    44,   177,     1,   157,    29,    15,    29,
      32,   255,    32,   164,    36,   166,    36,    29,    15,     1,
      32,     3,   173,     4,     3,   176,   198,    29,     4,    15,
       1,   182,     3,    29,    19,    37,    32,    39,    40,    41,
      19,    19,    44,    29,   195,    31,    32,    26,    27,    20,
      36,    17,     1,    15,     3,   206,   207,    30,     1,   231,
       3,    15,    19,     1,   215,     3,    18,    29,    30,    43,
     221,   222,   223,   210,    36,    29,    15,     1,    32,     3,
      20,   232,    36,     1,     1,     3,     3,   238,     1,   240,
       3,    15,    33,    34,    35,   246,    20,    15,    15,   250,
       1,    20,    20,    20,     5,     6,     7,     8,     9,    42,
      10,    11,    19,    14,    10,    11,    20,    12,    13,    45,
      30,    20,    20,    20,    17,    15,    38,    15,    17,   137,
     191,   225,   186,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    48,    15,     1,     3,     0,   107,     1,
      31,    50,    52,    54,    15,    50,    15,    29,    31,    32,
      36,    63,     1,     3,    16,    29,     1,    32,    56,    49,
      16,   108,   108,   108,   108,   107,    54,   107,    51,    15,
      29,    32,    36,    64,     1,    57,    53,    50,    54,     4,
       1,     3,    29,    37,    39,    40,    41,    44,    71,    72,
     108,   108,   108,   107,    56,     3,    99,     1,    36,    59,
      16,    26,    27,   105,    71,    78,   107,   107,   107,   107,
      75,    77,    81,    30,    15,    56,   100,   107,    15,    29,
      30,    36,    65,     1,     3,    15,   107,     4,    71,    10,
      11,    89,    91,    92,   102,    19,   107,   107,   107,   107,
     107,   107,    17,   108,   108,   107,     1,    56,    70,    60,
      55,    19,    85,    91,    30,    80,     1,     5,     6,     7,
       8,     9,    14,    90,    10,    11,    97,   103,     3,    19,
      94,   105,    73,    19,    71,    89,    71,    18,   101,    33,
      34,    35,   106,    59,    32,    70,     1,    29,   107,   107,
      54,     1,     3,    86,    79,   107,    42,    91,    92,    91,
      93,    99,    99,    43,    82,    99,    15,   107,    59,    19,
      66,    20,    87,    20,   107,   107,    98,    20,    12,    13,
      95,   104,    74,    76,   107,    45,   107,    71,     1,    67,
      99,    61,   107,    72,    97,    94,    20,    20,    89,   107,
      58,    30,     1,    15,    20,    69,    99,    20,    17,    15,
       1,    15,    88,    38,    83,    96,   107,   107,    72,    56,
      15,     1,    15,    67,    67,   107,    17,   106,    70,     1,
      86,   107,   107,   107,    95,   107,   106,    68,   107,   107,
      86,    84,    67,   107,    69,    62,   107,    72,    69,    59
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 95 "syntax.yacc"
    {
			/* Adiciona o programa na tabela de simbolos */
			STable_Entry programEntry;
			programEntry.category = PROGRAM;
			strcpy(programEntry.name, (yyvsp[(2) - (3)]).name);
			symbolTable_add(&tables[scope], programEntry);
		}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 104 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 106 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 112 "syntax.yacc"
    {
			/* Altera a linha do inicio do programa */
			mainLine = codeLine;
		}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 121 "syntax.yacc"
    { desvLine = codeLine; }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 127 "syntax.yacc"
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

  case 12:

/* Line 1455 of yacc.c  */
#line 141 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 143 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 151 "syntax.yacc"
    { paramQty = 0; definedParams = 0; }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 153 "syntax.yacc"
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
					code[codeLine].opCode = ALME;
					code[codeLine].type = INTEGER;
					code[codeLine++].iArg = 1;
					parameterList[i].address = usedAddress++;
					variablesPerScope[scope]++;
					symbolTable_add(&tables[scope], parameterList[i]);
				}
			}
		}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 198 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 200 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 210 "syntax.yacc"
    { 

			if(scope == 0) {
				if(!scope0procedures)
				{
					desvLine = codeLine;
					code[codeLine].type = INTEGER;
					code[codeLine++].opCode = DSVI;
				}
				scope0procedures++;
			}
			/* Zera a quantidade de parametros - sera calculada pela regra parametros */
			paramQty = 0;
			definedParams = 0;
			STable_Entry procEntry;
			procEntry.category = PROCEDURE;
			procEntry.parameters = NULL;
			procEntry.address = codeLine;
			procEntry.paramQty = 0;
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
							"\tDefinicao previa na linha %d.\n	", 
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

  case 22:

/* Line 1455 of yacc.c  */
#line 262 "syntax.yacc"
    {
			/* Endereço de retorno */
			usedAddress++;
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
					
					code[codeLine].opCode = COPVL; 
					code[codeLine++].type = NOARG;
					symbolTable_add(&tables[scope+1], parameterList[i]);
				}
			}
			
			/* Aumenta um escopo - para as variaveis locais */
			scope++;
		}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 297 "syntax.yacc"
    {
			STable_Entry * entry = symbolTable_find(&tables[0], (yyvsp[(2) - (9)]).name);

			/* Saiu do procedimento */
			if(entry) {

				/* Desaloca memoria */
				code[codeLine].opCode = DESM;
				code[codeLine].type = INTEGER;
				code[codeLine++].iArg = variablesPerScope[scope] + entry->paramQty;	
				usedAddress += -entry->paramQty - variablesPerScope[scope] - 1;
			}
			code[codeLine].type = NOARG;
			code[codeLine++].opCode = RTPR;
			symbolTable_erase(&tables[scope], &tables[scope]);
			variablesPerScope[scope] = 0;

			
			scope--;

		}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 320 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 322 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 355 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 364 "syntax.yacc"
    {
			int i;
			/* Altera o tipo dos parametros até agora */
			for(i = definedParams; i < paramQty; i++) 
				parameterList[i].type = (yyvsp[(3) - (3)]).type;
			definedParams = paramQty;
		}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 373 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 375 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 377 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 384 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 386 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 388 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 396 "syntax.yacc"
    { 
			generateCode = 0; 
			sprintf(errv, "syntax error, unexpected %s, expecting ;", yytext); yyerror (errv); yyerrok; }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 400 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 402 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 409 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 416 "syntax.yacc"
    { 
			/* Prepara os parametros */
			paramQty = 0;
			definedParams = 0;
		}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 422 "syntax.yacc"
    {
			int type = -1;
			int badTypes = 0, i, cscope;
			STable_Entry * entry = 0;
			

			for(i = 0; i < paramQty; i++) {
				int found = 0;
				entry = 0;
				/* Procura para ver se a variavel sendo impressa existe */
				for(cscope = scope; !entry && cscope >= 0; cscope--) {
					entry = symbolTable_find(&tables[cscope], parameterList[i].name);
				}
				/* Variavel usada no readln nao existe */
				if(!entry) {
					generateCode = 0; 
					fprintf(stderr, "Erro na linha %d: Variavel %s usada e nao declarada.\n",
						 yylineno, parameterList[i].name);
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
					code[codeLine].type = NOARG;
					code[codeLine++].opCode = LEIT;
					code[codeLine].type = INTEGER;
					code[codeLine].opCode = ARMZ;
					code[codeLine++].iArg = entry->address;
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

  case 64:

/* Line 1455 of yacc.c  */
#line 479 "syntax.yacc"
    {
			paramQty = 0;
			definedParams = 0;
		}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 486 "syntax.yacc"
    {
			int type = -1;
			int badTypes = 0, i, cscope;
			STable_Entry * entry = 0;

			for(i = 0; i < paramQty; i++) {
				int found = 0;
				entry = 0;
				/* Procura para ver se a variavel sendo impressa existe */
				for(cscope = scope; !entry && cscope >= 0; cscope--) {
					entry = symbolTable_find(&tables[cscope], parameterList[i].name);
				}
				/* Variavel usada no readln nao existe */
				if(!entry) {
					generateCode = 0; 
					fprintf(stderr,
						"Erro na linha %d: Variavel %s usada e nao declarada.\n", yylineno, 
						parameterList[i].name);
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
					code[codeLine].opCode = CRVL;
					code[codeLine].type = INTEGER;
					code[codeLine++].iArg = entry->address;
					code[codeLine].type = NOARG;
					code[codeLine++].opCode = IMPR;
				} 
			}
			if(badTypes) 
			{
				generateCode = 0; 
				/* Tipos diferentes (se nao houve algum erro anterior) */
				fprintf(stderr, "Erro na linha %d: tipos diferentes no comando writeln.\n", 
					yylineno);
			}
		}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 540 "syntax.yacc"
    {
			STable_Entry * entry = 0;

			/* Procura em todos os escopos aceitaveis */
			int cscope;
			for(cscope = scope; !entry && cscope >= 0; cscope--) 
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
			 		fprintf (stderr, "%s: %d\n", (yyvsp[(4) - (4)]).name, (yyvsp[(4) - (4)]).type);
			 		fprintf(stderr, "Erro na linha %d: Atribuicao de real a inteiro.\n", 
			 			yylineno, (yyvsp[(1) - (4)]).name);
			 	} 

			 	/* Geração de código */
			 	code[codeLine].opCode = ARMZ;
			 	code[codeLine].type = INTEGER;
			 	code[codeLine++].iArg = entry->address;
			 }
		}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 584 "syntax.yacc"
    {
			/* Endereco de retorno de Loop */
			(yyvsp[(1) - (1)]).codeLine = codeLine;
		}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 590 "syntax.yacc"
    {
			code[codeLine].opCode = DSVF;
			code[codeLine].type = INTEGER;
			/* Pula para a linha duas abaixo! A proxima eh um jump incondicional voltando */
			code[codeLine].iArg = codeLine + 2; 
			codeLine++;
			code[codeLine].opCode = DSVI;
			code[codeLine].type = INTEGER;
			code[codeLine++].iArg = (yyvsp[(1) - (7)]).codeLine;
		}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 604 "syntax.yacc"
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

  case 72:

/* Line 1455 of yacc.c  */
#line 617 "syntax.yacc"
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
				int pushLine = codeLine;
				/* End. de retorno */
				code[codeLine].opCode = PUSHER;
				code[codeLine].type = NOARG; 
				codeLine++;

				for(i = 0; i < checkCount ; i++) {

					if(parameterList[i].type != node->value.type) {
						generateCode = 0; 
						fprintf(stderr, "Erro na linha %d: Parametro %d do procedimento %s:\n\t"
							"%s obtido, %s esperado. \n",
							yylineno, i+1, entry->name,
							(parameterList[i].type==REAL)?"Real":"Inteiro",
							(node->value.type==REAL)?"Real":"Inteiro" );
					}	else {
						/* Gera o codigo */
						code[codeLine].type = INTEGER;
						code[codeLine].iArg = parameterList[i].address;
						code[codeLine++].opCode = PARAM;
 						node = node->next;
					}
				}
				/* Chamada de procedimento */
				code[codeLine].opCode = CHPR;
				code[codeLine].type = INTEGER;
				code[codeLine++].iArg = entry->address;
				code[pushLine].iArg = codeLine;
 			} 
		}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 680 "syntax.yacc"
    {

			/* 
				Linha do desvio 
				COND
				DSVF ELSE
				CODIF
				DESVI DPS
				ELSE
				COD
				DPS 
			*/
			(yyvsp[(1) - (3)]).codeLine = codeLine;
			code[codeLine].opCode = DSVF;
			code[codeLine].type = INTEGER;
			codeLine++;
		}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 700 "syntax.yacc"
    {
			/* Jump do IF - vai para o ELSE */
			code[(yyvsp[(1) - (8)]).codeLine].iArg = (yyvsp[(8) - (8)]).codeLine;
			
		}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 708 "syntax.yacc"
    {
			/* Linha do inicio do while */
			(yyvsp[(1) - (1)]).codeLine = codeLine;
		}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 714 "syntax.yacc"
    {
			/* Linha do pulo do while */
			(yyvsp[(2) - (4)]).codeLine = codeLine;
			code[codeLine].opCode = DSVF;
			code[codeLine++].type = INTEGER; 
		}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 723 "syntax.yacc"
    {
			/* Desvia incondicionalmente para o inicio do while */
			code[(yyvsp[(2) - (8)]).codeLine].iArg = codeLine + 1;
			code[codeLine].opCode = DSVI;
			code[codeLine].type = INTEGER;
			code[codeLine++].iArg = (yyvsp[(1) - (8)]).codeLine;
		}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 735 "syntax.yacc"
    {

			(yyvsp[(1) - (2)]).codeLine = codeLine;
			/* Logo no inicio do else, desvia para o final (para o IF pular) */
			code[codeLine].opCode = DSVI;
			code[codeLine].type = NOARG;
			codeLine++;
		}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 744 "syntax.yacc"
    {
			/* Final do Else - Preenche o pulo para o IF */
			code[(yyvsp[(1) - (4)]).codeLine].iArg = codeLine;
			(yyval).codeLine = (yyvsp[(1) - (4)]).codeLine + 1;
		}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 750 "syntax.yacc"
    {  
			/* Pulo para o if */
			(yyval).codeLine = codeLine; 
		}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 760 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 767 "syntax.yacc"
    {
			STable_Entry * entry = 0;
			int cscope;
			for(cscope = scope; !entry && cscope >= 0; cscope--) {
				entry = symbolTable_find(&tables[cscope], (yyvsp[(1) - (1)]).name);
			}
			if(!entry) {
				generateCode = 0; 
				fprintf(stderr, "Erro na linha %d: Parametro %s nao declarado.\n",
					yylineno, (yyvsp[(1) - (1)]).name);
				/* Adiciona na lista de parametros */
				parameterList[paramQty++] = (yyvsp[(1) - (1)]); 
			} else parameterList[paramQty++] =  *entry;

		}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 784 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 791 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 793 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 800 "syntax.yacc"
    {
			if((yyvsp[(2) - (3)]).category == OP_EQ) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPIG;
			} else if((yyvsp[(2) - (3)]).category == OP_DF) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CDES;
			} else if((yyvsp[(2) - (3)]).category == OP_GR) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPMA;
			} else if((yyvsp[(2) - (3)]).category == OP_LS) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPME;
			} else if((yyvsp[(2) - (3)]).category == OP_GE) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPMI;
			} else if((yyvsp[(2) - (3)]).category == OP_LE) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = CPMI;
			}
		}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 822 "syntax.yacc"
    { generateCode = 0; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 838 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).type == REAL || (yyvsp[(2) - (2)]).type == REAL) (yyval).type = REAL;
			else if((yyvsp[(1) - (2)]).type == ERROR || (yyvsp[(2) - (2)]).type == ERROR) (yyval).type = ERROR;
			else (yyval).type = INTEGER;
		}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 848 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).category == OP_MI) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = INVE;
			}
		}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 855 "syntax.yacc"
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

  case 103:

/* Line 1455 of yacc.c  */
#line 871 "syntax.yacc"
    { 
			/* Geração de código */
			code[codeLine].opCode = CRCT;
			/* Checa o tipo do numero, para usar o campo correto */
			if((yyvsp[(1) - (1)]).type == REAL) {
				code[codeLine].type = REAL;
				code[codeLine++].rArg = (yyvsp[(1) - (1)]).rval;
			} else  {
				code[codeLine].type = INTEGER;
				code[codeLine++].iArg = (yyvsp[(1) - (1)]).ival;
			}

			(yyval).type = (yyvsp[(1) - (1)]).type; 
		}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 887 "syntax.yacc"
    { 
			(yyval).type = (yyvsp[(2) - (3)]).type; 
		}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 892 "syntax.yacc"
    {
			/* Busca o identificador na tabela de simbolos */
			STable_Entry * entry = 0;
			int cscope;
			for(cscope = scope; !entry && cscope >= 0; cscope--)
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

					if(entry->category == VAR) {
						/* Geracao de codigo se for variavel */
						code[codeLine].opCode = CRVL;
						code[codeLine].type = INTEGER;
						code[codeLine++].iArg = entry->address;
					} else {
						/* Geracao de codigo para constante */
						code[codeLine].opCode = CRCT;
						if(entry->type == REAL) {
							code[codeLine].type = REAL;
							code[codeLine++].rArg = entry->rval;
						} else {
							code[codeLine].type = INTEGER;
							code[codeLine++].iArg = entry->ival;
						}
 					}


					strcpy((yyval).name, entry->name);
					(yyval).type = (yyvsp[(1) - (1)]).type;
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
				
			}
		}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 949 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).category == OP_ML) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = MULT;
			} else {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = DIVI;
			}

		}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 960 "syntax.yacc"
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

  case 108:

/* Line 1455 of yacc.c  */
#line 978 "syntax.yacc"
    { (yyval).type = INTEGER; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 984 "syntax.yacc"
    {
			if((yyvsp[(1) - (2)]).category == OP_PL) {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = SOMA;
			} else {
				code[codeLine].type = NOARG;
				code[codeLine++].opCode = SUBT;
			}
		}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 994 "syntax.yacc"
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

  case 111:

/* Line 1455 of yacc.c  */
#line 1004 "syntax.yacc"
    { (yyval).type = INTEGER; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1010 "syntax.yacc"
    { 
			/* Adiciona a lista de parametros */
			(yyvsp[(1) - (1)]).category = VAR;
			parameterList[paramQty++] = (yyvsp[(1) - (1)]); 
		}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1046 "syntax.yacc"
    { (yyval).type = REAL; }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1050 "syntax.yacc"
    { (yyval).type = INTEGER; }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1056 "syntax.yacc"
    { (yyval).type = INTEGER; }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1059 "syntax.yacc"
    { (yyval).type = REAL; }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1062 "syntax.yacc"
    { (yyval).type = CHAR; }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1067 "syntax.yacc"
    { yyerrok; }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1072 "syntax.yacc"
    { yyless(0); }
    break;



/* Line 1455 of yacc.c  */
#line 2791 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 1074 "syntax.yacc"



void yyerror(const char *s) {

	generateCode = 0; 
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	char esperado[50], obtido[50], *pos;
	int n = 0, len;
	/* Pega os tokens esperado e obtido */
	sscanf(s, "syntax error, unexpected %[^,], expecting%s%n", obtido, esperado, &n);
	if(strcmp(obtido, "$end") == 0) { /*Fim de arquivo eh representado por $end*/
		fprintf(stderr, "Final inesperado de arquivo.\n");
	} else {
		if(n) {
			if (!strcmp (obtido, "Comentario_nao_fechado")) {
				
				fprintf (stderr, "Erro na linha %d: '%s'\n", yylineno, obtido);
			} else {
				if (!strcmp (obtido, "SB_VG"))	strcpy (obtido, ",");
				/*Mostra a linha do erro e o simbolo obtido*/
				fprintf(stderr, "Erro na linha %d: '%s' inesperado", yylineno, obtido);
				/*Mostra a cadeia caso seja um erro lexico ou um identificador*/
				if (!strcmp (obtido, "identificador")
					|| obtido[0] >= 'A' && obtido[0] <= 'Z')	fprintf (stderr, " [%s]", yytext);
				/*Renomeia '$end' para 'Fim_de_arquivo'*/
				if (!strcmp (esperado, "$end"))	strcpy (esperado, "Fim_de_arquivo");
				/*Mostra o(s) simbolo(s) esperado(s)*/
				fprintf (stderr, ", esperava '%s'",esperado);
				pos = (char*)s+n;
				len = strlen (s);
				/*Mostra todos, caso haja mais de um*/
				while (pos < s+len) {
					sscanf (pos, " or %s%n", esperado, &n);
					pos += n;
					fprintf (stderr, " ou '%s'", esperado);
				}
				fprintf (stderr, "\n");
			}
		} else
				/*Se nao estava esperando nenhum simbolo*/
				fprintf(stderr, "Erro na linha %d: '%s' inesperado.\n", yylineno, obtido);
	}
}

int main(int argc, char **argv )
{
	scope = 0;
	codeLine = 0;
	usedAddress = 0;
	generateCode = 1;
	scope0procedures = 0;

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

	if(argc >= 2) {
		file = fopen(argv[1], "w");
	} else {
		/* Y U NO NAME UR PROGRAM ): */
		file = fopen("youGiveMe.noName", "w");
	}


	code[codeLine].type = NOARG;
	code[codeLine++].opCode = INPP;
	
	desvLine = -1;

	/*Processa*/
	yyparse();

	code[desvLine].iArg = mainLine;
	code[codeLine].type = NOARG;
	code[codeLine++].opCode = PARA;
	
	if(generateCode) {
		fprintf(stderr, "Codigo compilado com sucesso.\n");
		flushCode(file, code, &codeLine);
	} else {
		if(argc >= 2)
			remove(argv[1]);
		else remove("youGiveMe.noName");
	}

	fclose(file);
	return 0;
}


