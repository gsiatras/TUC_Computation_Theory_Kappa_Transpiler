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
char** comp_function_names = NULL;
char** cfnames = NULL;
char** comp_names = NULL;

int num_functions = 0;
int num_comps = 0;
int total_functions = 0;

int cflag = 0;

char* buffer;
char* namebuffer;
char* dot_call;

#line 100 "myanalyzer.tab.c"

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
  YYSYMBOL_comp_expressions = 83,          /* comp_expressions  */
  YYSYMBOL_identifier_expressions = 84,    /* identifier_expressions  */
  YYSYMBOL_arithmetic_expressions = 85,    /* arithmetic_expressions  */
  YYSYMBOL_relational_expressions = 86,    /* relational_expressions  */
  YYSYMBOL_assign_expressions = 87,        /* assign_expressions  */
  YYSYMBOL_statements = 88,                /* statements  */
  YYSYMBOL_command_statements = 89,        /* command_statements  */
  YYSYMBOL_if_statement = 90,              /* if_statement  */
  YYSYMBOL_for_statement = 91,             /* for_statement  */
  YYSYMBOL_array_statement = 92,           /* array_statement  */
  YYSYMBOL_integral_array = 93,            /* integral_array  */
  YYSYMBOL_other_array = 94,               /* other_array  */
  YYSYMBOL_while_statement = 95,           /* while_statement  */
  YYSYMBOL_return_statement = 96,          /* return_statement  */
  YYSYMBOL_function_statement = 97,        /* function_statement  */
  YYSYMBOL_function_arg = 98,              /* function_arg  */
  YYSYMBOL_body = 99                       /* body  */
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
#define YYLAST   1219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  291

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
       0,   171,   171,   197,   198,   202,   208,   209,   210,   231,
     232,   233,   234,   239,   240,   247,   248,   252,   253,   254,
     255,   259,   260,   264,   268,   275,   276,   280,   281,   282,
     283,   284,   291,   351,   352,   353,   354,   358,   366,   367,
     368,   372,   407,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   462,   470,   471,   475,   478,   479,
     480,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   497,   498,   499,   500,   501,   502,   506,   507,   508,
     509,   510,   511,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   529,   530,   531,   532,   533,   534,   539,
     540,   545,   546,   551,   552,   556,   560,   565,   570,   571,
     576,   595,   596,   597,   601,   602,   603,   604,   605,   606,
     607,   608
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
  "comp_functions", "expressions", "comp_expressions",
  "identifier_expressions", "arithmetic_expressions",
  "relational_expressions", "assign_expressions", "statements",
  "command_statements", "if_statement", "for_statement", "array_statement",
  "integral_array", "other_array", "while_statement", "return_statement",
  "function_statement", "function_arg", "body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-237)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-14)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   -35,    33,    10,    46,    76,  -237,  -237,   -26,     7,
    -237,  -237,  -237,  -237,  -237,    61,  -237,    16,    79,    82,
      60,  -237,   137,   116,  -237,  -237,    92,   846,   139,   108,
     -16,  -237,  -237,  -237,  -237,  -237,   111,   107,    12,  -237,
    -237,  -237,  -237,  -237,   846,   846,   846,   166,   846,   927,
    -237,  -237,  -237,  -237,  -237,   -53,   114,   113,   169,   173,
     145,   -16,   117,   -16,  -237,   116,   846,   151,  1101,  1141,
    1157,   123,   956,   846,   846,   846,   846,   846,   846,   846,
     846,   846,   846,   846,   846,   846,   846,    19,   846,   124,
      19,   -40,   813,   129,    87,   148,  -237,    19,  -237,   149,
    1101,   104,   146,   147,   846,  -237,  1130,    65,  1141,  1157,
     156,   357,   822,   822,    75,    69,    15,    11,   -43,   143,
    -237,   150,   154,  -237,  -237,   153,   159,    19,   813,     8,
     155,    33,   163,   157,   165,   846,    71,  -237,  -237,  -237,
    1101,   168,   303,   172,  -237,   175,   177,   178,  -237,  -237,
     180,   181,   183,   478,   139,   174,   220,  -237,   190,  -237,
    -237,   846,  -237,  -237,   193,   116,  -237,    19,   139,   167,
     515,   196,   160,   846,    -1,   846,  -237,  -237,  1101,   141,
    -237,   846,   846,   846,   846,   846,   846,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,   195,  -237,  -237,  -237,  -237,   201,
    -237,   199,  -237,  1101,  -237,  -237,   202,  -237,   813,   206,
     846,   208,   985,   212,  1014,   222,  1101,  1101,  1101,  1101,
    1101,  1101,  -237,     9,  -237,   139,   552,  -237,   869,   107,
     217,   846,   219,  -237,    19,   813,  -237,   228,   282,   813,
    1043,   813,   227,   589,  -237,   230,  -237,  -237,  -237,   432,
     846,   626,   813,   237,    37,   232,  -237,  -237,  -237,  -237,
     898,  -237,   663,  -237,   239,   279,   813,   240,   846,   245,
     242,   302,   700,   813,  1072,  -237,    19,   275,  -237,   738,
     248,  -237,   306,  -237,   813,   251,   776,   252,  -237,    19,
    -237
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    13,     0,     0,     0,     0,     2,     4,     0,     0,
      16,    17,    19,    20,    18,     0,    13,     0,     0,     0,
       0,     1,     0,     0,     3,    15,     0,     0,    27,     0,
       0,    14,     9,    11,    12,    10,     0,     0,    55,    61,
      62,    44,    45,    46,     0,     0,     0,     0,     0,     0,
      60,    43,    48,    49,    47,     0,     0,     0,     0,     0,
       0,    33,     0,    35,    21,     0,   111,     0,    50,    69,
      70,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    34,     0,    36,     0,
     112,     0,     0,     0,     0,    53,    51,    52,    67,    68,
      64,    65,    66,    63,    75,    76,    71,    72,    73,    74,
       8,     0,     0,     7,    54,     0,    28,     0,     0,    55,
       0,     0,     0,     0,     0,   108,     0,   115,   117,   116,
       0,    60,    43,     0,   114,     0,     0,     0,   103,   104,
       0,     0,    47,     0,    27,     0,     0,    32,     0,    22,
     110,     0,    59,    58,    43,     0,    24,     0,    27,     0,
       0,     0,     0,     0,     0,     0,    87,    88,   109,     0,
      92,     0,     0,     0,     0,     0,     0,    89,    83,    84,
      85,    86,    90,    91,     0,   119,   121,   120,   118,     0,
      40,     0,    37,   113,    57,     6,    29,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,    79,    80,
      81,    82,     5,     0,    39,    27,     0,    25,     0,    58,
       0,     0,     0,    23,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    96,    98,    93,     0,
       0,     0,     0,     0,     0,     0,    99,    95,    97,    94,
       0,   107,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,   100,     0,
       0,   105,     0,   101,     0,     0,     0,     0,   102,     0,
     106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,  -237,   305,   -74,   -22,     5,  -237,   307,     0,
    -128,     3,  -237,  -150,  -237,    67,  -237,   164,  -237,     6,
      94,    55,  -237,  -237,  -237,   191,  -236,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,   142,  -237,  -113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,   122,   123,     8,     9,    10,   137,
     138,   139,    13,    56,    14,    60,    61,    62,    63,   140,
      50,    51,    52,    53,   143,   144,   249,   145,   146,   147,
     148,   149,   150,   151,    54,   101,   153
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    36,    86,    12,   199,   251,    89,    17,    90,    11,
       1,    58,    12,    18,   127,   170,   126,   213,   207,    88,
       2,   128,   120,   158,    15,   196,    32,    33,    34,    35,
     272,    59,    22,    49,     3,    23,    16,   279,     4,    19,
     120,   264,   196,    99,    32,    33,    34,    35,   286,    20,
      68,    69,    70,   169,    72,    85,    86,    22,    84,    85,
      86,   171,    27,   234,    66,    26,   -13,   172,    66,   -13,
     235,    67,   100,    88,    22,   236,    21,    88,   121,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   206,   124,   226,   121,   136,   196,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    83,    84,    85,    86,   196,    82,    83,    84,    85,
      86,    30,   243,    32,    33,    34,    35,    88,    96,    22,
      98,    88,   179,   136,   196,    28,   174,    88,    29,   262,
      31,   178,    55,   205,   215,   155,   156,   142,    32,    33,
      34,    35,    37,   195,   102,   103,   197,    36,   136,   164,
     242,   160,   161,   102,   211,    57,    64,   203,    65,    71,
     195,    91,    93,   197,    92,   136,    94,    95,    97,   212,
     265,   214,   104,   142,   125,   154,   141,   216,   217,   218,
     219,   220,   221,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   281,   157,   159,    88,   162,   163,   142,   166,
     165,   173,   176,   136,   167,   290,   228,   168,    88,   175,
     177,    59,   141,   180,   201,   142,   195,   187,   208,   197,
     188,   136,   189,   190,   152,   191,   192,   240,   193,   246,
     136,   246,   247,   195,   247,   202,   197,   141,   136,   257,
     222,   257,   258,   204,   258,   210,   260,   136,   223,   224,
     225,   227,   195,   142,   141,   197,   246,   136,   229,   247,
     152,   231,   257,   246,   274,   258,   247,   233,   239,   257,
     241,   142,   258,   244,   246,   245,   257,   247,   252,   258,
     142,   254,   263,   266,   142,   152,   142,   271,   142,   270,
     275,   273,   141,   276,   142,   277,   142,   142,   282,   284,
     285,   287,   152,   289,    24,     0,    25,   142,     0,   200,
     141,   142,     0,     0,     0,     0,     0,   142,   142,   141,
       0,     0,     0,   141,   142,   141,     0,   141,     0,   142,
       0,   142,     0,   141,   198,   141,   141,     0,     0,   181,
     152,   182,   183,   184,   185,   186,   141,     0,     0,     0,
     141,   198,     0,     0,     0,     0,   141,   141,   152,     0,
       0,     0,     0,   141,     0,     0,     0,   152,   141,     0,
     141,   152,     0,   152,     0,   152,     0,     0,     0,     0,
       0,   152,     0,   152,   152,    79,    80,    81,    82,    83,
      84,    85,    86,     0,   152,     0,     0,     0,   152,     0,
       0,     0,     0,     0,   152,   152,     0,   198,     0,    88,
       0,   152,     0,     0,     0,     0,   152,     0,   152,     0,
     248,     0,   248,     0,   198,   129,    39,    40,    41,     0,
     259,     0,   259,    42,    43,     2,   130,   255,   256,   131,
       0,     0,   132,   198,   133,   134,    44,   248,     0,     0,
       0,     0,   135,   259,   248,     0,    45,    46,     0,     0,
     259,     0,     0,     0,     0,   248,     0,   259,     0,    47,
       0,   129,    39,    40,    41,     0,     0,     0,    48,    42,
      43,     2,   130,     0,     0,   131,     0,     0,   132,     0,
     133,   134,    44,     0,     0,     0,   194,     0,   135,     0,
       0,     0,    45,    46,     0,     0,     0,     0,   129,    39,
      40,    41,     0,     0,     0,    47,    42,    43,     2,   130,
       0,     0,   131,     0,    48,   132,     0,   133,   134,    44,
       0,     0,     0,   209,     0,   135,     0,     0,     0,    45,
      46,     0,     0,     0,     0,   129,    39,    40,    41,     0,
       0,     0,    47,    42,    43,     2,   130,     0,     0,   131,
       0,    48,   132,     0,   133,   134,    44,     0,     0,     0,
     237,     0,   135,     0,     0,     0,    45,    46,     0,     0,
       0,     0,   129,    39,    40,    41,     0,     0,     0,    47,
      42,    43,     2,   130,     0,     0,   131,     0,    48,   132,
       0,   133,   134,    44,     0,     0,     0,   253,     0,   135,
       0,     0,     0,    45,    46,     0,     0,     0,     0,   129,
      39,    40,    41,     0,     0,     0,    47,    42,    43,     2,
     130,     0,     0,   131,     0,    48,   132,   261,   133,   134,
      44,     0,     0,     0,     0,     0,   135,     0,     0,     0,
      45,    46,     0,     0,     0,     0,   129,    39,    40,    41,
       0,     0,     0,    47,    42,    43,     2,   130,     0,     0,
     131,     0,    48,   132,     0,   133,   134,    44,     0,     0,
       0,   269,     0,   135,     0,     0,     0,    45,    46,     0,
       0,     0,     0,   129,    39,    40,    41,     0,     0,     0,
      47,    42,    43,     2,   130,     0,   278,   131,     0,    48,
     132,     0,   133,   134,    44,     0,     0,     0,     0,     0,
     135,     0,     0,     0,    45,    46,     0,     0,     0,     0,
       0,   129,    39,    40,    41,     0,     0,    47,     0,    42,
      43,     2,   130,     0,     0,   131,    48,   283,   132,     0,
     133,   134,    44,     0,     0,     0,     0,     0,   135,     0,
       0,     0,    45,    46,     0,     0,     0,     0,     0,   129,
      39,    40,    41,     0,     0,    47,     0,    42,    43,     2,
     130,     0,     0,   131,    48,   288,   132,     0,   133,   134,
      44,     0,     0,     0,     0,     0,   135,     0,     0,     0,
      45,    46,     0,     0,     0,     0,   129,    39,    40,    41,
       0,     0,     0,    47,    42,    43,     2,   130,     0,     0,
     131,     0,    48,   132,     0,   133,   134,    44,     0,     0,
       0,     0,     0,   135,     0,     0,     0,    45,    46,    38,
      39,    40,    41,     0,     0,     0,     0,    42,    43,     0,
      47,    80,    81,    82,    83,    84,    85,    86,     0,    48,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,     0,     0,    88,     0,   238,     0,     0,     0,
       0,     0,     0,    47,    73,    74,     0,     0,     0,     0,
       0,     0,    48,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,     0,     0,     0,
       0,    88,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,     0,     0,   267,   268,
      88,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,     0,     0,     0,    87,    88,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,   105,     0,     0,     0,     0,    88,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,   230,     0,     0,     0,     0,    88,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,   232,     0,     0,     0,     0,    88,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,     0,     0,     0,   250,    88,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
       0,     0,   280,     0,    88,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,    88,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,     0,     0,     0,
       0,     0,    88,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88
};

