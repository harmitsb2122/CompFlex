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
  YYSYMBOL_STRUCT_IDENTIFIER = 40,         /* STRUCT_IDENTIFIER  */
  YYSYMBOL_LET = 41,                       /* LET  */
  YYSYMBOL_PRINT = 42,                     /* PRINT  */
  YYSYMBOL_PRINTS = 43,                    /* PRINTS  */
  YYSYMBOL_SCAN = 44,                      /* SCAN  */
  YYSYMBOL_VAR = 45,                       /* VAR  */
  YYSYMBOL_NULL_ = 46,                     /* NULL_  */
  YYSYMBOL_MALLOC = 47,                    /* MALLOC  */
  YYSYMBOL_LMFUNCTION = 48,                /* LMFUNCTION  */
  YYSYMBOL_ASM = 49,                       /* ASM  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* ')'  */
  YYSYMBOL_52_ = 52,                       /* '['  */
  YYSYMBOL_53_ = 53,                       /* ']'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '+'  */
  YYSYMBOL_57_ = 57,                       /* '-'  */
  YYSYMBOL_58_ = 58,                       /* '!'  */
  YYSYMBOL_59_ = 59,                       /* '&'  */
  YYSYMBOL_60_ = 60,                       /* '/'  */
  YYSYMBOL_61_ = 61,                       /* '%'  */
  YYSYMBOL_62_ = 62,                       /* '<'  */
  YYSYMBOL_63_ = 63,                       /* '>'  */
  YYSYMBOL_64_ = 64,                       /* '='  */
  YYSYMBOL_65_ = 65,                       /* '{'  */
  YYSYMBOL_66_ = 66,                       /* '}'  */
  YYSYMBOL_67_ = 67,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_primary_expression = 69,        /* primary_expression  */
  YYSYMBOL_constant = 70,                  /* constant  */
  YYSYMBOL_postfix_expression = 71,        /* postfix_expression  */
  YYSYMBOL_72_1 = 72,                      /* $@1  */
  YYSYMBOL_functionParameters = 73,        /* functionParameters  */
  YYSYMBOL_argument_list = 74,             /* argument_list  */
  YYSYMBOL_unary_expression = 75,          /* unary_expression  */
  YYSYMBOL_type_name = 76,                 /* type_name  */
  YYSYMBOL_stars = 77,                     /* stars  */
  YYSYMBOL_unary_operator = 78,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 79, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 80,       /* additive_expression  */
  YYSYMBOL_relational_expression = 81,     /* relational_expression  */
  YYSYMBOL_equality_expression = 82,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 83,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 84,     /* logical_or_expression  */
  YYSYMBOL_expression = 85,                /* expression  */
  YYSYMBOL_assignment_operator = 86,       /* assignment_operator  */
  YYSYMBOL_assignment_expression = 87,     /* assignment_expression  */
  YYSYMBOL_declaration_expression = 88,    /* declaration_expression  */
  YYSYMBOL_declarationlist = 89,           /* declarationlist  */
  YYSYMBOL_declaration = 90,               /* declaration  */
  YYSYMBOL_91_2 = 91,                      /* $@2  */
  YYSYMBOL_brackets = 92,                  /* brackets  */
  YYSYMBOL_conditional_expression = 93,    /* conditional_expression  */
  YYSYMBOL_94_3 = 94,                      /* $@3  */
  YYSYMBOL_95_4 = 95,                      /* $@4  */
  YYSYMBOL_96_5 = 96,                      /* $@5  */
  YYSYMBOL_97_6 = 97,                      /* $@6  */
  YYSYMBOL_else_statement = 98,            /* else_statement  */
  YYSYMBOL_99_7 = 99,                      /* $@7  */
  YYSYMBOL_100_8 = 100,                    /* $@8  */
  YYSYMBOL_101_9 = 101,                    /* $@9  */
  YYSYMBOL_102_10 = 102,                   /* $@10  */
  YYSYMBOL_103_11 = 103,                   /* $@11  */
  YYSYMBOL_104_12 = 104,                   /* $@12  */
  YYSYMBOL_for_expression = 105,           /* for_expression  */
  YYSYMBOL_106_13 = 106,                   /* $@13  */
  YYSYMBOL_107_14 = 107,                   /* @14  */
  YYSYMBOL_108_15 = 108,                   /* $@15  */
  YYSYMBOL_109_16 = 109,                   /* $@16  */
  YYSYMBOL_110_17 = 110,                   /* $@17  */
  YYSYMBOL_loop_initialization_list = 111, /* loop_initialization_list  */
  YYSYMBOL_loop_condition = 112,           /* loop_condition  */
  YYSYMBOL_loop_increment_list = 113,      /* loop_increment_list  */
  YYSYMBOL_lambda_expression = 114,        /* lambda_expression  */
  YYSYMBOL_115_18 = 115,                   /* $@18  */
  YYSYMBOL_116_19 = 116,                   /* $@19  */
  YYSYMBOL_117_20 = 117,                   /* $@20  */
  YYSYMBOL_118_21 = 118,                   /* $@21  */
  YYSYMBOL_lamda_return_type = 119,        /* lamda_return_type  */
  YYSYMBOL_lambda_param_types = 120,       /* lambda_param_types  */
  YYSYMBOL_121_22 = 121,                   /* $@22  */
  YYSYMBOL_lambda_params = 122,            /* lambda_params  */
  YYSYMBOL_lambda_body = 123,              /* lambda_body  */
  YYSYMBOL_statement = 124,                /* statement  */
  YYSYMBOL_flow_control_statement = 125,   /* flow_control_statement  */
  YYSYMBOL_statement_list = 126,           /* statement_list  */
  YYSYMBOL_begin = 127,                    /* begin  */
  YYSYMBOL_128_23 = 128,                   /* $@23  */
  YYSYMBOL_blocks = 129,                   /* blocks  */
  YYSYMBOL_attribute = 130,                /* attribute  */
  YYSYMBOL_struct_declaration = 131,       /* struct_declaration  */
  YYSYMBOL_132_24 = 132,                   /* $@24  */
  YYSYMBOL_struct_body = 133,              /* struct_body  */
  YYSYMBOL_134_25 = 134,                   /* $@25  */
  YYSYMBOL_struct_attributes = 135,        /* struct_attributes  */
  YYSYMBOL_136_26 = 136,                   /* $@26  */
  YYSYMBOL_functionPrefix = 137,           /* functionPrefix  */
  YYSYMBOL_138_27 = 138,                   /* $@27  */
  YYSYMBOL_functionSuffix = 139,           /* functionSuffix  */
  YYSYMBOL_140_28 = 140,                   /* $@28  */
  YYSYMBOL_141_29 = 141,                   /* $@29  */
  YYSYMBOL_functionArguments = 142,        /* functionArguments  */
  YYSYMBOL_statement_block = 143,          /* statement_block  */
  YYSYMBOL_144_30 = 144                    /* $@30  */
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
#define YYLAST   349

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

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
       2,     2,     2,    58,     2,     2,     2,    61,    59,     2,
      50,    51,    55,    56,    54,    57,     2,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    67,
      62,    64,    63,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    66,     2,     2,     2,     2,
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
       0,    55,    55,    72,    89,    94,    99,   108,   114,   120,
     128,   132,   165,   180,   197,   196,   240,   241,   245,   271,
     299,   303,   316,   329,   351,   371,   372,   373,   377,   378,
     382,   383,   384,   385,   386,   390,   394,   415,   437,   461,
     467,   489,   513,   519,   540,   561,   582,   605,   611,   632,
     655,   661,   684,   690,   713,   721,   732,   752,   756,   757,
     762,   761,   796,   813,   818,   830,   835,   840,   817,   853,
     861,   866,   871,   852,   880,   886,   879,   897,   905,   911,
     917,   938,   944,   904,   961,   962,   963,   967,   980,   987,
     995,  1004,  1015,  1025,  1049,  1056,  1014,  1080,  1084,  1083,
    1088,  1091,  1094,  1098,  1101,  1102,  1103,  1104,  1105,  1106,
    1107,  1108,  1125,  1136,  1145,  1153,  1167,  1183,  1184,  1188,
    1188,  1196,  1197,  1198,  1202,  1212,  1218,  1216,  1233,  1232,
    1242,  1240,  1254,  1258,  1257,  1276,  1275,  1286,  1285,  1298,
    1308,  1323,  1322,  1341
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
  "IDENTIFIER", "STRUCT_IDENTIFIER", "LET", "PRINT", "PRINTS", "SCAN",
  "VAR", "NULL_", "MALLOC", "LMFUNCTION", "ASM", "'('", "')'", "'['",
  "']'", "','", "'*'", "'+'", "'-'", "'!'", "'&'", "'/'", "'%'", "'<'",
  "'>'", "'='", "'{'", "'}'", "';'", "$accept", "primary_expression",
  "constant", "postfix_expression", "$@1", "functionParameters",
  "argument_list", "unary_expression", "type_name", "stars",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "expression", "assignment_operator",
  "assignment_expression", "declaration_expression", "declarationlist",
  "declaration", "$@2", "brackets", "conditional_expression", "$@3", "$@4",
  "$@5", "$@6", "else_statement", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "for_expression", "$@13", "@14", "$@15", "$@16", "$@17",
  "loop_initialization_list", "loop_condition", "loop_increment_list",
  "lambda_expression", "$@18", "$@19", "$@20", "$@21", "lamda_return_type",
  "lambda_param_types", "$@22", "lambda_params", "lambda_body",
  "statement", "flow_control_statement", "statement_list", "begin", "$@23",
  "blocks", "attribute", "struct_declaration", "$@24", "struct_body",
  "$@25", "struct_attributes", "$@26", "functionPrefix", "$@27",
  "functionSuffix", "$@28", "$@29", "functionArguments", "statement_block",
  "$@30", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-119)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -123,    41,    29,  -123,  -123,  -123,   -27,     5,  -123,    29,
    -123,    29,  -123,    28,     5,    39,  -123,  -123,    48,  -123,
    -123,   -33,  -123,     5,     4,    13,  -123,  -123,    46,  -123,
    -123,    -1,    19,  -123,     5,  -123,   -32,  -123,    25,    54,
    -123,    48,    48,    30,  -123,  -123,    25,     5,  -123,  -123,
     264,  -123,    65,    44,  -123,  -123,    56,    62,    42,   290,
     290,  -123,  -123,  -123,    63,  -123,  -123,    66,  -123,    67,
     290,  -123,  -123,  -123,  -123,  -123,  -123,  -123,    -6,    57,
       5,   290,   -30,   -29,   -26,    31,    91,    94,    69,    70,
      71,  -123,  -123,    74,   205,    75,    64,  -123,  -123,  -123,
     290,  -123,  -123,    77,  -123,  -123,  -123,   290,    72,    97,
      78,  -123,  -123,   290,  -123,   290,    96,  -123,    92,  -123,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
     290,    99,  -123,    68,   100,    48,    93,  -123,    95,  -123,
    -123,     5,  -123,  -123,  -123,   -30,   -30,   -29,   -29,   -29,
     -29,   -26,   -26,    31,    91,    57,    98,    87,  -123,  -123,
    -123,   -28,  -123,  -123,  -123,   105,   121,  -123,  -123,  -123,
     290,  -123,   101,  -123,   290,    48,   103,   106,  -123,   290,
    -123,  -123,   108,   110,   124,   290,  -123,   102,   264,   113,
     107,   117,   111,  -123,  -123,    48,   132,   109,  -123,   290,
     112,  -123,  -123,  -123,   118,  -123,  -123,   116,   290,   122,
      58,   123,  -123,   120,   125,   127,  -123,   128,   264,  -123,
     290,   129,  -123,   264,   130,   136,   126,  -123,  -123,  -123,
    -123,   131,   133,    48,  -123,  -123,   137,   135,   264,  -123,
    -123,   140,   134,   264,  -123,   141,  -123,    58,  -123,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     119,     0,   123,     1,    26,    25,    27,    29,   120,   123,
     125,   123,   128,     0,    29,     0,   121,   122,   132,   126,
      28,     0,    27,    29,     0,     0,   133,   124,     0,   129,
     127,     0,     0,   135,    29,   134,     0,   130,     0,     0,
     137,     0,   132,   141,   136,   139,     0,    29,   131,   143,
       0,   138,     0,     0,   115,   116,     0,     0,     0,     0,
       0,     8,     9,     7,     2,     3,     6,     0,    92,     0,
       0,    33,    30,    31,    32,    34,    10,     4,    20,    35,
      29,     0,    39,    42,    47,    50,    52,    54,     0,     0,
       0,   107,   108,     0,     0,     0,     0,   140,   114,    78,
       0,   113,    35,     0,    21,    22,    14,     0,     0,     0,
       0,    12,    13,     0,    55,     0,     0,    57,    59,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   105,   106,   104,   117,   110,   142,
      86,     0,   112,     0,     0,     0,     0,     5,     0,    56,
      60,    29,    36,    37,    38,    40,    41,    45,    46,    43,
      44,    48,    49,    51,    53,     0,    85,     0,    64,    16,
      15,     0,    18,    24,    97,     0,     0,    11,    63,    58,
      86,    79,     0,    17,     0,   101,     0,    61,    84,    88,
      65,    19,    98,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    80,    66,   101,     0,     0,    62,    91,
       0,    99,    93,   111,    90,    81,    67,     0,    91,     0,
      77,     0,    89,     0,     0,     0,    68,     0,     0,    74,
       0,     0,    82,     0,     0,     0,     0,    75,    69,    94,
      83,     0,     0,     0,    76,    70,     0,   102,     0,    95,
      71,     0,     0,     0,    72,     0,   103,    77,    96,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,  -123,  -123,   -49,    -2,     1,
    -123,   -40,   -72,   -55,    60,    61,  -123,   -56,  -123,  -122,
    -123,    43,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
     -62,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,    16,  -123,   -17,  -123,  -123,  -123,  -123,
    -123,  -123,    -3,  -123,  -123,  -123,  -123,  -123,   -88,  -123,
    -123,    38,  -123,  -123,  -123,  -123,  -123,   168,  -123,  -123,
    -123,  -123,  -123,  -123,   -31,   167,  -123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    76,    77,    78,   143,   170,   171,   102,    80,   116,
      81,    82,    83,    84,    85,    86,    87,    88,   115,    89,
      90,   117,   118,   178,   187,    91,   182,   198,   210,   220,
     226,   242,   248,   252,   257,   233,   241,    92,   140,   189,
     209,   219,   236,   167,   197,   215,    93,   108,   217,   243,
     251,   175,   193,   199,   246,   255,    94,    95,    96,     1,
       2,     8,     9,    10,    25,    13,    18,    24,    42,    11,
      31,    35,    38,    46,    36,    44,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    79,   103,     4,   125,   126,   137,     7,    15,     7,
     104,   105,     5,    22,   110,    20,    23,    26,   166,    40,
     111,   112,    41,   183,    28,   120,   184,   123,   124,    34,
     121,   122,   119,     4,    27,    39,   127,   128,    12,    47,
      23,     3,     5,     6,   141,    79,   113,    16,    52,    17,
      33,   144,     4,   157,   158,   159,   160,   148,   166,   149,
      14,     5,    22,   129,   130,   224,   225,    19,    59,    60,
      29,   152,   153,   154,   161,   162,    61,    62,    21,    63,
      30,    64,    65,   155,   156,    32,    37,   172,    66,    67,
      43,   165,    70,    45,    59,    60,    49,    71,    72,    73,
      74,    75,    61,    62,    97,    63,    99,    64,    65,   101,
     204,    98,   100,   106,    66,    67,   107,   109,    70,   169,
     131,   114,   132,    71,    72,    73,    74,    75,   191,   147,
     139,   165,   146,   196,   145,   150,   133,   134,   135,   202,
     232,   136,   138,   174,   142,   237,   151,   176,   177,    79,
     168,   173,   180,   214,   181,   185,   186,   194,   195,  -100,
     250,   200,   214,   201,   208,   256,   190,   205,   207,   203,
     206,   212,   218,   223,   234,   227,   213,   230,   216,    79,
     221,   238,   235,   192,    79,   228,   239,   231,   249,    41,
     229,   163,   240,   164,   179,   259,   188,   244,   245,    79,
     254,   222,   211,   192,    79,   253,    53,   258,    54,     4,
      48,    55,   247,    51,     0,    56,     0,    57,     5,    22,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,    61,
      62,    34,    63,     0,    64,    65,     0,     0,     0,     0,
       0,    66,    67,    68,    69,    70,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    53,     0,    54,     4,     0,
      55,  -118,     0,     0,    56,     0,    57,     5,    22,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,    61,    62,
       0,    63,     0,    64,    65,     0,     0,     0,     0,     0,
      66,    67,    68,    69,    70,     0,    59,    60,     0,    71,
      72,    73,    74,    75,    61,    62,     0,    63,     0,    64,
      65,     0,     0,     0,     0,     0,    66,    67,     0,     0,
      70,     0,     0,     0,     0,    71,    72,    73,    74,    75
};

