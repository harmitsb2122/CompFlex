/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include<fstream>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<unordered_map>
#include<vector>
#include<stack>
#include<unistd.h>
#include"helper.h"

using namespace std; 
extern FILE* yyin;
extern int DEBUG;		//to print information about tokeninzing
extern int parseDebug;		//to print information about parsing
int symbolDebug = 1;	//print the symbol table.

int error;
extern int yylineno;
extern "C"
{
	int yyparse(void);
	int yylex(void);
	void yyerror(const char* s)
	{
		error = -1;
		printTable();	
		printf("%s at line: %d\n", s, yylineno);
		return;
	}
	int yywrap()
	{
		return 1; 
	} 
}

#line 108 "gm.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


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
    LET = 295,                     /* LET  */
    PRINT = 296,                   /* PRINT  */
    PRINTS = 297,                  /* PRINTS  */
    SCAN = 298,                    /* SCAN  */
    VAR = 299,                     /* VAR  */
    NULL_ = 300,                   /* NULL_  */
    MALLOC = 301,                  /* MALLOC  */
    LMFUNCTION = 302,              /* LMFUNCTION  */
    ASM = 303,                     /* ASM  */
    POINTER = 304                  /* POINTER  */
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
#define LET 295
#define PRINT 296
#define PRINTS 297
#define SCAN 298
#define VAR 299
#define NULL_ 300
#define MALLOC 301
#define LMFUNCTION 302
#define ASM 303
#define POINTER 304

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

