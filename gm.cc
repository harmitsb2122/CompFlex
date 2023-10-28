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
  YYSYMBOL_loop_initialization_list = 112, /* loop_initialization_list  */
  YYSYMBOL_loop_condition = 113,           /* loop_condition  */
  YYSYMBOL_loop_increment_list = 114,      /* loop_increment_list  */
  YYSYMBOL_lambda_expression = 115,        /* lambda_expression  */
  YYSYMBOL_116_18 = 116,                   /* $@18  */
  YYSYMBOL_117_19 = 117,                   /* $@19  */
  YYSYMBOL_118_20 = 118,                   /* $@20  */
  YYSYMBOL_119_21 = 119,                   /* $@21  */
  YYSYMBOL_lamda_return_type = 120,        /* lamda_return_type  */
  YYSYMBOL_lambda_param_types = 121,       /* lambda_param_types  */
  YYSYMBOL_122_22 = 122,                   /* $@22  */
  YYSYMBOL_lambda_params = 123,            /* lambda_params  */
  YYSYMBOL_lambda_body = 124,              /* lambda_body  */
  YYSYMBOL_statement = 125,                /* statement  */
  YYSYMBOL_flow_control_statement = 126,   /* flow_control_statement  */
  YYSYMBOL_statement_list = 127,           /* statement_list  */
  YYSYMBOL_begin = 128,                    /* begin  */
  YYSYMBOL_129_23 = 129,                   /* $@23  */
  YYSYMBOL_blocks = 130,                   /* blocks  */
  YYSYMBOL_attribute = 131,                /* attribute  */
  YYSYMBOL_struct_declaration = 132,       /* struct_declaration  */
  YYSYMBOL_struct_body = 133,              /* struct_body  */
  YYSYMBOL_134_24 = 134,                   /* $@24  */
  YYSYMBOL_struct_attributes = 135,        /* struct_attributes  */
  YYSYMBOL_136_25 = 136,                   /* $@25  */
  YYSYMBOL_st_brackets = 137,              /* st_brackets  */
  YYSYMBOL_functionPrefix = 138,           /* functionPrefix  */
  YYSYMBOL_139_26 = 139,                   /* $@26  */
  YYSYMBOL_functionSuffix = 140,           /* functionSuffix  */
  YYSYMBOL_141_27 = 141,                   /* $@27  */
  YYSYMBOL_142_28 = 142,                   /* $@28  */
  YYSYMBOL_functionArguments = 143,        /* functionArguments  */
  YYSYMBOL_statement_block = 144,          /* statement_block  */
  YYSYMBOL_145_29 = 145                    /* $@29  */
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
#define YYLAST   344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

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
     188,   196,   200,   233,   248,   265,   264,   308,   309,   313,
     339,   367,   371,   384,   397,   419,   439,   440,   441,   445,
     446,   450,   451,   452,   453,   454,   458,   462,   483,   505,
     529,   535,   557,   581,   587,   608,   629,   650,   673,   679,
     700,   723,   729,   752,   758,   781,   789,   800,   820,   824,
     825,   830,   829,   871,   888,   893,   905,   910,   915,   892,
     928,   936,   941,   946,   927,   955,   961,   954,   972,   980,
     986,   992,  1013,  1019,   979,  1036,  1037,  1038,  1042,  1055,
    1062,  1070,  1079,  1090,  1100,  1124,  1131,  1089,  1155,  1170,
    1169,  1181,  1192,  1195,  1199,  1202,  1203,  1204,  1205,  1206,
    1207,  1208,  1209,  1226,  1237,  1246,  1254,  1268,  1284,  1285,
    1289,  1289,  1297,  1298,  1299,  1304,  1316,  1320,  1340,  1339,
    1349,  1347,  1367,  1369,  1374,  1378,  1377,  1396,  1395,  1406,
    1405,  1418,  1428,  1443,  1442,  1461
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
  "loop_initialization_list", "loop_condition", "loop_increment_list",
  "lambda_expression", "$@18", "$@19", "$@20", "$@21", "lamda_return_type",
  "lambda_param_types", "$@22", "lambda_params", "lambda_body",
  "statement", "flow_control_statement", "statement_list", "begin", "$@23",
  "blocks", "attribute", "struct_declaration", "struct_body", "$@24",
  "struct_attributes", "$@25", "st_brackets", "functionPrefix", "$@26",
  "functionSuffix", "$@27", "$@28", "functionArguments", "statement_block",
  "$@29", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-120)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -143,     5,    23,  -143,  -143,  -143,   -21,   -31,  -143,    23,
     -33,    23,   -24,   -31,    16,  -143,  -143,  -143,  -143,  -143,
    -143,   -34,    26,  -143,  -143,    22,   -31,     2,    18,  -143,
      32,  -143,  -143,   -31,  -143,   -36,  -143,    -1,    43,  -143,
      26,   -39,    12,  -143,  -143,    -1,   -31,    47,  -143,  -143,
     257,  -143,    54,    41,    26,    30,  -143,  -143,    50,    58,
      46,   284,   284,  -143,  -143,  -143,    37,  -143,    60,  -143,
      62,   284,  -143,  -143,  -143,  -143,  -143,  -143,  -143,    -3,
      57,   -31,   284,    -8,    10,   -20,    42,    94,    98,    59,
      66,    68,  -143,  -143,    69,   197,    71,    61,  -143,  -143,
    -143,  -143,  -143,   284,  -143,  -143,    72,  -143,  -143,   103,
     104,  -143,   284,    81,   110,    97,  -143,  -143,   284,  -143,
     284,   107,  -143,    96,  -143,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,   284,   100,  -143,  -143,  -143,
      73,   102,    26,   101,  -143,   105,  -143,  -143,   -31,  -143,
    -143,  -143,    -8,    -8,    10,    10,    10,    10,   -20,   -20,
      42,    94,    57,   108,    87,  -143,  -143,  -143,    11,  -143,
    -143,   -31,   109,   123,  -143,  -143,  -143,   284,  -143,    99,
    -143,   284,  -143,    26,   111,   114,  -143,   284,  -143,  -143,
     -31,   112,   130,   284,  -143,   106,   257,   118,   113,   120,
     121,  -143,  -143,   124,   139,   116,  -143,   284,    95,    26,
    -143,  -143,   125,  -143,  -143,  -143,   117,   284,   129,    82,
     132,  -143,   126,   128,   135,  -143,   127,   257,  -143,   284,
     136,  -143,   257,   137,   145,   138,  -143,  -143,  -143,  -143,
     147,   131,    26,  -143,  -143,   150,   144,   257,  -143,  -143,
     140,   148,   257,  -143,   149,  -143,    82,  -143,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     120,     0,   124,     1,    27,    26,     0,    30,   121,   124,
       0,   124,    28,    30,     0,   122,   126,   123,   128,   127,
      29,     0,   132,   135,   125,     0,    30,     0,     0,    28,
       0,   129,   137,    30,   136,     0,   134,     0,     0,   139,
       0,     0,   143,   138,   141,     0,    30,     0,   130,   145,
       0,   140,     0,     0,   132,     0,   116,   117,     0,     0,
       0,     0,     0,     9,    10,     8,     4,     7,     0,    93,
       0,     0,    34,    31,    32,    33,    35,    11,     5,    21,
      36,    30,     0,    40,    43,    48,    51,    53,    55,     0,
       0,     0,   108,   109,     0,     0,     0,     0,   142,   133,
     131,   115,    79,     0,   114,    36,     0,    22,    23,     0,
       0,    15,     0,     0,     0,     0,    13,    14,     0,    56,
       0,     0,    58,    60,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   106,
     107,   105,   118,   111,   144,    87,     0,   113,     2,     3,
       0,     0,     0,     0,     6,     0,    57,    61,    30,    37,
      38,    39,    41,    42,    46,    47,    44,    45,    49,    50,
      52,    54,     0,    86,     0,    65,    17,    16,     0,    19,
      25,    30,     0,     0,    12,    64,    59,    87,    80,     0,
      18,     0,    98,   102,     0,    62,    85,    89,    66,    20,
      30,     0,     0,     0,    88,     0,     0,    99,     0,     0,
       0,    81,    67,     0,     0,     0,    63,    92,     0,   102,
      94,   112,    91,    82,    68,   100,     0,    92,     0,    78,
       0,    90,     0,     0,     0,    69,     0,     0,    75,     0,
       0,    83,     0,     0,     0,     0,    76,    70,    95,    84,
       0,     0,     0,    77,    71,     0,   103,     0,    96,    72,
       0,     0,     0,    73,     0,   104,    78,    97,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,  -143,  -143,  -143,  -143,   -49,    -2,    -5,
    -143,   -13,   -73,   -14,    83,    67,  -143,   -56,  -143,  -142,
    -143,    63,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
     -48,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,    33,  -143,     0,  -143,  -143,  -143,  -143,
    -143,  -143,     3,  -143,  -143,  -143,  -143,  -143,   -89,  -143,
    -143,    40,  -143,  -143,  -143,  -143,   171,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,   -26,   183,  -143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    77,    78,    79,   150,   177,   178,   105,    81,   121,
      82,    83,    84,    85,    86,    87,    88,    89,   120,    90,
      91,   122,   123,   185,   195,    92,   189,   206,   218,   229,
     235,   251,   257,   261,   266,   242,   250,    93,   145,   197,
     217,   228,   245,   174,   205,   223,    94,   113,   226,   252,
     260,   182,   201,   213,   255,   264,    95,    96,    97,     1,
       2,     8,     9,    10,    19,    22,    27,    54,    41,    11,
      28,    34,    37,    45,    35,    43,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    80,    14,   173,   106,     3,   142,     7,    20,     7,
     130,   131,   107,   108,    47,   115,    39,    23,    12,    40,
      26,    30,     4,   116,   117,    13,    33,     4,    38,    48,
       4,     5,    25,   124,    24,    16,     5,     6,    46,     5,
      25,    52,    18,   132,   133,   173,    80,   146,   125,    15,
     118,    17,    26,   126,   127,    21,   151,   164,   165,   166,
     167,    29,   155,   190,   156,    42,   191,   128,   129,    31,
      32,    36,    61,    62,   134,   135,   159,   160,   161,    49,
      63,    64,    44,    65,    53,    66,   109,   110,   111,   233,
     234,    67,    68,    98,   179,    99,   172,    71,   101,    61,
      62,   102,    72,    73,    74,    75,    76,    63,    64,   103,
      65,   112,    66,   114,   104,   162,   163,   212,    67,    68,
     168,   169,   119,   136,    71,   176,   137,   138,   144,    72,
      73,    74,    75,    76,   139,   199,   140,   141,   172,   143,
     147,   204,   148,   149,   152,   153,   157,   210,   241,   154,
     181,   158,   175,   246,   180,   188,   183,    80,   194,   184,
     193,   222,   224,   187,   208,   198,   202,   203,   259,   209,
    -101,   222,   215,   265,   211,   216,   192,   214,   220,   219,
     227,   232,   230,   243,   221,   236,   239,   240,    80,   247,
     244,   200,   237,    80,   238,   207,   248,   254,    55,    40,
      56,     4,   258,    57,   171,   249,   262,    58,    80,    59,
       5,    25,    60,    80,   253,   263,   267,   200,   268,   170,
     196,   186,   225,    61,    62,   100,   256,   231,    51,     0,
       0,    63,    64,     0,    65,     0,    66,     0,     0,     0,
       0,     0,    67,    68,    69,    70,     0,     0,    71,     0,
      33,     0,     0,    72,    73,    74,    75,    76,    55,     0,
      56,     4,     0,    57,  -119,     0,     0,    58,     0,    59,
       5,    25,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,     0,     0,     0,     0,     0,
       0,    63,    64,     0,    65,     0,    66,     0,     0,     0,
       0,     0,    67,    68,    69,    70,     0,     0,    71,     0,
      61,    62,     0,    72,    73,    74,    75,    76,    63,    64,
       0,    65,     0,    66,     0,     0,     0,     0,     0,    67,
      68,     0,     0,     0,     0,    71,     0,     0,     0,     0,
      72,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
       2,    50,     7,   145,    60,     0,    95,     9,    13,    11,
      30,    31,    61,    62,    53,    71,    52,    51,    39,    55,
      22,    26,     4,    26,    27,    56,    28,     4,    33,    68,
       4,    13,    14,    82,    68,    68,    13,    14,    40,    13,
      14,    46,    66,    63,    64,   187,    95,   103,    56,     9,
      53,    11,    54,    61,    62,    39,   112,   130,   131,   132,
     133,    39,   118,    52,   120,    66,    55,    57,    58,    67,
      52,    39,    26,    27,    32,    33,   125,   126,   127,    67,
      34,    35,    39,    37,    37,    39,    49,    50,    51,     7,
       8,    45,    46,    39,   150,    54,   145,    51,    68,    26,
      27,    51,    56,    57,    58,    59,    60,    34,    35,    51,
      37,    51,    39,    51,    68,   128,   129,   206,    45,    46,
     134,   135,    65,    29,    51,    52,    28,    68,    67,    56,
      57,    58,    59,    60,    68,   191,    68,    68,   187,    68,
      68,   197,    39,    39,    63,    35,    39,   203,   237,    52,
     152,    55,    52,   242,    52,    68,    55,   206,    35,    54,
      51,   217,    67,    55,    52,    66,    55,    53,   257,    39,
      52,   227,    52,   262,    68,    54,   181,    64,    39,    55,
      55,    52,    65,   239,    68,    53,    51,    60,   237,    52,
      54,   193,    66,   242,    66,   200,    51,    66,     1,    55,
       3,     4,    52,     6,   137,    67,    66,    10,   257,    12,
      13,    14,    15,   262,    67,    67,    67,   219,   266,   136,
     187,   158,   219,    26,    27,    54,   252,   227,    45,    -1,
      -1,    34,    35,    -1,    37,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    -1,    -1,    51,    -1,
     252,    -1,    -1,    56,    57,    58,    59,    60,     1,    -1,
       3,     4,    -1,     6,    67,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    37,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    -1,    -1,    51,    -1,
      26,    27,    -1,    56,    57,    58,    59,    60,    34,    35,
      -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   128,   129,     0,     4,    13,    14,    77,   130,   131,
     132,   138,    39,    56,    78,   130,    68,   130,    66,   133,
      78,    39,   134,    51,    68,    14,    77,   135,   139,    39,
      78,    67,    52,    77,   140,   143,    39,   141,    78,    52,
      55,   137,    66,   144,    39,   142,    77,    53,    68,    67,
     145,   144,    78,    37,   136,     1,     3,     6,    10,    12,
      15,    26,    27,    34,    35,    37,    39,    45,    46,    47,
      48,    51,    56,    57,    58,    59,    60,    70,    71,    72,
      76,    77,    79,    80,    81,    82,    83,    84,    85,    86,
      88,    89,    94,   106,   115,   125,   126,   127,    39,    54,
     135,    68,    51,    51,    68,    76,    86,    76,    76,    49,
      50,    51,    51,   116,    51,    86,    26,    27,    53,    65,
      87,    78,    90,    91,    76,    56,    61,    62,    57,    58,
      30,    31,    63,    64,    32,    33,    29,    28,    68,    68,
      68,    68,   127,    68,    67,   107,    86,    68,    39,    39,
      73,    86,    63,    35,    52,    86,    86,    39,    55,    76,
      76,    76,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    84,    76,    88,   112,    52,    52,    74,    75,    86,
      52,    77,   120,    55,    54,    92,    90,    55,    68,    95,
      52,    55,    78,    51,    35,    93,   112,   108,    66,    86,
      77,   121,    55,    53,    86,   113,    96,    78,    52,    39,
      86,    68,   127,   122,    64,    52,    54,   109,    97,    55,
      39,    68,    86,   114,    67,   121,   117,    55,   110,    98,
      65,   114,    52,     7,     8,    99,    53,    66,    66,    51,
      60,   127,   104,    86,    54,   111,   127,    52,    51,    67,
     105,   100,   118,    67,    66,   123,   143,   101,    52,   127,
     119,   102,    66,    67,   124,   127,   103,    67,    99
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
     108,   109,   110,   111,   106,   112,   112,   112,   113,   113,
     114,   114,   114,   116,   117,   118,   119,   115,   120,   122,
     121,   121,   121,   123,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   126,   126,   127,   127,
     129,   128,   130,   130,   130,   131,   131,   132,   134,   133,
     136,   135,   135,   137,   137,   139,   138,   141,   140,   142,
     140,   143,   143,   145,   144,   144
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
       0,     0,     0,     0,    16,     3,     1,     0,     1,     0,
       3,     1,     0,     0,     0,     0,     0,    22,     2,     0,
       5,     2,     0,     1,     1,     2,     2,     2,     1,     1,
       2,     2,     9,     3,     2,     2,     1,     1,     2,     1,
       0,     2,     2,     2,     0,     4,     2,     3,     0,     4,
       0,     7,     0,     4,     0,     0,     6,     0,     3,     0,
       4,     3,     5,     0,     4,     2
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
						(yyval.var.addr) = getCharArray(ste.name +"."+attr+ "_" + to_string(ste.scope));
					}
					debug(1);
				}