static const yytype_int16 yycheck[] =
{
       2,    50,    58,     4,    30,    31,    94,     9,     7,    11,
      59,    60,    13,    14,    70,    14,    18,    50,   140,    51,
      26,    27,    54,    51,    23,    55,    54,    56,    57,    31,
      60,    61,    81,     4,    67,    34,    62,    63,    65,    41,
      42,     0,    13,    14,   100,    94,    52,     9,    47,    11,
      51,   107,     4,   125,   126,   127,   128,   113,   180,   115,
      55,    13,    14,    32,    33,     7,     8,    39,    26,    27,
      66,   120,   121,   122,   129,   130,    34,    35,    39,    37,
      67,    39,    40,   123,   124,    39,    67,   143,    46,    47,
      65,   140,    50,    39,    26,    27,    66,    55,    56,    57,
      58,    59,    34,    35,    39,    37,    50,    39,    40,    67,
     198,    67,    50,    50,    46,    47,    50,    50,    50,    51,
      29,    64,    28,    55,    56,    57,    58,    59,   184,    51,
      66,   180,    35,   189,    62,    39,    67,    67,    67,   195,
     228,    67,    67,   145,    67,   233,    54,    54,    53,   198,
      51,    51,    54,   209,    67,    50,    35,    54,    52,    51,
     248,    51,   218,    39,    53,   253,    65,    54,    51,    67,
      63,    39,    54,    51,   230,    52,    67,    50,    66,   228,
      64,    51,    53,   185,   233,    65,    50,    59,    51,    54,
      65,   131,    66,   132,   151,   257,   180,    66,    65,   248,
      66,   218,   205,   205,   253,    65,     1,    66,     3,     4,
      42,     6,   243,    46,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,   243,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,     1,    -1,     3,     4,    -1,
       6,    66,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    -1,    26,    27,    -1,    55,
      56,    57,    58,    59,    34,    35,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   127,   128,     0,     4,    13,    14,    76,   129,   130,
     131,   137,    65,   133,    55,    77,   129,   129,   134,    39,
      77,    39,    14,    76,   135,   132,    50,    67,    77,    66,
      67,   138,    39,    51,    76,   139,   142,    67,   140,    77,
      51,    54,   136,    65,   143,    39,   141,    76,   135,    66,
     144,   143,    77,     1,     3,     6,    10,    12,    15,    26,
      27,    34,    35,    37,    39,    40,    46,    47,    48,    49,
      50,    55,    56,    57,    58,    59,    69,    70,    71,    75,
      76,    78,    79,    80,    81,    82,    83,    84,    85,    87,
      88,    93,   105,   114,   124,   125,   126,    39,    67,    50,
      50,    67,    75,    85,    75,    75,    50,    50,   115,    50,
      85,    26,    27,    52,    64,    86,    77,    89,    90,    75,
      55,    60,    61,    56,    57,    30,    31,    62,    63,    32,
      33,    29,    28,    67,    67,    67,    67,   126,    67,    66,
     106,    85,    67,    72,    85,    62,    35,    51,    85,    85,
      39,    54,    75,    75,    75,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    83,    75,    87,   111,    51,    51,
      73,    74,    85,    51,    76,   119,    54,    53,    91,    89,
      54,    67,    94,    51,    54,    50,    35,    92,   111,   107,
      65,    85,    76,   120,    54,    52,    85,   112,    95,   121,
      51,    39,    85,    67,   126,    54,    63,    51,    53,   108,
      96,   120,    39,    67,    85,   113,    66,   116,    54,   109,
      97,    64,   113,    51,     7,     8,    98,    52,    65,    65,
      50,    59,   126,   103,    85,    53,   110,   126,    51,    50,
      66,   104,    99,   117,    66,    65,   122,   142,   100,    51,
     126,   118,   101,    65,    66,   123,   126,   102,    66,    98
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    71,    72,    71,    73,    73,    74,    74,
      75,    75,    75,    75,    75,    76,    76,    76,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    81,    81,    82,    82,    82,
      83,    83,    84,    84,    85,    86,    87,    88,    89,    89,
      91,    90,    92,    92,    94,    95,    96,    97,    93,    99,
     100,   101,   102,    98,   103,   104,    98,    98,   106,   107,
     108,   109,   110,   105,   111,   111,   111,   112,   112,   113,
     113,   113,   115,   116,   117,   118,   114,   119,   121,   120,
     120,   120,   122,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   126,   126,   128,
     127,   129,   129,   129,   130,   130,   132,   131,   134,   133,
     136,   135,   135,   138,   137,   140,   139,   141,   139,   142,
     142,   144,   143,   143
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     2,     2,     0,     4,     1,     2,     1,     3,
       1,     2,     2,     2,     4,     1,     1,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     1,     3,     2,     3,     1,
       0,     4,     4,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,    12,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    16,     3,     1,     0,     1,     0,     3,
       1,     0,     0,     0,     0,     0,    22,     1,     0,     4,
       1,     0,     1,     1,     2,     2,     2,     1,     1,     2,
       2,     9,     3,     2,     2,     1,     1,     2,     1,     0,
       2,     2,     2,     0,     4,     1,     0,     5,     0,     4,
       0,     6,     0,     0,     6,     0,     3,     0,     4,     3,
       5,     0,     4,     2
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 55 "parser.y"
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
#line 1621 "gm.cc"
    break;

  case 3: /* primary_expression: STRUCT_IDENTIFIER  */
#line 72 "parser.y"
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
#line 1643 "gm.cc"
    break;

  case 4: /* primary_expression: constant  */
#line 89 "parser.y"
                                        {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
					debug(2);
				}
#line 1653 "gm.cc"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 94 "parser.y"
                                            {
					(yyval.var.addr) = (yyvsp[-1].var.addr);
					(yyval.var.type) = (yyvsp[-1].var.type);
					debug(3);
				}
#line 1663 "gm.cc"
    break;

  case 6: /* primary_expression: NULL_  */
#line 99 "parser.y"
                                {
					(yyval.var.type) = getCharArray("int");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #0");
					debug(4);
				}
#line 1674 "gm.cc"
    break;

  case 7: /* constant: I_CONST  */
#line 108 "parser.y"
                                {
					(yyval.var.type) = getCharArray("int");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(5);
				}
#line 1685 "gm.cc"
    break;

  case 8: /* constant: C_CONST  */
#line 114 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("char");
					(yyval.var.addr) = getTemp("char");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(6);
				}
