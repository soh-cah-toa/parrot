/* ex: set ro ft=c:
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *
 * This file is generated automatically from 'compilers/imcc/imcc.y'
 * by tools/build/fixup_gen_file.pl.
 *
 * Any changes made here will be lost!
 *
 */
/* HEADERIZER HFILE: none */
/* HEADERIZER STOP */

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
     LOW_PREC = 258,
     PARAM = 259,
     SOL = 260,
     HLL = 261,
     TK_LINE = 262,
     TK_FILE = 263,
     GOTO = 264,
     ARG = 265,
     IF = 266,
     UNLESS = 267,
     PNULL = 268,
     SET_RETURN = 269,
     SET_YIELD = 270,
     ADV_FLAT = 271,
     ADV_SLURPY = 272,
     ADV_OPTIONAL = 273,
     ADV_OPT_FLAG = 274,
     ADV_NAMED = 275,
     ADV_ARROW = 276,
     ADV_INVOCANT = 277,
     ADV_CALL_SIG = 278,
     NAMESPACE = 279,
     DOT_METHOD = 280,
     SUB = 281,
     SYM = 282,
     LOCAL = 283,
     LEXICAL = 284,
     CONST = 285,
     ANNOTATE = 286,
     GLOBAL_CONST = 287,
     PLUS_ASSIGN = 288,
     MINUS_ASSIGN = 289,
     MUL_ASSIGN = 290,
     DIV_ASSIGN = 291,
     CONCAT_ASSIGN = 292,
     BAND_ASSIGN = 293,
     BOR_ASSIGN = 294,
     BXOR_ASSIGN = 295,
     FDIV = 296,
     FDIV_ASSIGN = 297,
     MOD_ASSIGN = 298,
     SHR_ASSIGN = 299,
     SHL_ASSIGN = 300,
     SHR_U_ASSIGN = 301,
     SHIFT_LEFT = 302,
     SHIFT_RIGHT = 303,
     INTV = 304,
     FLOATV = 305,
     STRINGV = 306,
     PMCV = 307,
     LOG_XOR = 308,
     RELOP_EQ = 309,
     RELOP_NE = 310,
     RELOP_GT = 311,
     RELOP_GTE = 312,
     RELOP_LT = 313,
     RELOP_LTE = 314,
     RESULT = 315,
     RETURN = 316,
     TAILCALL = 317,
     YIELDT = 318,
     GET_RESULTS = 319,
     POW = 320,
     SHIFT_RIGHT_U = 321,
     LOG_AND = 322,
     LOG_OR = 323,
     COMMA = 324,
     ESUB = 325,
     DOTDOT = 326,
     PCC_BEGIN = 327,
     PCC_END = 328,
     PCC_CALL = 329,
     PCC_SUB = 330,
     PCC_BEGIN_RETURN = 331,
     PCC_END_RETURN = 332,
     PCC_BEGIN_YIELD = 333,
     PCC_END_YIELD = 334,
     INVOCANT = 335,
     MAIN = 336,
     LOAD = 337,
     INIT = 338,
     IMMEDIATE = 339,
     POSTCOMP = 340,
     METHOD = 341,
     ANON = 342,
     OUTER = 343,
     NEED_LEX = 344,
     MULTI = 345,
     VTABLE_METHOD = 346,
     LOADLIB = 347,
     SUB_INSTANCE_OF = 348,
     SUBID = 349,
     NS_ENTRY = 350,
     LABEL = 351,
     EMIT = 352,
     EOM = 353,
     IREG = 354,
     NREG = 355,
     SREG = 356,
     PREG = 357,
     IDENTIFIER = 358,
     REG = 359,
     MACRO = 360,
     ENDM = 361,
     STRINGC = 362,
     INTC = 363,
     FLOATC = 364,
     USTRINGC = 365,
     PARROT_OP = 366,
     VAR = 367,
     LINECOMMENT = 368,
     FILECOMMENT = 369,
     DOT = 370,
     CONCAT = 371
   };
#endif
/* Tokens.  */
#define LOW_PREC 258
#define PARAM 259
#define SOL 260
#define HLL 261
#define TK_LINE 262
#define TK_FILE 263
#define GOTO 264
#define ARG 265
#define IF 266
#define UNLESS 267
#define PNULL 268
#define SET_RETURN 269
#define SET_YIELD 270
#define ADV_FLAT 271
#define ADV_SLURPY 272
#define ADV_OPTIONAL 273
#define ADV_OPT_FLAG 274
#define ADV_NAMED 275
#define ADV_ARROW 276
#define ADV_INVOCANT 277
#define ADV_CALL_SIG 278
#define NAMESPACE 279
#define DOT_METHOD 280
#define SUB 281
#define SYM 282
#define LOCAL 283
#define LEXICAL 284
#define CONST 285
#define ANNOTATE 286
#define GLOBAL_CONST 287
#define PLUS_ASSIGN 288
#define MINUS_ASSIGN 289
#define MUL_ASSIGN 290
#define DIV_ASSIGN 291
#define CONCAT_ASSIGN 292
#define BAND_ASSIGN 293
#define BOR_ASSIGN 294
#define BXOR_ASSIGN 295
#define FDIV 296
#define FDIV_ASSIGN 297
#define MOD_ASSIGN 298
#define SHR_ASSIGN 299
#define SHL_ASSIGN 300
#define SHR_U_ASSIGN 301
#define SHIFT_LEFT 302
#define SHIFT_RIGHT 303
#define INTV 304
#define FLOATV 305
#define STRINGV 306
#define PMCV 307
#define LOG_XOR 308
#define RELOP_EQ 309
#define RELOP_NE 310
#define RELOP_GT 311
#define RELOP_GTE 312
#define RELOP_LT 313
#define RELOP_LTE 314
#define RESULT 315
#define RETURN 316
#define TAILCALL 317
#define YIELDT 318
#define GET_RESULTS 319
#define POW 320
#define SHIFT_RIGHT_U 321
#define LOG_AND 322
#define LOG_OR 323
#define COMMA 324
#define ESUB 325
#define DOTDOT 326
#define PCC_BEGIN 327
#define PCC_END 328
#define PCC_CALL 329
#define PCC_SUB 330
#define PCC_BEGIN_RETURN 331
#define PCC_END_RETURN 332
#define PCC_BEGIN_YIELD 333
#define PCC_END_YIELD 334
#define INVOCANT 335
#define MAIN 336
#define LOAD 337
#define INIT 338
#define IMMEDIATE 339
#define POSTCOMP 340
#define METHOD 341
#define ANON 342
#define OUTER 343
#define NEED_LEX 344
#define MULTI 345
#define VTABLE_METHOD 346
#define LOADLIB 347
#define SUB_INSTANCE_OF 348
#define SUBID 349
#define NS_ENTRY 350
#define LABEL 351
#define EMIT 352
#define EOM 353
#define IREG 354
#define NREG 355
#define SREG 356
#define PREG 357
#define IDENTIFIER 358
#define REG 359
#define MACRO 360
#define ENDM 361
#define STRINGC 362
#define INTC 363
#define FLOATC 364
#define USTRINGC 365
#define PARROT_OP 366
#define VAR 367
#define LINECOMMENT 368
#define FILECOMMENT 369
#define DOT 370
#define CONCAT 371




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 1025 "compilers/imcc/imcc.y"

    IdList * idlist;
    int t;
    char * s;
    SymReg * sr;
    Instruction *i;



/* Line 1676 of yacc.c  */
#line 294 "compilers/imcc/imcparser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




