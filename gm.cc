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
    ASM = 302                      /* ASM  */
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
#define ASM 302

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

#line 263 "gm.cc"

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
  YYSYMBOL_ASM = 47,                       /* ASM  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_52_ = 52,                       /* ','  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '+'  */
  YYSYMBOL_55_ = 55,                       /* '-'  */
  YYSYMBOL_56_ = 56,                       /* '!'  */
  YYSYMBOL_57_ = 57,                       /* '&'  */
  YYSYMBOL_58_ = 58,                       /* '/'  */
  YYSYMBOL_59_ = 59,                       /* '%'  */
  YYSYMBOL_60_ = 60,                       /* '<'  */
  YYSYMBOL_61_ = 61,                       /* '>'  */
  YYSYMBOL_62_ = 62,                       /* '='  */
  YYSYMBOL_63_ = 63,                       /* '{'  */
  YYSYMBOL_64_ = 64,                       /* '}'  */
  YYSYMBOL_65_ = 65,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_primary_expression = 67,        /* primary_expression  */
  YYSYMBOL_constant = 68,                  /* constant  */
  YYSYMBOL_postfix_expression = 69,        /* postfix_expression  */
  YYSYMBOL_70_1 = 70,                      /* $@1  */
  YYSYMBOL_functionParameters = 71,        /* functionParameters  */
  YYSYMBOL_argument_list = 72,             /* argument_list  */
  YYSYMBOL_unary_expression = 73,          /* unary_expression  */
  YYSYMBOL_type_name = 74,                 /* type_name  */
  YYSYMBOL_stars = 75,                     /* stars  */
  YYSYMBOL_unary_operator = 76,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 77, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 78,       /* additive_expression  */
  YYSYMBOL_relational_expression = 79,     /* relational_expression  */
  YYSYMBOL_equality_expression = 80,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 81,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 82,     /* logical_or_expression  */
  YYSYMBOL_expression = 83,                /* expression  */
  YYSYMBOL_assignment_operator = 84,       /* assignment_operator  */
  YYSYMBOL_assignment_expression = 85,     /* assignment_expression  */
  YYSYMBOL_declaration_expression = 86,    /* declaration_expression  */
  YYSYMBOL_declarationlist = 87,           /* declarationlist  */
  YYSYMBOL_declaration = 88,               /* declaration  */
  YYSYMBOL_89_2 = 89,                      /* $@2  */
  YYSYMBOL_brackets = 90,                  /* brackets  */
  YYSYMBOL_conditional_expression = 91,    /* conditional_expression  */
  YYSYMBOL_92_3 = 92,                      /* $@3  */
  YYSYMBOL_93_4 = 93,                      /* $@4  */
  YYSYMBOL_94_5 = 94,                      /* $@5  */
  YYSYMBOL_95_6 = 95,                      /* $@6  */
  YYSYMBOL_else_statement = 96,            /* else_statement  */
  YYSYMBOL_97_7 = 97,                      /* $@7  */
  YYSYMBOL_98_8 = 98,                      /* $@8  */
  YYSYMBOL_99_9 = 99,                      /* $@9  */
  YYSYMBOL_100_10 = 100,                   /* $@10  */
  YYSYMBOL_101_11 = 101,                   /* $@11  */
  YYSYMBOL_102_12 = 102,                   /* $@12  */
  YYSYMBOL_for_expression = 103,           /* for_expression  */
  YYSYMBOL_104_13 = 104,                   /* $@13  */
  YYSYMBOL_105_14 = 105,                   /* @14  */
  YYSYMBOL_106_15 = 106,                   /* $@15  */
  YYSYMBOL_107_16 = 107,                   /* $@16  */
  YYSYMBOL_108_17 = 108,                   /* $@17  */
  YYSYMBOL_loop_initialization_list = 109, /* loop_initialization_list  */
  YYSYMBOL_loop_condition = 110,           /* loop_condition  */
  YYSYMBOL_loop_increment_list = 111,      /* loop_increment_list  */
  YYSYMBOL_statement = 112,                /* statement  */
  YYSYMBOL_flow_control_statement = 113,   /* flow_control_statement  */
  YYSYMBOL_statement_list = 114,           /* statement_list  */
  YYSYMBOL_begin = 115,                    /* begin  */
  YYSYMBOL_116_18 = 116,                   /* $@18  */
  YYSYMBOL_blocks = 117,                   /* blocks  */
  YYSYMBOL_attribute = 118,                /* attribute  */
  YYSYMBOL_struct_declaration = 119,       /* struct_declaration  */
  YYSYMBOL_120_19 = 120,                   /* $@19  */
  YYSYMBOL_struct_body = 121,              /* struct_body  */
  YYSYMBOL_122_20 = 122,                   /* $@20  */
  YYSYMBOL_struct_attributes = 123,        /* struct_attributes  */
  YYSYMBOL_124_21 = 124,                   /* $@21  */
  YYSYMBOL_functionPrefix = 125,           /* functionPrefix  */
  YYSYMBOL_126_22 = 126,                   /* $@22  */
  YYSYMBOL_functionSuffix = 127,           /* functionSuffix  */
  YYSYMBOL_128_23 = 128,                   /* $@23  */
  YYSYMBOL_129_24 = 129,                   /* $@24  */
  YYSYMBOL_functionArguments = 130,        /* functionArguments  */
  YYSYMBOL_statement_block = 131,          /* statement_block  */
  YYSYMBOL_132_25 = 132                    /* $@25  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
       2,     2,     2,    56,     2,     2,     2,    59,    57,     2,
      48,    49,    53,    54,    52,    55,     2,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
      60,    62,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    72,    77,    82,    91,    97,   103,   111,
     115,   148,   163,   180,   179,   223,   224,   228,   254,   282,
     286,   299,   312,   334,   354,   355,   359,   360,   364,   365,
     366,   367,   368,   372,   376,   397,   419,   443,   449,   471,
     495,   501,   522,   543,   564,   587,   593,   614,   637,   643,
     666,   672,   695,   703,   714,   734,   738,   739,   744,   743,
     778,   795,   800,   812,   817,   822,   799,   833,   841,   846,
     851,   832,   858,   864,   857,   873,   881,   887,   893,   914,
     920,   880,   935,   936,   937,   941,   954,   961,   969,   978,
     988,   989,   990,   991,   992,   993,   994,  1011,  1022,  1031,
    1039,  1053,  1069,  1070,  1074,  1074,  1082,  1083,  1084,  1088,
    1098,  1104,  1102,  1120,  1119,  1131,  1129,  1143,  1148,  1147,
    1166,  1165,  1176,  1175,  1188,  1198,  1213,  1212,  1229
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
  "ASM", "'('", "')'", "'['", "']'", "','", "'*'", "'+'", "'-'", "'!'",
  "'&'", "'/'", "'%'", "'<'", "'>'", "'='", "'{'", "'}'", "';'", "$accept",
  "primary_expression", "constant", "postfix_expression", "$@1",
  "functionParameters", "argument_list", "unary_expression", "type_name",
  "stars", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression", "expression",
  "assignment_operator", "assignment_expression", "declaration_expression",
  "declarationlist", "declaration", "$@2", "brackets",
  "conditional_expression", "$@3", "$@4", "$@5", "$@6", "else_statement",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "for_expression", "$@13",
  "@14", "$@15", "$@16", "$@17", "loop_initialization_list",
  "loop_condition", "loop_increment_list", "statement",
  "flow_control_statement", "statement_list", "begin", "$@18", "blocks",
  "attribute", "struct_declaration", "$@19", "struct_body", "$@20",
  "struct_attributes", "$@21", "functionPrefix", "$@22", "functionSuffix",
  "$@23", "$@24", "functionArguments", "statement_block", "$@25", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-134)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -134,    19,     4,  -134,  -134,  -134,   -59,   -27,  -134,     4,
    -134,     4,  -134,    -6,   -27,     1,  -134,  -134,    11,  -134,
    -134,   -42,   -27,   -21,   -12,  -134,  -134,    26,  -134,  -134,
       3,    10,  -134,   -27,  -134,   -38,  -134,    34,    68,  -134,
      11,    11,    18,  -134,  -134,    34,   -27,  -134,  -134,   153,
    -134,    69,    44,  -134,  -134,    62,    64,   177,   225,   225,
    -134,  -134,  -134,    65,  -134,    66,    67,   225,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,    -5,    49,   -27,   225,    31,
      -8,    43,    63,    87,    89,    53,    55,    59,  -134,  -134,
      24,    61,    70,  -134,  -134,  -134,   225,  -134,  -134,    71,
    -134,  -134,  -134,   225,    93,    78,  -134,  -134,   225,  -134,
     225,    91,  -134,    79,  -134,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,  -134,  -134,
    -134,  -134,  -134,  -134,   225,    83,  -134,   201,    86,    88,
    -134,    90,  -134,  -134,   -27,  -134,  -134,  -134,    31,    31,
      -8,    -8,    -8,    -8,    43,    43,    63,    87,    49,    94,
      73,  -134,  -134,  -134,   -17,  -134,  -134,   107,  -134,  -134,
    -134,   225,  -134,    80,  -134,   225,    95,    98,  -134,   225,
    -134,  -134,   105,   225,  -134,    84,   153,   101,   100,  -134,
    -134,    96,  -134,   225,   103,  -134,   108,  -134,  -134,   225,
     104,    92,  -134,   106,   110,   116,  -134,   153,  -134,   225,
    -134,   153,   121,   111,  -134,  -134,  -134,   112,   114,  -134,
    -134,   153,  -134,   117,  -134,    92,  -134
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     104,     0,   108,     1,    25,    24,     0,    27,   105,   108,
     110,   108,   113,     0,    27,     0,   106,   107,   117,   111,
      26,     0,    27,     0,     0,   118,   109,     0,   114,   112,
       0,     0,   120,    27,   119,     0,   115,     0,     0,   122,
       0,   117,   126,   121,   124,     0,    27,   116,   128,     0,
     123,     0,     0,   100,   101,     0,     0,     0,     0,     0,
       7,     8,     6,     2,     5,     0,     0,     0,    31,    28,
      29,    30,    32,     9,     3,    19,    33,    27,     0,    37,
      40,    45,    48,    50,    52,     0,     0,     0,    92,    93,
       0,     0,     0,   125,    99,    76,     0,    98,    33,     0,
      20,    21,    13,     0,     0,     0,    11,    12,     0,    53,
       0,     0,    55,    57,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    90,
      91,   102,    95,   127,    84,     0,    97,     0,     0,     0,
       4,     0,    54,    58,    27,    34,    35,    36,    38,    39,
      43,    44,    41,    42,    46,    47,    49,    51,     0,    83,
       0,    62,    15,    14,     0,    17,    23,     0,    10,    61,
      56,    84,    77,     0,    16,     0,     0,    59,    82,    86,
      63,    18,     0,     0,    85,     0,     0,     0,     0,    78,
      64,     0,    60,    89,     0,    96,    88,    79,    65,    89,
       0,    75,    87,     0,     0,     0,    66,     0,    72,     0,
      80,     0,     0,     0,    73,    67,    81,     0,     0,    74,
      68,     0,    69,     0,    70,    75,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -134,  -134,  -134,  -134,  -134,   -49,    46,    -2,
    -134,   -13,   -29,   -23,    45,    25,  -134,   -54,  -134,  -133,
    -134,    30,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
     -47,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,    12,  -134,   -15,  -134,  -134,   -88,  -134,
    -134,    51,  -134,  -134,  -134,  -134,  -134,   141,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,   140,  -134
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    73,    74,    75,   137,   163,   164,    98,    77,   111,
      78,    79,    80,    81,    82,    83,    84,    85,   110,    86,
      87,   112,   113,   169,   177,    88,   173,   186,   194,   201,
     206,   218,   221,   223,   225,   211,   217,    89,   134,   179,
     193,   200,   213,   160,   185,   197,    90,    91,    92,     1,
       2,     8,     9,    10,    24,    13,    18,    23,    41,    11,
      30,    34,    37,    45,    35,    43,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,   159,   131,    99,    12,    15,    25,     4,     4,   100,
     101,    39,    20,   105,    40,     4,     5,     5,     6,     3,
      27,   106,   107,    26,     5,    52,    14,    53,     4,   114,
      54,    38,   174,    19,    55,   175,    56,     5,   159,    57,
      21,    76,   135,    28,    51,   108,   118,   119,     7,   138,
      58,    59,    32,    29,   141,     7,   142,     7,    60,    61,
      16,    62,    17,    63,    22,    31,   145,   146,   147,    64,
      65,    66,    67,   120,   121,    36,    33,    68,    69,    70,
      71,    72,    48,   165,   115,   158,    46,    22,  -103,   116,
     117,   150,   151,   152,   153,   124,   125,    42,   190,   204,
     205,   154,   155,   122,   123,   148,   149,    44,    93,    94,
      95,   109,    96,   102,   103,   104,   126,   127,   128,   210,
     129,   181,   158,   214,   130,   184,   132,   140,   139,   188,
     143,   144,   161,   222,   133,   166,   136,    76,   172,   196,
     167,   168,   176,   180,   187,   196,   171,   182,   183,   189,
     191,   192,   157,   203,    52,   212,    53,     4,    76,    54,
     199,   195,    76,    55,   209,    56,     5,   198,    57,   207,
     215,   156,    76,   208,   170,   216,   219,   220,   226,    58,
      59,   224,    47,   178,   202,    50,     0,    60,    61,     0,
      62,     0,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,     0,    58,    59,     0,    68,    69,    70,    71,
      72,    60,    61,     0,    62,     0,    63,     0,     0,     0,
       0,     0,    64,    65,     0,    67,     0,    58,    59,     0,
      68,    69,    70,    71,    72,    60,    61,     0,    62,     0,
      63,     0,    97,     0,     0,     0,    64,    65,     0,    67,
     162,    58,    59,     0,    68,    69,    70,    71,    72,    60,
      61,     0,    62,     0,    63,     0,     0,     0,     0,     0,
      64,    65,     0,    67,     0,     0,     0,     0,    68,    69,
      70,    71,    72
};

static const yytype_int16 yycheck[] =
{
      49,   134,    90,    57,    63,     7,    48,     4,     4,    58,
      59,    49,    14,    67,    52,     4,    13,    13,    14,     0,
      22,    26,    27,    65,    13,     1,    53,     3,     4,    78,
       6,    33,    49,    39,    10,    52,    12,    13,   171,    15,
      39,    90,    96,    64,    46,    50,    54,    55,     2,   103,
      26,    27,    49,    65,   108,     9,   110,    11,    34,    35,
       9,    37,    11,    39,    18,    39,   115,   116,   117,    45,
      46,    47,    48,    30,    31,    65,    30,    53,    54,    55,
      56,    57,    64,   137,    53,   134,    40,    41,    64,    58,
      59,   120,   121,   122,   123,    32,    33,    63,   186,     7,
       8,   124,   125,    60,    61,   118,   119,    39,    39,    65,
      48,    62,    48,    48,    48,    48,    29,    28,    65,   207,
      65,   175,   171,   211,    65,   179,    65,    49,    35,   183,
      39,    52,    49,   221,    64,    49,    65,   186,    65,   193,
      52,    51,    35,    63,    39,   199,    52,    52,    50,    65,
      49,    51,   127,    49,     1,   209,     3,     4,   207,     6,
      52,    65,   211,    10,    48,    12,    13,    64,    15,    63,
      49,   126,   221,    63,   144,    64,    64,    63,   225,    26,
      27,    64,    41,   171,   199,    45,    -1,    34,    35,    -1,
      37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    -1,    26,    27,    -1,    53,    54,    55,    56,
      57,    34,    35,    -1,    37,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    48,    -1,    26,    27,    -1,
      53,    54,    55,    56,    57,    34,    35,    -1,    37,    -1,
      39,    -1,    65,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    26,    27,    -1,    53,    54,    55,    56,    57,    34,
      35,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   115,   116,     0,     4,    13,    14,    74,   117,   118,
     119,   125,    63,   121,    53,    75,   117,   117,   122,    39,
      75,    39,    74,   123,   120,    48,    65,    75,    64,    65,
     126,    39,    49,    74,   127,   130,    65,   128,    75,    49,
      52,   124,    63,   131,    39,   129,    74,   123,    64,   132,
     131,    75,     1,     3,     6,    10,    12,    15,    26,    27,
      34,    35,    37,    39,    45,    46,    47,    48,    53,    54,
      55,    56,    57,    67,    68,    69,    73,    74,    76,    77,
      78,    79,    80,    81,    82,    83,    85,    86,    91,   103,
     112,   113,   114,    39,    65,    48,    48,    65,    73,    83,
      73,    73,    48,    48,    48,    83,    26,    27,    50,    62,
      84,    75,    87,    88,    73,    53,    58,    59,    54,    55,
      30,    31,    60,    61,    32,    33,    29,    28,    65,    65,
      65,   114,    65,    64,   104,    83,    65,    70,    83,    35,
      49,    83,    83,    39,    52,    73,    73,    73,    77,    77,
      78,    78,    78,    78,    79,    79,    80,    81,    73,    85,
     109,    49,    49,    71,    72,    83,    49,    52,    51,    89,
      87,    52,    65,    92,    49,    52,    35,    90,   109,   105,
      63,    83,    52,    50,    83,   110,    93,    39,    83,    65,
     114,    49,    51,   106,    94,    65,    83,   111,    64,    52,
     107,    95,   111,    49,     7,     8,    96,    63,    63,    48,
     114,   101,    83,   108,   114,    49,    64,   102,    97,    64,
      63,    98,   114,    99,    64,   100,    96
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    70,    69,    71,    71,    72,    72,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    78,    78,    78,
      79,    79,    79,    79,    79,    80,    80,    80,    81,    81,
      82,    82,    83,    84,    85,    86,    87,    87,    89,    88,
      90,    90,    92,    93,    94,    95,    91,    97,    98,    99,
     100,    96,   101,   102,    96,    96,   104,   105,   106,   107,
     108,   103,   109,   109,   109,   110,   110,   111,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   116,   115,   117,   117,   117,   118,
     118,   120,   119,   122,   121,   124,   123,   123,   126,   125,
     128,   127,   129,   127,   130,   130,   132,   131,   131
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       4,     2,     2,     0,     4,     1,     2,     1,     3,     1,
       2,     2,     2,     4,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     1,     3,     2,     3,     1,     0,     4,
       4,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    12,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    16,     3,     1,     0,     1,     0,     3,     1,     0,
       2,     2,     1,     1,     2,     2,     9,     3,     2,     2,
       1,     1,     2,     1,     0,     2,     2,     2,     0,     4,
       1,     0,     5,     0,     4,     0,     6,     0,     0,     6,
       0,     3,     0,     4,     3,     5,     0,     4,     2
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
#line 1573 "gm.cc"
    break;

  case 3: /* primary_expression: constant  */