#line 1696 "gm.cc"
    break;

  case 9: /* constant: S_CONST  */
#line 120 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("*char");
					(yyval.var.addr) = getTemp("*char");
					appendCode("string " + string((yyval.var.addr)) + " " + string((yyvsp[0].str)));
				}
#line 1706 "gm.cc"
    break;

  case 10: /* postfix_expression: primary_expression  */
#line 128 "parser.y"
                                                {
					(yyval.var.type) = (yyvsp[0].var.type);
					(yyval.var.addr) = (yyvsp[0].var.addr);
				}
#line 1715 "gm.cc"
    break;

  case 11: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 132 "parser.y"
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
							appendCode( temp1 + " = " + index + " * #" + to_string(getActualSize(arrayType)) );

							string temp = string(getTemp(type));
							appendCode( temp + " = " + addr + " + " + temp1 );

							(yyval.var.type) = getCharArray(arrayType);
							(yyval.var.addr) = getCharArray("*"+temp);
						}
					}
				}
#line 1752 "gm.cc"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 165 "parser.y"
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
						appendCode(string((yyvsp[-1].var.addr)) + " = " + string((yyvsp[-1].var.addr)) + " + " + "#1");
						(yyval.var.type) = (yyvsp[-1].var.type);
					}
				}
#line 1771 "gm.cc"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 181 "parser.y"
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
#line 1791 "gm.cc"
    break;

  case 14: /* $@1: %empty  */
