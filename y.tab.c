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
#line 51 "yacc.yacc"
 
	#include  "lex.yy.c"
	#include <string.h>

	char errv[100]; 
	int yydebug = 1;
	extern int yylineno;
#line 59 "yacc.yacc"
 void yyerror(const char*); 

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 208 "y.tab.c"

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
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  234

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
       0,     0,     3,     9,    14,    20,    26,    30,    38,    43,
      47,    48,    57,    62,    66,    67,    76,    82,    87,    88,
      90,    93,    96,    99,   102,   104,   107,   110,   113,   115,
     118,   122,   124,   128,   129,   134,   141,   145,   148,   153,
     156,   157,   164,   165,   173,   176,   179,   184,   187,   188,
     195,   202,   208,   213,   220,   225,   233,   240,   244,   245,
     249,   250,   255,   260,   264,   265,   269,   272,   274,   276,
     278,   280,   282,   284,   287,   291,   293,   297,   300,   304,
     305,   309,   310,   314,   317,   318,   320,   322,   323,   325,
     327,   329,   331,   333,   335,   337,   339,   341,   344,   345,
     346
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    28,     3,    15,    49,    16,    -1,    28,
       1,    49,    16,    -1,     1,    15,    82,    49,    16,    -1,
      50,    29,    62,    30,    82,    -1,    51,    52,    53,    -1,
      31,     3,    82,     4,    80,    15,    51,    -1,     1,    54,
      82,    51,    -1,    31,     1,    51,    -1,    -1,    32,    75,
      82,    17,    81,    15,    82,    52,    -1,     1,    55,    82,
      52,    -1,    32,     1,    52,    -1,    -1,    36,     3,    82,
      57,    15,    60,    82,    53,    -1,    36,     1,    60,    82,
      53,    -1,     1,    56,    82,    53,    -1,    -1,    15,    -1,
      31,    84,    -1,    32,    84,    -1,    36,    84,    -1,    29,
      84,    -1,    15,    -1,    32,    84,    -1,    36,    84,    -1,
      29,    84,    -1,    15,    -1,    36,    84,    -1,    29,    84,
      60,    -1,    30,    -1,    19,    58,    20,    -1,    -1,    75,
      17,    81,    59,    -1,     1,    75,    17,    81,    82,    59,
      -1,     1,    59,    82,    -1,    15,    58,    -1,     1,    15,
      82,    58,    -1,     1,    58,    -1,    -1,    52,    29,    82,
      62,    30,    15,    -1,    -1,    52,    29,    82,    62,    30,
      61,    82,    -1,    52,     1,    -1,     1,    60,    -1,    63,
      15,    82,    62,    -1,     1,    62,    -1,    -1,    39,    82,
      19,    75,    20,    82,    -1,    40,    82,    19,    75,    20,
      82,    -1,    29,    82,    62,    30,    82,    -1,     3,    82,
       4,    70,    -1,    41,    82,    62,    43,    82,    68,    -1,
       3,    82,    65,    82,    -1,    37,    82,    68,    42,    82,
      63,    64,    -1,    44,    82,    68,    45,    82,    63,    -1,
      38,    82,    63,    -1,    -1,    19,    66,    20,    -1,    -1,
       3,    82,    67,    82,    -1,    15,    82,    66,    82,    -1,
       1,    66,    82,    -1,    -1,    70,    69,    70,    -1,    70,
       1,    -1,    14,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    71,    74,    -1,    77,    72,    73,
      -1,    80,    -1,    19,    70,    20,    -1,     3,    65,    -1,
      79,    72,    73,    -1,    -1,    78,    71,    74,    -1,    -1,
       3,    82,    76,    -1,    18,    75,    -1,    -1,    10,    -1,
      11,    -1,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    27,    -1,    26,    -1,    34,    -1,    33,    -1,    35,
      -1,     1,    83,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    69,    70,    75,    80,    85,    87,    89,
      90,    95,    97,    99,   100,   105,   108,   110,   111,   116,
     117,   118,   119,   120,   125,   126,   127,   128,   133,   134,
     135,   136,   141,   142,   147,   148,   149,   154,   156,   157,
     158,   163,   165,   165,   167,   169,   173,   174,   175,   179,
     180,   181,   182,   183,   184,   185,   186,   190,   191,   195,
     196,   200,   204,   205,   206,   210,   211,   215,   216,   217,
     218,   219,   220,   224,   228,   234,   235,   237,   241,   242,
     246,   247,   251,   255,   256,   260,   261,   262,   266,   267,
     271,   272,   276,   277,   281,   282,   283,   284,   288,   292,
     296
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
  "corpo", "dc", "dc_c", "dc_v", "dc_p", "err_c", "err_v", "err_p",
  "parametros", "lista_par", "mais_par", "corpo_p", "@1", "comandos",
  "cmd", "pfalsa", "lista_arg", "argumentos", "mais_ident", "condicao",
  "relacao", "expressao", "termo", "fator", "mais_fatores",
  "outros_termos", "variaveis", "mais_var", "op_un", "op_ad", "op_mul",
  "numero", "tipo_var", "ok", "clear", "less", 0
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
       0,    47,    48,    48,    48,    49,    50,    51,    51,    51,
      51,    52,    52,    52,    52,    53,    53,    53,    53,    54,
      54,    54,    54,    54,    55,    55,    55,    55,    56,    56,
      56,    56,    57,    57,    58,    58,    58,    59,    59,    59,
      59,    60,    61,    60,    60,    60,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    67,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    70,    71,    72,    72,    72,    73,    73,
      74,    74,    75,    76,    76,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    83,
      84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     5,     5,     3,     7,     4,     3,
       0,     8,     4,     3,     0,     8,     5,     4,     0,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       3,     1,     3,     0,     4,     6,     3,     2,     4,     2,
       0,     6,     0,     7,     2,     2,     4,     2,     0,     6,
       6,     5,     4,     6,     4,     7,     6,     3,     0,     3,
       0,     4,     4,     3,     0,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     3,     2,     3,     0,
       3,     0,     3,     2,     0,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    98,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,    19,   100,   100,   100,
     100,    98,     0,    98,     3,     0,     0,     0,     0,     0,
       4,    23,    20,    21,    22,     0,     9,     0,     0,    98,
      98,    98,    98,    98,    98,    98,     0,     0,    24,   100,
     100,   100,    98,     0,    98,    98,     0,     0,     6,     2,
       8,     0,    47,    60,     0,    87,     0,     0,     0,    87,
      98,    98,    27,    25,    26,     0,    13,    84,     0,    28,
     100,    31,   100,    98,     0,    98,    93,    92,     0,    87,
       0,    98,     0,    85,    86,     0,     0,    81,     0,     0,
       0,     0,     0,     5,     0,    12,     0,    82,     0,     0,
      29,     0,     0,     0,    98,    33,     0,    52,    98,     0,
      54,    98,    98,    66,    68,    69,    70,    71,    72,    67,
      87,    88,    89,    73,    87,    60,    87,    79,    75,     0,
       0,    98,    98,    46,    83,    99,    95,    94,    96,     0,
      30,    17,     0,    45,    44,    98,     0,     0,     0,     7,
       0,    59,    51,     0,    65,    81,    77,     0,    90,    91,
      74,     0,    98,    98,    87,     0,    97,    98,     0,    16,
       0,     0,     0,     0,     0,    98,    98,    58,    80,    76,
      79,    49,    50,    53,    56,     0,     0,     0,     0,    98,
       0,    32,     0,    98,    98,     0,    61,    98,    55,    78,
      11,    42,    98,    39,    37,    36,     0,     0,     0,    63,
      98,     0,    41,    98,     0,    98,    34,    15,    62,    57,
      43,    38,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    13,   113,    58,    21,    52,    83,
     158,   181,   199,   114,   223,    46,    47,   208,    91,   119,
     186,    95,   130,    96,    97,   137,   170,   133,   182,   107,
      98,   134,   171,   138,   149,     8,   176,    73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
      40,    30,    41,     5,  -180,    74,    56,  -180,    74,   161,
     110,    70,    83,    87,    74,    99,  -180,  -180,  -180,  -180,
    -180,  -180,    74,  -180,  -180,    88,   143,   147,    11,   108,
    -180,  -180,  -180,  -180,  -180,    74,  -180,   127,    55,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,   119,   145,  -180,  -180,
    -180,  -180,  -180,    87,  -180,  -180,   132,   152,  -180,  -180,
    -180,   185,  -180,    50,    88,   210,   158,   169,   101,   210,
    -180,  -180,  -180,  -180,  -180,    87,  -180,   178,   202,  -180,
    -180,  -180,  -180,  -180,    34,  -180,  -180,  -180,   207,   210,
     197,  -180,   196,  -180,  -180,   187,   209,   214,   154,   227,
     227,   188,   189,  -180,    55,  -180,   227,  -180,    26,    34,
    -180,    11,   107,    38,  -180,   213,    74,  -180,  -180,   216,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
     210,  -180,  -180,  -180,   210,   218,   210,   215,  -180,   219,
     220,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,   223,
    -180,  -180,   134,  -180,  -180,  -180,    11,   204,   226,  -180,
     183,  -180,  -180,   130,  -180,   214,  -180,   222,  -180,  -180,
    -180,   154,  -180,  -180,   210,   130,  -180,  -180,    88,  -180,
     186,   224,   228,    34,   197,  -180,  -180,   195,  -180,  -180,
     215,  -180,  -180,  -180,  -180,    87,   205,    75,   204,  -180,
     229,  -180,    26,  -180,  -180,   197,  -180,  -180,  -180,  -180,
    -180,   232,  -180,  -180,  -180,  -180,    26,   193,    11,  -180,
    -180,   130,  -180,  -180,   204,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,   193,  -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,    73,  -180,    -9,   -10,  -104,  -180,  -180,  -180,
    -180,  -169,  -179,  -101,  -180,   -32,  -138,  -180,   113,  -175,
    -180,   -65,  -180,   -79,   109,    78,    60,    86,   -26,  -180,
    -180,  -180,  -180,   191,    -7,   -21,  -180,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -101