#line 1656 "gm.cc"
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
#line 1698 "gm.cc"
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
#line 1720 "gm.cc"
    break;

  case 5: /* primary_expression: constant  */
#line 157 "parser.y"
                                        {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
					debug(2);
				}
#line 1730 "gm.cc"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 162 "parser.y"
                                            {
					(yyval.var.addr) = (yyvsp[-1].var.addr);
					(yyval.var.type) = (yyvsp[-1].var.type);
					debug(3);
				}
#line 1740 "gm.cc"
    break;

  case 7: /* primary_expression: NULL_  */
#line 167 "parser.y"
                                {
					(yyval.var.type) = getCharArray("all");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #0");
					debug(4);
				}
#line 1751 "gm.cc"
    break;

  case 8: /* constant: I_CONST  */
#line 176 "parser.y"
                                {
					(yyval.var.type) = getCharArray("int");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(5);
				}
#line 1762 "gm.cc"
    break;

  case 9: /* constant: C_CONST  */
#line 182 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("char");
					(yyval.var.addr) = getTemp("char");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(6);
				}
#line 1773 "gm.cc"
    break;

  case 10: /* constant: S_CONST  */
#line 188 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("*char");
					(yyval.var.addr) = getTemp("*char");
					appendCode("string " + string((yyval.var.addr)) + " " + string((yyvsp[0].str)));
				}