#line 197 "parser.y"
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
#line 1812 "gm.cc"
    break;

  case 15: /* postfix_expression: IDENTIFIER '(' $@1 functionParameters  */
#line 214 "parser.y"
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
#line 1840 "gm.cc"
    break;

  case 18: /* argument_list: expression  */
#line 246 "parser.y"
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
#line 1870 "gm.cc"
    break;

  case 19: /* argument_list: argument_list ',' expression  */
#line 272 "parser.y"
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
#line 1899 "gm.cc"
    break;

  case 20: /* unary_expression: postfix_expression  */
#line 299 "parser.y"
                                          {	
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 1908 "gm.cc"
    break;

  case 21: /* unary_expression: INC_OP unary_expression  */
#line 303 "parser.y"
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
#line 1926 "gm.cc"
    break;

  case 22: /* unary_expression: DEC_OP unary_expression  */
#line 316 "parser.y"
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
#line 1944 "gm.cc"
    break;

  case 23: /* unary_expression: unary_operator unary_expression  */
#line 329 "parser.y"
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
#line 1971 "gm.cc"
    break;

  case 24: /* unary_expression: MALLOC '(' expression ')'  */
#line 351 "parser.y"
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
						(yyval.var.type) = getCharArray("int");
						(yyval.var.addr) = getTemp("int");
						appendCode("memory " + string((yyval.var.addr)) + " " + string((yyvsp[-1].var.addr)) + " #1" );
					}
				}