static const yytype_int16 yytable[] =
{
      35,    55,    37,    28,   102,     7,    62,   151,   150,   204,
     117,   153,    56,    36,    31,    32,    33,    34,    63,    64,
      65,    66,    67,    68,    69,   187,    60,   145,   213,   214,
     220,    75,    92,    77,    78,   112,   101,   194,   226,   154,
     -18,     1,     5,    76,     6,     4,    72,    57,    74,   103,
     104,   164,   179,   233,    89,   231,    38,   167,    39,   146,
     147,   148,   111,   -14,   115,   105,    27,   155,     2,    90,
     120,    14,   143,   139,   140,     9,   180,   109,    54,   110,
     144,    15,   203,   229,    40,   -48,    24,    29,    26,    38,
     212,    39,    41,   156,    42,    43,    44,   160,   -48,    45,
     162,   163,    38,   -10,    39,    10,   -10,   159,   112,   193,
     -10,    22,    25,    23,   227,    30,   -14,    40,   -48,    27,
     174,   175,    48,   -14,    59,    41,    55,    42,    43,    44,
      40,    61,    45,    39,   178,    53,    49,    54,    41,   152,
      42,    43,    44,    51,   -48,    45,   196,    79,    53,    70,
      54,   191,   192,    84,   200,    85,   195,   135,    48,    40,
      71,    80,    81,  -100,   205,   206,  -100,    41,    82,    42,
      43,    44,    49,   136,    45,    50,    16,    99,   215,    51,
      86,    87,   218,   219,   184,   210,   221,   197,   100,    54,
      17,   224,    18,    19,   197,   217,   106,    20,   185,   228,
     118,   198,   230,   -64,   232,   180,   -40,    54,   198,   225,
     123,    86,    87,   -40,   124,   125,   126,   127,   128,   108,
      93,    94,   116,   129,   131,   132,   121,   168,   169,   122,
      54,   141,   157,   207,   142,   211,   161,    90,   177,   172,
     173,   183,   189,   165,   201,   202,   216,   222,   166,   190,
     209,   188,    88
};