#line 72 "parser.y"
                                        {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
					debug(2);
				}
#line 1583 "gm.cc"
    break;

  case 4: /* primary_expression: '(' expression ')'  */
#line 77 "parser.y"
                                            {
					(yyval.var.addr) = (yyvsp[-1].var.addr);
					(yyval.var.type) = (yyvsp[-1].var.type);
					debug(3);
				}
#line 1593 "gm.cc"
    break;

  case 5: /* primary_expression: NULL_  */
#line 82 "parser.y"
                                {
					(yyval.var.type) = getCharArray("int");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #0");
					debug(4);
				}
#line 1604 "gm.cc"
    break;

  case 6: /* constant: I_CONST  */
#line 91 "parser.y"
                                {
					(yyval.var.type) = getCharArray("int");
					(yyval.var.addr) = getTemp("int");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(5);
				}
#line 1615 "gm.cc"
    break;

  case 7: /* constant: C_CONST  */
#line 97 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("char");
					(yyval.var.addr) = getTemp("char");
					appendCode(string((yyval.var.addr)) + " = #" + string((yyvsp[0].str)));
					debug(6);
				}
#line 1626 "gm.cc"
    break;

  case 8: /* constant: S_CONST  */
#line 103 "parser.y"
                                        {
					(yyval.var.type) = getCharArray("*char");
					(yyval.var.addr) = getTemp("*char");
					appendCode("string " + string((yyval.var.addr)) + " " + string((yyvsp[0].str)));
				}