#line 267 "gm.cc"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BREAK = 3,                      /* BREAK  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_CONST = 5,                      /* CONST  */
  YYSYMBOL_CONTINUE = 6,                   /* CONTINUE  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_ELIF = 8,                       /* ELIF  */
  YYSYMBOL_FLOAT = 9,                      /* FLOAT  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_IN = 11,                        /* IN  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_STRUCT = 14,                    /* STRUCT  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_SIZEOF = 16,                    /* SIZEOF  */
  YYSYMBOL_VOID = 17,                      /* VOID  */
  YYSYMBOL_BOOL = 18,                      /* BOOL  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_ADD_ASSIGN = 20,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 21,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 22,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 23,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 24,                /* MOD_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 25,                /* POW_ASSIGN  */
  YYSYMBOL_INC_OP = 26,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 27,                    /* DEC_OP  */
  YYSYMBOL_OR_OP = 28,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 29,                    /* AND_OP  */
  YYSYMBOL_LE_OP = 30,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 31,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 32,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 33,                     /* NE_OP  */
  YYSYMBOL_C_CONST = 34,                   /* C_CONST  */
  YYSYMBOL_S_CONST = 35,                   /* S_CONST  */
  YYSYMBOL_B_CONST = 36,                   /* B_CONST  */
  YYSYMBOL_I_CONST = 37,                   /* I_CONST  */
  YYSYMBOL_F_CONST = 38,                   /* F_CONST  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_LET = 40,                       /* LET  */
  YYSYMBOL_PRINT = 41,                     /* PRINT  */
  YYSYMBOL_PRINTS = 42,                    /* PRINTS  */
  YYSYMBOL_SCAN = 43,                      /* SCAN  */
  YYSYMBOL_VAR = 44,                       /* VAR  */
  YYSYMBOL_NULL_ = 45,                     /* NULL_  */
  YYSYMBOL_MALLOC = 46,                    /* MALLOC  */
  YYSYMBOL_LMFUNCTION = 47,                /* LMFUNCTION  */
  YYSYMBOL_ASM = 48,                       /* ASM  */
  YYSYMBOL_POINTER = 49,                   /* POINTER  */
  YYSYMBOL_50_ = 50,                       /* '.'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '['  */
  YYSYMBOL_54_ = 54,                       /* ']'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '*'  */
  YYSYMBOL_57_ = 57,                       /* '+'  */
  YYSYMBOL_58_ = 58,                       /* '-'  */
  YYSYMBOL_59_ = 59,                       /* '!'  */
  YYSYMBOL_60_ = 60,                       /* '&'  */
  YYSYMBOL_61_ = 61,                       /* '/'  */
  YYSYMBOL_62_ = 62,                       /* '%'  */
  YYSYMBOL_63_ = 63,                       /* '<'  */
  YYSYMBOL_64_ = 64,                       /* '>'  */
  YYSYMBOL_65_ = 65,                       /* '='  */
  YYSYMBOL_66_ = 66,                       /* '{'  */
  YYSYMBOL_67_ = 67,                       /* '}'  */
  YYSYMBOL_68_ = 68,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_primary_expression = 70,        /* primary_expression  */
  YYSYMBOL_constant = 71,                  /* constant  */
  YYSYMBOL_postfix_expression = 72,        /* postfix_expression  */
  YYSYMBOL_73_1 = 73,                      /* $@1  */
  YYSYMBOL_functionParameters = 74,        /* functionParameters  */
  YYSYMBOL_argument_list = 75,             /* argument_list  */
  YYSYMBOL_unary_expression = 76,          /* unary_expression  */
  YYSYMBOL_type_name = 77,                 /* type_name  */
  YYSYMBOL_stars = 78,                     /* stars  */
  YYSYMBOL_unary_operator = 79,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 80, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 81,       /* additive_expression  */
  YYSYMBOL_relational_expression = 82,     /* relational_expression  */
  YYSYMBOL_equality_expression = 83,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 84,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 85,     /* logical_or_expression  */
  YYSYMBOL_expression = 86,                /* expression  */
  YYSYMBOL_assignment_operator = 87,       /* assignment_operator  */
  YYSYMBOL_assignment_expression = 88,     /* assignment_expression  */
  YYSYMBOL_declaration_expression = 89,    /* declaration_expression  */
  YYSYMBOL_declarationlist = 90,           /* declarationlist  */
  YYSYMBOL_declaration = 91,               /* declaration  */
  YYSYMBOL_92_2 = 92,                      /* $@2  */
  YYSYMBOL_brackets = 93,                  /* brackets  */
  YYSYMBOL_conditional_expression = 94,    /* conditional_expression  */
  YYSYMBOL_95_3 = 95,                      /* $@3  */
  YYSYMBOL_96_4 = 96,                      /* $@4  */
  YYSYMBOL_97_5 = 97,                      /* $@5  */
  YYSYMBOL_98_6 = 98,                      /* $@6  */
  YYSYMBOL_else_statement = 99,            /* else_statement  */
  YYSYMBOL_100_7 = 100,                    /* $@7  */
  YYSYMBOL_101_8 = 101,                    /* $@8  */
  YYSYMBOL_102_9 = 102,                    /* $@9  */
  YYSYMBOL_103_10 = 103,                   /* $@10  */
  YYSYMBOL_104_11 = 104,                   /* $@11  */
  YYSYMBOL_105_12 = 105,                   /* $@12  */
  YYSYMBOL_for_expression = 106,           /* for_expression  */
  YYSYMBOL_107_13 = 107,                   /* $@13  */
  YYSYMBOL_108_14 = 108,                   /* @14  */
  YYSYMBOL_109_15 = 109,                   /* $@15  */
  YYSYMBOL_110_16 = 110,                   /* $@16  */
  YYSYMBOL_111_17 = 111,                   /* $@17  */
  YYSYMBOL_for_statement_list = 112,       /* for_statement_list  */
  YYSYMBOL_loop_initialization_list = 113, /* loop_initialization_list  */
  YYSYMBOL_loop_condition = 114,           /* loop_condition  */
  YYSYMBOL_loop_increment_list = 115,      /* loop_increment_list  */
  YYSYMBOL_lambda_expression = 116,        /* lambda_expression  */
  YYSYMBOL_117_18 = 117,                   /* $@18  */
  YYSYMBOL_118_19 = 118,                   /* $@19  */
  YYSYMBOL_119_20 = 119,                   /* $@20  */
  YYSYMBOL_120_21 = 120,                   /* $@21  */
  YYSYMBOL_lamda_return_type = 121,        /* lamda_return_type  */
  YYSYMBOL_lambda_param_types = 122,       /* lambda_param_types  */
  YYSYMBOL_123_22 = 123,                   /* $@22  */
  YYSYMBOL_lambda_params = 124,            /* lambda_params  */
  YYSYMBOL_lambda_body = 125,              /* lambda_body  */
  YYSYMBOL_statement = 126,                /* statement  */
  YYSYMBOL_flow_control_statement = 127,   /* flow_control_statement  */
  YYSYMBOL_statement_list = 128,           /* statement_list  */
  YYSYMBOL_begin = 129,                    /* begin  */
  YYSYMBOL_130_23 = 130,                   /* $@23  */
  YYSYMBOL_blocks = 131,                   /* blocks  */
  YYSYMBOL_attribute = 132,                /* attribute  */
  YYSYMBOL_133_24 = 133,                   /* $@24  */
  YYSYMBOL_attribute_constant = 134,       /* attribute_constant  */
  YYSYMBOL_struct_declaration = 135,       /* struct_declaration  */
  YYSYMBOL_struct_body = 136,              /* struct_body  */
  YYSYMBOL_137_25 = 137,                   /* $@25  */
  YYSYMBOL_struct_attributes = 138,        /* struct_attributes  */
  YYSYMBOL_139_26 = 139,                   /* $@26  */
  YYSYMBOL_140_27 = 140,                   /* $@27  */
  YYSYMBOL_st_brackets = 141,              /* st_brackets  */
  YYSYMBOL_st_const = 142,                 /* st_const  */
  YYSYMBOL_functionPrefix = 143,           /* functionPrefix  */
  YYSYMBOL_144_28 = 144,                   /* $@28  */
  YYSYMBOL_functionSuffix = 145,           /* functionSuffix  */
  YYSYMBOL_146_29 = 146,                   /* $@29  */
  YYSYMBOL_147_30 = 147,                   /* $@30  */
  YYSYMBOL_functionArguments = 148,        /* functionArguments  */
  YYSYMBOL_statement_block = 149,          /* statement_block  */
  YYSYMBOL_150_31 = 150                    /* $@31  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   370

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,     2,     2,    62,    60,     2,
      51,    52,    56,    57,    55,    58,    50,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    68,
      63,    65,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,    67,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,   103,   140,   157,   162,   167,   176,   182,
     188,   196,   200,   240,   255,   272,   271,   315,   316,   320,
     346,   374,   378,   391,   404,   426,   446,   447,   448,   452,
     453,   457,   458,   459,   460,   461,   465,   469,   490,   512,
     536,   542,   564,   588,   594,   615,   636,   657,   680,   686,
     707,   730,   736,   759,   765,   788,   796,   807,   827,   831,
     832,   837,   836,   878,   895,   900,   912,   917,   922,   899,
     935,   943,   948,   953,   934,   962,   968,   961,   979,   987,
     993,   999,  1020,  1026,   986,  1042,  1042,  1045,  1046,  1047,
    1051,  1064,  1071,  1079,  1088,  1099,  1109,  1133,  1140,  1098,
    1164,  1179,  1178,  1190,  1201,  1204,  1204,  1208,  1211,  1212,
    1213,  1214,  1215,  1216,  1217,  1218,  1235,  1246,  1255,  1263,
    1277,  1293,  1294,  1298,  1298,  1306,  1307,  1308,  1313,  1329,
    1326,  1361,  1365,  1368,  1371,  1377,  1397,  1396,  1407,  1411,
    1405,  1435,  1437,  1442,  1445,  1452,  1482,  1481,  1500,  1499,
    1510,  1509,  1522,  1532,  1547,  1546,  1565
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BREAK", "CHAR",
  "CONST", "CONTINUE", "ELSE", "ELIF", "FLOAT", "FOR", "IN", "IF", "INT",
  "STRUCT", "RETURN", "SIZEOF", "VOID", "BOOL", "STRING", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "POW_ASSIGN",
  "INC_OP", "DEC_OP", "OR_OP", "AND_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "C_CONST", "S_CONST", "B_CONST", "I_CONST", "F_CONST",
  "IDENTIFIER", "LET", "PRINT", "PRINTS", "SCAN", "VAR", "NULL_", "MALLOC",
  "LMFUNCTION", "ASM", "POINTER", "'.'", "'('", "')'", "'['", "']'", "','",
  "'*'", "'+'", "'-'", "'!'", "'&'", "'/'", "'%'", "'<'", "'>'", "'='",
  "'{'", "'}'", "';'", "$accept", "primary_expression", "constant",
  "postfix_expression", "$@1", "functionParameters", "argument_list",
  "unary_expression", "type_name", "stars", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "expression", "assignment_operator",
  "assignment_expression", "declaration_expression", "declarationlist",
  "declaration", "$@2", "brackets", "conditional_expression", "$@3", "$@4",
  "$@5", "$@6", "else_statement", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "for_expression", "$@13", "@14", "$@15", "$@16", "$@17",
  "for_statement_list", "loop_initialization_list", "loop_condition",
  "loop_increment_list", "lambda_expression", "$@18", "$@19", "$@20",
  "$@21", "lamda_return_type", "lambda_param_types", "$@22",
  "lambda_params", "lambda_body", "statement", "flow_control_statement",
  "statement_list", "begin", "$@23", "blocks", "attribute", "$@24",
  "attribute_constant", "struct_declaration", "struct_body", "$@25",
  "struct_attributes", "$@26", "$@27", "st_brackets", "st_const",
  "functionPrefix", "$@28", "functionSuffix", "$@29", "$@30",
  "functionArguments", "statement_block", "$@31", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-123)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -145,     8,    15,  -145,  -145,  -145,    -9,   -30,  -145,    15,
     -32,    15,   -17,   -30,    -5,  -145,  -145,  -145,  -145,  -145,
    -145,   -26,    94,  -145,     3,  -145,    22,   -30,     1,     2,
    -145,  -145,  -145,  -145,  -145,    52,  -145,  -145,   -30,  -145,
     -34,    26,  -145,    30,    66,  -145,    94,  -145,  -145,    47,
    -145,  -145,    30,   -30,   -51,  -145,   256,  -145,    86,     4,
    -145,    51,  -145,  -145,    76,    81,   283,   310,   310,  -145,
    -145,  -145,    60,  -145,    82,  -145,    88,   310,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,     5,    78,   -30,   310,    11,
      17,    -8,    80,   102,   113,    84,    85,    87,  -145,  -145,
      90,    89,    91,    95,  -145,  -145,  -145,   100,    94,  -145,
    -145,   310,  -145,  -145,    97,  -145,  -145,   124,   127,  -145,
     310,   104,   133,   117,  -145,  -145,   310,  -145,   310,   131,
    -145,   116,  -145,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,   310,   121,  -145,  -145,  -145,
      25,   123,    94,   125,  -145,   122,  -145,  -145,   -30,  -145,
    -145,  -145,    11,    11,    17,    17,    17,    17,    -8,    -8,
      80,   102,    78,   126,   111,  -145,  -145,  -145,    14,  -145,
    -145,   -30,   132,   143,  -145,  -145,  -145,   310,  -145,   118,
    -145,   310,  -145,    94,   130,   129,  -145,   310,  -145,  -145,
     -30,   135,   150,   310,  -145,   128,   256,   138,   139,   141,
     137,  -145,  -145,   140,   155,   136,  -145,   310,   145,    94,
    -145,  -145,   159,  -145,  -145,  -145,   151,   310,   153,   110,
     162,  -145,   154,   158,   166,  -145,   161,   196,  -145,   310,
     165,  -145,  -145,   256,   173,   175,   167,  -145,  -145,  -145,
    -145,   169,   163,    94,  -145,  -145,   176,   177,   256,  -145,
    -145,   171,   172,   256,  -145,   178,  -145,   110,  -145,  -145
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     123,     0,   127,     1,    27,    26,     0,    30,   124,   127,
       0,   127,    28,    30,     0,   125,   131,   126,   136,   135,
      29,     0,   141,   146,     0,   128,     0,    30,     0,     0,
     133,   134,   132,   129,    28,     0,   137,   148,    30,   147,
       0,     0,   138,     0,     0,   150,     0,   130,   143,   154,
     149,   152,     0,    30,     0,   156,     0,   151,     0,     0,
     139,     0,   119,   120,     0,     0,     0,     0,     0,     9,
      10,     8,     4,     7,     0,    95,     0,     0,    34,    31,
      32,    33,    35,    11,     5,    21,    36,    30,     0,    40,
      43,    48,    51,    53,    55,     0,     0,     0,   111,   112,
       0,     0,     0,     0,   153,   144,   145,     0,   141,   118,
      79,     0,   117,    36,     0,    22,    23,     0,     0,    15,
       0,     0,     0,     0,    13,    14,     0,    56,     0,     0,
      58,    60,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   109,   110,   108,
     121,   114,   155,   142,   140,    89,     0,   116,     2,     3,
       0,     0,     0,     0,     6,     0,    57,    61,    30,    37,
      38,    39,    41,    42,    46,    47,    44,    45,    49,    50,
      52,    54,     0,    88,     0,    65,    17,    16,     0,    19,
      25,    30,     0,     0,    12,    64,    59,    89,    80,     0,
      18,     0,   100,   104,     0,    62,    87,    91,    66,    20,
      30,     0,     0,     0,    90,     0,     0,   101,     0,     0,
       0,    81,    67,     0,     0,     0,    63,    94,     0,   104,
      96,   115,    93,    82,    68,   102,     0,    94,     0,    78,
       0,    92,     0,     0,     0,    69,     0,     0,    75,     0,
       0,    83,    85,     0,     0,     0,     0,    76,    70,    97,
      84,     0,     0,   106,    77,    71,     0,   105,     0,    98,
      72,     0,     0,     0,    73,     0,   107,    78,    99,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,  -145,  -145,  -145,  -145,   -55,    -2,    -3,
    -145,   -15,   -52,   -13,    96,    93,  -145,   -63,  -145,  -144,
    -145,    83,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
     -31,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,    53,  -145,    12,  -145,  -145,  -145,
    -145,  -145,  -145,    19,  -145,  -145,  -145,  -145,  -145,   -96,
    -145,  -145,    36,  -145,  -145,  -145,  -145,  -145,  -145,   156,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,     9,
     206,  -145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    83,    84,    85,   160,   187,   188,   113,    87,   129,
      88,    89,    90,    91,    92,    93,    94,    95,   128,    96,
      97,   130,   131,   195,   205,    98,   199,   216,   228,   239,
     245,   262,   268,   272,   277,   253,   261,    99,   155,   207,
     227,   238,   256,   251,   184,   215,   233,   100,   121,   236,
     263,   271,   192,   211,   223,   266,   275,   101,   102,   103,
       1,     2,     8,     9,    41,    33,    10,    19,    22,    28,
      48,   108,    54,   107,    11,    29,    39,    43,    52,    40,
      50,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    86,    59,   114,    14,   150,     4,     7,     3,     7,
      20,   183,   115,   116,   123,     5,    26,    60,    45,     4,
      27,    46,   138,   139,    35,    23,    13,    38,     5,     6,
      12,   124,   125,   132,    21,    44,    16,    30,    31,    24,
      32,   105,    25,   106,    53,    15,    86,    17,   156,    18,
      58,    67,    68,   183,    37,   140,   141,   161,   126,    69,
      70,    34,    71,   165,    72,   166,   200,   133,    36,   201,
      73,    74,   134,   135,   136,   137,    77,   186,   169,   170,
     171,    78,    79,    80,    81,    82,   174,   175,   176,   177,
      61,    42,    62,     4,    47,    63,    49,   189,     4,    64,
     182,    65,     5,    26,    66,    51,    27,     5,    26,   117,
     118,   119,   142,   143,    55,    67,    68,   243,   244,   109,
     222,   172,   173,    69,    70,   104,    71,   110,    72,   178,
     179,   144,   111,   120,    73,    74,    75,    76,   209,   122,
      77,   145,   182,   127,   214,    78,    79,    80,    81,    82,
     220,   252,   146,   147,   153,   148,  -122,   257,   149,   151,
     191,    86,   152,   158,   232,   157,   159,   162,   163,   164,
     167,   168,   270,   185,   232,   190,   194,   276,   204,   198,
     193,   197,   213,   203,   208,   212,   254,   218,   202,   219,
    -103,   226,    86,   225,   230,   229,   221,    61,    86,    62,
       4,   210,    63,   224,   231,   242,    64,   217,    65,     5,
      26,    66,   234,    86,   237,   246,   240,   249,    86,   255,
     247,   250,    67,    68,   248,   258,   259,   210,   269,   265,
      69,    70,    46,    71,   260,    72,   264,   273,   181,   274,
     180,    73,    74,    75,    76,   278,   279,    77,   235,   241,
     206,   196,    78,    79,    80,    81,    82,    61,    57,    62,
       4,    38,    63,   -86,   154,     0,    64,     0,    65,     5,
      26,    66,   267,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,     0,     0,     0,     0,     0,     0,
      69,    70,     0,    71,     0,    72,     0,     0,     0,     0,
       0,    73,    74,    75,    76,     0,     0,    77,     0,    67,
      68,     0,    78,    79,    80,    81,    82,    69,    70,     0,
      71,     0,    72,     0,     0,     0,     0,     0,    73,    74,
       0,     0,     0,     0,    77,     0,    67,    68,     0,    78,
      79,    80,    81,    82,    69,    70,     0,    71,     0,    72,
       0,   112,     0,     0,     0,    73,    74,     0,     0,     0,
       0,    77,     0,     0,     0,     0,    78,    79,    80,    81,
      82
};

static const yytype_int16 yycheck[] =
{
       2,    56,    53,    66,     7,   101,     4,     9,     0,    11,
      13,   155,    67,    68,    77,    13,    14,    68,    52,     4,
      22,    55,    30,    31,    27,    51,    56,    29,    13,    14,
      39,    26,    27,    88,    39,    38,    68,    34,    35,    65,
      37,    37,    68,    39,    46,     9,   101,    11,   111,    66,
      53,    26,    27,   197,    52,    63,    64,   120,    53,    34,
      35,    39,    37,   126,    39,   128,    52,    56,    67,    55,
      45,    46,    61,    62,    57,    58,    51,    52,   133,   134,
     135,    56,    57,    58,    59,    60,   138,   139,   140,   141,
       1,    39,     3,     4,    68,     6,    66,   160,     4,    10,
     155,    12,    13,    14,    15,    39,   108,    13,    14,    49,
      50,    51,    32,    33,    67,    26,    27,     7,     8,    68,
     216,   136,   137,    34,    35,    39,    37,    51,    39,   142,
     143,    29,    51,    51,    45,    46,    47,    48,   201,    51,
      51,    28,   197,    65,   207,    56,    57,    58,    59,    60,
     213,   247,    68,    68,    54,    68,    67,   253,    68,    68,
     162,   216,    67,    39,   227,    68,    39,    63,    35,    52,
      39,    55,   268,    52,   237,    52,    54,   273,    35,    68,
      55,    55,    53,    51,    66,    55,   249,    52,   191,    39,
      52,    54,   247,    52,    39,    55,    68,     1,   253,     3,
       4,   203,     6,    64,    68,    52,    10,   210,    12,    13,
      14,    15,    67,   268,    55,    53,    65,    51,   273,    54,
      66,    60,    26,    27,    66,    52,    51,   229,    52,    66,
      34,    35,    55,    37,    67,    39,    67,    66,   145,    67,
     144,    45,    46,    47,    48,    67,   277,    51,   229,   237,
     197,   168,    56,    57,    58,    59,    60,     1,    52,     3,
       4,   263,     6,    67,   108,    -1,    10,    -1,    12,    13,
      14,    15,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    -1,    -1,    51,    -1,    26,
      27,    -1,    56,    57,    58,    59,    60,    34,    35,    -1,
      37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,    26,    27,    -1,    56,
      57,    58,    59,    60,    34,    35,    -1,    37,    -1,    39,
      -1,    68,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   129,   130,     0,     4,    13,    14,    77,   131,   132,
     135,   143,    39,    56,    78,   131,    68,   131,    66,   136,
      78,    39,   137,    51,    65,    68,    14,    77,   138,   144,
      34,    35,    37,   134,    39,    78,    67,    52,    77,   145,
     148,   133,    39,   146,    78,    52,    55,    68,   139,    66,
     149,    39,   147,    77,   141,    67,   150,   149,    78,    53,
      68,     1,     3,     6,    10,    12,    15,    26,    27,    34,
      35,    37,    39,    45,    46,    47,    48,    51,    56,    57,
      58,    59,    60,    70,    71,    72,    76,    77,    79,    80,
      81,    82,    83,    84,    85,    86,    88,    89,    94,   106,
     116,   126,   127,   128,    39,    37,    39,   142,   140,    68,
      51,    51,    68,    76,    86,    76,    76,    49,    50,    51,
      51,   117,    51,    86,    26,    27,    53,    65,    87,    78,
      90,    91,    76,    56,    61,    62,    57,    58,    30,    31,
      63,    64,    32,    33,    29,    28,    68,    68,    68,    68,
     128,    68,    67,    54,   138,   107,    86,    68,    39,    39,
      73,    86,    63,    35,    52,    86,    86,    39,    55,    76,
      76,    76,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    84,    76,    88,   113,    52,    52,    74,    75,    86,
      52,    77,   121,    55,    54,    92,    90,    55,    68,    95,
      52,    55,    78,    51,    35,    93,   113,   108,    66,    86,
      77,   122,    55,    53,    86,   114,    96,    78,    52,    39,
      86,    68,   128,   123,    64,    52,    54,   109,    97,    55,
      39,    68,    86,   115,    67,   122,   118,    55,   110,    98,
      65,   115,    52,     7,     8,    99,    53,    66,    66,    51,
      60,   112,   128,   104,    86,    54,   111,   128,    52,    51,
      67,   105,   100,   119,    67,    66,   124,   148,   101,    52,
     128,   120,   102,    66,    67,   125,   128,   103,    67,    99
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    70,    70,    71,    71,
      71,    72,    72,    72,    72,    73,    72,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    77,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    82,    82,    82,    83,    83,
      83,    84,    84,    85,    85,    86,    87,    88,    89,    90,
      90,    92,    91,    93,    93,    95,    96,    97,    98,    94,
     100,   101,   102,   103,    99,   104,   105,    99,    99,   107,
     108,   109,   110,   111,   106,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   115,   117,   118,   119,   120,   116,
     121,   123,   122,   122,   122,   124,   124,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   128,   128,   130,   129,   131,   131,   131,   132,   133,
     132,   132,   134,   134,   134,   135,   137,   136,   139,   140,
     138,   138,   141,   141,   142,   142,   144,   143,   146,   145,
     147,   145,   148,   148,   150,   149,   149
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     4,     2,     2,     0,     4,     1,     2,     1,
       3,     1,     2,     2,     2,     4,     1,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     1,     3,     2,     3,
       1,     0,     4,     4,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,    12,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    16,     1,     0,     3,     1,     0,
       1,     0,     3,     1,     0,     0,     0,     0,     0,    22,
       2,     0,     5,     2,     0,     1,     0,     1,     2,     2,
       2,     1,     1,     2,     2,     9,     3,     2,     2,     1,
       1,     2,     1,     0,     2,     2,     2,     0,     4,     0,
       7,     2,     1,     1,     1,     3,     0,     4,     0,     0,
       8,     0,     4,     0,     1,     1,     0,     6,     0,     3,
       0,     4,     3,     5,     0,     4,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER POINTER IDENTIFIER  */
