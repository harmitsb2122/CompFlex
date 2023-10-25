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
    STRUCT = 269,                  /* STRUCT  */
    RETURN = 270,                  /* RETURN  */
    SIZEOF = 271,                  /* SIZEOF  */
    VOID = 272,                    /* VOID  */
    BOOL = 273,                    /* BOOL  */
    STRING = 274,                  /* STRING  */
    ADD_ASSIGN = 275,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 276,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 277,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 278,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 279,              /* MOD_ASSIGN  */
    POW_ASSIGN = 280,              /* POW_ASSIGN  */
    INC_OP = 281,                  /* INC_OP  */
    DEC_OP = 282,                  /* DEC_OP  */
    OR_OP = 283,                   /* OR_OP  */
    AND_OP = 284,                  /* AND_OP  */
    LE_OP = 285,                   /* LE_OP  */
    GE_OP = 286,                   /* GE_OP  */
    EQ_OP = 287,                   /* EQ_OP  */
    NE_OP = 288,                   /* NE_OP  */
    C_CONST = 289,                 /* C_CONST  */
    S_CONST = 290,                 /* S_CONST  */
    B_CONST = 291,                 /* B_CONST  */
    I_CONST = 292,                 /* I_CONST  */
    F_CONST = 293,                 /* F_CONST  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    STRUCT_IDENTIFIER = 295,       /* STRUCT_IDENTIFIER  */
    LET = 296,                     /* LET  */
    PRINT = 297,                   /* PRINT  */
    PRINTS = 298,                  /* PRINTS  */
    SCAN = 299,                    /* SCAN  */
    VAR = 300,                     /* VAR  */
    NULL_ = 301,                   /* NULL_  */
    MALLOC = 302,                  /* MALLOC  */
    LMFUNCTION = 303,              /* LMFUNCTION  */
    ASM = 304                      /* ASM  */
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
#define STRUCT 269
#define RETURN 270
#define SIZEOF 271
#define VOID 272
#define BOOL 273
#define STRING 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define MUL_ASSIGN 277
#define DIV_ASSIGN 278
#define MOD_ASSIGN 279
#define POW_ASSIGN 280
#define INC_OP 281
#define DEC_OP 282
#define OR_OP 283
#define AND_OP 284
#define LE_OP 285
#define GE_OP 286
#define EQ_OP 287
#define NE_OP 288
#define C_CONST 289
#define S_CONST 290
#define B_CONST 291
#define I_CONST 292
#define F_CONST 293
#define IDENTIFIER 294
#define STRUCT_IDENTIFIER 295
#define LET 296
#define PRINT 297
#define PRINTS 298
#define SCAN 299
#define VAR 300
#define NULL_ 301
#define MALLOC 302
#define LMFUNCTION 303
#define ASM 304

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

#line 176 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