#line 1993 "gm.cc"
    break;

  case 25: /* type_name: INT  */
#line 371 "parser.y"
                                {dtype = "int"; starsCount = 0; }
#line 1999 "gm.cc"
    break;

  case 26: /* type_name: CHAR  */
#line 372 "parser.y"
                               {dtype = "char"; starsCount = 0; }
#line 2005 "gm.cc"
    break;

  case 27: /* type_name: STRUCT  */
#line 373 "parser.y"
                                 {dtype = "struct"; starsCount = 0; }
#line 2011 "gm.cc"
    break;

  case 28: /* stars: '*' stars  */
#line 377 "parser.y"
                            { starsCount++; }
#line 2017 "gm.cc"
    break;

  case 30: /* unary_operator: '+'  */
#line 382 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2023 "gm.cc"
    break;

  case 31: /* unary_operator: '-'  */
#line 383 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2029 "gm.cc"
    break;

  case 32: /* unary_operator: '!'  */
#line 384 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2035 "gm.cc"
    break;

  case 33: /* unary_operator: '*'  */
#line 385 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2041 "gm.cc"
    break;

  case 34: /* unary_operator: '&'  */
#line 386 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2047 "gm.cc"
    break;

  case 35: /* multiplicative_expression: unary_expression  */
#line 390 "parser.y"
                                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2056 "gm.cc"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 394 "parser.y"
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
#line 2081 "gm.cc"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 416 "parser.y"
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
#line 2106 "gm.cc"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 438 "parser.y"
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
#line 2131 "gm.cc"
    break;

  case 39: /* additive_expression: multiplicative_expression  */