#line 55 "parser.y"
                                                              {	
					string str((yyvsp[-2].str));
					string attr((yyvsp[0].str));
					if( !is_Variable(str) ){
						cout << "COMPILETIME ERROR: " << string((yyvsp[-2].str)) << " not declared" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.type) = getCharArray("UNKNOWN TYPE");
						(yyval.var.addr) = getCharArray("UNKNOWN VARIABLE");
					}
					else{
						SymbolTableEntry ste = getVariable(str);
						
						string sName = ste.dataType;

						if(sName[0]!='*')
						{
							cout << "COMPILETIME ERROR: " << string((yyvsp[0].str)) << "invalid syntax" << endl;
							cout << "At line : " << yylineno << endl;
							error = -1;
							return 1;
							(yyval.var.type) = getCharArray("UNKNOWN TYPE");
							(yyval.var.addr) = getCharArray("UNKNOWN VARIABLE");
						}

						string structName;
						for(auto i : sName)
						{
							if(i!='*')
								structName+=i;
						}
						string dtType;
						if(!is_Valid_Attribute(structName,attr,dtType))
						{
							cout << "COMPILETIME ERROR: " << string((yyvsp[0].str)) << " invalid attribute" << endl;
							cout << "At line : " << yylineno << endl;
							error = -1;
							return 1;
							(yyval.var.type) = getCharArray("UNKNOWN TYPE");
							(yyval.var.addr) = getCharArray("UNKNOWN VARIABLE");
						}

						(yyval.var.type) = getCharArray(dtType);
						(yyval.var.addr) = getCharArray("*"+ste.name +"."+attr+ "_" + to_string(ste.scope));
					}
					debug(1);
				}
