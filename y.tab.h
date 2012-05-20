
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ER_IFL = 258,
     NRO_REAL = 259,
     IDENT = 260,
     ER_IDG = 261,
     OP_AT = 262,
     OP_DF = 263,
     OP_GE = 264,
     OP_LE = 265,
     OP_GR = 266,
     OP_LS = 267,
     OP_PL = 268,
     OP_MI = 269,
     OP_ML = 270,
     OP_DV = 271,
     OP_EQ = 272,
     SB_PV = 273,
     SB_PF = 274,
     SB_DP = 275,
     SB_VG = 276,
     SB_PO = 277,
     SB_PC = 278,
     ER_NMF = 279,
     ER_CIN = 280,
     ER_CNF = 281,
     NRO_INTEIRO = 282,
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
     FUNCTION = 300
   };
#endif
/* Tokens.  */
#define ER_IFL 258
#define NRO_REAL 259
#define IDENT 260
#define ER_IDG 261
#define OP_AT 262
#define OP_DF 263
#define OP_GE 264
#define OP_LE 265
#define OP_GR 266
#define OP_LS 267
#define OP_PL 268
#define OP_MI 269
#define OP_ML 270
#define OP_DV 271
#define OP_EQ 272
#define SB_PV 273
#define SB_PF 274
#define SB_DP 275
#define SB_VG 276
#define SB_PO 277
#define SB_PC 278
#define ER_NMF 279
#define ER_CIN 280
#define ER_CNF 281
#define NRO_INTEIRO 282
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
#define FUNCTION 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