static const yytype_int16 yycheck[] =
{
       0,    23,    45,     0,   154,   241,    59,     2,    61,     9,
       3,    27,     9,     3,    54,   128,    90,    18,   168,    62,
      13,    61,     3,    97,    59,   153,     7,     8,     9,    10,
     266,    47,    58,    27,    27,    61,     3,   273,    31,    29,
       3,     4,   170,    65,     7,     8,     9,    10,   284,     3,
      44,    45,    46,   127,    48,    44,    45,    58,    43,    44,
      45,    53,    46,    54,    56,     4,    58,    59,    56,    61,
      61,    59,    66,    62,    58,   225,     0,    62,    59,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   167,    88,   208,    59,    92,   226,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    42,    43,    44,    45,   243,    41,    42,    43,    44,
      45,    61,   235,     7,     8,     9,    10,    62,    61,    58,
      63,    62,    61,   128,   262,    56,   131,    62,    56,   252,
       3,   135,     3,   165,     3,    58,    59,    92,     7,     8,
       9,    10,    60,   153,     3,     4,   153,   179,   153,   104,
     234,    57,    58,     3,     4,    57,    55,   161,    61,     3,
     170,    57,     3,   170,    61,   170,     3,    32,    61,   173,
     254,   175,    59,   128,    60,    56,    92,   181,   182,   183,
     184,   185,   186,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   276,    55,    55,    62,    60,    60,   153,    55,
      60,    56,    55,   208,    61,   289,   210,    58,    62,    56,
      55,    47,   128,    55,     4,   170,   226,    55,    61,   226,
      55,   226,    55,    55,    92,    55,    55,   231,    55,   239,
     235,   241,   239,   243,   241,    55,   243,   153,   243,   249,
      55,   251,   249,    60,   251,    59,   250,   252,    57,    60,
      58,    55,   262,   208,   170,   262,   266,   262,    60,   266,
     128,    59,   272,   273,   268,   272,   273,    55,    61,   279,
      61,   226,   279,    55,   284,     3,   286,   284,    61,   286,
     235,    61,    55,    61,   239,   153,   241,    18,   243,    60,
      55,    61,   208,    61,   249,     3,   251,   252,    33,    61,
       4,    60,   170,    61,     9,    -1,     9,   262,    -1,   155,
     226,   266,    -1,    -1,    -1,    -1,    -1,   272,   273,   235,
      -1,    -1,    -1,   239,   279,   241,    -1,   243,    -1,   284,
      -1,   286,    -1,   249,   153,   251,   252,    -1,    -1,    46,
     208,    48,    49,    50,    51,    52,   262,    -1,    -1,    -1,
     266,   170,    -1,    -1,    -1,    -1,   272,   273,   226,    -1,
      -1,    -1,    -1,   279,    -1,    -1,    -1,   235,   284,    -1,
     286,   239,    -1,   241,    -1,   243,    -1,    -1,    -1,    -1,
      -1,   249,    -1,   251,   252,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,   262,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,   273,    -1,   226,    -1,    62,
      -1,   279,    -1,    -1,    -1,    -1,   284,    -1,   286,    -1,
     239,    -1,   241,    -1,   243,     3,     4,     5,     6,    -1,
     249,    -1,   251,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    20,   262,    22,    23,    24,   266,    -1,    -1,
      -1,    -1,    30,   272,   273,    -1,    34,    35,    -1,    -1,
     279,    -1,    -1,    -1,    -1,   284,    -1,   286,    -1,    47,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    56,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,
      22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    47,    11,    12,    13,    14,
      -1,    -1,    17,    -1,    56,    20,    -1,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    47,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    56,    20,    -1,    22,    23,    24,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    47,
      11,    12,    13,    14,    -1,    -1,    17,    -1,    56,    20,
      -1,    22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    47,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    56,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    47,    11,    12,    13,    14,    -1,    -1,
      17,    -1,    56,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      47,    11,    12,    13,    14,    -1,    16,    17,    -1,    56,
      20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    47,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    56,    19,    20,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    47,    -1,    11,    12,    13,
      14,    -1,    -1,    17,    56,    19,    20,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    47,    11,    12,    13,    14,    -1,    -1,
      17,    -1,    56,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    11,    12,    -1,
      47,    39,    40,    41,    42,    43,    44,    45,    -1,    56,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    -1,    62,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    60,    61,
      62,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    61,    62,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    57,    -1,    -1,    -1,    -1,    62,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    57,    -1,    -1,    -1,    -1,    62,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    57,    -1,    -1,    -1,    -1,    62,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    61,    62,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    60,    -1,    62,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    62,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62
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
      83,    84,    85,    86,    97,     3,    76,    57,    27,    47,
      78,    79,    80,    81,    55,    61,    56,    59,    82,    82,
      82,     3,    82,    25,    26,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    61,    62,    59,
      61,    57,    61,     3,     3,    32,    78,    61,    78,    68,
      82,    98,     3,     4,    59,    57,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
       3,    59,    67,    68,    82,    60,    67,    54,    61,     3,
      14,    17,    20,    22,    23,    30,    69,    72,    73,    74,
      82,    83,    84,    87,    88,    90,    91,    92,    93,    94,
      95,    96,    97,    99,    56,    58,    59,    55,    67,    55,
      57,    58,    60,    60,    84,    60,    55,    61,    58,    67,
      99,    53,    59,    56,    69,    56,    55,    55,    82,    61,
      55,    46,    48,    49,    50,    51,    52,    55,    55,    55,
      55,    55,    55,    55,    28,    72,    73,    74,    88,    76,
      80,     4,    55,    82,    60,    68,    67,    76,    61,    28,
      59,     4,    82,    18,    82,     3,    82,    82,    82,    82,
      82,    82,    55,    57,    60,    58,    99,    55,    82,    60,
      57,    59,    57,    55,    54,    61,    76,    28,    17,    61,
      82,    61,    67,    99,    55,     3,    72,    74,    88,    89,
      61,    89,    61,    28,    61,    15,    16,    72,    74,    88,
      82,    21,    99,    55,     4,    67,    61,    60,    61,    28,
      60,    18,    89,    61,    82,    55,    61,     3,    16,    89,
      60,    67,    33,    19,    61,     4,    89,    60,    19,    61,
      67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    67,    67,    67,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    72,    72,    73,    74,    75,    75,    76,    76,    76,
      76,    76,    77,    78,    78,    78,    78,    79,    80,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    89,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    94,    95,    96,    96,
      97,    98,    98,    98,    99,    99,    99,    99,    99,    99,
      99,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     8,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     4,     7,     4,     7,     9,    11,     0,     3,     5,
       7,     5,     6,     1,     2,     1,     2,     4,     2,     5,
       4,     9,    11,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     1,     2,     5,     4,     4,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     1,     2,     1,     7,
      10,    11,    13,     1,     1,    11,    15,     7,     1,     2,
       4,     0,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     2
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
#line 172 "myanalyzer.y"
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
#line 1860 "myanalyzer.tab.c"
    break;

  case 3: /* main_body: decl_body main  */
#line 197 "myanalyzer.y"
                 { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1866 "myanalyzer.tab.c"
    break;

  case 4: /* main_body: main  */
#line 198 "myanalyzer.y"
         { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1872 "myanalyzer.tab.c"
    break;

  case 5: /* main: KW_DEF KW_MAIN DEL_LPAR DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 202 "myanalyzer.y"
                                                                        {(yyval.crepr) = template("int main(){\n%s\n}", (yyvsp[-2].crepr));}
#line 1878 "myanalyzer.tab.c"
    break;

  case 6: /* types: DEL_LBLOCK DEL_RBLOCK basic_types  */
#line 208 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s*", (yyvsp[0].crepr)); }
#line 1884 "myanalyzer.tab.c"
    break;

  case 7: /* types: basic_types  */
#line 209 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1890 "myanalyzer.tab.c"
    break;

  case 8: /* types: TK_IDENTIFIER  */
#line 210 "myanalyzer.y"
                  {
    int found = 0;
      //printf("\n%d\n", num_comps);
      for (int i = 0; i < num_comps; i++) {
        //printf("\n%s || %s\n", comp_names[i], $1);
        if (strcmp(comp_names[i], (yyvsp[0].crepr)) == 0) {
          found = 1;
          //printf("\nFound = 1\n");
          (yyval.crepr) = (yyvsp[0].crepr);
          break;
        }
      }
      if (found == 0) {
        //printf("\n1\n");
        yyerror("There is no complex type %s declared.", (yyvsp[0].crepr));
        YYERROR;

      }
  }
#line 1914 "myanalyzer.tab.c"
    break;

  case 9: /* basic_types: KW_INT  */
#line 231 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "int");}
#line 1920 "myanalyzer.tab.c"
    break;

  case 10: /* basic_types: KW_BOOLEAN  */
#line 232 "myanalyzer.y"
                   {(yyval.crepr) = template("%s", "int");}
#line 1926 "myanalyzer.tab.c"
    break;

  case 11: /* basic_types: KW_SCALAR  */
#line 233 "myanalyzer.y"
                  {(yyval.crepr) = template("%s","double");}
#line 1932 "myanalyzer.tab.c"
    break;

  case 12: /* basic_types: KW_STR  */
#line 234 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "char*");}
#line 1938 "myanalyzer.tab.c"
    break;

  case 13: /* identifiers: TK_IDENTIFIER  */
#line 239 "myanalyzer.y"
                       {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1944 "myanalyzer.tab.c"
    break;

  case 14: /* identifiers: identifiers DEL_COMMA TK_IDENTIFIER  */
#line 240 "myanalyzer.y"
                                              {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1950 "myanalyzer.tab.c"
    break;

  case 15: /* decl_body: decl_body declarations  */
#line 247 "myanalyzer.y"
                         { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1956 "myanalyzer.tab.c"
    break;

  case 16: /* decl_body: declarations  */
#line 248 "myanalyzer.y"
                 { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1962 "myanalyzer.tab.c"
    break;

  case 17: /* declarations: variable_declarations  */
#line 252 "myanalyzer.y"
                        { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1968 "myanalyzer.tab.c"
    break;

  case 18: /* declarations: complex_type_declarations  */
#line 253 "myanalyzer.y"
                              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1974 "myanalyzer.tab.c"
    break;

  case 19: /* declarations: constant_declarations  */
#line 254 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1980 "myanalyzer.tab.c"
    break;

  case 20: /* declarations: functions  */
#line 255 "myanalyzer.y"
              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1986 "myanalyzer.tab.c"
    break;

  case 21: /* variable_declarations: identifiers DEL_COLON basic_types DEL_SMCOLON  */
#line 259 "myanalyzer.y"
                                                      {(yyval.crepr) = template("%s %s; ", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1992 "myanalyzer.tab.c"
    break;

  case 22: /* variable_declarations: TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK DEL_COLON basic_types DEL_SMCOLON  */
#line 260 "myanalyzer.y"
                                                                                     {(yyval.crepr) = template("%s %s[%s]; ", (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr)); }
#line 1998 "myanalyzer.tab.c"
    break;

  case 23: /* comp_variables: identifiers DEL_COLON TK_IDENTIFIER DEL_SMCOLON  */
#line 264 "myanalyzer.y"
                                                  {(yyval.crepr) = template("%s %s = ctor_%s; ", (yyvsp[-1].crepr), (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2004 "myanalyzer.tab.c"
    break;

  case 24: /* constant_declarations: KW_CONST identifiers AP_ASSIGN expressions DEL_COLON types DEL_SMCOLON  */
#line 268 "myanalyzer.y"
                                                                               {(yyval.crepr) = template("const %s = %s;", (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 2010 "myanalyzer.tab.c"
    break;

  case 25: /* functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 275 "myanalyzer.y"
                                                                                                     {(yyval.crepr) = template("\nvoid %s(%s) {\n%s\n}\n", (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2016 "myanalyzer.tab.c"
    break;

  case 26: /* functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 276 "myanalyzer.y"
                                                                                                                            {(yyval.crepr) = template("\n%s %s(%s) {\n%s\n\n}\n", (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-7].crepr), (yyvsp[-2].crepr));}
#line 2022 "myanalyzer.tab.c"
    break;

  case 27: /* parameter_declarations: %empty  */
#line 280 "myanalyzer.y"
         { (yyval.crepr) = "" ;}
#line 2028 "myanalyzer.tab.c"
    break;

  case 28: /* parameter_declarations: TK_IDENTIFIER DEL_COLON types  */
#line 281 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 2034 "myanalyzer.tab.c"
    break;

  case 29: /* parameter_declarations: TK_IDENTIFIER DEL_LBLOCK DEL_RBLOCK DEL_COLON types  */
#line 282 "myanalyzer.y"
                                                        {(yyval.crepr) = template("%s *%s", (yyvsp[0].crepr), (yyvsp[-4].crepr));}
#line 2040 "myanalyzer.tab.c"
    break;

  case 30: /* parameter_declarations: TK_IDENTIFIER DEL_LBLOCK DEL_RBLOCK DEL_COLON types DEL_COMMA parameter_declarations  */
#line 283 "myanalyzer.y"
                                                                                         {(yyval.crepr) = template("%s *%s, %s", (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr));}
#line 2046 "myanalyzer.tab.c"
    break;

  case 31: /* parameter_declarations: TK_IDENTIFIER DEL_COLON types DEL_COMMA parameter_declarations  */
#line 284 "myanalyzer.y"
                                                                   {(yyval.crepr) = template("%s %s, %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 2052 "myanalyzer.tab.c"
    break;

  case 32: /* complex_type_declarations: KW_COMP TK_IDENTIFIER DEL_COLON comp_body KW_ENDCOMP DEL_SMCOLON  */
#line 291 "myanalyzer.y"
                                                                   { // reset comp flag
    cflag = 0;
    // get all the function output strings in one buffer to print them
    buffer = malloc(1);
    namebuffer = malloc(1);

    //printf("1\n");
    //printf("nf%d\n", num_functions);
    // loop through the array allocate space 
    for (int i = 0; i < num_functions; i++) {
      //printf("2\n");
      char* curr_string = comp_function_output[i];
      char* name_string = comp_function_names[i];

      //printf("2.5\n");
      buffer = realloc(buffer,  strlen(buffer) + strlen(curr_string) + 3); // +3 for 2new line and null terminator

      namebuffer = realloc(namebuffer, strlen(namebuffer) + strlen(name_string) + 3); // +3 for comma space and null terminator
      //printf("3\n");

      // add to buffer
      strcat(buffer, curr_string);
      strcat(namebuffer, name_string);
      //printf("Buffers:%s\n", name_string);
      if (i != num_functions -1) {
        strcat(buffer, "\n\n");
        strcat(namebuffer, ", ");
      }


    }

    printf("\n%s\n", (yyvsp[-4].crepr));
    // store the comp name
    // raise counter
    num_comps = num_comps + 1;

    // allocate space
    comp_names = realloc(comp_names, num_comps * sizeof(char*));

    // add output string to array
    comp_names[num_comps - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));

    comp_names[num_comps - 1] = strdup(template("%s", (yyvsp[-4].crepr))); 

    printf("\n%s\n", comp_names[num_comps -1]);

    for(int i = 0; i < num_comps; i++){
      printf("\n%s\n", comp_names[i]);
    }

    (yyval.crepr) = template("\n#define SELF struct %s *self\ntypedef struct %s {\n%s\n} %s;\n\n%s\n\nconst ctor_%s = { %s };\n#under SELF", (yyvsp[-4].crepr), (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[-4].crepr), buffer, (yyvsp[-4].crepr), namebuffer); 

   
    num_functions = 0;

    }
#line 2114 "myanalyzer.tab.c"
    break;

  case 33: /* comp_body: comp_variable_declarations  */
#line 351 "myanalyzer.y"
                             { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2120 "myanalyzer.tab.c"
    break;

  case 34: /* comp_body: comp_variable_declarations comp_body  */
#line 352 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2126 "myanalyzer.tab.c"
    break;

  case 35: /* comp_body: comp_functions  */
#line 353 "myanalyzer.y"
                   { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2132 "myanalyzer.tab.c"
    break;

  case 36: /* comp_body: comp_functions comp_body  */
#line 354 "myanalyzer.y"
                             {(yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 2138 "myanalyzer.tab.c"
    break;

  case 37: /* comp_variable_declarations: comp_identifiers DEL_COLON types DEL_SMCOLON  */
#line 358 "myanalyzer.y"
                                               {
  // raise comp flag
  cflag = 1;
  (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 2147 "myanalyzer.tab.c"
    break;

  case 38: /* comp_identifiers: AP_HASHASSIGN TK_IDENTIFIER  */
#line 366 "myanalyzer.y"
                              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2153 "myanalyzer.tab.c"
    break;

  case 39: /* comp_identifiers: AP_HASHASSIGN TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK  */
#line 367 "myanalyzer.y"
                                                                 {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2159 "myanalyzer.tab.c"
    break;

  case 40: /* comp_identifiers: AP_HASHASSIGN TK_IDENTIFIER DEL_COMMA comp_identifiers  */
#line 368 "myanalyzer.y"
                                                           {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2165 "myanalyzer.tab.c"
    break;

  case 41: /* comp_functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 373 "myanalyzer.y"
  {
    // add every function outputs to a char** array to print after the comp
    // raise counter
    num_functions = num_functions + 1;
    total_functions = total_functions + 1;


    // allocate space
    comp_function_output = realloc(comp_function_output, num_functions * sizeof(char*));

    comp_function_names = realloc(comp_function_names, num_functions * sizeof(char*));

    cfnames = realloc(cfnames, total_functions * sizeof(char*));


    // add output string to array
    comp_function_output[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));

    comp_function_names[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));

    cfnames[total_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));
    

    comp_function_output[num_functions - 1] = strdup(template("void %s(self%s%s) {\n%s\n} ", (yyvsp[-7].crepr), strlen((yyvsp[-5].crepr)) != 0  ? ", " : "", (yyvsp[-5].crepr), (yyvsp[-2].crepr))); 

    comp_function_names[num_functions - 1] = strdup(template(".%s=%s", (yyvsp[-7].crepr), (yyvsp[-7].crepr)));

    cfnames[total_functions - 1] = strdup(template("%s", (yyvsp[-7].crepr)));

    //printf("\n%s\n", comp_function_names[num_functions - 1]);
    // do the normal $$
    (yyval.crepr) = template("\nvoid (*%s)(self%s%s);", (yyvsp[-7].crepr), ((yyvsp[-5].crepr)[0] != '\0') ? ", " : "", (yyvsp[-5].crepr));
    }
#line 2203 "myanalyzer.tab.c"
    break;

  case 42: /* comp_functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 408 "myanalyzer.y"
  { 
    // add every function output to a char** array to print after the comp
    // raise counter
    num_functions = num_functions +1;
    total_functions = total_functions + 1;

    // allocate space
    comp_function_output = realloc(comp_function_output, num_functions * sizeof(char*));

    comp_function_names = realloc(comp_function_names, num_functions * sizeof(char*));

    cfnames = realloc(cfnames, total_functions * sizeof(char*));


    // add output string to array
    comp_function_output[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));

    comp_function_names[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));

    cfnames[total_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));


    cfnames[total_functions - 1] = strdup(template("%s", (yyvsp[-9].crepr)));

    comp_function_output[num_functions - 1] = strdup(template("%s %s(self%s%s) {\n%s\n} ", (yyvsp[-4].crepr), (yyvsp[-9].crepr), ((yyvsp[-7].crepr)[0] != '\0') ? ", " : "", (yyvsp[-7].crepr) ,(yyvsp[-2].crepr)));

    comp_function_names[num_functions - 1] = strdup(template(".%s=%s", (yyvsp[-9].crepr), (yyvsp[-9].crepr)));


    //printf("\n%s\n", comp_function_names[num_functions - 1]);
    // do the normal $$
    (yyval.crepr) = template("\n%s (*%s)(self%s%s);", (yyvsp[-4].crepr), (yyvsp[-9].crepr), ((yyvsp[-7].crepr)[0] != '\0') ? ", " : "", (yyvsp[-7].crepr));
    }
#line 2241 "myanalyzer.tab.c"
    break;

  case 43: /* expressions: identifier_expressions  */
#line 447 "myanalyzer.y"
                         { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2247 "myanalyzer.tab.c"
    break;

  case 44: /* expressions: TK_STRING  */
#line 448 "myanalyzer.y"
              {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2253 "myanalyzer.tab.c"
    break;

  case 45: /* expressions: KW_TRUE  */
#line 449 "myanalyzer.y"
            {(yyval.crepr) = template("%s", "1");}
#line 2259 "myanalyzer.tab.c"
    break;

  case 46: /* expressions: KW_FALSE  */
#line 450 "myanalyzer.y"
             {(yyval.crepr) = template("%s", "0");}
#line 2265 "myanalyzer.tab.c"
    break;

  case 47: /* expressions: function_statement  */
#line 451 "myanalyzer.y"
                       { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2271 "myanalyzer.tab.c"
    break;

  case 48: /* expressions: arithmetic_expressions  */
#line 452 "myanalyzer.y"
                           { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2277 "myanalyzer.tab.c"
    break;

  case 49: /* expressions: relational_expressions  */
#line 453 "myanalyzer.y"
                           { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2283 "myanalyzer.tab.c"
    break;

  case 50: /* expressions: KW_NOT expressions  */
#line 454 "myanalyzer.y"
                       {(yyval.crepr) = template("! %s", (yyvsp[0].crepr));}
#line 2289 "myanalyzer.tab.c"
    break;

  case 51: /* expressions: expressions KW_AND expressions  */
#line 455 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2295 "myanalyzer.tab.c"
    break;

  case 52: /* expressions: expressions KW_OR expressions  */
#line 456 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2301 "myanalyzer.tab.c"
    break;

  case 53: /* expressions: DEL_LPAR expressions DEL_RPAR  */
#line 457 "myanalyzer.y"
                                  {(yyval.crepr) = template("(%s)", (yyvsp[-1].crepr));}
#line 2307 "myanalyzer.tab.c"
    break;

  case 54: /* comp_expressions: expressions DEL_DOT expressions  */
#line 462 "myanalyzer.y"
                                  { 
    //printf("1\n");
    dot_call = strdup(template("%s", (yyvsp[-2].crepr)));
    (yyval.crepr) = template("%s.%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2316 "myanalyzer.tab.c"
    break;

  case 55: /* identifier_expressions: TK_IDENTIFIER  */
#line 470 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2322 "myanalyzer.tab.c"
    break;

  case 56: /* identifier_expressions: AP_HASHASSIGN TK_IDENTIFIER  */
#line 471 "myanalyzer.y"
                                { 
    //printf("\nflag: %d\n", cflag);
    if (cflag == 1) {(yyval.crepr) = template("self->%s", (yyvsp[0].crepr));}
    else {(yyval.crepr) = template("%s", (yyvsp[0].crepr));} }
#line 2331 "myanalyzer.tab.c"
    break;

  case 57: /* identifier_expressions: AP_HASHASSIGN TK_IDENTIFIER DEL_LBLOCK identifier_expressions DEL_RBLOCK  */
#line 475 "myanalyzer.y"
                                                                             { 
    if (cflag == 1) {(yyval.crepr) = template("self->%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
    else {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));} }
#line 2339 "myanalyzer.tab.c"
    break;

  case 58: /* identifier_expressions: TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK  */
#line 478 "myanalyzer.y"
                                                   { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2345 "myanalyzer.tab.c"
    break;

  case 59: /* identifier_expressions: TK_IDENTIFIER DEL_LBLOCK TK_IDENTIFIER DEL_RBLOCK  */
#line 479 "myanalyzer.y"
                                                      { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2351 "myanalyzer.tab.c"
    break;

  case 60: /* identifier_expressions: comp_expressions  */
#line 480 "myanalyzer.y"
                     { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2357 "myanalyzer.tab.c"
    break;

  case 61: /* arithmetic_expressions: TK_INTEGER  */
#line 484 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2363 "myanalyzer.tab.c"
    break;

  case 62: /* arithmetic_expressions: TK_FLOAT  */
#line 485 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 2369 "myanalyzer.tab.c"
    break;

  case 63: /* arithmetic_expressions: expressions OP_POWER expressions  */
#line 486 "myanalyzer.y"
                                     {(yyval.crepr) = template("pow(%s, %s)", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2375 "myanalyzer.tab.c"
    break;

  case 64: /* arithmetic_expressions: expressions OP_MULT expressions  */
#line 487 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s * %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2381 "myanalyzer.tab.c"
    break;

  case 65: /* arithmetic_expressions: expressions OP_DIV expressions  */
#line 488 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2387 "myanalyzer.tab.c"
    break;

  case 66: /* arithmetic_expressions: expressions OP_MOD expressions  */
#line 489 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2393 "myanalyzer.tab.c"
    break;

  case 67: /* arithmetic_expressions: expressions OP_PLUS expressions  */
#line 490 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2399 "myanalyzer.tab.c"
    break;

  case 68: /* arithmetic_expressions: expressions OP_MINUS expressions  */
#line 491 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2405 "myanalyzer.tab.c"
    break;

  case 69: /* arithmetic_expressions: OP_PLUS expressions  */
#line 492 "myanalyzer.y"
                        {(yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 2411 "myanalyzer.tab.c"
    break;

  case 70: /* arithmetic_expressions: OP_MINUS expressions  */
#line 493 "myanalyzer.y"
                         {(yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 2417 "myanalyzer.tab.c"
    break;

  case 71: /* relational_expressions: expressions RP_LESS expressions  */
#line 497 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s < %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2423 "myanalyzer.tab.c"
    break;

  case 72: /* relational_expressions: expressions RP_LESSEQUALS expressions  */
#line 498 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2429 "myanalyzer.tab.c"
    break;

  case 73: /* relational_expressions: expressions RP_MORE expressions  */
#line 499 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2435 "myanalyzer.tab.c"
    break;

  case 74: /* relational_expressions: expressions RP_MOREEQUALS expressions  */
#line 500 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2441 "myanalyzer.tab.c"
    break;

  case 75: /* relational_expressions: expressions RP_EQUALS expressions  */
#line 501 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2447 "myanalyzer.tab.c"
    break;

  case 76: /* relational_expressions: expressions RP_NOTEQUALS expressions  */
#line 502 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2453 "myanalyzer.tab.c"
    break;

  case 77: /* assign_expressions: identifier_expressions AP_ASSIGN expressions  */
#line 506 "myanalyzer.y"
                                               {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2459 "myanalyzer.tab.c"
    break;

  case 78: /* assign_expressions: identifier_expressions AP_PLUSASSIGN expressions  */
#line 507 "myanalyzer.y"
                                                     {(yyval.crepr) = template("%s += %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2465 "myanalyzer.tab.c"
    break;

  case 79: /* assign_expressions: identifier_expressions AP_MINASSIGN expressions  */
#line 508 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s -= %s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2471 "myanalyzer.tab.c"
    break;

  case 80: /* assign_expressions: identifier_expressions AP_MULASSIGN expressions  */
#line 509 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s *= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2477 "myanalyzer.tab.c"
    break;

  case 81: /* assign_expressions: identifier_expressions AP_DIVASSIGN expressions  */
#line 510 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s /= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2483 "myanalyzer.tab.c"
    break;

  case 82: /* assign_expressions: identifier_expressions AP_MODASSIGN expressions  */
#line 511 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s %= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2489 "myanalyzer.tab.c"
    break;

  case 83: /* statements: if_statement DEL_SMCOLON  */
#line 516 "myanalyzer.y"
                           { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2495 "myanalyzer.tab.c"
    break;

  case 84: /* statements: for_statement DEL_SMCOLON  */
#line 517 "myanalyzer.y"
                              { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2501 "myanalyzer.tab.c"
    break;

  case 85: /* statements: array_statement DEL_SMCOLON  */
#line 518 "myanalyzer.y"
                                { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2507 "myanalyzer.tab.c"
    break;

  case 86: /* statements: while_statement DEL_SMCOLON  */
#line 519 "myanalyzer.y"
                                { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2513 "myanalyzer.tab.c"
    break;

  case 87: /* statements: KW_BREAK DEL_SMCOLON  */
#line 520 "myanalyzer.y"
                         {(yyval.crepr) = template("break;");}
#line 2519 "myanalyzer.tab.c"
    break;

  case 88: /* statements: KW_CONTINUE DEL_SMCOLON  */
#line 521 "myanalyzer.y"
                            {(yyval.crepr) = template("continue;");}
#line 2525 "myanalyzer.tab.c"
    break;

  case 89: /* statements: assign_expressions DEL_SMCOLON  */
#line 522 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s;", (yyvsp[-1].crepr));}
#line 2531 "myanalyzer.tab.c"
    break;

  case 90: /* statements: return_statement DEL_SMCOLON  */
#line 523 "myanalyzer.y"
                                 { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2537 "myanalyzer.tab.c"
    break;

  case 91: /* statements: function_statement DEL_SMCOLON  */
#line 524 "myanalyzer.y"
                                   { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2543 "myanalyzer.tab.c"
    break;

  case 92: /* statements: comp_expressions DEL_SMCOLON  */
#line 525 "myanalyzer.y"
                                 { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2549 "myanalyzer.tab.c"
    break;

  case 93: /* command_statements: statements  */
#line 529 "myanalyzer.y"
             { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 2555 "myanalyzer.tab.c"
    break;

  case 94: /* command_statements: command_statements statements  */
#line 530 "myanalyzer.y"
                                  { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2561 "myanalyzer.tab.c"
    break;

  case 95: /* command_statements: command_statements variable_declarations  */
#line 531 "myanalyzer.y"
                                             { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2567 "myanalyzer.tab.c"
    break;

  case 96: /* command_statements: variable_declarations  */
#line 532 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2573 "myanalyzer.tab.c"
    break;

  case 97: /* command_statements: command_statements constant_declarations  */
#line 533 "myanalyzer.y"
                                             { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2579 "myanalyzer.tab.c"
    break;

  case 98: /* command_statements: constant_declarations  */
#line 534 "myanalyzer.y"
                          { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 2585 "myanalyzer.tab.c"
    break;

  case 99: /* if_statement: KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDIF  */
#line 539 "myanalyzer.y"
                                                                            {(yyval.crepr) = template("if (%s) {\n %s\n}", (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2591 "myanalyzer.tab.c"
    break;

  case 100: /* if_statement: KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ELSE DEL_COLON command_statements KW_ENDIF  */
#line 540 "myanalyzer.y"
                                                                                                                   {(yyval.crepr) = template("if (%s) {\n%s\n} else {\n%s\n}", (yyvsp[-7].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2597 "myanalyzer.tab.c"
    break;

  case 101: /* for_statement: KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR  */
#line 545 "myanalyzer.y"
                                                                                                                           {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s++) {\n%s\n}", (yyvsp[-9].crepr), (yyvsp[-6].crepr), (yyvsp[-9].crepr), (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-1].crepr));}
#line 2603 "myanalyzer.tab.c"
    break;

  case 102: /* for_statement: KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR  */
#line 546 "myanalyzer.y"
                                                                                                                                                  {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s = %s %s) {\n%s\n}", (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-11].crepr), (yyvsp[-6].crepr), (yyvsp[-11].crepr), (yyvsp[-11].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2609 "myanalyzer.tab.c"
    break;

  case 103: /* array_statement: integral_array  */
#line 551 "myanalyzer.y"
                 { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2615 "myanalyzer.tab.c"
    break;

  case 104: /* array_statement: other_array  */
#line 552 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2621 "myanalyzer.tab.c"
    break;

  case 105: /* integral_array: TK_IDENTIFIER AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR TK_IDENTIFIER DEL_COLON TK_INTEGER DEL_RBLOCK DEL_COLON types  */
#line 556 "myanalyzer.y"
                                                                                                                           {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(%s %s = 0; %s < %s; ++%s) {\n %s[%s] = %s\n}", (yyvsp[0].crepr), (yyvsp[-10].crepr), (yyvsp[0].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr), (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-5].crepr), (yyvsp[-10].crepr), (yyvsp[-5].crepr), (yyvsp[-7].crepr));}
#line 2627 "myanalyzer.tab.c"
    break;

  case 106: /* other_array: TK_IDENTIFIER AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR TK_IDENTIFIER DEL_COLON types KW_IN TK_IDENTIFIER KW_OF TK_INTEGER DEL_RBLOCK DEL_COLON types  */
#line 560 "myanalyzer.y"
                                                                                                                                                           {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(int %s10_i = 0; %s10_i < %s12; ++%s10_i) {\n\t %s1[%s10_i] = %s4\n}", (yyvsp[0].crepr), (yyvsp[-14].crepr), (yyvsp[0].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-5].crepr), (yyvsp[-14].crepr), (yyvsp[-5].crepr), (yyvsp[-11].crepr));}
#line 2633 "myanalyzer.tab.c"
    break;

  case 107: /* while_statement: KW_WHILE DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDWHILE  */
#line 565 "myanalyzer.y"
                                                                                  {(yyval.crepr) = template("while (%s) {\n%s\n}", (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2639 "myanalyzer.tab.c"
    break;

  case 108: /* return_statement: KW_RETURN  */
#line 570 "myanalyzer.y"
            {(yyval.crepr) = template("return");}
#line 2645 "myanalyzer.tab.c"
    break;

  case 109: /* return_statement: KW_RETURN expressions  */
#line 571 "myanalyzer.y"
                          {(yyval.crepr) = template("return %s", (yyvsp[0].crepr));}
#line 2651 "myanalyzer.tab.c"
    break;

  case 110: /* function_statement: TK_IDENTIFIER DEL_LPAR function_arg DEL_RPAR  */
#line 576 "myanalyzer.y"
                                               {
  int found = 0;
  for (int i=0; i < total_functions; i++) {
    //printf("%s || %s", $1, cfnames[i]);
    if (strcmp(cfnames[i], (yyvsp[-3].crepr)) == 0){
      //printf("2\n");
      //printf("%s\n", dot_call);
      (yyval.crepr) = template("%s(&%s%s)", (yyvsp[-3].crepr), dot_call, (yyvsp[-1].crepr));
      found = 1;
      break;       
    }
  } 
  if (found == 0) {
    (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr));
    }
  }
#line 2672 "myanalyzer.tab.c"
    break;

  case 111: /* function_arg: %empty  */
#line 595 "myanalyzer.y"
         { (yyval.crepr) = ""; }
#line 2678 "myanalyzer.tab.c"
    break;

  case 112: /* function_arg: expressions  */
#line 596 "myanalyzer.y"
                { (yyval.crepr) = template(",%s", (yyvsp[0].crepr));}
#line 2684 "myanalyzer.tab.c"
    break;

  case 113: /* function_arg: function_arg DEL_COMMA expressions  */
#line 597 "myanalyzer.y"
                                       { (yyval.crepr) = template(", %s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2690 "myanalyzer.tab.c"
    break;

  case 114: /* body: statements  */
#line 601 "myanalyzer.y"
             { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2696 "myanalyzer.tab.c"
    break;

  case 115: /* body: variable_declarations  */
#line 602 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2702 "myanalyzer.tab.c"
    break;

  case 116: /* body: constant_declarations  */
#line 603 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2708 "myanalyzer.tab.c"
    break;

  case 117: /* body: comp_variables  */
#line 604 "myanalyzer.y"
                   { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2714 "myanalyzer.tab.c"
    break;

  case 118: /* body: body statements  */
#line 605 "myanalyzer.y"
                    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2720 "myanalyzer.tab.c"
    break;

  case 119: /* body: body variable_declarations  */
#line 606 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2726 "myanalyzer.tab.c"
    break;

  case 120: /* body: body constant_declarations  */
#line 607 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2732 "myanalyzer.tab.c"
    break;

  case 121: /* body: body comp_variables  */
#line 608 "myanalyzer.y"
                        { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2738 "myanalyzer.tab.c"
    break;


#line 2742 "myanalyzer.tab.c"

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

#line 611 "myanalyzer.y"



int main(void) {
  if ( yyparse() != 0 )
  printf("\nRejected!\n");
}
