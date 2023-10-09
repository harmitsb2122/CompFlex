/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BREAK = 258,                   /* BREAK  */
    CHAR = 259,                    /* CHAR  */
    CONST = 260,                   /* CONST  */
    CONTINUE = 261,                /* CONTINUE  */
    ELSE = 262,                    /* ELSE  */
    ELIF = 263,                    /* ELIF  */
    FLOAT = 264,                   /* FLOAT  */
    FOR = 265,                     /* FOR  */
    IN = 266,                      /* IN  */
    IF = 267,                      /* IF  */
    INT = 268,                     /* INT  */
    RETURN = 269,                  /* RETURN  */
    SIZEOF = 270,                  /* SIZEOF  */
    VOID = 271,                    /* VOID  */
    BOOL = 272,                    /* BOOL  */
    STRING = 273,                  /* STRING  */
    ADD_ASSIGN = 274,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 275,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 276,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 277,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 278,              /* MOD_ASSIGN  */
    POW_ASSIGN = 279,              /* POW_ASSIGN  */
    INC_OP = 280,                  /* INC_OP  */
    DEC_OP = 281,                  /* DEC_OP  */
    OR_OP = 282,                   /* OR_OP  */
    AND_OP = 283,                  /* AND_OP  */
    LE_OP = 284,                   /* LE_OP  */
    GE_OP = 285,                   /* GE_OP  */
    EQ_OP = 286,                   /* EQ_OP  */
    NE_OP = 287,                   /* NE_OP  */
    C_CONST = 288,                 /* C_CONST  */
    S_CONST = 289,                 /* S_CONST  */
    B_CONST = 290,                 /* B_CONST  */
    I_CONST = 291,                 /* I_CONST  */
    F_CONST = 292,                 /* F_CONST  */
    IDENTIFIER = 293,              /* IDENTIFIER  */
    LET = 294,                     /* LET  */
    PRINT = 295,                   /* PRINT  */
    PRINTS = 296,                  /* PRINTS  */
    SCAN = 297,                    /* SCAN  */
    VAR = 298,                     /* VAR  */
    NULL_ = 299,                   /* NULL_  */
    MALLOC = 300,                  /* MALLOC  */
    ASM = 301                      /* ASM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BREAK 258
#define CHAR 259
#define CONST 260
#define CONTINUE 261
#define ELSE 262
#define ELIF 263
#define FLOAT 264
#define FOR 265
#define IN 266
#define IF 267
#define INT 268
#define RETURN 269
#define SIZEOF 270
#define VOID 271
#define BOOL 272
#define STRING 273
#define ADD_ASSIGN 274
#define SUB_ASSIGN 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define POW_ASSIGN 279
#define INC_OP 280
#define DEC_OP 281
#define OR_OP 282
#define AND_OP 283
#define LE_OP 284
#define GE_OP 285
#define EQ_OP 286
#define NE_OP 287
#define C_CONST 288
#define S_CONST 289
#define B_CONST 290
#define I_CONST 291
#define F_CONST 292
#define IDENTIFIER 293
#define LET 294
#define PRINT 295
#define PRINTS 296
#define SCAN 297
#define VAR 298
#define NULL_ 299
#define MALLOC 300
#define ASM 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "parser.y"

	char* str;		//used for returning the identifiers from the lexer.
	int intval;

	struct			//used by grammar symbols that evaluate to expressions.
	{
		char* type;
		char* addr;
	} var;

#line 170 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