#line 1783 "gm.cc"
    break;

  case 11: /* postfix_expression: primary_expression  */
#line 196 "parser.y"
                                                {
					(yyval.var.type) = (yyvsp[0].var.type);
					(yyval.var.addr) = (yyvsp[0].var.addr);
				}
#line 1792 "gm.cc"
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
							appendCode( temp1 + " = " + index + " * #" + to_string(getActualSize(arrayType)) );

							string temp = string(getTemp(type));
							appendCode( temp + " = " + addr + " + " + temp1 );

							(yyval.var.type) = getCharArray(arrayType);
							(yyval.var.addr) = getCharArray("*"+temp);
						}
					}
				}
#line 1829 "gm.cc"
    break;

  case 13: /* postfix_expression: postfix_expression INC_OP  */
#line 233 "parser.y"
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
#line 1848 "gm.cc"
    break;

  case 14: /* postfix_expression: postfix_expression DEC_OP  */
#line 249 "parser.y"
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
#line 1868 "gm.cc"
    break;

  case 15: /* $@1: %empty  */
#line 265 "parser.y"
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
#line 1889 "gm.cc"
    break;

  case 16: /* postfix_expression: IDENTIFIER '(' $@1 functionParameters  */
#line 282 "parser.y"
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
#line 1917 "gm.cc"
    break;

  case 19: /* argument_list: expression  */