#line 1676 "gm.cc"
    break;

  case 3: /* primary_expression: IDENTIFIER '.' IDENTIFIER  */
#line 103 "parser.y"
                                                            {	
					string str((yyvsp[-2].str));
					string attr((yyvsp[0].str));
					if( !is_Variable(str) ){
						cout << "COMPILETIME ERROR: " << string((yyvsp[-2].str)) << " not declared" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.type) = getCharArray("UNKNOWN TYPE");
						(yyval.var.addr) = getCharArray("UNKNOWN VARIABLE");
					}
					else{
						SymbolTableEntry ste = getVariable(str);
						string sName = ste.dataType;
						string structName;
						for(auto i : sName)
						{
							if(i!='*')
								structName+=i;
						}
						
						string dtType;
						if(!is_Valid_Attribute(structName,attr,dtType))
						{
							cout << "COMPILETIME ERROR: " << string((yyvsp[0].str)) << " invalid attribute" << endl;
							cout << "At line : " << yylineno << endl;
							error = -1;
							return 1;
							(yyval.var.type) = getCharArray("UNKNOWN TYPE");
							(yyval.var.addr) = getCharArray("UNKNOWN VARIABLE");
						}

						(yyval.var.type) = getCharArray(dtType);
						(yyval.var.addr) = getCharArray(ste.name +"."+attr+ "_" + to_string(ste.scope));
					}
					debug(1);
				}
#line 1718 "gm.cc"
    break;

  case 4: /* primary_expression: IDENTIFIER  */
#line 140 "parser.y"
                                                {	
					string str((yyvsp[0].str));
					if( !is_Variable(str) ){
						cout << "COMPILETIME ERROR: " << string((yyvsp[0].str)) << " not declared" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.type) = getCharArray("UNKNOWN TYPE");
						(yyval.var.addr) = getCharArray("UNKNOWN VARIABLE");
					}
					else{
						SymbolTableEntry ste = getVariable(str);
						(yyval.var.type) = getCharArray(ste.dataType);
						(yyval.var.addr) = getCharArray(ste.name + "_" + to_string(ste.scope));
					}
					debug(1);
				}
#line 1740 "gm.cc"
    break;

  case 5: /* primary_expression: constant  */
#line 157 "parser.y"
                                        {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
					debug(2);
				}
#line 1750 "gm.cc"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 162 "parser.y"
                                            {
					(yyval.var.addr) = (yyvsp[-1].var.addr);
					(yyval.var.type) = (yyvsp[-1].var.type);
					debug(3);
				}
#line 1760 "gm.cc"
    break;

  case 7: /* primary_expression: NULL_  */
#line 167 "parser.y"
                                {
					(yyval.var.type) = getCharArray("all");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #0");
					debug(4);
				}
#line 1771 "gm.cc"
    break;

  case 8: /* constant: I_CONST  */
#line 176 "parser.y"
                                {
					(yyval.var.type) = getCharArray("int");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(5);
				}
#line 1782 "gm.cc"
    break;

  case 9: /* constant: C_CONST  */
#line 182 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("char");
					(yyval.var.addr) = getTemp("char");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(6);
				}
#line 1793 "gm.cc"
    break;

  case 10: /* constant: S_CONST  */
#line 188 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("*char");
					(yyval.var.addr) = getTemp("*char");
					appendCode("string " + string((yyval.var.addr)) + " " + string((yyvsp[0].str)));
				}
#line 1803 "gm.cc"
    break;

  case 11: /* postfix_expression: primary_expression  */
#line 196 "parser.y"
                                                {
					(yyval.var.type) = (yyvsp[0].var.type);
					(yyval.var.addr) = (yyvsp[0].var.addr);
				}