#line 1636 "gm.cc"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 111 "parser.y"
                                                {
					(yyval.var.type) = (yyvsp[0].var.type);
					(yyval.var.addr) = (yyvsp[0].var.addr);
				}
#line 1645 "gm.cc"
    break;

  case 10: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 115 "parser.y"
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
#line 1682 "gm.cc"
    break;

  case 11: /* postfix_expression: postfix_expression INC_OP  */
#line 148 "parser.y"
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
#line 1701 "gm.cc"
    break;

  case 12: /* postfix_expression: postfix_expression DEC_OP  */
#line 164 "parser.y"
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
#line 1721 "gm.cc"
    break;

  case 13: /* $@1: %empty  */
#line 180 "parser.y"
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
#line 1742 "gm.cc"
    break;

  case 14: /* postfix_expression: IDENTIFIER '(' $@1 functionParameters  */
#line 197 "parser.y"
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
#line 1770 "gm.cc"
    break;

  case 17: /* argument_list: expression  */
#line 229 "parser.y"
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
#line 1800 "gm.cc"
    break;

  case 18: /* argument_list: argument_list ',' expression  */
#line 255 "parser.y"
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
#line 1829 "gm.cc"
    break;

  case 19: /* unary_expression: postfix_expression  */
#line 282 "parser.y"
                                          {	
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 1838 "gm.cc"
    break;

  case 20: /* unary_expression: INC_OP unary_expression  */
#line 286 "parser.y"
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
#line 1856 "gm.cc"
    break;

  case 21: /* unary_expression: DEC_OP unary_expression  */
#line 299 "parser.y"
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
#line 1874 "gm.cc"
    break;

  case 22: /* unary_expression: unary_operator unary_expression  */
#line 312 "parser.y"
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
#line 1901 "gm.cc"
    break;

  case 23: /* unary_expression: MALLOC '(' expression ')'  */
#line 334 "parser.y"
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
#line 1923 "gm.cc"
    break;

  case 24: /* type_name: INT  */
#line 354 "parser.y"
                                {dtype = "int"; starsCount = 0; }
#line 1929 "gm.cc"
    break;

  case 25: /* type_name: CHAR  */
#line 355 "parser.y"
                               {dtype = "char"; starsCount = 0; }
#line 1935 "gm.cc"
    break;

  case 26: /* stars: '*' stars  */
#line 359 "parser.y"
                            { starsCount++; }
#line 1941 "gm.cc"
    break;

  case 28: /* unary_operator: '+'  */
#line 364 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 1947 "gm.cc"
    break;

  case 29: /* unary_operator: '-'  */
#line 365 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 1953 "gm.cc"
    break;

  case 30: /* unary_operator: '!'  */
#line 366 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 1959 "gm.cc"
    break;

  case 31: /* unary_operator: '*'  */
#line 367 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 1965 "gm.cc"
    break;

  case 32: /* unary_operator: '&'  */
#line 368 "parser.y"
                                {	(yyval.str) = (yyvsp[0].str);	}
#line 1971 "gm.cc"
    break;

  case 33: /* multiplicative_expression: unary_expression  */
#line 372 "parser.y"
                                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 1980 "gm.cc"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 376 "parser.y"
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
#line 2005 "gm.cc"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 398 "parser.y"
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
#line 2030 "gm.cc"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 420 "parser.y"
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
#line 2055 "gm.cc"
    break;

  case 37: /* additive_expression: multiplicative_expression  */
#line 444 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2064 "gm.cc"
    break;

  case 38: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 450 "parser.y"
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
#line 2089 "gm.cc"
    break;

  case 39: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 472 "parser.y"
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
#line 2114 "gm.cc"
    break;

  case 40: /* relational_expression: additive_expression  */
#line 496 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2123 "gm.cc"
    break;

  case 41: /* relational_expression: relational_expression '<' additive_expression  */
#line 502 "parser.y"
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
#line 2147 "gm.cc"
    break;

  case 42: /* relational_expression: relational_expression '>' additive_expression  */
#line 523 "parser.y"
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
#line 2171 "gm.cc"
    break;

  case 43: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 544 "parser.y"
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
#line 2195 "gm.cc"
    break;

  case 44: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 565 "parser.y"
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
#line 2219 "gm.cc"
    break;

  case 45: /* equality_expression: relational_expression  */
#line 588 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2228 "gm.cc"
    break;

  case 46: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 594 "parser.y"
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
#line 2252 "gm.cc"
    break;

  case 47: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 615 "parser.y"
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
#line 2276 "gm.cc"
    break;

  case 48: /* logical_and_expression: equality_expression  */
#line 638 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2285 "gm.cc"
    break;

  case 49: /* logical_and_expression: logical_and_expression AND_OP equality_expression  */
#line 644 "parser.y"
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
#line 2309 "gm.cc"
    break;

  case 50: /* logical_or_expression: logical_and_expression  */
#line 667 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2318 "gm.cc"
    break;

  case 51: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 673 "parser.y"
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
#line 2342 "gm.cc"
    break;

  case 52: /* expression: logical_or_expression  */
#line 696 "parser.y"
                                {
					(yyval.var.addr) = (yyvsp[0].var.addr);
					(yyval.var.type) = (yyvsp[0].var.type);
				}
#line 2351 "gm.cc"
    break;

  case 53: /* assignment_operator: '='  */
#line 703 "parser.y"
                                                                        {	(yyval.str) = (yyvsp[0].str);	}
#line 2357 "gm.cc"
    break;

  case 54: /* assignment_expression: unary_expression assignment_operator expression  */
#line 715 "parser.y"
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
#line 2377 "gm.cc"
    break;

  case 58: /* $@2: %empty  */
#line 744 "parser.y"
                                {
					declevels.clear();
				}
#line 2385 "gm.cc"
    break;

  case 59: /* declaration: stars IDENTIFIER $@2 brackets  */
#line 748 "parser.y"
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
#line 2417 "gm.cc"
    break;

  case 60: /* brackets: brackets '[' expression ']'  */
#line 779 "parser.y"
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
#line 2438 "gm.cc"
    break;

  case 62: /* $@3: %empty  */
#line 800 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				string afterIf = getLabel();
				ifgoto.push(afterIf);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2454 "gm.cc"
    break;

  case 63: /* $@4: %empty  */
#line 812 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2463 "gm.cc"
    break;

  case 64: /* $@5: %empty  */
#line 817 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2472 "gm.cc"
    break;

  case 65: /* $@6: %empty  */
#line 822 "parser.y"
                        {
				scopeStack.pop();
			}
#line 2480 "gm.cc"
    break;

  case 66: /* conditional_expression: IF '(' expression ')' $@3 '{' $@4 statement_list $@5 '}' $@6 else_statement  */
#line 827 "parser.y"
                        {
			}
#line 2487 "gm.cc"
    break;

  case 67: /* $@7: %empty  */
#line 833 "parser.y"
                        {
				string expr((yyvsp[-1].var.addr));
				string elseLabel = getLabel();
				(yyvsp[-3].str) = getCharArray(elseLabel);

				appendCode("if ( " + expr + " == #0 ) goto " + elseLabel);
			}
#line 2499 "gm.cc"
    break;

  case 68: /* $@8: %empty  */
#line 841 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2508 "gm.cc"
    break;

  case 69: /* $@9: %empty  */
#line 846 "parser.y"
                        {
				appendCode("goto " + ifgoto.top());
				appendCode(string((yyvsp[-7].str)) + ":");
			}
#line 2517 "gm.cc"
    break;

  case 70: /* $@10: %empty  */
#line 851 "parser.y"
                        {
				scopeStack.pop();
			}
#line 2525 "gm.cc"
    break;

  case 71: /* else_statement: ELIF '(' expression ')' $@7 '{' $@8 statement_list $@9 '}' $@10 else_statement  */
#line 855 "parser.y"
                        {
			}
#line 2532 "gm.cc"
    break;

  case 72: /* $@11: %empty  */
#line 858 "parser.y"
                        {
				currentScope++;
				scopeStack.push(currentScope);
			}
#line 2541 "gm.cc"
    break;

  case 73: /* $@12: %empty  */
#line 864 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2550 "gm.cc"
    break;

  case 74: /* else_statement: ELSE '{' $@11 statement_list $@12 '}'  */
#line 869 "parser.y"
                        {
				scopeStack.pop();
			}
#line 2558 "gm.cc"
    break;

  case 75: /* else_statement: %empty  */
#line 873 "parser.y"
                        {
				appendCode(ifgoto.top() + ":");
				ifgoto.pop();
			}
#line 2567 "gm.cc"
    break;

  case 76: /* $@13: %empty  */
#line 881 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
				}
