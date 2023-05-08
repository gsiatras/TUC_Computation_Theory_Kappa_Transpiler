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
#line 1 "myanalyzer.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cgen.h"

#define MAX_STRING_LENGTH 1024 


int yylex(void);
extern int line_num;

char** comp_function_output = NULL;
char* comp_func_output2;
int num_functions = 0;

char* buffer;

#line 90 "myanalyzer.tab.c"

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

#include "myanalyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_IDENTIFIER = 3,              /* TK_IDENTIFIER  */
  YYSYMBOL_TK_INTEGER = 4,                 /* TK_INTEGER  */
  YYSYMBOL_TK_FLOAT = 5,                   /* TK_FLOAT  */
  YYSYMBOL_TK_STRING = 6,                  /* TK_STRING  */
  YYSYMBOL_KW_INT = 7,                     /* KW_INT  */
  YYSYMBOL_KW_SCALAR = 8,                  /* KW_SCALAR  */
  YYSYMBOL_KW_STR = 9,                     /* KW_STR  */
  YYSYMBOL_KW_BOOLEAN = 10,                /* KW_BOOLEAN  */
  YYSYMBOL_KW_TRUE = 11,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 12,                  /* KW_FALSE  */
  YYSYMBOL_KW_CONST = 13,                  /* KW_CONST  */
  YYSYMBOL_KW_IF = 14,                     /* KW_IF  */
  YYSYMBOL_KW_ELSE = 15,                   /* KW_ELSE  */
  YYSYMBOL_KW_ENDIF = 16,                  /* KW_ENDIF  */
  YYSYMBOL_KW_FOR = 17,                    /* KW_FOR  */
  YYSYMBOL_KW_IN = 18,                     /* KW_IN  */
  YYSYMBOL_KW_ENDFOR = 19,                 /* KW_ENDFOR  */
  YYSYMBOL_KW_WHILE = 20,                  /* KW_WHILE  */
  YYSYMBOL_KW_ENDWHILE = 21,               /* KW_ENDWHILE  */
  YYSYMBOL_KW_BREAK = 22,                  /* KW_BREAK  */
  YYSYMBOL_KW_CONTINUE = 23,               /* KW_CONTINUE  */
  YYSYMBOL_KW_NOT = 24,                    /* KW_NOT  */
  YYSYMBOL_KW_AND = 25,                    /* KW_AND  */
  YYSYMBOL_KW_OR = 26,                     /* KW_OR  */
  YYSYMBOL_KW_DEF = 27,                    /* KW_DEF  */
  YYSYMBOL_KW_ENDDEF = 28,                 /* KW_ENDDEF  */
  YYSYMBOL_KW_MAIN = 29,                   /* KW_MAIN  */
  YYSYMBOL_KW_RETURN = 30,                 /* KW_RETURN  */
  YYSYMBOL_KW_COMP = 31,                   /* KW_COMP  */
  YYSYMBOL_KW_ENDCOMP = 32,                /* KW_ENDCOMP  */
  YYSYMBOL_KW_OF = 33,                     /* KW_OF  */
  YYSYMBOL_OP_PLUS = 34,                   /* OP_PLUS  */
  YYSYMBOL_OP_MINUS = 35,                  /* OP_MINUS  */
  YYSYMBOL_OP_MULT = 36,                   /* OP_MULT  */
  YYSYMBOL_OP_DIV = 37,                    /* OP_DIV  */
  YYSYMBOL_OP_MOD = 38,                    /* OP_MOD  */
  YYSYMBOL_OP_POWER = 39,                  /* OP_POWER  */
  YYSYMBOL_RP_EQUALS = 40,                 /* RP_EQUALS  */
  YYSYMBOL_RP_NOTEQUALS = 41,              /* RP_NOTEQUALS  */
  YYSYMBOL_RP_LESS = 42,                   /* RP_LESS  */
  YYSYMBOL_RP_LESSEQUALS = 43,             /* RP_LESSEQUALS  */
  YYSYMBOL_RP_MORE = 44,                   /* RP_MORE  */
  YYSYMBOL_RP_MOREEQUALS = 45,             /* RP_MOREEQUALS  */
  YYSYMBOL_AP_ASSIGN = 46,                 /* AP_ASSIGN  */
  YYSYMBOL_AP_HASHASSIGN = 47,             /* AP_HASHASSIGN  */
  YYSYMBOL_AP_PLUSASSIGN = 48,             /* AP_PLUSASSIGN  */
  YYSYMBOL_AP_MINASSIGN = 49,              /* AP_MINASSIGN  */
  YYSYMBOL_AP_MULASSIGN = 50,              /* AP_MULASSIGN  */
  YYSYMBOL_AP_DIVASSIGN = 51,              /* AP_DIVASSIGN  */
  YYSYMBOL_AP_MODASSIGN = 52,              /* AP_MODASSIGN  */
  YYSYMBOL_AP_COLONASSIGN = 53,            /* AP_COLONASSIGN  */
  YYSYMBOL_AP_ARROWASSIGN = 54,            /* AP_ARROWASSIGN  */
  YYSYMBOL_DEL_SMCOLON = 55,               /* DEL_SMCOLON  */
  YYSYMBOL_DEL_LPAR = 56,                  /* DEL_LPAR  */
  YYSYMBOL_DEL_RPAR = 57,                  /* DEL_RPAR  */
  YYSYMBOL_DEL_COMMA = 58,                 /* DEL_COMMA  */
  YYSYMBOL_DEL_LBLOCK = 59,                /* DEL_LBLOCK  */
  YYSYMBOL_DEL_RBLOCK = 60,                /* DEL_RBLOCK  */
  YYSYMBOL_DEL_COLON = 61,                 /* DEL_COLON  */
  YYSYMBOL_DEL_DOT = 62,                   /* DEL_DOT  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_program = 64,                   /* program  */
  YYSYMBOL_main_body = 65,                 /* main_body  */
  YYSYMBOL_main = 66,                      /* main  */
  YYSYMBOL_types = 67,                     /* types  */
  YYSYMBOL_basic_types = 68,               /* basic_types  */
  YYSYMBOL_identifiers = 69,               /* identifiers  */
  YYSYMBOL_decl_body = 70,                 /* decl_body  */
  YYSYMBOL_declarations = 71,              /* declarations  */
  YYSYMBOL_variable_declarations = 72,     /* variable_declarations  */
  YYSYMBOL_comp_variables = 73,            /* comp_variables  */
  YYSYMBOL_constant_declarations = 74,     /* constant_declarations  */
  YYSYMBOL_functions = 75,                 /* functions  */
  YYSYMBOL_parameter_declarations = 76,    /* parameter_declarations  */
  YYSYMBOL_complex_type_declarations = 77, /* complex_type_declarations  */
  YYSYMBOL_comp_body = 78,                 /* comp_body  */
  YYSYMBOL_comp_variable_declarations = 79, /* comp_variable_declarations  */
  YYSYMBOL_comp_identifiers = 80,          /* comp_identifiers  */
  YYSYMBOL_comp_functions = 81,            /* comp_functions  */
  YYSYMBOL_expressions = 82,               /* expressions  */
  YYSYMBOL_identifier_expressions = 83,    /* identifier_expressions  */
  YYSYMBOL_arithmetic_expressions = 84,    /* arithmetic_expressions  */
  YYSYMBOL_relational_expressions = 85,    /* relational_expressions  */
  YYSYMBOL_assign_expressions = 86,        /* assign_expressions  */
  YYSYMBOL_statements = 87,                /* statements  */
  YYSYMBOL_command_statements = 88,        /* command_statements  */
  YYSYMBOL_if_statement = 89,              /* if_statement  */
  YYSYMBOL_for_statement = 90,             /* for_statement  */
  YYSYMBOL_array_statement = 91,           /* array_statement  */
  YYSYMBOL_integral_array = 92,            /* integral_array  */
  YYSYMBOL_other_array = 93,               /* other_array  */
  YYSYMBOL_while_statement = 94,           /* while_statement  */
  YYSYMBOL_return_statement = 95,          /* return_statement  */
  YYSYMBOL_function_statement = 96,        /* function_statement  */
  YYSYMBOL_function_arg = 97,              /* function_arg  */
  YYSYMBOL_body = 98                       /* body  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   913

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   185,   186,   190,   196,   197,   200,   201,
     202,   203,   208,   209,   216,   217,   221,   222,   223,   224,
     228,   229,   232,   235,   246,   247,   251,   252,   253,   254,
     255,   262,   284,   285,   286,   287,   291,   295,   296,   300,
     318,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   356,   357,   358,   359,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   376,   377,   378,
     379,   380,   381,   385,   386,   387,   388,   389,   390,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   407,   408,
     409,   410,   411,   412,   417,   418,   423,   424,   429,   430,
     434,   438,   443,   448,   449,   454,   458,   459,   460,   464,
     465,   466,   467,   468,   469,   470,   471
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_IDENTIFIER",
  "TK_INTEGER", "TK_FLOAT", "TK_STRING", "KW_INT", "KW_SCALAR", "KW_STR",
  "KW_BOOLEAN", "KW_TRUE", "KW_FALSE", "KW_CONST", "KW_IF", "KW_ELSE",
  "KW_ENDIF", "KW_FOR", "KW_IN", "KW_ENDFOR", "KW_WHILE", "KW_ENDWHILE",
  "KW_BREAK", "KW_CONTINUE", "KW_NOT", "KW_AND", "KW_OR", "KW_DEF",
  "KW_ENDDEF", "KW_MAIN", "KW_RETURN", "KW_COMP", "KW_ENDCOMP", "KW_OF",
  "OP_PLUS", "OP_MINUS", "OP_MULT", "OP_DIV", "OP_MOD", "OP_POWER",
  "RP_EQUALS", "RP_NOTEQUALS", "RP_LESS", "RP_LESSEQUALS", "RP_MORE",
  "RP_MOREEQUALS", "AP_ASSIGN", "AP_HASHASSIGN", "AP_PLUSASSIGN",
  "AP_MINASSIGN", "AP_MULASSIGN", "AP_DIVASSIGN", "AP_MODASSIGN",
  "AP_COLONASSIGN", "AP_ARROWASSIGN", "DEL_SMCOLON", "DEL_LPAR",
  "DEL_RPAR", "DEL_COMMA", "DEL_LBLOCK", "DEL_RBLOCK", "DEL_COLON",
  "DEL_DOT", "$accept", "program", "main_body", "main", "types",
  "basic_types", "identifiers", "decl_body", "declarations",
  "variable_declarations", "comp_variables", "constant_declarations",
  "functions", "parameter_declarations", "complex_type_declarations",
  "comp_body", "comp_variable_declarations", "comp_identifiers",
  "comp_functions", "expressions", "identifier_expressions",
  "arithmetic_expressions", "relational_expressions", "assign_expressions",
  "statements", "command_statements", "if_statement", "for_statement",
  "array_statement", "integral_array", "other_array", "while_statement",
  "return_statement", "function_statement", "function_arg", "body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-13)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      57,   -54,    15,    32,    73,    86,  -176,  -176,     8,    57,
    -176,  -176,  -176,  -176,  -176,    91,  -176,   -22,    43,    71,
      29,  -176,   126,   240,  -176,  -176,    60,   301,   131,    82,
     -25,  -176,  -176,  -176,  -176,  -176,    85,    80,    41,  -176,
    -176,  -176,  -176,  -176,   301,   301,   301,   161,   301,   594,
    -176,  -176,  -176,  -176,    64,   108,   106,   173,   175,   153,
     -25,   125,   -25,  -176,   240,   301,    34,   768,   825,   836,
    -176,   623,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,    23,   301,   135,    23,
       4,   551,   134,   140,   144,  -176,    23,  -176,   146,   768,
       6,   154,   156,  -176,   797,   809,   825,   836,   851,   349,
     399,   399,   130,   117,   138,    27,    -5,   151,   157,   164,
    -176,  -176,   162,   148,    23,   551,    96,   168,    15,   169,
     172,   179,   301,    49,  -176,  -176,  -176,   304,   184,  -176,
     187,   189,   190,  -176,  -176,   197,   198,   204,    89,   131,
     213,  -176,   208,  -176,  -176,   301,  -176,  -176,   240,  -176,
      23,   131,   205,   174,   210,   128,   301,     1,   301,  -176,
    -176,   768,   202,   301,   301,   301,   301,   301,   301,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,   212,  -176,  -176,  -176,
    -176,   215,  -176,  -176,   768,  -176,   219,  -176,   551,   224,
     301,   220,   652,   222,   681,   227,   768,   768,   768,   768,
     768,   768,  -176,    13,   131,   434,  -176,   391,    80,   223,
     301,   225,  -176,    23,   551,  -176,   230,   285,   551,   710,
     551,   229,   446,  -176,   231,  -176,  -176,  -176,   348,   301,
     469,   551,   239,    19,   234,  -176,  -176,  -176,  -176,   565,
    -176,   481,  -176,   236,   280,   551,   241,   301,   246,   242,
     306,   504,   551,   739,  -176,    23,   278,  -176,   516,   254,
    -176,   312,  -176,   551,   257,   539,   258,  -176,    23,  -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    12,     0,     0,     0,     0,     2,     4,     0,     0,
      15,    16,    18,    19,    17,     0,    12,     0,     0,     0,
       0,     1,     0,     0,     3,    14,     0,     0,    26,     0,
       0,    13,     8,    10,    11,     9,     0,     0,    53,    57,
      58,    42,    43,    44,     0,     0,     0,     0,     0,     0,
      41,    46,    47,    45,     0,     0,     0,     0,     0,     0,
      32,     0,    34,    20,     0,   106,     0,    48,    65,    66,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,    33,     0,    35,     0,   107,
       0,     0,     0,    51,    49,    50,    63,    64,    60,    61,
      62,    59,    71,    72,    67,    68,    69,    70,     0,     0,
       7,    52,     0,    27,     0,     0,    53,     0,     0,     0,
       0,     0,   103,     0,   110,   112,   111,     0,     0,   109,
       0,     0,     0,    98,    99,     0,     0,     0,     0,    26,
       0,    31,     0,    21,   105,     0,    56,    55,     0,    23,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    83,
      84,   104,     0,     0,     0,     0,     0,     0,     0,    85,
      79,    80,    81,    82,    86,    87,     0,   114,   116,   115,
     113,     0,    38,    36,   108,     6,    28,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,     5,     0,    26,     0,    24,     0,    55,     0,
       0,     0,    22,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    91,    93,    88,     0,     0,
       0,     0,     0,     0,     0,    94,    90,    92,    89,     0,
     102,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,    95,     0,     0,
     100,     0,    96,     0,     0,     0,     0,    97,     0,   101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,   309,   -85,    -2,     5,  -176,   313,     0,
    -138,     3,  -176,  -141,  -176,    56,  -176,   176,  -176,   -31,
      59,  -176,  -176,  -176,  -147,  -175,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,   145,  -176,  -119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,   119,   120,     8,     9,    10,   134,
     135,   136,    13,    55,    14,    59,    60,    61,    62,    49,
      50,    51,    52,   138,   139,   238,   140,   141,   142,   143,
     144,   145,   146,    53,   100,   148
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   190,    57,    12,   123,    15,   163,    17,   191,    11,
     188,   152,    12,    67,    68,    69,   190,    71,    16,   203,
     197,    36,    58,   253,    27,   188,    32,    33,    34,    35,
      32,    33,    34,    35,    99,    18,    22,   101,   102,   162,
      85,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   240,   121,    87,   124,    22,
       1,    19,    98,   154,   155,   125,    22,   223,   190,    23,
       2,    84,    85,   225,   224,   196,    20,   188,   118,   215,
     261,   237,   118,   237,     3,   190,    21,   268,     4,    87,
      30,   248,   126,   248,   188,    26,   133,    65,   275,    28,
      66,   171,     2,   127,   190,   232,   128,    22,   237,   129,
     172,   130,   131,   188,   248,   237,    95,   186,    97,   132,
      37,   248,   251,    88,   194,    89,   237,    29,   248,    31,
     133,   101,   201,   167,    54,   202,    47,   204,   231,    56,
      63,    64,   206,   207,   208,   209,   210,   211,   187,   164,
     137,   189,    65,   133,   -12,   165,   195,   -12,   254,    82,
      83,    84,    85,   187,    70,    90,   189,    91,   133,   217,
      36,    81,    82,    83,    84,    85,    92,   126,    93,    87,
     270,    83,    84,    85,   137,    94,    96,     2,   127,   229,
     149,   128,    87,   279,   129,   122,   130,   131,   150,   151,
      87,   153,   199,   133,   132,   205,   161,   137,   249,    32,
      33,    34,    35,    87,   156,   187,   157,   158,   189,   159,
     133,    47,   137,   160,   166,   168,   263,   169,   235,   133,
     235,   236,   187,   236,   170,   189,   147,   133,   246,   179,
     246,   247,   180,   247,   181,   182,   133,    32,    33,    34,
      35,   187,   183,   184,   189,   235,   133,   137,   236,   185,
      58,   246,   235,   193,   247,   236,   198,   212,   246,   200,
     147,   247,   213,   235,   137,   246,   236,   214,   247,   216,
     218,   220,   222,   137,   228,   233,   230,   137,   234,   137,
     241,   137,   243,   147,   252,   255,   259,   137,   260,   137,
     137,   264,   262,   265,    38,    39,    40,    41,   147,   266,
     137,   271,    42,    43,   137,   273,   274,   276,    24,   278,
     137,   137,    25,     0,     0,    44,   192,   137,     0,     0,
       0,     0,   137,     0,   137,    45,    46,     0,     0,     0,
       0,     0,     0,   147,     0,     0,     0,     0,    47,     0,
     173,   126,   174,   175,   176,   177,   178,    48,     0,     0,
     147,     2,   127,   244,   245,   128,     0,     0,   129,   147,
     130,   131,     0,   147,     0,   147,     0,   147,   132,     0,
       0,     0,     0,   147,     0,   147,   147,    78,    79,    80,
      81,    82,    83,    84,    85,    47,   147,     0,     0,     0,
     147,     0,     0,     0,     0,     0,   147,   147,   227,     0,
       0,    87,     0,   147,     0,     0,    72,    73,   147,     0,
     147,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,   126,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     2,   127,   126,
       0,   128,     0,    87,   129,     0,   130,   131,     0,     2,
     127,    87,   226,   128,   132,     0,   129,     0,   130,   131,
       0,     0,   126,     0,   242,     0,   132,     0,     0,     0,
       0,    47,     2,   127,   126,     0,   128,     0,     0,   129,
     250,   130,   131,    47,     2,   127,     0,     0,   128,   132,
       0,   129,     0,   130,   131,     0,     0,   126,     0,   258,
       0,   132,     0,     0,     0,     0,    47,     2,   127,   126,
     267,   128,     0,     0,   129,     0,   130,   131,    47,     2,
     127,     0,     0,   128,   132,   272,   129,     0,   130,   131,
       0,     0,   126,     0,     0,     0,   132,     0,     0,     0,
       0,    47,     2,   127,   126,     0,   128,     0,   277,   129,
       0,   130,   131,    47,     2,   127,     0,     0,   128,   132,
       0,   129,     0,   130,   131,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,     0,    47,     0,     0,     0,
      72,    73,     0,     0,     0,     0,     0,     0,    47,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,     0,     0,     0,     0,   256,   257,    87,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,     0,     0,     0,    86,    87,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,     0,
     103,     0,     0,     0,     0,    87,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,   219,
       0,     0,     0,     0,    87,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,     0,   221,     0,
       0,     0,     0,    87,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,     0,     0,
       0,   239,    87,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,     0,     0,     0,     0,   269,
       0,    87,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
      87,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,    87,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    87,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,    87,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87
};

static const yytype_int16 yycheck[] =
{
       0,   148,    27,     0,    89,    59,   125,     2,   149,     9,
     148,    96,     9,    44,    45,    46,   163,    48,     3,    18,
     161,    23,    47,     4,    46,   163,     7,     8,     9,    10,
       7,     8,     9,    10,    65,     3,    58,     3,     4,   124,
      45,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   230,    87,    62,    54,    58,
       3,    29,    64,    57,    58,    61,    58,    54,   215,    61,
      13,    44,    45,   214,    61,   160,     3,   215,    59,   198,
     255,   228,    59,   230,    27,   232,     0,   262,    31,    62,
      61,   238,     3,   240,   232,     4,    91,    56,   273,    56,
      59,   132,    13,    14,   251,   224,    17,    58,   255,    20,
      61,    22,    23,   251,   261,   262,    60,    28,    62,    30,
      60,   268,   241,    59,   155,    61,   273,    56,   275,     3,
     125,     3,     4,   128,     3,   166,    47,   168,   223,    57,
      55,    61,   173,   174,   175,   176,   177,   178,   148,    53,
      91,   148,    56,   148,    58,    59,   158,    61,   243,    42,
      43,    44,    45,   163,     3,    57,   163,    61,   163,   200,
     172,    41,    42,    43,    44,    45,     3,     3,     3,    62,
     265,    43,    44,    45,   125,    32,    61,    13,    14,   220,
      56,    17,    62,   278,    20,    60,    22,    23,    58,    55,
      62,    55,    28,   198,    30,     3,    58,   148,   239,     7,
       8,     9,    10,    62,    60,   215,    60,    60,   215,    55,
     215,    47,   163,    61,    56,    56,   257,    55,   228,   224,
     230,   228,   232,   230,    55,   232,    91,   232,   238,    55,
     240,   238,    55,   240,    55,    55,   241,     7,     8,     9,
      10,   251,    55,    55,   251,   255,   251,   198,   255,    55,
      47,   261,   262,    55,   261,   262,    61,    55,   268,    59,
     125,   268,    57,   273,   215,   275,   273,    58,   275,    55,
      60,    59,    55,   224,    61,    55,    61,   228,     3,   230,
      61,   232,    61,   148,    55,    61,    60,   238,    18,   240,
     241,    55,    61,    61,     3,     4,     5,     6,   163,     3,
     251,    33,    11,    12,   255,    61,     4,    60,     9,    61,
     261,   262,     9,    -1,    -1,    24,   150,   268,    -1,    -1,
      -1,    -1,   273,    -1,   275,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,    47,    -1,
      46,     3,    48,    49,    50,    51,    52,    56,    -1,    -1,
     215,    13,    14,    15,    16,    17,    -1,    -1,    20,   224,
      22,    23,    -1,   228,    -1,   230,    -1,   232,    30,    -1,
      -1,    -1,    -1,   238,    -1,   240,   241,    38,    39,    40,
      41,    42,    43,    44,    45,    47,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,   262,    17,    -1,
      -1,    62,    -1,   268,    -1,    -1,    25,    26,   273,    -1,
     275,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     3,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    13,    14,     3,
      -1,    17,    -1,    62,    20,    -1,    22,    23,    -1,    13,
      14,    62,    28,    17,    30,    -1,    20,    -1,    22,    23,
      -1,    -1,     3,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    47,    13,    14,     3,    -1,    17,    -1,    -1,    20,
      21,    22,    23,    47,    13,    14,    -1,    -1,    17,    30,
      -1,    20,    -1,    22,    23,    -1,    -1,     3,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    47,    13,    14,     3,
      16,    17,    -1,    -1,    20,    -1,    22,    23,    47,    13,
      14,    -1,    -1,    17,    30,    19,    20,    -1,    22,    23,
      -1,    -1,     3,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    47,    13,    14,     3,    -1,    17,    -1,    19,    20,
      -1,    22,    23,    47,    13,    14,    -1,    -1,    17,    30,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    47,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    60,    61,    62,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    61,    62,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      57,    -1,    -1,    -1,    -1,    62,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    57,
      -1,    -1,    -1,    -1,    62,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    57,    -1,
      -1,    -1,    -1,    62,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    61,    62,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    60,
      -1,    62,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    62,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    62,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    62,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    13,    27,    31,    64,    65,    66,    69,    70,
      71,    72,    74,    75,    77,    59,     3,    69,     3,    29,
       3,     0,    58,    61,    66,    71,     4,    46,    56,    56,
      61,     3,     7,     8,     9,    10,    68,    60,     3,     4,
       5,     6,    11,    12,    24,    34,    35,    47,    56,    82,
      83,    84,    85,    96,     3,    76,    57,    27,    47,    78,
      79,    80,    81,    55,    61,    56,    59,    82,    82,    82,
       3,    82,    25,    26,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    61,    62,    59,    61,
      57,    61,     3,     3,    32,    78,    61,    78,    68,    82,
      97,     3,     4,    57,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    59,    67,
      68,    82,    60,    67,    54,    61,     3,    14,    17,    20,
      22,    23,    30,    69,    72,    73,    74,    83,    86,    87,
      89,    90,    91,    92,    93,    94,    95,    96,    98,    56,
      58,    55,    67,    55,    57,    58,    60,    60,    60,    55,
      61,    58,    67,    98,    53,    59,    56,    69,    56,    55,
      55,    82,    61,    46,    48,    49,    50,    51,    52,    55,
      55,    55,    55,    55,    55,    55,    28,    72,    73,    74,
      87,    76,    80,    55,    82,    68,    67,    76,    61,    28,
      59,     4,    82,    18,    82,     3,    82,    82,    82,    82,
      82,    82,    55,    57,    58,    98,    55,    82,    60,    57,
      59,    57,    55,    54,    61,    76,    28,    17,    61,    82,
      61,    67,    98,    55,     3,    72,    74,    87,    88,    61,
      88,    61,    28,    61,    15,    16,    72,    74,    87,    82,
      21,    98,    55,     4,    67,    61,    60,    61,    28,    60,
      18,    88,    61,    82,    55,    61,     3,    16,    88,    60,
      67,    33,    19,    61,     4,    88,    60,    19,    61,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    67,    67,    68,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    73,    74,    75,    75,    76,    76,    76,    76,
      76,    77,    78,    78,    78,    78,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    93,    94,    95,    95,    96,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     8,     3,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       4,     7,     4,     7,     9,    11,     0,     3,     5,     7,
       5,     6,     1,     2,     1,     2,     4,     2,     4,     9,
      11,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     1,     2,     4,     4,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     1,     2,     1,     7,    10,    11,    13,     1,     1,
      11,    15,     7,     1,     2,     4,     0,     1,     3,     1,
       1,     1,     1,     2,     2,     2,     2
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* program: main_body  */
#line 161 "myanalyzer.y"
      { 
          (yyval.crepr) = template("%s",(yyvsp[0].crepr)); 
          if (yyerror_count == 0) 
          {     
                FILE *fp = fopen("bisonout.c","w");

                printf("\n\t\t\tC CODE SHOWCASE\n");
                printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
                printf("\n%s\n", (yyvsp[0].crepr));
                printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
                printf("\t\t\tC CODE END\n");
                printf("\nWrite everything on an output just for my ease.\n");
                fputs("#include <stdio.h>\n",fp);
                fputs("#include <math.h>\n",fp);
                fputs(c_prologue,fp);
                fprintf(fp,"%s\n", (yyvsp[0].crepr));
                
                fclose(fp);               
          }
      }