#line 1812 "gm.cc"
    break;

  case 12: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 200 "parser.y"
                                                                {
					string type((yyvsp[-3].var.type));
					string addr((yyvsp[-3].var.addr));
					if( type[0] != '*' ){
						cout << "COMPILETIME ERROR: Cannot index a non-array type" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else{
						string indexType((yyvsp[-1].var.type));
						if( indexType != "int" ){
							cout << "COMPILETIME ERROR: Cannot use non int type " << indexType << " as array index" << endl;
							cout << "At line : " << yylineno << endl;
							error = -1;
							return 1;
						}
						else{
							string index((yyvsp[-1].var.addr));
							string arrayType = type.substr(1, type.length());

							string temp1 = string(getTemp("int"));
							if(arrayType[0] == '*')
							{
								appendCode( temp1 + " = " + index + " * #" + to_string(getActualSize("*")) );
							}
							else
							{
								appendCode( temp1 + " = " + index + " * #" + to_string(getActualSize(arrayType)) );
							}
							string temp = string(getTemp(type));
							appendCode( temp + " = " + addr + " + " + temp1 );


							(yyval.var.type) = getCharArray(arrayType);
							(yyval.var.addr) = getCharArray("*"+temp);
						}
					}
				}
#line 1856 "gm.cc"
    break;

  case 13: /* postfix_expression: postfix_expression INC_OP  */
#line 240 "parser.y"
                                                        {
					if( strcmp((yyval.var.type), "int") != 0){
						cout << "COMPILETIME ERROR: cannot apply increment operator to non int types" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else{
						(yyval.var.addr) = getTemp("int");
						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-1].var.addr)));
						appendCode(string((yyvsp[-1].var.addr)) + " = " + string((yyvsp[-1].var.addr)) + " + " + "#1");
						(yyval.var.type) = (yyvsp[-1].var.type);
					}
				}
#line 1875 "gm.cc"
    break;

  case 14: /* postfix_expression: postfix_expression DEC_OP  */
#line 256 "parser.y"
                                {
					if( strcmp((yyval.var.type), "int") != 0 ){
						cout << "COMPILETIME ERROR: cannot apply increment operator to non int types" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else{
						(yyval.var.addr) = getTemp("int");
						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-1].var.addr)));
						appendCode(string((yyvsp[-1].var.addr)) + " = " + string((yyvsp[-1].var.addr)) + " - " + "#1");

						(yyval.var.type) = (yyvsp[-1].var.type);
					}
				}
#line 1895 "gm.cc"
    break;

  case 15: /* $@1: %empty  */
#line 272 "parser.y"
                                {
					string functionName((yyvsp[-1].str));
					string returnType = getFunctionReturnType(functionName);
					if( returnType == "" )
					{
						cout << "COMPILETIME ERROR: " << functionName << " is not declared" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						appendCode("FunctionCall " + functionName);
						setCallStack(functionName);
					}
				}
#line 1916 "gm.cc"
    break;

  case 16: /* postfix_expression: IDENTIFIER '(' $@1 functionParameters  */
#line 289 "parser.y"
                                {
					string functionName((yyvsp[-3].str));
					string returnType = getFunctionReturnType(functionName);

					if( !callStack.empty() )
					{
						cout << "COMPILETIME ERROR: Too few arguments for the function " << functionName << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						appendCode("call " + getFunctionLabel(functionName));
						string afterLabel = getLabel();
						appendCode(afterLabel + ":");

						(yyval.var.addr) = getTemp(returnType);
						(yyval.var.type) = getCharArray(returnType);
						appendCode(string((yyval.var.addr)) + " = ReturnVal");

					}
				}
#line 1944 "gm.cc"
    break;

  case 19: /* argument_list: expression  */
#line 321 "parser.y"
                        {
				string param((yyvsp[0].var.addr));
				string type((yyvsp[0].var.type));

				if( callStack.empty() )
				{
					cout << "COMPILETIME ERROR : Too many arguments" << endl;
					cout << "At line : " << yylineno << endl;
					error = -1;
					return 1;
				}
				else if( callStack.top().dataType != type )
				{
					cout << "COMPILETIME ERROR : Incorrect function parameter types" << endl;
					cout << "Assigning " << type << " to " << callStack.top().dataType << endl;
					cout << "At line : " << yylineno << endl;
					error = -1;
					return 1;
				}
				else
				{
					appendCode("param " + param );
					callStack.pop();
				}
			}
#line 1974 "gm.cc"
    break;

  case 20: /* argument_list: argument_list ',' expression  */
#line 347 "parser.y"
                        {
				string param((yyvsp[0].var.addr));
				string type((yyvsp[0].var.type));

				if( callStack.empty() )
				{
					cout << "COMPILETIME ERROR : Too many arguments" << endl;
					cout << "At line : " << yylineno << endl;
					error = -1;
					return 1;
				}
				else if( callStack.top().dataType != type )
				{
					cout << "COMPILETIME ERROR : Incorrect function parameter types" << endl;
					cout << "At line : " << yylineno << endl;
					error = -1;
					return 1;
				}
				else
				{
					appendCode("param " + param );
					callStack.pop();
				}
			}
#line 2003 "gm.cc"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 374 "parser.y"
                                          {	
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2012 "gm.cc"
    break;

  case 22: /* unary_expression: INC_OP unary_expression  */
#line 378 "parser.y"
                                                 {
					if( strcmp((yyvsp[0].var.type), "int") != 0 ){
						cout << "COMPILETIME ERROR: cannot apply increment operator to non int types, applying to " << string((yyvsp[0].var.type)) << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else{
						(yyval.var.addr) = (yyvsp[0].var.addr);
						appendCode(string((yyval.var.addr)) + " = " + string((yyval.var.addr)) + " + " + "#1");
						(yyval.var.type) = (yyvsp[0].var.type);
					}
				}
#line 2030 "gm.cc"
    break;

  case 23: /* unary_expression: DEC_OP unary_expression  */
#line 391 "parser.y"
                                                        {
					if( strcmp((yyvsp[0].var.type), "int") != 0 ){
						cout << "COMPILETIME ERROR: cannot apply increment operator to non int types, applying to " << string((yyvsp[0].var.type))  << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else{
						(yyval.var.addr) = (yyvsp[0].var.addr);
						appendCode(string((yyval.var.addr)) + " = " + string((yyval.var.addr)) + " - " + "#1");
						(yyval.var.type) = (yyvsp[0].var.type);
					}
				}
#line 2048 "gm.cc"
    break;

  case 24: /* unary_expression: unary_operator unary_expression  */
#line 404 "parser.y"
                                                         {
					string op((yyvsp[-1].str));
					string type((yyvsp[0].var.type)); 
					(yyval.var.type) = (yyvsp[0].var.type);
					if( op == "+" or op == "-" ){
						if( type != "int" ){
							cout << "COMPILETIME ERROR: cannot apply + to non number types" << endl;
							cout << "At line : " << yylineno << endl;
							error = -1;
							return 1;
							(yyval.var.addr) = (yyvsp[0].var.addr);
						}
						else{
							if( op == "-" ){
								if( type == "int" ){
									(yyval.var.addr) = getTemp("int");
									appendCode(string((yyval.var.addr)) + " = " + "minus " + string((yyvsp[0].var.addr)));
								}
							}
						}
					}
				}
#line 2075 "gm.cc"
    break;

  case 25: /* unary_expression: MALLOC '(' expression ')'  */
#line 426 "parser.y"
                                                    {
					string type((yyvsp[-1].var.type));
					if( type != "int" ){
						cout << "COMPILETIME ERROR: Argument to malloc must be integer" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.type) = getCharArray("UNKNOWN TYPE");
						(yyval.var.addr) = getTemp("int");
					}
					else
					{
						(yyval.var.type) = getCharArray("*int");
						(yyval.var.addr) = getTemp("*int");
						appendCode("memory " + string((yyval.var.addr)) + " " + string((yyvsp[-1].var.addr)) + " #1" );
					}
				}
#line 2097 "gm.cc"
    break;

  case 26: /* type_name: INT  */
#line 446 "parser.y"
                                {dtype = "int"; starsCount = 0; }
#line 2103 "gm.cc"
    break;

  case 27: /* type_name: CHAR  */
#line 447 "parser.y"
                               {dtype = "char"; starsCount = 0; }
#line 2109 "gm.cc"
    break;

  case 28: /* type_name: STRUCT IDENTIFIER  */
#line 448 "parser.y"
                                            {string str((yyvsp[0].str)); dtype = str;starsCount = 0; }
#line 2115 "gm.cc"
    break;

  case 29: /* stars: '*' stars  */
#line 452 "parser.y"
                            { starsCount++; }
#line 2121 "gm.cc"
    break;

  case 31: /* unary_operator: '+'  */
#line 457 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2127 "gm.cc"
    break;

  case 32: /* unary_operator: '-'  */
#line 458 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2133 "gm.cc"
    break;

  case 33: /* unary_operator: '!'  */
#line 459 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2139 "gm.cc"
    break;

  case 34: /* unary_operator: '*'  */
#line 460 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2145 "gm.cc"
    break;

  case 35: /* unary_operator: '&'  */
#line 461 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2151 "gm.cc"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 465 "parser.y"
                                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2160 "gm.cc"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 469 "parser.y"
                                                                         {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '*' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.addr) = (yyvsp[-2].var.type);
						(yyval.var.type) = (yyvsp[-2].var.type);
					}
					else
					{
						(yyval.var.addr) = getTemp("int");
						(yyval.var.type) = (yyvsp[-2].var.type);
						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " * " +  string((yyvsp[0].var.addr)));
					}
				}