#line 2576 "gm.cc"
    break;

  case 77: /* @14: %empty  */
#line 887 "parser.y"
                                {
					string forStart = getLabel();
					(yyvsp[-4].str)  = getCharArray(forStart);
					appendCode(forStart+":");
				}
#line 2586 "gm.cc"
    break;

  case 78: /* $@15: %empty  */
#line 893 "parser.y"
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
#line 2610 "gm.cc"
    break;

  case 79: /* $@16: %empty  */
#line 914 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-9].str)));
					appendCode(string((yyvsp[-6].str)) + ":");
				}
#line 2619 "gm.cc"
    break;

  case 80: /* $@17: %empty  */
#line 920 "parser.y"
                                {
					appendCode("goto " + string((yyvsp[-8].var.addr)));
					appendCode(string((yyvsp[-8].var.type)) + ":");
				}
#line 2628 "gm.cc"
    break;

  case 81: /* for_expression: FOR '(' $@13 loop_initialization_list ';' @14 loop_condition ';' $@15 loop_increment_list $@16 ')' '{' statement_list $@17 '}'  */
#line 926 "parser.y"
                                {
					scopeStack.pop();
					forIncrement.pop();
					forNext.pop();
				}
#line 2638 "gm.cc"
    break;

  case 82: /* loop_initialization_list: assignment_expression ',' loop_initialization_list  */