#line 314 "parser.y"
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
#line 1947 "gm.cc"
    break;

  case 20: /* argument_list: argument_list ',' expression  */
#line 340 "parser.y"
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
#line 1976 "gm.cc"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 367 "parser.y"
                                          {	
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 1985 "gm.cc"
    break;

  case 22: /* unary_expression: INC_OP unary_expression  */
#line 371 "parser.y"
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
#line 2003 "gm.cc"
    break;

  case 23: /* unary_expression: DEC_OP unary_expression  */
#line 384 "parser.y"
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
#line 2021 "gm.cc"
    break;

  case 24: /* unary_expression: unary_operator unary_expression  */
#line 397 "parser.y"
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
#line 2048 "gm.cc"
    break;

  case 25: /* unary_expression: MALLOC '(' expression ')'  */
#line 419 "parser.y"
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
#line 2070 "gm.cc"
    break;

  case 26: /* type_name: INT  */
#line 439 "parser.y"
                                {dtype = "int"; starsCount = 0; }
#line 2076 "gm.cc"
    break;

  case 27: /* type_name: CHAR  */
#line 440 "parser.y"
                               {dtype = "char"; starsCount = 0; }
#line 2082 "gm.cc"
    break;

  case 28: /* type_name: STRUCT IDENTIFIER  */
#line 441 "parser.y"
                                            {string str((yyvsp[0].str)); dtype = str;starsCount = 0; }
#line 2088 "gm.cc"
    break;

  case 29: /* stars: '*' stars  */
#line 445 "parser.y"
                            { starsCount++; }
#line 2094 "gm.cc"
    break;

  case 31: /* unary_operator: '+'  */
#line 450 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2100 "gm.cc"
    break;

  case 32: /* unary_operator: '-'  */
#line 451 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2106 "gm.cc"
    break;

  case 33: /* unary_operator: '!'  */
#line 452 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2112 "gm.cc"
    break;

  case 34: /* unary_operator: '*'  */
#line 453 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2118 "gm.cc"
    break;

  case 35: /* unary_operator: '&'  */
#line 454 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 2124 "gm.cc"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 458 "parser.y"
                                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2133 "gm.cc"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 462 "parser.y"
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
#line 2158 "gm.cc"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 484 "parser.y"
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
#line 2183 "gm.cc"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 506 "parser.y"
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
#line 2208 "gm.cc"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 530 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2217 "gm.cc"
    break;

  case 41: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 536 "parser.y"
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
#line 2242 "gm.cc"
    break;

  case 42: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 558 "parser.y"
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
#line 2267 "gm.cc"
    break;

  case 43: /* relational_expression: additive_expression  */
#line 582 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2276 "gm.cc"
    break;

  case 44: /* relational_expression: relational_expression '<' additive_expression  */
#line 588 "parser.y"
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
#line 2300 "gm.cc"
    break;

  case 45: /* relational_expression: relational_expression '>' additive_expression  */
#line 609 "parser.y"
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
#line 2324 "gm.cc"
    break;

  case 46: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 630 "parser.y"
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
#line 2348 "gm.cc"
    break;

  case 47: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 651 "parser.y"
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
#line 2372 "gm.cc"
    break;

  case 48: /* equality_expression: relational_expression  */
#line 674 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2381 "gm.cc"
    break;

  case 49: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 680 "parser.y"
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
#line 2405 "gm.cc"
    break;

  case 50: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 701 "parser.y"
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
#line 2429 "gm.cc"
    break;

  case 51: /* logical_and_expression: equality_expression  */
#line 724 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2438 "gm.cc"
    break;

  case 52: /* logical_and_expression: logical_and_expression AND_OP equality_expression  */
#line 730 "parser.y"
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
#line 2462 "gm.cc"
    break;

  case 53: /* logical_or_expression: logical_and_expression  */
#line 753 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2471 "gm.cc"
    break;

  case 54: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 759 "parser.y"
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
#line 2495 "gm.cc"
    break;

  case 55: /* expression: logical_or_expression  */
#line 782 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2504 "gm.cc"
    break;

  case 56: /* assignment_operator: '='  */
#line 789 "parser.y"
                                                                        {	(yyval.str) = (yyvsp[0].str);	}
#line 2510 "gm.cc"
    break;

  case 57: /* assignment_expression: unary_expression assignment_operator expression  */
#line 801 "parser.y"
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
#line 2530 "gm.cc"
    break;

  case 61: /* $@2: %empty  */
#line 830 "parser.y"
                                {
					declevels.clear();
				}
#line 2538 "gm.cc"
    break;

  case 62: /* declaration: stars IDENTIFIER $@2 brackets  */
#line 834 "parser.y"
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
#line 2577 "gm.cc"
    break;

  case 63: /* brackets: brackets '[' expression ']'  */
#line 872 "parser.y"
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
#line 2598 "gm.cc"
    break;

  case 65: /* $@3: %empty  */
#line 893 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				string afterIf = getLabel();
				ifgoto.push(afterIf);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2614 "gm.cc"
    break;

  case 66: /* $@4: %empty  */
#line 905 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2623 "gm.cc"
    break;

  case 67: /* $@5: %empty  */
#line 910 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2632 "gm.cc"
    break;

  case 68: /* $@6: %empty  */
#line 915 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2642 "gm.cc"
    break;

  case 69: /* conditional_expression: IF '(' expression ')' $@3 '{' $@4 statement_list $@5 '}' $@6 else_statement  */
#line 922 "parser.y"
                        {
			}
#line 2649 "gm.cc"
    break;

  case 70: /* $@7: %empty  */
#line 928 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2661 "gm.cc"
    break;

  case 71: /* $@8: %empty  */
#line 936 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2670 "gm.cc"
    break;

  case 72: /* $@9: %empty  */
#line 941 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2679 "gm.cc"
    break;

  case 73: /* $@10: %empty  */
#line 946 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2689 "gm.cc"
    break;

  case 74: /* else_statement: ELIF '(' expression ')' $@7 '{' $@8 statement_list $@9 '}' $@10 else_statement  */
#line 952 "parser.y"
                        {
			}
#line 2696 "gm.cc"
    break;

  case 75: /* $@11: %empty  */
#line 955 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2705 "gm.cc"
    break;

  case 76: /* $@12: %empty  */
#line 961 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2714 "gm.cc"
    break;

  case 77: /* else_statement: ELSE '{' $@11 statement_list $@12 '}'  */
#line 966 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();
				removeVariables();
			}