#line 2185 "gm.cc"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 491 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '*' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.addr) = (yyvsp[-2].var.type);
						(yyval.var.type) = (yyvsp[-2].var.type);
					}
					else
					{
						(yyval.var.addr) = getTemp("int");
						(yyval.var.type) = (yyvsp[-2].var.type);
						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " / " +  string((yyvsp[0].var.addr)));
					}
				}
#line 2210 "gm.cc"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 513 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '*' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.addr) = (yyvsp[-2].var.type);
						(yyval.var.type) = (yyvsp[-2].var.type);
					}
					else
					{
						(yyval.var.addr) = getTemp("int");
						(yyval.var.type) = (yyvsp[-2].var.type);
						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " % " +  string((yyvsp[0].var.addr)));
					}
				}
#line 2235 "gm.cc"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 537 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2244 "gm.cc"
    break;

  case 41: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 543 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '+' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.addr) = (yyvsp[-2].var.type);
						(yyval.var.type) = (yyvsp[-2].var.type);
					}
					else
					{
						(yyval.var.addr) = getTemp("int");
						(yyval.var.type) = (yyvsp[-2].var.type);
						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " + " +  string((yyvsp[0].var.addr)));
					}
				}
#line 2269 "gm.cc"
    break;

  case 42: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 565 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '+' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						(yyval.var.addr) = (yyvsp[-2].var.type);
						(yyval.var.type) = (yyvsp[-2].var.type);
					}
					else
					{
						(yyval.var.addr) = getTemp("int");
						(yyval.var.type) = (yyvsp[-2].var.type);
						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " - " +  string((yyvsp[0].var.addr)));
					}
				}
#line 2294 "gm.cc"
    break;

  case 43: /* relational_expression: additive_expression  */
#line 589 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2303 "gm.cc"
    break;

  case 44: /* relational_expression: relational_expression '<' additive_expression  */
#line 595 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '<' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " < " + string((yyvsp[0].var.addr)));
					}
				}
#line 2327 "gm.cc"
    break;

  case 45: /* relational_expression: relational_expression '>' additive_expression  */
#line 616 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '>' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " > " + string((yyvsp[0].var.addr)));
					}
				}
#line 2351 "gm.cc"
    break;

  case 46: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 637 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '<=' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " <= " + string((yyvsp[0].var.addr)));
					}
				}
#line 2375 "gm.cc"
    break;

  case 47: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 658 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
					{
						cout << "COMPILETIME ERROR: cannot apply '<=' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " >= " + string((yyvsp[0].var.addr)));
					}
				}
#line 2399 "gm.cc"
    break;

  case 48: /* equality_expression: relational_expression  */
#line 681 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2408 "gm.cc"
    break;

  case 49: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 687 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if(( type1 != "int" or type2 != "int" ) && type2!= "all" && type1!="all")
					{
						cout << "COMPILETIME ERROR: cannot apply '==' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " == " + string((yyvsp[0].var.addr)));
					}
				}
#line 2432 "gm.cc"
    break;

  case 50: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 708 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( (type1 != "int" or type2 != "int") && type2!= "all" && type1!="all")
					{
						cout << "COMPILETIME ERROR: cannot apply '!=' to arguements of types: " << type1 << ", " << type2 << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " != " + string((yyvsp[0].var.addr)));
					}
				}
#line 2456 "gm.cc"
    break;

  case 51: /* logical_and_expression: equality_expression  */
#line 731 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2465 "gm.cc"
    break;

  case 52: /* logical_and_expression: logical_and_expression AND_OP equality_expression  */
#line 737 "parser.y"
                                {
					if( strcmp((yyvsp[-2].var.type), "bool") != 0 or strcmp((yyvsp[0].var.type), "bool") != 0 )
					{
						cout << "COMPILETIME ERROR: cannot apply '&&' to non-boolean operands" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						
						(yyval.var.addr) = getTemp("bool");
						(yyval.var.type) = (yyvsp[-2].var.type);
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " && " + string((yyvsp[0].var.addr)));
					}
				}
#line 2489 "gm.cc"
    break;

  case 53: /* logical_or_expression: logical_and_expression  */
#line 760 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2498 "gm.cc"
    break;

  case 54: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 766 "parser.y"
                                {
					if( strcmp((yyvsp[-2].var.type), "bool") != 0 or strcmp((yyvsp[0].var.type), "bool") != 0 )
					{
						cout << "COMPILETIME ERROR: cannot apply '||' to non-boolean operands" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
						
						(yyval.var.addr) = getTemp("bool");
						(yyval.var.type) = (yyvsp[-2].var.type);
					}
					else
					{
						(yyval.var.type) = getCharArray("bool");
						(yyval.var.addr) = getTemp("bool");

						appendCode(string((yyval.var.addr)) + " = " + string((yyvsp[-2].var.addr)) + " || " + string((yyvsp[0].var.addr)));
					}
				}
#line 2522 "gm.cc"
    break;

  case 55: /* expression: logical_or_expression  */
#line 789 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2531 "gm.cc"
    break;

  case 56: /* assignment_operator: '='  */
#line 796 "parser.y"
                                                                        {	(yyval.str) = (yyvsp[0].str);	}
#line 2537 "gm.cc"
    break;

  case 57: /* assignment_expression: unary_expression assignment_operator expression  */
#line 808 "parser.y"
                                {
					string op((yyvsp[-1].str));
					string var((yyvsp[-2].var.addr));
					string val((yyvsp[0].var.addr));

					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					appendCode(var + " = " + val);
					if( type1 != type2 )
					{
						cout << "COMPILETIME WARNING: assigning " << type2 << " to " << type1 << endl;
						cout << "At line : " << yylineno << endl;
					}
				}
#line 2557 "gm.cc"
    break;

  case 61: /* $@2: %empty  */
#line 837 "parser.y"
                                {
					declevels.clear();
				}
#line 2565 "gm.cc"
    break;

  case 62: /* declaration: stars IDENTIFIER $@2 brackets  */