#line 935 "parser.y"
                                                                                {}
#line 2644 "gm.cc"
    break;

  case 83: /* loop_initialization_list: assignment_expression  */
#line 936 "parser.y"
                                                {}
#line 2650 "gm.cc"
    break;

  case 84: /* loop_initialization_list: %empty  */
#line 937 "parser.y"
                          {}
#line 2656 "gm.cc"
    break;

  case 85: /* loop_condition: expression  */
#line 942 "parser.y"
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
#line 2671 "gm.cc"
    break;

  case 86: /* loop_condition: %empty  */
#line 954 "parser.y"
                                {
					forExpr = string(getTemp("bool"));
					appendCode(forExpr + " = #1");
				}
#line 2680 "gm.cc"
    break;

  case 87: /* loop_increment_list: expression ',' loop_increment_list  */
#line 962 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression , loop_incr" << endl;
					}
				}
#line 2691 "gm.cc"
    break;

  case 88: /* loop_increment_list: expression  */
#line 970 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2702 "gm.cc"
    break;

  case 89: /* loop_increment_list: %empty  */
#line 978 "parser.y"
                                {
					if( parseDebug == 1 )
					{
						cout << "loop_incr -> expression" << endl;
					}
				}
#line 2713 "gm.cc"
    break;

  case 96: /* statement: ASM '(' S_CONST ',' S_CONST ',' IDENTIFIER ')' ';'  */