#line 2724 "gm.cc"
    break;

  case 78: /* else_statement: %empty  */
#line 972 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2733 "gm.cc"
    break;

  case 79: /* $@13: %empty  */
#line 980 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
				}
#line 2742 "gm.cc"
    break;

  case 80: /* @14: %empty  */
#line 986 "parser.y"
                                {
					string forStart = getLabel();
					(yyvsp[-4].str)  = getCharArray(forStart);
					appendCode(forStart+":");
				}
#line 2752 "gm.cc"
    break;

  case 81: /* $@15: %empty  */
#line 992 "parser.y"
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
#line 2776 "gm.cc"
    break;

  case 82: /* $@16: %empty  */
#line 1013 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-9].str)));
					appendCode(string((yyvsp[-6].str)) + ":");
				}
#line 2785 "gm.cc"
    break;

  case 83: /* $@17: %empty  */
#line 1019 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-8].var.addr)));
					appendCode(string((yyvsp[-8].var.type)) + ":");
				}
#line 2794 "gm.cc"
    break;

  case 84: /* for_expression: FOR '(' $@13 loop_initialization_list ';' @14 loop_condition ';' $@15 loop_increment_list $@16 ')' '{' statement_list $@17 '}'  */
#line 1025 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					forIncrement.pop();
					forNext.pop();
				}