#line 841 "parser.y"
                                {
					string var = string((yyvsp[-2].str));
					string type = dtype;

					for( int i = 0 ; i < declevels.size() ;i++ )
					{
						type = "*" + type;
					}

					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					int resp = insertVariable(var, type, declevels);
					if( resp == -1 )
					{	
						cout << "COMPILETIME ERROR: Redeclaration of an already existing variable " << var << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					if( resp == -2 )
					{	
						cout << "COMPILETIME ERROR: Struct not declared " << dtype << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					if( declevels.size() != 0 ){
						SymbolTableEntry ste = getVariable(var);
						appendCode("memory " + var+"_"+ to_string(ste.scope) + " " + declevels[0] + " #" + to_string(getActualSize(dtype)));
					}
				}
#line 2604 "gm.cc"
    break;

  case 63: /* brackets: brackets '[' expression ']'  */
#line 879 "parser.y"
                                {
					string expr((yyvsp[-1].var.addr));
					string type((yyvsp[-1].var.type));

					if( type != "int" )
					{
						cout << "COMPILETIME ERROR: cannot use not int type for array sizes" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						declevels.push_back(expr);
					}
				}
#line 2625 "gm.cc"
    break;

  case 65: /* $@3: %empty  */
#line 900 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				string afterIf = getLabel();
				ifgoto.push(afterIf);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2641 "gm.cc"
    break;

  case 66: /* $@4: %empty  */
#line 912 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2650 "gm.cc"
    break;

  case 67: /* $@5: %empty  */
#line 917 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2659 "gm.cc"
    break;

  case 68: /* $@6: %empty  */
#line 922 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2669 "gm.cc"
    break;

  case 69: /* conditional_expression: IF '(' expression ')' $@3 '{' $@4 statement_list $@5 '}' $@6 else_statement  */
#line 929 "parser.y"
                        {
			}
#line 2676 "gm.cc"
    break;

  case 70: /* $@7: %empty  */
#line 935 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2688 "gm.cc"
    break;

  case 71: /* $@8: %empty  */
#line 943 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2697 "gm.cc"
    break;

  case 72: /* $@9: %empty  */
#line 948 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2706 "gm.cc"
    break;

  case 73: /* $@10: %empty  */
#line 953 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2716 "gm.cc"
    break;

  case 74: /* else_statement: ELIF '(' expression ')' $@7 '{' $@8 statement_list $@9 '}' $@10 else_statement  */
#line 959 "parser.y"
                        {
			}
#line 2723 "gm.cc"
    break;

  case 75: /* $@11: %empty  */
#line 962 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2732 "gm.cc"
    break;

  case 76: /* $@12: %empty  */
#line 968 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2741 "gm.cc"
    break;

  case 77: /* else_statement: ELSE '{' $@11 statement_list $@12 '}'  */
#line 973 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2751 "gm.cc"
    break;

  case 78: /* else_statement: %empty  */
#line 979 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2760 "gm.cc"
    break;

  case 79: /* $@13: %empty  */
#line 987 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
				}
#line 2769 "gm.cc"
    break;

  case 80: /* @14: %empty  */
#line 993 "parser.y"
                                {
					string forStart = getLabel();
					(yyvsp[-4].str)  = getCharArray(forStart);
					appendCode(forStart+":");
				}
#line 2779 "gm.cc"
    break;

  case 81: /* $@15: %empty  */
#line 999 "parser.y"
                                {
					string expr = forExpr;

					string statementstart = getLabel();

					string incrementstart = getLabel();
					forIncrement.push(incrementstart);

					string endfor = getLabel();
					forNext.push(endfor);

					(yyvsp[-4].str) = getCharArray(statementstart);
					(yyvsp[-2].var.addr) = getCharArray(incrementstart);
					(yyvsp[-2].var.type) = getCharArray(endfor);

					appendCode("if ( " + expr + " == #0 ) goto " + endfor);
					appendCode("goto " + statementstart);
					appendCode(incrementstart + ":");
				}
#line 2803 "gm.cc"
    break;

  case 82: /* $@16: %empty  */
#line 1020 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-9].str)));
					appendCode(string((yyvsp[-6].str)) + ":");
				}
#line 2812 "gm.cc"
    break;

  case 83: /* $@17: %empty  */
#line 1026 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-8].var.addr)));
					appendCode(string((yyvsp[-8].var.type)) + ":");
				}
#line 2821 "gm.cc"
    break;

  case 84: /* for_expression: FOR '(' $@13 loop_initialization_list ';' @14 loop_condition ';' $@15 loop_increment_list $@16 ')' '{' for_statement_list $@17 '}'  */
#line 1032 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					forIncrement.pop();
					forNext.pop();
				}
#line 2833 "gm.cc"
    break;

  case 87: /* loop_initialization_list: assignment_expression ',' loop_initialization_list  */
#line 1045 "parser.y"
                                                                                {}
#line 2839 "gm.cc"
    break;

  case 88: /* loop_initialization_list: assignment_expression  */
#line 1046 "parser.y"
                                                {}
#line 2845 "gm.cc"
    break;

  case 89: /* loop_initialization_list: %empty  */
#line 1047 "parser.y"
                          {}
#line 2851 "gm.cc"
    break;

  case 90: /* loop_condition: expression  */
#line 1052 "parser.y"
                                {
					if( strcmp((yyvsp[0].var.type), "bool") != 0 )
					{
						cout << "COMPILETIME ERROR: non-boolean expression is being used as loop condition" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					forExpr = string((yyvsp[0].var.addr));
				}
#line 2866 "gm.cc"
    break;

  case 91: /* loop_condition: %empty  */
#line 1064 "parser.y"
                                {
					forExpr = string(getTemp("bool"));
					appendCode(forExpr + " = #1");
				}
#line 2875 "gm.cc"
    break;

  case 92: /* loop_increment_list: expression ',' loop_increment_list  */
#line 1072 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression , loop_incr" << endl;
					}
				}
#line 2886 "gm.cc"
    break;

  case 93: /* loop_increment_list: expression  */
#line 1080 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2897 "gm.cc"
    break;

  case 94: /* loop_increment_list: %empty  */
#line 1088 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2908 "gm.cc"
    break;

  case 95: /* $@18: %empty  */
#line 1099 "parser.y"
                                {
					lambdaParamStack.clear();
				}
#line 2916 "gm.cc"
    break;

  case 96: /* $@19: %empty  */
#line 1109 "parser.y"
                                {
					if(currentFunction != "main")
					{
						cout << "COMPILETIME ERROR: Lambda functions need to be declared inside main" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}

					string functionName((yyvsp[0].str));
					string type = lambdaReturnType;
					string returnType = type;
					int res = insertFunction(functionName,returnType);
					currentFunction = functionName;
					string functionStart = getLabel();
					appendCode(functionStart + ":");
					setLabel(currentFunction, functionStart);

				}
#line 2940 "gm.cc"
    break;

  case 97: /* $@20: %empty  */
#line 1133 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
					setLambdaLocal();
				}
#line 2950 "gm.cc"
    break;

  case 98: /* $@21: %empty  */
#line 1140 "parser.y"
                                {
					if(!verifyParams(lambdaParamStack))
					{
						cout << "COMPILETIME ERROR: Inconsistent Parameters" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}

				}
#line 2965 "gm.cc"
    break;

  case 99: /* lambda_expression: LMFUNCTION $@18 '<' lamda_return_type '(' lambda_param_types ')' '>' IDENTIFIER $@19 '=' '[' '&' ']' '(' $@20 lambda_params ')' $@21 '{' lambda_body '}'  */
#line 1153 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					currentFunction = "main";
				}
#line 2976 "gm.cc"
    break;

  case 100: /* lamda_return_type: type_name stars  */
#line 1166 "parser.y"
                                {
					string newType;
					for(int i=0;i<starsCount;i++)
					{
						newType+='*';
					}
					starsCount = 0;
					dtype = newType + dtype;
					lambdaReturnType = dtype;
				}
#line 2991 "gm.cc"
    break;

  case 101: /* $@22: %empty  */
#line 1179 "parser.y"
                                {
					string newType;
					for(int i=0;i<starsCount;i++)
					{
						newType+='*';
					}
					starsCount = 0;
					dtype = newType + dtype;
					lambdaParamStack.push_back(dtype);
				}
#line 3006 "gm.cc"
    break;

  case 103: /* lambda_param_types: type_name stars  */
#line 1191 "parser.y"
                                {
					string newType;
					for(int i=0;i<starsCount;i++)
					{
						newType+='*';
					}
					starsCount = 0;
					dtype = newType + dtype;
					lambdaParamStack.push_back(dtype);
				}
#line 3021 "gm.cc"
    break;

  case 115: /* statement: ASM '(' S_CONST ',' S_CONST ',' IDENTIFIER ')' ';'  */
#line 1219 "parser.y"
                                {
					string code = "asm " + string((yyvsp[-6].str)) + " " + string((yyvsp[-4].str)) + " ";
					string str((yyvsp[-2].str));
					if( !is_Variable(str) ){
						cout << "COMPILETIME ERROR: " << str << " not declared" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else{
						SymbolTableEntry ste = getVariable(str);
						code += ste.name+"_"+to_string(ste.scope) + " ";
					}
					//appendCode("asm " + ste.name+"_"+to_string(ste.scope) + " " + string($<str>5) + " " + string($<str>7) + " " + string($<str>9));
					appendCode(code);
				}
#line 3042 "gm.cc"
    break;

  case 116: /* statement: RETURN expression ';'  */
#line 1236 "parser.y"
                                {
					string returnVal((yyvsp[-1].var.addr));
					appendCode("Return " + returnVal);
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return expression" << endl;
					}
				}
#line 3056 "gm.cc"
    break;

  case 117: /* statement: RETURN ';'  */
#line 1247 "parser.y"
                                {
					appendCode("return");
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return" << endl;
					}
				}
#line 3069 "gm.cc"
    break;

  case 118: /* statement: error ';'  */
#line 1256 "parser.y"
                                {
					error = -1;
					return 1;
				}
#line 3078 "gm.cc"
    break;

  case 119: /* flow_control_statement: BREAK  */