#line 995 "parser.y"
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
#line 2734 "gm.cc"
    break;

  case 97: /* statement: RETURN expression ';'  */
#line 1012 "parser.y"
                                {
					string returnVal((yyvsp[-1].var.addr));
					appendCode("Return " + returnVal);
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return expression" << endl;
					}
				}
#line 2748 "gm.cc"
    break;

  case 98: /* statement: RETURN ';'  */
#line 1023 "parser.y"
                                {
					appendCode("return");
					
					if( parseDebug == 1 )
					{
						cout << "statement -> return" << endl;
					}
				}
#line 2761 "gm.cc"
    break;

  case 99: /* statement: error ';'  */
#line 1032 "parser.y"
                                {
					error = -1;
					return 1;
				}
#line 2770 "gm.cc"
    break;

  case 100: /* flow_control_statement: BREAK  */
#line 1040 "parser.y"
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
#line 2788 "gm.cc"
    break;

  case 101: /* flow_control_statement: CONTINUE  */
#line 1054 "parser.y"
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
#line 2806 "gm.cc"
    break;

  case 104: /* $@18: %empty  */
#line 1074 "parser.y"
                {
			currentStruct = "main";
			insertStruct(currentStruct);
		}
#line 2815 "gm.cc"
    break;

  case 109: /* attribute: type_name stars IDENTIFIER ';'  */