static const yytype_uint8 yycheck[] =
{
      21,    27,    23,    13,    69,     0,    38,   111,   109,   184,
      89,   112,     1,    22,    17,    18,    19,    20,    39,    40,
      41,    42,    43,    44,    45,   163,    35,     1,   197,   198,
     205,    52,    64,    54,    55,     1,    68,   175,   217,     1,
      29,     1,     1,    53,     3,    15,    49,    36,    51,    70,
      71,   130,   156,   232,     4,   224,     1,   136,     3,    33,
      34,    35,    83,    29,    85,    75,    32,    29,    28,    19,
      91,    15,   104,    99,   100,     1,     1,    80,     3,    82,
     106,     8,   183,   221,    29,    30,    16,    14,     1,     1,
      15,     3,    37,   114,    39,    40,    41,   118,    43,    44,
     121,   122,     1,    29,     3,    31,    32,   116,     1,   174,
      36,     1,    29,     3,   218,    16,    29,    29,    30,    32,
     141,   142,    15,    36,    16,    37,   152,    39,    40,    41,
      29,     4,    44,     3,   155,     1,    29,     3,    37,    32,
      39,    40,    41,    36,    43,    44,   178,    15,     1,    30,
       3,   172,   173,     1,   180,     3,   177,     3,    15,    29,
      15,    29,    30,    29,   185,   186,    32,    37,    36,    39,
      40,    41,    29,    19,    44,    32,    15,    19,   199,    36,
      26,    27,   203,   204,     1,   195,   207,     1,    19,     3,
      29,   212,    31,    32,     1,   202,    18,    36,    15,   220,
       3,    15,   223,    20,   225,     1,    20,     3,    15,   216,
       1,    26,    27,    20,     5,     6,     7,     8,     9,    17,
      10,    11,    15,    14,    10,    11,    30,    12,    13,    42,
       3,    43,    19,    38,    45,    30,    20,    19,    15,    20,
      20,    15,    20,   134,    20,    17,    17,    15,   135,   171,
     190,   165,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    48,    15,     1,     3,     0,    82,     1,
      31,    49,    50,    51,    15,    49,    15,    29,    31,    32,
      36,    54,     1,     3,    16,    29,     1,    32,    52,    49,
      16,    84,    84,    84,    84,    82,    51,    82,     1,     3,
      29,    37,    39,    40,    41,    44,    62,    63,    15,    29,
      32,    36,    55,     1,     3,    75,     1,    36,    53,    16,
      51,     4,    62,    82,    82,    82,    82,    82,    82,    82,
      30,    15,    84,    84,    84,    82,    52,    82,    82,    15,
      29,    30,    36,    56,     1,     3,    26,    27,    80,     4,
      19,    65,    62,    10,    11,    68,    70,    71,    77,    19,
      19,    62,    68,    82,    82,    52,    18,    76,    17,    84,
      84,    82,     1,    52,    60,    82,    15,    70,     3,    66,
      82,    30,    42,     1,     5,     6,     7,     8,     9,    14,
      69,    10,    11,    74,    78,     3,    19,    72,    80,    75,
      75,    43,    45,    62,    75,     1,    33,    34,    35,    81,
      60,    53,    32,    60,     1,    29,    82,    19,    57,    51,
      82,    20,    82,    82,    70,    71,    65,    70,    12,    13,
      73,    79,    20,    20,    82,    82,    83,    15,    82,    53,
       1,    58,    75,    15,     1,    15,    67,    63,    74,    20,
      72,    82,    82,    68,    63,    82,    62,     1,    15,    59,
      75,    20,    17,    60,    66,    82,    82,    38,    64,    73,
      52,    30,    15,    58,    58,    82,    17,    81,    82,    82,
      66,    82,    15,    61,    82,    81,    59,    53,    82,    63,
      82,    58,    82,    59
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
        case 42:
#line 165 "yacc.yacc"
    { sprintf(errv, "syntax error, unexpected %s, expecting ;", yytext); yyerror (errv); }
    break;

  case 98:
#line 288 "yacc.yacc"
    { yyerrok; }
    break;

  case 99:
#line 292 "yacc.yacc"
    { yyclearin; }
    break;

  case 100:
#line 296 "yacc.yacc"
    { yyless(0); }
    break;


/* Line 1267 of yacc.c.  */
#line 1629 "y.tab.c"
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


#line 298 "yacc.yacc"


void yyerror(const char *s) {
	/* Parsing do erro (Modo verbose identifica os lugares, basta recuperar) */
	/* Pega os tokens esperado e obtido */
	char esperado[50], obtido[50], *pos;
	int n = 0;
	sscanf(s, "syntax error, unexpected %[^,], expecting%s%n", obtido, esperado, &n);
	if(strcmp(obtido, "$end") == 0) {
		printf("Final inesperado de arquivo.\n");
	} else {
		if(n) {
			if (!strcmp (obtido, "SB_VG"))	strcpy (obtido, ",");
			printf("Erro na linha %d: '%s' inesperado", yylineno, obtido);
			if (!strcmp (obtido, "identificador")
				|| obtido[0] >= 'A' && obtido[0] <= 'Z')	printf (" [%s]", yytext);
			if (!strcmp (esperado, "$end"))	strcpy (esperado, "Fim_de_arquivo");
			printf (", esperava '%s'",esperado);
			pos = (char*)s+n;
			while (*pos != '\0') {
				sscanf (pos, " or %s%n", esperado, &n);
				pos += n;
				printf (" ou '%s'", esperado);
			}
			printf ("\n");

		} else
			printf("Erro na linha %d: '%s' inesperado.\n", yylineno, obtido);
	}
}

int main(int argc, char **argv )
{
	initializeTrie(&pr);

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
	
	++argv, --argc;  /* skip over program name */
	if ( argc > 0 )
	    yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	return yyparse();

	return 0;
}