#line 462 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2140 "gm.cc"
    break;

  case 40: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 468 "parser.y"
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
#line 2165 "gm.cc"
    break;

  case 41: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 490 "parser.y"
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
#line 2190 "gm.cc"
    break;

  case 42: /* relational_expression: additive_expression  */
#line 514 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2199 "gm.cc"
    break;

  case 43: /* relational_expression: relational_expression '<' additive_expression  */
#line 520 "parser.y"
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
#line 2223 "gm.cc"
    break;

  case 44: /* relational_expression: relational_expression '>' additive_expression  */
#line 541 "parser.y"
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
#line 2247 "gm.cc"
    break;

  case 45: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 562 "parser.y"
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
#line 2271 "gm.cc"
    break;

  case 46: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 583 "parser.y"
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
#line 2295 "gm.cc"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 606 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2304 "gm.cc"
    break;

  case 48: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 612 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
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
#line 2328 "gm.cc"
    break;

  case 49: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 633 "parser.y"
                                {
					string type1((yyvsp[-2].var.type));
					string type2((yyvsp[0].var.type));

					if( type1 != "int" or type2 != "int" )
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
#line 2352 "gm.cc"
    break;

  case 50: /* logical_and_expression: equality_expression  */
#line 656 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2361 "gm.cc"
    break;

  case 51: /* logical_and_expression: logical_and_expression AND_OP equality_expression  */
#line 662 "parser.y"
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
#line 2385 "gm.cc"
    break;

  case 52: /* logical_or_expression: logical_and_expression  */
#line 685 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2394 "gm.cc"
    break;

  case 53: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 691 "parser.y"
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
#line 2418 "gm.cc"
    break;

  case 54: /* expression: logical_or_expression  */
#line 714 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2427 "gm.cc"
    break;

  case 55: /* assignment_operator: '='  */
#line 721 "parser.y"
                                                                        {	(yyval.str) = (yyvsp[0].str);	}
#line 2433 "gm.cc"
    break;

  case 56: /* assignment_expression: unary_expression assignment_operator expression  */
#line 733 "parser.y"
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
#line 2453 "gm.cc"
    break;

  case 60: /* $@2: %empty  */
#line 762 "parser.y"
                                {
					declevels.clear();
				}
#line 2461 "gm.cc"
    break;

  case 61: /* declaration: stars IDENTIFIER $@2 brackets  */
#line 766 "parser.y"
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

					if( insertVariable(var, type, declevels) == -1 )
					{	
						cout << "COMPILETIME ERROR: Redeclaration of an already existing variable " << var << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
					if( declevels.size() != 0 ){
						SymbolTableEntry ste = getVariable(var);
						appendCode("memory " + var+"_"+ to_string(ste.scope) + " " + declevels[0] + " #" + to_string(getActualSize(dtype)));
					}
				}
#line 2493 "gm.cc"
    break;

  case 62: /* brackets: brackets '[' expression ']'  */
#line 797 "parser.y"
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
#line 2514 "gm.cc"
    break;

  case 64: /* $@3: %empty  */
#line 818 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				string afterIf = getLabel();
				ifgoto.push(afterIf);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2530 "gm.cc"
    break;

  case 65: /* $@4: %empty  */
#line 830 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2539 "gm.cc"
    break;

  case 66: /* $@5: %empty  */
#line 835 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2548 "gm.cc"
    break;

  case 67: /* $@6: %empty  */
#line 840 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2558 "gm.cc"
    break;

  case 68: /* conditional_expression: IF '(' expression ')' $@3 '{' $@4 statement_list $@5 '}' $@6 else_statement  */
#line 847 "parser.y"
                        {
			}
#line 2565 "gm.cc"
    break;

  case 69: /* $@7: %empty  */
#line 853 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2577 "gm.cc"
    break;

  case 70: /* $@8: %empty  */
#line 861 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2586 "gm.cc"
    break;

  case 71: /* $@9: %empty  */
#line 866 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2595 "gm.cc"
    break;

  case 72: /* $@10: %empty  */
#line 871 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2605 "gm.cc"
    break;

  case 73: /* else_statement: ELIF '(' expression ')' $@7 '{' $@8 statement_list $@9 '}' $@10 else_statement  */
#line 877 "parser.y"
                        {
			}
#line 2612 "gm.cc"
    break;

  case 74: /* $@11: %empty  */
#line 880 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2621 "gm.cc"
    break;

  case 75: /* $@12: %empty  */
#line 886 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2630 "gm.cc"
    break;

  case 76: /* else_statement: ELSE '{' $@11 statement_list $@12 '}'  */
#line 891 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2640 "gm.cc"
    break;

  case 77: /* else_statement: %empty  */
#line 897 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2649 "gm.cc"
    break;

  case 78: /* $@13: %empty  */
#line 905 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
				}