#line 1089 "parser.y"
                                {
					string addr((yyvsp[-1].str));
					string type = dtype;
					for( int i = 0 ; i < starsCount ; i++ )
					{
						type = "*" + type;
					}
					insertAttribute(addr, type,stdeclevels);
				}
#line 2829 "gm.cc"
    break;

  case 111: /* $@19: %empty  */
#line 1104 "parser.y"
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
#line 2845 "gm.cc"
    break;

  case 113: /* $@20: %empty  */
#line 1120 "parser.y"
                                {
					stdeclevels.clear();
				}
#line 2853 "gm.cc"
    break;

  case 115: /* $@21: %empty  */
#line 1131 "parser.y"
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
#line 2869 "gm.cc"
    break;

  case 118: /* $@22: %empty  */
#line 1148 "parser.y"
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
#line 2887 "gm.cc"
    break;

  case 120: /* $@23: %empty  */
#line 1166 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 2900 "gm.cc"
    break;

  case 122: /* $@24: %empty  */
#line 1176 "parser.y"
                        {
				currentScope--;
				scopeStack.pop();

				string functionStart = getLabel();
				appendCode(functionStart + ":");
				setLabel(currentFunction, functionStart);
			}
#line 2913 "gm.cc"
    break;

  case 124: /* functionArguments: type_name stars IDENTIFIER  */