#line 2806 "gm.cc"
    break;

  case 85: /* loop_initialization_list: assignment_expression ',' loop_initialization_list  */
#line 1036 "parser.y"
                                                                                {}
#line 2812 "gm.cc"
    break;

  case 86: /* loop_initialization_list: assignment_expression  */
#line 1037 "parser.y"
                                                {}
#line 2818 "gm.cc"
    break;

  case 87: /* loop_initialization_list: %empty  */
#line 1038 "parser.y"
                          {}
#line 2824 "gm.cc"
    break;

  case 88: /* loop_condition: expression  */
#line 1043 "parser.y"
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
#line 2839 "gm.cc"
    break;

  case 89: /* loop_condition: %empty  */
#line 1055 "parser.y"
                                {
					forExpr = string(getTemp("bool"));
					appendCode(forExpr + " = #1");
				}
#line 2848 "gm.cc"
    break;

  case 90: /* loop_increment_list: expression ',' loop_increment_list  */
#line 1063 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression , loop_incr" << endl;
					}
				}
#line 2859 "gm.cc"
    break;

  case 91: /* loop_increment_list: expression  */
#line 1071 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2870 "gm.cc"
    break;

  case 92: /* loop_increment_list: %empty  */
#line 1079 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2881 "gm.cc"
    break;

  case 93: /* $@18: %empty  */