#line 2658 "gm.cc"
    break;

  case 79: /* @14: %empty  */
#line 911 "parser.y"
                                {
					string forStart = getLabel();
					(yyvsp[-4].str)  = getCharArray(forStart);
					appendCode(forStart+":");
				}
#line 2668 "gm.cc"
    break;

  case 80: /* $@15: %empty  */
#line 917 "parser.y"
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
#line 2692 "gm.cc"
    break;

  case 81: /* $@16: %empty  */
#line 938 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-9].str)));
					appendCode(string((yyvsp[-6].str)) + ":");
				}
#line 2701 "gm.cc"
    break;

  case 82: /* $@17: %empty  */
#line 944 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-8].var.addr)));
					appendCode(string((yyvsp[-8].var.type)) + ":");
				}
#line 2710 "gm.cc"
    break;

  case 83: /* for_expression: FOR '(' $@13 loop_initialization_list ';' @14 loop_condition ';' $@15 loop_increment_list $@16 ')' '{' statement_list $@17 '}'  */
#line 950 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					forIncrement.pop();
					forNext.pop();
				}
#line 2722 "gm.cc"
    break;

  case 84: /* loop_initialization_list: assignment_expression ',' loop_initialization_list  */
#line 961 "parser.y"
                                                                                {}
#line 2728 "gm.cc"
    break;

  case 85: /* loop_initialization_list: assignment_expression  */
#line 962 "parser.y"
                                                {}
#line 2734 "gm.cc"
    break;

  case 86: /* loop_initialization_list: %empty  */
#line 963 "parser.y"
                          {}
#line 2740 "gm.cc"
    break;

  case 87: /* loop_condition: expression  */
#line 968 "parser.y"
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
#line 2755 "gm.cc"
    break;

  case 88: /* loop_condition: %empty  */
#line 980 "parser.y"
                                {
					forExpr = string(getTemp("bool"));
					appendCode(forExpr + " = #1");
				}
#line 2764 "gm.cc"
    break;

  case 89: /* loop_increment_list: expression ',' loop_increment_list  */
#line 988 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression , loop_incr" << endl;
					}
				}
#line 2775 "gm.cc"
    break;

  case 90: /* loop_increment_list: expression  */
#line 996 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2786 "gm.cc"
    break;

  case 91: /* loop_increment_list: %empty  */
#line 1004 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2797 "gm.cc"
    break;

  case 92: /* $@18: %empty  */
#line 1015 "parser.y"
                                {
					lambdaParamStack.clear();
				}
#line 2805 "gm.cc"
    break;

  case 93: /* $@19: %empty  */
#line 1025 "parser.y"
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
#line 2829 "gm.cc"
    break;

  case 94: /* $@20: %empty  */
#line 1049 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
					setLambdaLocal();
				}
#line 2839 "gm.cc"
    break;

  case 95: /* $@21: %empty  */
#line 1056 "parser.y"
                                {
					if(!verifyParams(lambdaParamStack))
					{
						cout << "COMPILETIME ERROR: Inconsistent Parameters" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}

				}