#line 1189 "parser.y"
                        {
				string name((yyvsp[0].str));
				string type = dtype;
				for( int i = 0 ; i < starsCount ; i++ )
				{
					type = "*" + type;
				}
				insertParam(name, type);
			}
#line 2927 "gm.cc"
    break;

  case 125: /* functionArguments: functionArguments ',' type_name stars IDENTIFIER  */
#line 1199 "parser.y"
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
#line 2942 "gm.cc"
    break;

  case 126: /* $@25: %empty  */
#line 1213 "parser.y"
                                {
					currentScope++;
					scopeStack.push(currentScope);
					(yyvsp[0].intval) = scopeStack.top();
				}
#line 2952 "gm.cc"
    break;

  case 127: /* statement_block: '{' $@25 statement_list '}'  */
#line 1220 "parser.y"
                                {
					scopeStack.pop();
					
					if( parseDebug == 1 )
					{
						cout << "statement_block -> { statementlist }" << endl;
					}
				}
#line 2965 "gm.cc"
    break;

  case 128: /* statement_block: '{' '}'  */
#line 1229 "parser.y"
                                                                        {
												if( parseDebug == 1 )
												{
													cout << "statementblock -> {}" << endl;
												}
										}
#line 2976 "gm.cc"
    break;


#line 2980 "gm.cc"

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

#line 1236 "parser.y"



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