#line 1778 "myanalyzer.tab.c"
    break;

  case 3: /* main_body: decl_body main  */
#line 185 "myanalyzer.y"
                 { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1784 "myanalyzer.tab.c"
    break;

  case 4: /* main_body: main  */
#line 186 "myanalyzer.y"
         { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1790 "myanalyzer.tab.c"
    break;

  case 5: /* main: KW_DEF KW_MAIN DEL_LPAR DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 190 "myanalyzer.y"
                                                                        {(yyval.crepr) = template("int main(){\n%s\n}", (yyvsp[-2].crepr));}
#line 1796 "myanalyzer.tab.c"
    break;

  case 6: /* types: DEL_LBLOCK DEL_RBLOCK basic_types  */
#line 196 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s*", (yyvsp[0].crepr)); }
#line 1802 "myanalyzer.tab.c"
    break;

  case 7: /* types: basic_types  */
#line 197 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1808 "myanalyzer.tab.c"
    break;

  case 8: /* basic_types: KW_INT  */
#line 200 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "int");}
#line 1814 "myanalyzer.tab.c"
    break;

  case 9: /* basic_types: KW_BOOLEAN  */
#line 201 "myanalyzer.y"
                   {(yyval.crepr) = template("%s", "int");}
#line 1820 "myanalyzer.tab.c"
    break;

  case 10: /* basic_types: KW_SCALAR  */
#line 202 "myanalyzer.y"
                  {(yyval.crepr) = template("%s","double");}
#line 1826 "myanalyzer.tab.c"
    break;

  case 11: /* basic_types: KW_STR  */
#line 203 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "char*");}
#line 1832 "myanalyzer.tab.c"
    break;

  case 12: /* identifiers: TK_IDENTIFIER  */
#line 208 "myanalyzer.y"
                       {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1838 "myanalyzer.tab.c"
    break;

  case 13: /* identifiers: identifiers DEL_COMMA TK_IDENTIFIER  */
#line 209 "myanalyzer.y"
                                              {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1844 "myanalyzer.tab.c"
    break;

  case 14: /* decl_body: decl_body declarations  */
#line 216 "myanalyzer.y"
                         { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1850 "myanalyzer.tab.c"
    break;

  case 15: /* decl_body: declarations  */
#line 217 "myanalyzer.y"
                 { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1856 "myanalyzer.tab.c"
    break;

  case 16: /* declarations: variable_declarations  */
#line 221 "myanalyzer.y"
                        { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1862 "myanalyzer.tab.c"
    break;

  case 17: /* declarations: complex_type_declarations  */
#line 222 "myanalyzer.y"
                              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1868 "myanalyzer.tab.c"
    break;

  case 18: /* declarations: constant_declarations  */
#line 223 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1874 "myanalyzer.tab.c"
    break;

  case 19: /* declarations: functions  */
#line 224 "myanalyzer.y"
              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1880 "myanalyzer.tab.c"
    break;

  case 20: /* variable_declarations: identifiers DEL_COLON basic_types DEL_SMCOLON  */
#line 228 "myanalyzer.y"
                                                      {(yyval.crepr) = template("%s %s; ", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1886 "myanalyzer.tab.c"
    break;

  case 21: /* variable_declarations: TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK DEL_COLON basic_types DEL_SMCOLON  */
#line 229 "myanalyzer.y"
                                                                                     {(yyval.crepr) = template("%s %s[%s]; ", (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr)); }
#line 1892 "myanalyzer.tab.c"
    break;

  case 22: /* comp_variables: identifiers DEL_COLON TK_IDENTIFIER DEL_SMCOLON  */
#line 232 "myanalyzer.y"
                                                  {(yyval.crepr) = template("%s %s = ctor_%s; ", (yyvsp[-1].crepr), (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1898 "myanalyzer.tab.c"
    break;

  case 23: /* constant_declarations: KW_CONST identifiers AP_ASSIGN expressions DEL_COLON types DEL_SMCOLON  */
#line 235 "myanalyzer.y"
                                                                               {(yyval.crepr) = template("const %s = %s;", (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1904 "myanalyzer.tab.c"
    break;

  case 24: /* functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 246 "myanalyzer.y"
                                                                                                     {(yyval.crepr) = template("\nvoid %s(%s) {\n%s\n}\n", (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 1910 "myanalyzer.tab.c"
    break;

  case 25: /* functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 247 "myanalyzer.y"
                                                                                                                            {(yyval.crepr) = template("\n%s %s(%s) {\n%s\n\n}\n", (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-7].crepr), (yyvsp[-2].crepr));}
#line 1916 "myanalyzer.tab.c"
    break;

  case 26: /* parameter_declarations: %empty  */
#line 251 "myanalyzer.y"
         { (yyval.crepr) = "" ;}
#line 1922 "myanalyzer.tab.c"
    break;

  case 27: /* parameter_declarations: TK_IDENTIFIER DEL_COLON types  */
#line 252 "myanalyzer.y"
                                 {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1928 "myanalyzer.tab.c"
    break;

  case 28: /* parameter_declarations: TK_IDENTIFIER DEL_LBLOCK DEL_RBLOCK DEL_COLON types  */
#line 253 "myanalyzer.y"
                                                        {(yyval.crepr) = template("%s *%s", (yyvsp[0].crepr), (yyvsp[-4].crepr));}
#line 1934 "myanalyzer.tab.c"
    break;

  case 29: /* parameter_declarations: TK_IDENTIFIER DEL_LBLOCK DEL_RBLOCK DEL_COLON types DEL_COMMA parameter_declarations  */
#line 254 "myanalyzer.y"
                                                                                         {(yyval.crepr) = template("%s *%s, %s", (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr));}
#line 1940 "myanalyzer.tab.c"
    break;

  case 30: /* parameter_declarations: TK_IDENTIFIER DEL_COLON types DEL_COMMA parameter_declarations  */
#line 255 "myanalyzer.y"
                                                                   {(yyval.crepr) = template("%s %s, %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1946 "myanalyzer.tab.c"
    break;

  case 31: /* complex_type_declarations: KW_COMP TK_IDENTIFIER DEL_COLON comp_body KW_ENDCOMP DEL_SMCOLON  */
#line 262 "myanalyzer.y"
                                                                   { // get all the function output strings in one buffer to print them
    printf("\n1\n");
    buffer = malloc(1);
    printf("\n1.5\n");
    // loop through the array allocate space 
    for (int i = 0; i < num_functions; i++) {
      printf("\n2\n");
      char* curr_string = comp_function_output[i];
      buffer = realloc(buffer,  strlen(buffer) + strlen(curr_string) + 3); // +2 for 2new line and null terminator

      // add to buffer
      strcat(buffer, curr_string);
      printf("Buffers:%s\n", curr_string);
      if (i != num_functions -1) {
        strcat(buffer, "\n\n");
      }
    }
    (yyval.crepr) = template("\n#define SELF struck %s *self\ntypedef struct %s {\n%s\n} %s;\n\n %s\n\nconst ctor_%s = %s;\n#under SELF", (yyvsp[-4].crepr), (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[-4].crepr), buffer, (yyvsp[-4].crepr), comp_func_output2); 
    free(buffer); }
#line 1970 "myanalyzer.tab.c"
    break;

  case 32: /* comp_body: comp_variable_declarations  */
#line 284 "myanalyzer.y"
                             { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1976 "myanalyzer.tab.c"
    break;

  case 33: /* comp_body: comp_variable_declarations comp_body  */
#line 285 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1982 "myanalyzer.tab.c"
    break;

  case 34: /* comp_body: comp_functions  */
#line 286 "myanalyzer.y"
                   { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1988 "myanalyzer.tab.c"
    break;

  case 35: /* comp_body: comp_functions comp_body  */
#line 287 "myanalyzer.y"
                             {(yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1994 "myanalyzer.tab.c"
    break;

  case 36: /* comp_variable_declarations: comp_identifiers DEL_COLON types DEL_SMCOLON  */
#line 291 "myanalyzer.y"
                                               {(yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 2000 "myanalyzer.tab.c"
    break;

  case 37: /* comp_identifiers: AP_HASHASSIGN TK_IDENTIFIER  */
#line 295 "myanalyzer.y"
                              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2006 "myanalyzer.tab.c"
    break;

  case 38: /* comp_identifiers: AP_HASHASSIGN TK_IDENTIFIER DEL_COMMA comp_identifiers  */
#line 296 "myanalyzer.y"
                                                           {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2012 "myanalyzer.tab.c"
    break;

  case 39: /* comp_functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 301 "myanalyzer.y"
  { printf("\n3\n");
    // add every function output to a char** array to print after the comp
    // raise counter
    num_functions = num_functions + 1;

    // allocate space
    comp_function_output = realloc(comp_function_output, num_functions * sizeof(char*));

    // add output string to array
    comp_function_output[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));
    
    comp_function_output[num_functions -1] = strdup(template("void %s(self, %s) {\n%s\n} ", (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr))); 

    // do the normal $$
    (yyval.crepr) = template("\nvoid (*%s)(self, %s);", (yyvsp[-7].crepr), (yyvsp[-5].crepr));
    comp_func_output2 = strdup(template(" { .%s } ", (yyvsp[-7].crepr)));}
#line 2033 "myanalyzer.tab.c"
    break;

  case 40: /* comp_functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 319 "myanalyzer.y"
  {  printf("\n3\n");
    // add every function output to a char** array to print after the comp
    // raise counter
    num_functions = num_functions +1;

    // allocate space
    comp_function_output = realloc(comp_function_output, num_functions * sizeof(char*));

    // add output string to array
    comp_function_output[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));

    comp_function_output[num_functions - 1] = strdup(template("%s %s(self, %s) {\n%s\n} ", (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-7].crepr), (yyvsp[-2].crepr)));
    printf("\n%s\n", comp_function_output[num_functions - 1]);
    // do the normal $$
    (yyval.crepr) = template("\n%s (*%s)(self, %s);", (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-7].crepr)); 
    comp_func_output2 = strdup(template(" { .%s } ", (yyvsp[-9].crepr)));}
#line 2054 "myanalyzer.tab.c"
    break;

  case 41: /* expressions: identifier_expressions  */
#line 341 "myanalyzer.y"
                         { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2060 "myanalyzer.tab.c"
    break;

  case 42: /* expressions: TK_STRING  */
#line 342 "myanalyzer.y"
              {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2066 "myanalyzer.tab.c"
    break;

  case 43: /* expressions: KW_TRUE  */
#line 343 "myanalyzer.y"
            {(yyval.crepr) = template("%s", "1");}
#line 2072 "myanalyzer.tab.c"
    break;

  case 44: /* expressions: KW_FALSE  */
#line 344 "myanalyzer.y"
             {(yyval.crepr) = template("%s", "0");}
#line 2078 "myanalyzer.tab.c"
    break;

  case 45: /* expressions: function_statement  */
#line 345 "myanalyzer.y"
                       { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2084 "myanalyzer.tab.c"
    break;

  case 46: /* expressions: arithmetic_expressions  */
#line 346 "myanalyzer.y"
                           { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2090 "myanalyzer.tab.c"
    break;

  case 47: /* expressions: relational_expressions  */
#line 347 "myanalyzer.y"
                           { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2096 "myanalyzer.tab.c"
    break;

  case 48: /* expressions: KW_NOT expressions  */
#line 348 "myanalyzer.y"
                       {(yyval.crepr) = template("! %s", (yyvsp[0].crepr));}
#line 2102 "myanalyzer.tab.c"
    break;

  case 49: /* expressions: expressions KW_AND expressions  */
#line 349 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2108 "myanalyzer.tab.c"
    break;

  case 50: /* expressions: expressions KW_OR expressions  */
#line 350 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2114 "myanalyzer.tab.c"
    break;

  case 51: /* expressions: DEL_LPAR expressions DEL_RPAR  */
#line 351 "myanalyzer.y"
                                  {(yyval.crepr) = template("(%s)", (yyvsp[-1].crepr));}
#line 2120 "myanalyzer.tab.c"
    break;

  case 52: /* expressions: expressions DEL_DOT expressions  */
#line 352 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s.%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2126 "myanalyzer.tab.c"
    break;

  case 53: /* identifier_expressions: TK_IDENTIFIER  */
#line 356 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2132 "myanalyzer.tab.c"
    break;

  case 54: /* identifier_expressions: AP_HASHASSIGN TK_IDENTIFIER  */
#line 357 "myanalyzer.y"
                                {(yyval.crepr) = template("self->%s", (yyvsp[0].crepr));}
#line 2138 "myanalyzer.tab.c"
    break;

  case 55: /* identifier_expressions: TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK  */
#line 358 "myanalyzer.y"
                                                   { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2144 "myanalyzer.tab.c"
    break;

  case 56: /* identifier_expressions: TK_IDENTIFIER DEL_LBLOCK TK_IDENTIFIER DEL_RBLOCK  */
#line 359 "myanalyzer.y"
                                                      { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2150 "myanalyzer.tab.c"
    break;

  case 57: /* arithmetic_expressions: TK_INTEGER  */
#line 363 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2156 "myanalyzer.tab.c"
    break;

  case 58: /* arithmetic_expressions: TK_FLOAT  */
#line 364 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2162 "myanalyzer.tab.c"
    break;

  case 59: /* arithmetic_expressions: expressions OP_POWER expressions  */
#line 365 "myanalyzer.y"
                                     {(yyval.crepr) = template("pow(%s, %s)", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2168 "myanalyzer.tab.c"
    break;

  case 60: /* arithmetic_expressions: expressions OP_MULT expressions  */
#line 366 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s * %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2174 "myanalyzer.tab.c"
    break;

  case 61: /* arithmetic_expressions: expressions OP_DIV expressions  */
#line 367 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2180 "myanalyzer.tab.c"
    break;

  case 62: /* arithmetic_expressions: expressions OP_MOD expressions  */
#line 368 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2186 "myanalyzer.tab.c"
    break;

  case 63: /* arithmetic_expressions: expressions OP_PLUS expressions  */
#line 369 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2192 "myanalyzer.tab.c"
    break;

  case 64: /* arithmetic_expressions: expressions OP_MINUS expressions  */
#line 370 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2198 "myanalyzer.tab.c"
    break;

  case 65: /* arithmetic_expressions: OP_PLUS expressions  */
#line 371 "myanalyzer.y"
                        {(yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 2204 "myanalyzer.tab.c"
    break;

  case 66: /* arithmetic_expressions: OP_MINUS expressions  */
#line 372 "myanalyzer.y"
                         {(yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 2210 "myanalyzer.tab.c"
    break;

  case 67: /* relational_expressions: expressions RP_LESS expressions  */
#line 376 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s < %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2216 "myanalyzer.tab.c"
    break;

  case 68: /* relational_expressions: expressions RP_LESSEQUALS expressions  */
#line 377 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2222 "myanalyzer.tab.c"
    break;

  case 69: /* relational_expressions: expressions RP_MORE expressions  */
#line 378 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2228 "myanalyzer.tab.c"
    break;

  case 70: /* relational_expressions: expressions RP_MOREEQUALS expressions  */
#line 379 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2234 "myanalyzer.tab.c"
    break;

  case 71: /* relational_expressions: expressions RP_EQUALS expressions  */
#line 380 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2240 "myanalyzer.tab.c"
    break;

  case 72: /* relational_expressions: expressions RP_NOTEQUALS expressions  */
#line 381 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2246 "myanalyzer.tab.c"
    break;

  case 73: /* assign_expressions: identifier_expressions AP_ASSIGN expressions  */
#line 385 "myanalyzer.y"
                                               {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2252 "myanalyzer.tab.c"
    break;

  case 74: /* assign_expressions: identifier_expressions AP_PLUSASSIGN expressions  */
#line 386 "myanalyzer.y"
                                                     {(yyval.crepr) = template("%s += %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2258 "myanalyzer.tab.c"
    break;

  case 75: /* assign_expressions: identifier_expressions AP_MINASSIGN expressions  */
#line 387 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s -= %s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2264 "myanalyzer.tab.c"
    break;

  case 76: /* assign_expressions: identifier_expressions AP_MULASSIGN expressions  */
#line 388 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s *= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2270 "myanalyzer.tab.c"
    break;

  case 77: /* assign_expressions: identifier_expressions AP_DIVASSIGN expressions  */
#line 389 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s /= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2276 "myanalyzer.tab.c"
    break;

  case 78: /* assign_expressions: identifier_expressions AP_MODASSIGN expressions  */
#line 390 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s %= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2282 "myanalyzer.tab.c"
    break;

  case 79: /* statements: if_statement DEL_SMCOLON  */
#line 395 "myanalyzer.y"
                           { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2288 "myanalyzer.tab.c"
    break;

  case 80: /* statements: for_statement DEL_SMCOLON  */
#line 396 "myanalyzer.y"
                              { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2294 "myanalyzer.tab.c"
    break;

  case 81: /* statements: array_statement DEL_SMCOLON  */
#line 397 "myanalyzer.y"
                                { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2300 "myanalyzer.tab.c"
    break;

  case 82: /* statements: while_statement DEL_SMCOLON  */
#line 398 "myanalyzer.y"
                                { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2306 "myanalyzer.tab.c"
    break;

  case 83: /* statements: KW_BREAK DEL_SMCOLON  */
#line 399 "myanalyzer.y"
                         {(yyval.crepr) = template("break;");}
#line 2312 "myanalyzer.tab.c"
    break;

  case 84: /* statements: KW_CONTINUE DEL_SMCOLON  */
#line 400 "myanalyzer.y"
                            {(yyval.crepr) = template("continue;");}
#line 2318 "myanalyzer.tab.c"
    break;

  case 85: /* statements: assign_expressions DEL_SMCOLON  */
#line 401 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s;", (yyvsp[-1].crepr));}
#line 2324 "myanalyzer.tab.c"
    break;

  case 86: /* statements: return_statement DEL_SMCOLON  */
#line 402 "myanalyzer.y"
                                 { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2330 "myanalyzer.tab.c"
    break;

  case 87: /* statements: function_statement DEL_SMCOLON  */
#line 403 "myanalyzer.y"
                                   { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2336 "myanalyzer.tab.c"
    break;

  case 88: /* command_statements: statements  */
#line 407 "myanalyzer.y"
             { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 2342 "myanalyzer.tab.c"
    break;

  case 89: /* command_statements: command_statements statements  */
#line 408 "myanalyzer.y"
                                  { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2348 "myanalyzer.tab.c"
    break;

  case 90: /* command_statements: command_statements variable_declarations  */
#line 409 "myanalyzer.y"
                                             { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2354 "myanalyzer.tab.c"
    break;

  case 91: /* command_statements: variable_declarations  */
#line 410 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2360 "myanalyzer.tab.c"
    break;

  case 92: /* command_statements: command_statements constant_declarations  */
#line 411 "myanalyzer.y"
                                             { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2366 "myanalyzer.tab.c"
    break;

  case 93: /* command_statements: constant_declarations  */
#line 412 "myanalyzer.y"
                          { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 2372 "myanalyzer.tab.c"
    break;

  case 94: /* if_statement: KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDIF  */
#line 417 "myanalyzer.y"
                                                                            {(yyval.crepr) = template("if (%s) {\n %s\n}", (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2378 "myanalyzer.tab.c"
    break;

  case 95: /* if_statement: KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ELSE DEL_COLON command_statements KW_ENDIF  */
#line 418 "myanalyzer.y"
                                                                                                                   {(yyval.crepr) = template("if (%s) {\n%s\n} else {\n%s\n}", (yyvsp[-7].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2384 "myanalyzer.tab.c"
    break;

  case 96: /* for_statement: KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR  */
#line 423 "myanalyzer.y"
                                                                                                                           {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s++) {\n%s\n}", (yyvsp[-9].crepr), (yyvsp[-6].crepr), (yyvsp[-9].crepr), (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-1].crepr));}
#line 2390 "myanalyzer.tab.c"
    break;

  case 97: /* for_statement: KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR  */
#line 424 "myanalyzer.y"
                                                                                                                                                  {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s = %s %s) {\n%s\n}", (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-11].crepr), (yyvsp[-6].crepr), (yyvsp[-11].crepr), (yyvsp[-11].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2396 "myanalyzer.tab.c"
    break;

  case 98: /* array_statement: integral_array  */
#line 429 "myanalyzer.y"
                 { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2402 "myanalyzer.tab.c"
    break;

  case 99: /* array_statement: other_array  */
#line 430 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2408 "myanalyzer.tab.c"
    break;

  case 100: /* integral_array: TK_IDENTIFIER AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR TK_IDENTIFIER DEL_COLON TK_INTEGER DEL_RBLOCK DEL_COLON types  */
#line 434 "myanalyzer.y"
                                                                                                                           {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(%s %s = 0; %s < %s; ++%s) {\n %s[%s] = %s\n}", (yyvsp[0].crepr), (yyvsp[-10].crepr), (yyvsp[0].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr), (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-5].crepr), (yyvsp[-10].crepr), (yyvsp[-5].crepr), (yyvsp[-7].crepr));}
#line 2414 "myanalyzer.tab.c"
    break;

  case 101: /* other_array: TK_IDENTIFIER AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR TK_IDENTIFIER DEL_COLON types KW_IN TK_IDENTIFIER KW_OF TK_INTEGER DEL_RBLOCK DEL_COLON types  */
#line 438 "myanalyzer.y"
                                                                                                                                                           {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(int %s10_i = 0; %s10_i < %s12; ++%s10_i) {\n\t %s1[%s10_i] = %s4\n}", (yyvsp[0].crepr), (yyvsp[-14].crepr), (yyvsp[0].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-5].crepr), (yyvsp[-14].crepr), (yyvsp[-5].crepr), (yyvsp[-11].crepr));}
#line 2420 "myanalyzer.tab.c"
    break;

  case 102: /* while_statement: KW_WHILE DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDWHILE  */
#line 443 "myanalyzer.y"
                                                                                  {(yyval.crepr) = template("while (%s) {\n%s\n}", (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2426 "myanalyzer.tab.c"
    break;

  case 103: /* return_statement: KW_RETURN  */
#line 448 "myanalyzer.y"
            {(yyval.crepr) = template("return");}
#line 2432 "myanalyzer.tab.c"
    break;

  case 104: /* return_statement: KW_RETURN expressions  */
#line 449 "myanalyzer.y"
                          {(yyval.crepr) = template("return %s", (yyvsp[0].crepr));}
#line 2438 "myanalyzer.tab.c"
    break;

  case 105: /* function_statement: TK_IDENTIFIER DEL_LPAR function_arg DEL_RPAR  */
#line 454 "myanalyzer.y"
                                               {(yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2444 "myanalyzer.tab.c"
    break;

  case 106: /* function_arg: %empty  */
#line 458 "myanalyzer.y"
         { (yyval.crepr) = ""; }
#line 2450 "myanalyzer.tab.c"
    break;

  case 107: /* function_arg: expressions  */
#line 459 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2456 "myanalyzer.tab.c"
    break;

  case 108: /* function_arg: function_arg DEL_COMMA expressions  */
#line 460 "myanalyzer.y"
                                       { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2462 "myanalyzer.tab.c"
    break;

  case 109: /* body: statements  */
#line 464 "myanalyzer.y"
             { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2468 "myanalyzer.tab.c"
    break;

  case 110: /* body: variable_declarations  */
#line 465 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2474 "myanalyzer.tab.c"
    break;

  case 111: /* body: constant_declarations  */
#line 466 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2480 "myanalyzer.tab.c"
    break;

  case 112: /* body: comp_variables  */
#line 467 "myanalyzer.y"
                   { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2486 "myanalyzer.tab.c"
    break;

  case 113: /* body: body statements  */
#line 468 "myanalyzer.y"
                    { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2492 "myanalyzer.tab.c"
    break;

  case 114: /* body: body variable_declarations  */
#line 469 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2498 "myanalyzer.tab.c"
    break;

  case 115: /* body: body constant_declarations  */
#line 470 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2504 "myanalyzer.tab.c"
    break;

  case 116: /* body: body comp_variables  */
#line 471 "myanalyzer.y"
                        { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2510 "myanalyzer.tab.c"
    break;


#line 2514 "myanalyzer.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 474 "myanalyzer.y"

int main(void) {
  if ( yyparse() != 0 )
  for (int i = 0; i < num_functions; i++) {
    free(comp_function_output[i]);
  }
  free(comp_function_output);
  printf("\nRejected!\n");
}