#line 1090 "parser.y"
                                {
					lambdaParamStack.clear();
				}
#line 2889 "gm.cc"
    break;

  case 94: /* $@19: %empty  */
#line 1100 "parser.y"
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
#line 2913 "gm.cc"
    break;

  case 95: /* $@20: %empty  */
#line 1124 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
					setLambdaLocal();
				}
#line 2923 "gm.cc"
    break;

  case 96: /* $@21: %empty  */
#line 1131 "parser.y"
                                {
					if(!verifyParams(lambdaParamStack))
					{
						cout << "COMPILETIME ERROR: Inconsistent Parameters" << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}

				}
#line 2938 "gm.cc"
    break;

  case 97: /* lambda_expression: LMFUNCTION $@18 '<' lamda_return_type '(' lambda_param_types ')' '>' IDENTIFIER $@19 '=' '[' '&' ']' '(' $@20 lambda_params ')' $@21 '{' lambda_body '}'  */
#line 1144 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					currentFunction = "main";
				}
#line 2949 "gm.cc"
    break;

  case 98: /* lamda_return_type: type_name stars  */
#line 1157 "parser.y"
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
#line 2964 "gm.cc"
    break;

  case 99: /* $@22: %empty  */
#line 1170 "parser.y"
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
#line 2979 "gm.cc"
    break;

  case 101: /* lambda_param_types: type_name stars  */
#line 1182 "parser.y"
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
#line 2994 "gm.cc"
    break;

  case 112: /* statement: ASM '(' S_CONST ',' S_CONST ',' IDENTIFIER ')' ';'  */
#line 1210 "parser.y"
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
#line 3015 "gm.cc"
    break;

  case 113: /* statement: RETURN expression ';'  */
