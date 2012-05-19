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
     NRO_INTEIRO = 281,
     PROGRAM = 282,
     BEG = 283,
     END = 284,
     CONST = 285,
     VAR = 286,
     REAL = 287,
     INTEGER = 288,
     CHAR = 289,
     PROCEDURE = 290,
     IF = 291,
     ELSE = 292,
     READLN = 293,
     WRITELN = 294,
     REPEAT = 295,
     THEN = 296,
     UNTIL = 297,
     WHILE = 298,
     FUNCTION = 299
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
#define NRO_INTEIRO 281
#define PROGRAM 282
#define BEG 283
#define END 284
#define CONST 285
#define VAR 286
#define REAL 287
#define INTEGER 288
#define CHAR 289
#define PROCEDURE 290
#define IF 291
#define ELSE 292
#define READLN 293
#define WRITELN 294
#define REPEAT 295
#define THEN 296
#define UNTIL 297
#define WHILE 298
#define FUNCTION 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