#line 2854 "gm.cc"
    break;

  case 96: /* lambda_expression: LMFUNCTION $@18 '<' lamda_return_type '(' lambda_param_types ')' '>' IDENTIFIER $@19 '=' '[' '&' ']' '(' $@20 lambda_params ')' $@21 '{' lambda_body '}'  */
#line 1069 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					currentFunction = "main";
				}
#line 2865 "gm.cc"
    break;

  case 97: /* lamda_return_type: type_name  */
#line 1080 "parser.y"
                                          {lambdaReturnType = dtype;}
#line 2871 "gm.cc"
    break;

  case 98: /* $@22: %empty  */
#line 1084 "parser.y"
                                {
					lambdaParamStack.push_back(dtype);
				}
#line 2879 "gm.cc"
    break;

  case 100: /* lambda_param_types: type_name  */
#line 1088 "parser.y"
                                                                {
					lambdaParamStack.push_back(dtype);
				}
#line 2887 "gm.cc"
    break;

  case 111: /* statement: ASM '(' S_CONST ',' S_CONST ',' IDENTIFIER ')' ';'  */
#line 1109 "parser.y"
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
#line 2908 "gm.cc"
    break;

  case 112: /* statement: RETURN expression ';'  */
#line 1126 "parser.y"
                                {
					string returnVal((yyvsp[-1].var.addr));
					appendCode("Return " + returnVal);
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return expression" << endl;
					}
				}
#line 2922 "gm.cc"
    break;

  case 113: /* statement: RETURN ';'  */
#line 1137 "parser.y"
                                {
					appendCode("return");
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return" << endl;
					}
				}
#line 2935 "gm.cc"
    break;

  case 114: /* statement: error ';'  */
#line 1146 "parser.y"
                                {
					error = -1;
					return 1;
				}
#line 2944 "gm.cc"
    break;

  case 115: /* flow_control_statement: BREAK  */
#line 1154 "parser.y"
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
#line 2962 "gm.cc"
    break;

  case 116: /* flow_control_statement: CONTINUE  */
#line 1168 "parser.y"
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
#line 2980 "gm.cc"
    break;

  case 119: /* $@23: %empty  */
#line 1188 "parser.y"
                {
			currentStruct = "main";
			insertStruct(currentStruct);
		}
#line 2989 "gm.cc"
    break;

  case 124: /* attribute: type_name stars IDENTIFIER ';'  */
#line 1203 "parser.y"
                                {
					string addr((yyvsp[-1].str));
					string type = dtype;
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					insertAttribute(addr, type,stdeclevels);
				}
#line 3003 "gm.cc"
    break;

  case 126: /* $@24: %empty  */
#line 1218 "parser.y"
                                {
					string var = string((yyvsp[0].str));
					string type = "struct";
					if( insertAttribute(var, type, stdeclevels) == -1 )
					{	
						cout << "COMPILETIME ERROR: Redeclaration of an already existing variable " << var << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
				}
#line 3019 "gm.cc"
    break;

  case 128: /* $@25: %empty  */
#line 1233 "parser.y"
                                {
					stdeclevels.clear();
				}
#line 3027 "gm.cc"
    break;

  case 130: /* $@26: %empty  */
#line 1242 "parser.y"
                                {
					string var = string((yyvsp[-1].str));
					string type = dtype;

					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					stdeclevels.push_back({var,type});
				}
#line 3043 "gm.cc"
    break;

  case 133: /* $@27: %empty  */
#line 1258 "parser.y"
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
#line 3061 "gm.cc"
    break;

  case 135: /* $@28: %empty  */
#line 1276 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 3074 "gm.cc"
    break;

  case 137: /* $@29: %empty  */
#line 1286 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 3087 "gm.cc"
    break;

  case 139: /* functionArguments: type_name stars IDENTIFIER  */
#line 1299 "parser.y"
                        {
				string name((yyvsp[0].str));
				string type = dtype;
				for( int i = 0 ; i < starsCount ; i++ )
				{
					type = "*" + type;
				}
				insertParam(name, type);
			}
#line 3101 "gm.cc"
    break;

  case 140: /* functionArguments: functionArguments ',' type_name stars IDENTIFIER  */
#line 1309 "parser.y"
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
#line 3116 "gm.cc"
    break;

  case 141: /* $@30: %empty  */
#line 1323 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
					(yyvsp[0].intval) = scopeStack.top();
				}
#line 3126 "gm.cc"
    break;

  case 142: /* statement_block: '{' $@30 statement_list '}'  */
#line 1330 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					
					if( parseDebug == 1 )
					{
						cout << "statement_block -> { statementlist }" << endl;
					}
				}
#line 3141 "gm.cc"
    break;

  case 143: /* statement_block: '{' '}'  */
#line 1341 "parser.y"
                                                                        {
												if( parseDebug == 1 )
												{
													cout << "statementblock -> {}" << endl;
												}
										}
#line 3152 "gm.cc"
    break;


#line 3156 "gm.cc"

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

#line 1348 "parser.y"



int main( int argcount, char* arguements[] )
{
	error = 0;
	yyin = fopen(arguements[1], "r");
	init();
	int i = yyparse();

	if( i != 0 or error != 0 )
	{
		printTable();
		cout << "Error = " << error << endl;
		return 0;
	}

	printTable();
	// translate();
}