#line 1264 "parser.y"
                                {
					if( forNext.empty() == true )
					{
						cout << "COMPILETIME ERROR: cannot use break outside for loop" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						appendCode("goto " + forNext.top());
					}
				}
#line 3096 "gm.cc"
    break;

  case 120: /* flow_control_statement: CONTINUE  */
#line 1278 "parser.y"
                                {
					if( forIncrement.empty() == true )
					{
						cout << "COMPILETIME ERROR: cannot use continue outside for loop" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					else
					{
						appendCode("goto " + forIncrement.top());
					}
				}
#line 3114 "gm.cc"
    break;

  case 123: /* $@23: %empty  */
#line 1298 "parser.y"
                {
			currentStruct = "main";
			insertStruct(currentStruct);
		}
#line 3123 "gm.cc"
    break;

  case 128: /* attribute: type_name stars IDENTIFIER ';'  */
#line 1314 "parser.y"
                                {
					string addr((yyvsp[-1].str));
					string type = dtype;
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					stdeclevels.clear();
					defaultStValues.clear();
					insertAttribute(addr, type,stdeclevels,defaultStValues);
				}
#line 3140 "gm.cc"
    break;

  case 129: /* $@24: %empty  */
#line 1329 "parser.y"
                                {
					string addr((yyvsp[-2].str));
					string type = dtype;
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}

					string rAddr((yyvsp[0].str));
					string rType((yyvsp[0].str));

					if(rType != "char" && rType != "*char")
						rType ="int";

					if(type != rType)
					{
						cout << "COMPILETIME ERROR: Types don't match" << addr << " and "<<rAddr<<endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					stdeclevels.clear();
					defaultStValues.clear();
					starsCount = 0;

					if(rType == "int")
						defaultStValues.push_back(stoi(rAddr)); 
					
					insertAttribute(addr, type,stdeclevels,defaultStValues);
					defaultStValues.clear();
				}
#line 3176 "gm.cc"
    break;

  case 132: /* attribute_constant: I_CONST  */
#line 1365 "parser.y"
                                {
					(yyval.var.addr) = getCharArray((yyvsp[0].str));
				}
#line 3184 "gm.cc"
    break;

  case 133: /* attribute_constant: C_CONST  */
#line 1368 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("char");
				}
#line 3192 "gm.cc"
    break;

  case 134: /* attribute_constant: S_CONST  */
#line 1371 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("*char");
				}
#line 3200 "gm.cc"
    break;

  case 135: /* struct_declaration: STRUCT IDENTIFIER struct_body  */
#line 1378 "parser.y"
                                {
					string var = string((yyvsp[-1].str));
					string type = "struct";
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					if( insertAttribute(var, type, stdeclevels,defaultStValues) == -1 )
					{	
						cout << "COMPILETIME ERROR: Redeclaration of an already existing variable " << var << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
				}
#line 3221 "gm.cc"
    break;

  case 136: /* $@25: %empty  */
#line 1397 "parser.y"
                                {
					defaultStValues.clear();
					stdeclevels.clear();
				}
#line 3230 "gm.cc"
    break;

  case 138: /* $@26: %empty  */
#line 1407 "parser.y"
                                {
					tempStValues.clear();
				}
#line 3238 "gm.cc"
    break;

  case 139: /* $@27: %empty  */
#line 1411 "parser.y"
                                {
					string var = string((yyvsp[-3].str));
					string type = dtype;

					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					int tot_size = 1;
					for( int i = declevels.size()-1 ; i >=0 ; i-- )
					{
						addStructLevels(var+"_"+to_string(i),type);
						defaultStValues.push_back(tempStValues[i]);
						type = "*" + type;
						tot_size*=tempStValues[i];
					}

					addStructLevels(var,type);
					defaultStValues.push_back(tot_size);

					declevels.clear();
				}
#line 3266 "gm.cc"
    break;

  case 142: /* st_brackets: st_brackets '[' st_const ']'  */
#line 1438 "parser.y"
                                {
					string expr((yyvsp[-1].str));
					declevels.push_back(expr);
				}
#line 3275 "gm.cc"
    break;

  case 144: /* st_const: I_CONST  */
#line 1446 "parser.y"
                                                        {
								string var((yyvsp[0].str));
								(yyval.str) = getCharArray(var);
								tempStValues.push_back(stoi(var));

							}
#line 3286 "gm.cc"
    break;

  case 145: /* st_const: IDENTIFIER  */
#line 1453 "parser.y"
                                                {
							string var((yyvsp[0].str));
 
							if(is_Variable(var))
							{
								SymbolTableEntry ste = getVariable(var);
								if(ste.dataType != "int")
								{
									cout << "COMPILETIME ERROR: " << var << " does not have int type "<<endl;
									cout << "At line : " << yylineno << endl;
									error = -1;
									return 1;				
								}
	
								(yyval.str) = getCharArray(var);
								tempStValues.push_back(ste.defaultValue);
							}
							else
							{
									cout << "COMPILETIME ERROR: " << var << " not declared "<<endl;
									cout << "At line : " << yylineno << endl;
									error = -1;
									return 1;
							}
						}
#line 3316 "gm.cc"
    break;

  case 146: /* $@28: %empty  */
#line 1482 "parser.y"
                                {
					string functionName((yyvsp[-1].str));
					string type = dtype;
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					string returnType = type;
					int res = insertFunction(functionName,returnType);
					currentFunction = functionName;
					currentScope++;
					scopeStack.push(currentScope);
				}
#line 3334 "gm.cc"
    break;

  case 148: /* $@29: %empty  */
#line 1500 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 3347 "gm.cc"
    break;

  case 150: /* $@30: %empty  */
#line 1510 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 3360 "gm.cc"
    break;

  case 152: /* functionArguments: type_name stars IDENTIFIER  */
#line 1523 "parser.y"
                        {
				string name((yyvsp[0].str));
				string type = dtype;
				for( int i = 0 ; i < starsCount ; i++ )
				{
					type = "*" + type;
				}
				insertParam(name, type);
			}
#line 3374 "gm.cc"
    break;

  case 153: /* functionArguments: functionArguments ',' type_name stars IDENTIFIER  */
#line 1533 "parser.y"
                        {
				string name((yyvsp[0].str));
				string type = dtype;
				for( int i = 0 ; i < starsCount ; i++ )
				{
					type = "*" + type;
				}
				starsCount = 0;
				insertParam(name, type);
			}
#line 3389 "gm.cc"
    break;

  case 154: /* $@31: %empty  */
#line 1547 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
					(yyvsp[0].intval) = scopeStack.top();
				}
#line 3399 "gm.cc"
    break;

  case 155: /* statement_block: '{' $@31 statement_list '}'  */
#line 1554 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					
					if( parseDebug == 1 )
					{
						cout << "statement_block -> { statementlist }" << endl;
					}
				}
#line 3414 "gm.cc"
    break;

  case 156: /* statement_block: '{' '}'  */
#line 1565 "parser.y"
                                                                        {
												if( parseDebug == 1 )
												{
													cout << "statementblock -> {}" << endl;
												}
										}
#line 3425 "gm.cc"
    break;


#line 3429 "gm.cc"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1572 "parser.y"



int main( int argcount, char* arguements[] )
{
	error = 0;
	yyin = fopen(arguements[1], "r");
	init();
	int i = yyparse();

    std::ofstream outputFile("output.txt",std::ios::trunc);
    std::streambuf *coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(outputFile.rdbuf());
		if( i != 0 or error != 0 )
		{
			cout << "Error = " << error << endl<<endl;
			printTable();
			std::cout.rdbuf(coutbuf);
			outputFile.close();

			std::ofstream outputFile1("code.txt",std::ios::trunc);
    
			std::streambuf *coutbuf1 = std::cout.rdbuf();
    	std::cout.rdbuf(outputFile1.rdbuf());

    	std::cout.rdbuf(coutbuf1);

    	outputFile1.close();
			return 0;
		}
		cout<<"Successfully Compiled"<<endl<<endl;

    printTable();

		std::cout.rdbuf(coutbuf);

    outputFile.close();

		std::ofstream outputFile1("code.txt",std::ios::trunc);
    std::streambuf *coutbuf1 = std::cout.rdbuf();
    std::cout.rdbuf(outputFile1.rdbuf());

    printCode();

    std::cout.rdbuf(coutbuf1);

    outputFile1.close();

		
	// translate();
}