#line 1227 "parser.y"
                                {
					string returnVal((yyvsp[-1].var.addr));
					appendCode("Return " + returnVal);
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return expression" << endl;
					}
				}
#line 3029 "gm.cc"
    break;

  case 114: /* statement: RETURN ';'  */
#line 1238 "parser.y"
                                {
					appendCode("return");
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return" << endl;
					}
				}
#line 3042 "gm.cc"
    break;

  case 115: /* statement: error ';'  */
#line 1247 "parser.y"
                                {
					error = -1;
					return 1;
				}
#line 3051 "gm.cc"
    break;

  case 116: /* flow_control_statement: BREAK  */
#line 1255 "parser.y"
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
#line 3069 "gm.cc"
    break;

  case 117: /* flow_control_statement: CONTINUE  */
#line 1269 "parser.y"
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
#line 3087 "gm.cc"
    break;

  case 120: /* $@23: %empty  */
#line 1289 "parser.y"
                {
			currentStruct = "main";
			insertStruct(currentStruct);
		}
#line 3096 "gm.cc"
    break;

  case 125: /* attribute: type_name stars IDENTIFIER ';'  */
#line 1305 "parser.y"
                                {
					string addr((yyvsp[-1].str));
					string type = dtype;
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					stdeclevels.clear();
					insertAttribute(addr, type,stdeclevels);
				}
#line 3112 "gm.cc"
    break;

  case 127: /* struct_declaration: STRUCT IDENTIFIER struct_body  */
#line 1321 "parser.y"
                                {
					string var = string((yyvsp[-1].str));
					string type = "struct";
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					if( insertAttribute(var, type, stdeclevels) == -1 )
					{	
						cout << "COMPILETIME ERROR: Redeclaration of an already existing variable " << var << endl;
						cout << "At line : " << yylineno << endl;
						error = -1;
						return 1;
					}
				}
#line 3133 "gm.cc"
    break;

  case 128: /* $@24: %empty  */
#line 1340 "parser.y"
                                {
					stdeclevels.clear();
				}
#line 3141 "gm.cc"
    break;

  case 130: /* $@25: %empty  */
#line 1349 "parser.y"
                                {
					string var = string((yyvsp[-2].str));
					string type = dtype;

					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					starsCount = 0;
					for( int i = 0 ; i < declevels.size() ; i++ )
					{
						type = "*" + type;
					}

					addStructLevels(var,type);
					declevels.clear();
				}
#line 3163 "gm.cc"
    break;

  case 133: /* st_brackets: st_brackets '[' I_CONST ']'  */
#line 1370 "parser.y"
                                {
					string expr((yyvsp[-1].str));
					declevels.push_back(expr);
				}
#line 3172 "gm.cc"
    break;

  case 135: /* $@26: %empty  */
#line 1378 "parser.y"
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
#line 3190 "gm.cc"
    break;

  case 137: /* $@27: %empty  */
#line 1396 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 3203 "gm.cc"
    break;

  case 139: /* $@28: %empty  */
#line 1406 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 3216 "gm.cc"
    break;

  case 141: /* functionArguments: type_name stars IDENTIFIER  */
#line 1419 "parser.y"
                        {
				string name((yyvsp[0].str));
				string type = dtype;
				for( int i = 0 ; i < starsCount ; i++ )
				{
					type = "*" + type;
				}
				insertParam(name, type);
			}
#line 3230 "gm.cc"
    break;

  case 142: /* functionArguments: functionArguments ',' type_name stars IDENTIFIER  */
#line 1429 "parser.y"
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
#line 3245 "gm.cc"
    break;

  case 143: /* $@29: %empty  */
#line 1443 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
					(yyvsp[0].intval) = scopeStack.top();
				}
#line 3255 "gm.cc"
    break;

  case 144: /* statement_block: '{' $@29 statement_list '}'  */
#line 1450 "parser.y"
                                {
					currentScope--;
					scopeStack.pop();
					removeVariables();
					
					if( parseDebug == 1 )
					{
						cout << "statement_block -> { statementlist }" << endl;
					}
				}
#line 3270 "gm.cc"
    break;

  case 145: /* statement_block: '{' '}'  */
#line 1461 "parser.y"
                                                                        {
												if( parseDebug == 1 )
												{
													cout << "statementblock -> {}" << endl;
												}
										}
#line 3281 "gm.cc"
    break;


#line 3285 "gm.cc"

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

#line 1468 "parser.y"



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
