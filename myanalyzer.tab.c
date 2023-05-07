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


int yylex(void);
extern int line_num;


#line 83 "myanalyzer.tab.c"

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
  YYSYMBOL_constant_declarations = 73,     /* constant_declarations  */
  YYSYMBOL_function_declarations = 74,     /* function_declarations  */
  YYSYMBOL_functions = 75,                 /* functions  */
  YYSYMBOL_parameter_declarations = 76,    /* parameter_declarations  */
  YYSYMBOL_complex_type_declarations = 77, /* complex_type_declarations  */
  YYSYMBOL_comp_variable_declarations = 78, /* comp_variable_declarations  */
  YYSYMBOL_expressions = 79,               /* expressions  */
  YYSYMBOL_identifier_expressions = 80,    /* identifier_expressions  */
  YYSYMBOL_arithmetic_expressions = 81,    /* arithmetic_expressions  */
  YYSYMBOL_relational_expressions = 82,    /* relational_expressions  */
  YYSYMBOL_assign_expressions = 83,        /* assign_expressions  */
  YYSYMBOL_statements = 84,                /* statements  */
  YYSYMBOL_command_statements = 85,        /* command_statements  */
  YYSYMBOL_if_statement = 86,              /* if_statement  */
  YYSYMBOL_for_statement = 87,             /* for_statement  */
  YYSYMBOL_array_statement = 88,           /* array_statement  */
  YYSYMBOL_integral_array = 89,            /* integral_array  */
  YYSYMBOL_other_array = 90,               /* other_array  */
  YYSYMBOL_while_statement = 91,           /* while_statement  */
  YYSYMBOL_return_statement = 92,          /* return_statement  */
  YYSYMBOL_function_statement = 93,        /* function_statement  */
  YYSYMBOL_function_arg = 94,              /* function_arg  */
  YYSYMBOL_body = 95                       /* body  */
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
#define YYLAST   713

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

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
       0,   148,   148,   173,   174,   178,   184,   185,   188,   189,
     190,   191,   196,   197,   204,   205,   209,   210,   211,   212,
     216,   217,   221,   228,   232,   233,   237,   238,   245,   253,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   278,   279,   280,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   297,   298,   299,   300,   301,   302,
     306,   307,   308,   309,   310,   311,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   327,   328,   329,   330,   331,
     332,   337,   338,   343,   344,   349,   350,   354,   358,   363,
     368,   369,   374,   378,   379,   380,   384,   385,   386,   387,
     388,   389
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
  "variable_declarations", "constant_declarations",
  "function_declarations", "functions", "parameter_declarations",
  "complex_type_declarations", "comp_variable_declarations", "expressions",
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

#define YYPACT_NINF (-153)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-13)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      89,   -53,    29,     5,    29,    50,  -153,  -153,   -28,    89,
    -153,  -153,  -153,  -153,  -153,    67,  -153,    12,    45,    74,
       7,  -153,    79,   141,  -153,  -153,    35,    51,   136,   105,
      94,  -153,  -153,  -153,  -153,  -153,   108,   141,    21,  -153,
    -153,  -153,  -153,  -153,    51,    51,    51,    51,   324,  -153,
    -153,  -153,  -153,   103,   110,   109,    29,   144,  -153,   113,
      51,   107,   607,   650,   660,   407,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      17,    17,    20,   608,    33,   170,   143,  -153,   607,    57,
     119,   120,  -153,   627,   639,   650,   660,   494,   668,   114,
     114,   262,   184,    60,    77,   137,  -153,   123,   131,  -153,
     126,    17,   608,    84,   132,    29,   133,   142,   147,    51,
       8,  -153,  -153,   224,   150,  -153,   151,   161,   163,  -153,
    -153,   166,   167,   168,   187,    17,   135,  -153,  -153,    51,
    -153,  -153,   141,  -153,   136,   172,   542,   129,    51,    -7,
      51,  -153,  -153,   607,   179,    51,    51,    51,    51,    51,
      51,  -153,  -153,  -153,  -153,  -153,  -153,  -153,   176,  -153,
    -153,  -153,   185,   136,   607,  -153,  -153,   608,   186,   188,
     431,   190,   455,    51,   607,   607,   607,   607,   607,   607,
    -153,  -153,   139,   560,  -153,   141,   183,    51,   191,   484,
     138,   192,   608,   352,   608,    29,    17,  -153,  -153,  -153,
    -153,   527,    51,   572,    39,  -153,   608,  -153,  -153,  -153,
    -153,   296,  -153,    13,   584,   193,    51,   196,   227,  -153,
     608,   380,   197,    29,   596,   198,    17,    -5,  -153,   608,
    -153,   247,    76,   201,   234,   204,  -153,    17,  -153
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    12,     0,     0,     0,     0,     2,     4,     0,     0,
      15,    16,    18,    19,    17,     0,    12,     0,     0,     0,
       0,     1,     0,     0,     3,    14,     0,     0,     0,     0,
       0,    13,     8,    10,    11,     9,     0,     0,    41,    44,
      45,    31,    32,    33,     0,     0,     0,     0,     0,    30,
      35,    36,    34,     0,     0,     0,     0,     0,    20,     0,
      93,     0,    37,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    94,     0,
       0,     0,    40,    38,    39,    50,    51,    47,    48,    49,
      46,    58,    59,    54,    55,    56,    57,     0,     0,     7,
      26,     0,     0,    41,     0,     0,     0,     0,     0,    90,
       0,    97,    98,     0,     0,    96,     0,     0,     0,    85,
      86,     0,     0,     0,     0,     0,     0,    28,    92,     0,
      43,    42,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    91,     0,     0,     0,     0,     0,     0,
       0,    72,    66,    67,    68,    69,    73,    74,     0,   100,
     101,    99,     0,     0,    95,     6,    27,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
       5,    29,     0,     0,    24,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    78,    80,
      75,     0,     0,     0,     0,    23,     0,    81,    77,    79,
      76,     0,    89,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
      87,     0,     0,     0,     0,     0,    84,     0,    88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,   253,   -62,   -19,     3,  -153,   258,     0,
       1,  -153,  -153,  -113,  -153,  -153,   -31,    53,  -153,  -153,
    -153,    26,  -152,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
      86,  -153,  -110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,   108,   109,   120,     9,    10,   208,
     209,    86,    13,    54,    14,    57,    48,    49,    50,    51,
     124,   210,   211,   126,   127,   128,   129,   130,   131,   132,
      52,    89,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    12,   146,     8,    36,    17,    15,    20,    18,    11,
      12,   181,     8,    62,    63,    64,    65,   227,    59,   110,
      32,    33,    34,    35,    32,    33,    34,    35,   241,    88,
      22,   176,    16,    23,    19,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   145,
      21,    22,   213,    22,    38,    39,    40,    41,    27,    84,
     192,   154,    42,    43,   224,    22,    22,   193,    30,    23,
      22,    26,   107,   172,   111,    44,   107,    60,   234,   113,
      61,   112,    31,   121,   122,    45,    46,   242,   153,     2,
     114,    22,     1,   115,   135,    37,   116,    22,   117,   118,
     223,    28,     2,    77,    78,    79,   119,    47,   174,   125,
      90,    91,   121,   122,   138,   139,     3,   180,   149,   182,
       4,    78,    79,   175,   184,   185,   186,   187,   188,   189,
      29,   244,    90,   179,   169,   170,   123,   -12,   125,    53,
      60,    56,   -12,   147,   215,   -12,   169,   170,    32,    33,
      34,    35,   199,    73,    74,    75,    76,    77,    78,    79,
     171,   228,    55,    58,    81,   123,   203,    82,    87,   133,
      83,    85,   171,   136,   240,   137,    59,   121,   122,   140,
     141,   221,    79,   142,   144,   248,   143,   123,   148,   150,
     113,   173,   206,   169,   170,   231,   200,   151,   133,   123,
       2,   114,   152,   125,   115,   161,   162,   116,   214,   117,
     118,   218,   219,   218,   219,   168,   163,   119,   164,   171,
     133,   165,   166,   167,   218,   219,    76,    77,    78,    79,
     123,   190,   133,   177,   218,   219,   237,   220,   183,   220,
     191,   194,   218,   219,   202,   233,   123,   207,   195,   197,
     220,   243,   204,   246,   230,   123,   232,   123,   236,   239,
     220,   245,    24,   133,   123,   247,   123,    25,   220,   123,
     155,     0,   156,   157,   158,   159,   160,   123,     0,   133,
       0,     0,     0,   123,     0,     0,     0,   123,   133,     0,
     133,     0,   123,     0,     0,   123,     0,   133,     0,   133,
       0,     0,   133,    75,    76,    77,    78,    79,     0,     0,
     133,     0,     0,     0,     0,     0,   133,     0,     0,     0,
     133,    66,    67,     0,     0,   133,     0,     0,   133,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    66,
      67,     0,     0,     0,     0,     0,   225,   226,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,    80,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,     0,
       0,     0,     0,   212,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,     0,
     235,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,    66,    67,     0,     0,
       0,     0,     0,     0,    92,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
      66,    67,     0,     0,     0,     0,     0,     0,   196,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,   205,     0,     0,     0,     0,     0,     0,     0,    66,
      67,     0,   198,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     113,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       2,   114,   216,   217,   115,   113,     0,   116,     0,   117,
     118,     0,     0,     0,     0,     2,   114,   119,     0,   115,
       0,     0,   116,   113,   117,   118,     0,     0,     0,     0,
     178,     0,   119,     2,   114,   113,     0,   115,     0,     0,
     116,     0,   117,   118,     0,     2,   114,   113,   201,   115,
     119,     0,   116,   222,   117,   118,     0,     2,   114,   113,
     229,   115,   119,     0,   116,     0,   117,   118,     0,     2,
     114,   113,     0,   115,   119,   238,   116,     0,   117,   118,
       0,     2,   114,     0,     0,   115,   119,     0,   116,     0,
     117,   118,    66,    67,     0,     0,     0,     0,   119,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    67,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    72,    73,    74,    75,
      76,    77,    78,    79
};

static const yytype_int16 yycheck[] =
{
       0,     0,   112,     0,    23,     2,    59,     4,     3,     9,
       9,    18,     9,    44,    45,    46,    47,     4,    37,    81,
       7,     8,     9,    10,     7,     8,     9,    10,    33,    60,
      58,   144,     3,    61,    29,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   111,
       0,    58,   204,    58,     3,     4,     5,     6,    46,    56,
     173,    53,    11,    12,   216,    58,    58,   177,    61,    61,
      58,     4,    59,   135,    54,    24,    59,    56,   230,     3,
      59,    61,     3,    83,    83,    34,    35,   239,   119,    13,
      14,    58,     3,    17,    61,    60,    20,    58,    22,    23,
      61,    56,    13,    43,    44,    45,    30,    56,   139,    83,
       3,     4,   112,   112,    57,    58,    27,   148,   115,   150,
      31,    44,    45,   142,   155,   156,   157,   158,   159,   160,
      56,    55,     3,     4,   134,   134,    83,    53,   112,     3,
      56,    47,    58,    59,   206,    61,   146,   146,     7,     8,
       9,    10,   183,    39,    40,    41,    42,    43,    44,    45,
     134,   223,    57,    55,    61,   112,   197,    57,    55,    83,
      61,    27,   146,     3,   236,    32,   195,   177,   177,    60,
      60,   212,    45,    60,    58,   247,    55,   134,    56,    56,
       3,    56,    54,   193,   193,   226,    57,    55,   112,   146,
      13,    14,    55,   177,    17,    55,    55,    20,   205,    22,
      23,   211,   211,   213,   213,    28,    55,    30,    55,   193,
     134,    55,    55,    55,   224,   224,    42,    43,    44,    45,
     177,    55,   146,    61,   234,   234,   233,   211,    59,   213,
      55,    55,   242,   242,    61,    18,   193,    55,    60,    59,
     224,     4,    61,    19,    61,   202,    60,   204,    61,    61,
     234,    60,     9,   177,   211,    61,   213,     9,   242,   216,
      46,    -1,    48,    49,    50,    51,    52,   224,    -1,   193,
      -1,    -1,    -1,   230,    -1,    -1,    -1,   234,   202,    -1,
     204,    -1,   239,    -1,    -1,   242,    -1,   211,    -1,   213,
      -1,    -1,   216,    41,    42,    43,    44,    45,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,
     234,    25,    26,    -1,    -1,   239,    -1,    -1,   242,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    60,    61,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    57,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    57,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       3,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      13,    14,    15,    16,    17,     3,    -1,    20,    -1,    22,
      23,    -1,    -1,    -1,    -1,    13,    14,    30,    -1,    17,
      -1,    -1,    20,     3,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    30,    13,    14,     3,    -1,    17,    -1,    -1,
      20,    -1,    22,    23,    -1,    13,    14,     3,    28,    17,
      30,    -1,    20,    21,    22,    23,    -1,    13,    14,     3,
      16,    17,    30,    -1,    20,    -1,    22,    23,    -1,    13,
      14,     3,    -1,    17,    30,    19,    20,    -1,    22,    23,
      -1,    13,    14,    -1,    -1,    17,    30,    -1,    20,    -1,
      22,    23,    25,    26,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    38,    39,    40,    41,
      42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    13,    27,    31,    64,    65,    66,    69,    70,
      71,    72,    73,    75,    77,    59,     3,    69,     3,    29,
      69,     0,    58,    61,    66,    71,     4,    46,    56,    56,
      61,     3,     7,     8,     9,    10,    68,    60,     3,     4,
       5,     6,    11,    12,    24,    34,    35,    56,    79,    80,
      81,    82,    93,     3,    76,    57,    47,    78,    55,    68,
      56,    59,    79,    79,    79,    79,    25,    26,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      61,    61,    57,    61,    69,    27,    74,    55,    79,    94,
       3,     4,    57,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    59,    67,    68,
      67,    54,    61,     3,    14,    17,    20,    22,    23,    30,
      69,    72,    73,    80,    83,    84,    86,    87,    88,    89,
      90,    91,    92,    93,    95,    61,     3,    32,    57,    58,
      60,    60,    60,    55,    58,    67,    95,    59,    56,    69,
      56,    55,    55,    79,    53,    46,    48,    49,    50,    51,
      52,    55,    55,    55,    55,    55,    55,    55,    28,    72,
      73,    84,    67,    56,    79,    68,    76,    61,    28,     4,
      79,    18,    79,    59,    79,    79,    79,    79,    79,    79,
      55,    55,    76,    95,    55,    60,    57,    59,    57,    79,
      57,    28,    61,    79,    61,    17,    54,    55,    72,    73,
      84,    85,    61,    85,    69,    67,    15,    16,    72,    73,
      84,    79,    21,    61,    85,    60,    61,     4,    67,    16,
      61,    79,    60,    18,    85,    60,    61,    69,    19,    61,
      67,    33,    85,     4,    55,    60,    19,    61,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    67,    67,    68,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    73,    74,    75,    75,    76,    76,    77,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    90,    91,
      92,    92,    93,    94,    94,    94,    95,    95,    95,    95,
      95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     8,     3,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       4,     6,     7,     7,     9,    11,     3,     5,     6,     5,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     1,     4,     4,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     1,     2,
       1,     7,     9,    11,    14,     1,     1,    11,    15,     7,
       1,     2,     4,     0,     1,     3,     1,     1,     1,     2,
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
#line 149 "myanalyzer.y"
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
#line 1716 "myanalyzer.tab.c"
    break;

  case 3: /* main_body: decl_body main  */
#line 173 "myanalyzer.y"
                 { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1722 "myanalyzer.tab.c"
    break;

  case 4: /* main_body: main  */
#line 174 "myanalyzer.y"
         { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1728 "myanalyzer.tab.c"
    break;

  case 5: /* main: KW_DEF KW_MAIN DEL_LPAR DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 178 "myanalyzer.y"
                                                                        {(yyval.crepr) = template("int main(){\n\t%s\n}", (yyvsp[-2].crepr));}
#line 1734 "myanalyzer.tab.c"
    break;

  case 6: /* types: DEL_LBLOCK DEL_RBLOCK basic_types  */
#line 184 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s*", (yyvsp[0].crepr)); }
#line 1740 "myanalyzer.tab.c"
    break;

  case 7: /* types: basic_types  */
#line 185 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1746 "myanalyzer.tab.c"
    break;

  case 8: /* basic_types: KW_INT  */
#line 188 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "int");}
#line 1752 "myanalyzer.tab.c"
    break;

  case 9: /* basic_types: KW_BOOLEAN  */
#line 189 "myanalyzer.y"
                   {(yyval.crepr) = template("%s", "int");}
#line 1758 "myanalyzer.tab.c"
    break;

  case 10: /* basic_types: KW_SCALAR  */
#line 190 "myanalyzer.y"
                  {(yyval.crepr) = template("%s","double");}
#line 1764 "myanalyzer.tab.c"
    break;

  case 11: /* basic_types: KW_STR  */
#line 191 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "char*");}
#line 1770 "myanalyzer.tab.c"
    break;

  case 12: /* identifiers: TK_IDENTIFIER  */
#line 196 "myanalyzer.y"
                       {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1776 "myanalyzer.tab.c"
    break;

  case 13: /* identifiers: identifiers DEL_COMMA TK_IDENTIFIER  */
#line 197 "myanalyzer.y"
                                              {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1782 "myanalyzer.tab.c"
    break;

  case 14: /* decl_body: decl_body declarations  */
#line 204 "myanalyzer.y"
                         { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1788 "myanalyzer.tab.c"
    break;

  case 15: /* decl_body: declarations  */
#line 205 "myanalyzer.y"
                 { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1794 "myanalyzer.tab.c"
    break;

  case 16: /* declarations: variable_declarations  */
#line 209 "myanalyzer.y"
                        { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1800 "myanalyzer.tab.c"
    break;

  case 17: /* declarations: complex_type_declarations  */
#line 210 "myanalyzer.y"
                              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1806 "myanalyzer.tab.c"
    break;

  case 18: /* declarations: constant_declarations  */
#line 211 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1812 "myanalyzer.tab.c"
    break;

  case 19: /* declarations: functions  */
#line 212 "myanalyzer.y"
              { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1818 "myanalyzer.tab.c"
    break;

  case 20: /* variable_declarations: identifiers DEL_COLON basic_types DEL_SMCOLON  */
#line 216 "myanalyzer.y"
                                                      {(yyval.crepr) = template("%s %s; ", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1824 "myanalyzer.tab.c"
    break;

  case 21: /* variable_declarations: TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK basic_types DEL_SMCOLON  */
#line 217 "myanalyzer.y"
                                                                           {(yyval.crepr) = template("%s %s[%s]; ", (yyvsp[-1].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr)); }
#line 1830 "myanalyzer.tab.c"
    break;

  case 22: /* constant_declarations: KW_CONST identifiers AP_ASSIGN expressions DEL_COLON types DEL_SMCOLON  */
#line 221 "myanalyzer.y"
                                                                               {(yyval.crepr) = template("const %s = %s;", (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1836 "myanalyzer.tab.c"
    break;

  case 23: /* function_declarations: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types  */
#line 228 "myanalyzer.y"
                                                                                     {(yyval.crepr) = template("\n%s (*) %s(%s)", (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1842 "myanalyzer.tab.c"
    break;

  case 24: /* functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 232 "myanalyzer.y"
                                                                                                     {(yyval.crepr) = template("\nvoid %s(%s) {\n%s\n}\n", (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 1848 "myanalyzer.tab.c"
    break;

  case 25: /* functions: KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON  */
#line 233 "myanalyzer.y"
                                                                                                                            {(yyval.crepr) = template("\n%s %s(%s) {\n%s\n\n}\n", (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-7].crepr), (yyvsp[-2].crepr));}
#line 1854 "myanalyzer.tab.c"
    break;

  case 26: /* parameter_declarations: TK_IDENTIFIER DEL_COLON types  */
#line 237 "myanalyzer.y"
                                {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1860 "myanalyzer.tab.c"
    break;

  case 27: /* parameter_declarations: TK_IDENTIFIER DEL_COLON types DEL_COMMA parameter_declarations  */
#line 238 "myanalyzer.y"
                                                                   {(yyval.crepr) = template("%s %s, %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1866 "myanalyzer.tab.c"
    break;

  case 28: /* complex_type_declarations: KW_COMP identifiers DEL_COLON comp_variable_declarations function_declarations KW_ENDCOMP  */
#line 245 "myanalyzer.y"
                                                                                            {(yyval.crepr) = template("\ntypedef struct %s {\n%s\n%s}%s\n %s", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[-1].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 1872 "myanalyzer.tab.c"
    break;

  case 29: /* comp_variable_declarations: AP_HASHASSIGN identifiers DEL_COLON types DEL_SMCOLON  */
#line 253 "myanalyzer.y"
                                                        {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1878 "myanalyzer.tab.c"
    break;

  case 30: /* expressions: identifier_expressions  */
#line 264 "myanalyzer.y"
                         { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1884 "myanalyzer.tab.c"
    break;

  case 31: /* expressions: TK_STRING  */
#line 265 "myanalyzer.y"
              {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1890 "myanalyzer.tab.c"
    break;

  case 32: /* expressions: KW_TRUE  */
#line 266 "myanalyzer.y"
            {(yyval.crepr) = template("%s", "1");}
#line 1896 "myanalyzer.tab.c"
    break;

  case 33: /* expressions: KW_FALSE  */
#line 267 "myanalyzer.y"
             {(yyval.crepr) = template("%s", "0");}
#line 1902 "myanalyzer.tab.c"
    break;

  case 34: /* expressions: function_statement  */
#line 268 "myanalyzer.y"
                       { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1908 "myanalyzer.tab.c"
    break;

  case 35: /* expressions: arithmetic_expressions  */
#line 269 "myanalyzer.y"
                           { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1914 "myanalyzer.tab.c"
    break;

  case 36: /* expressions: relational_expressions  */
#line 270 "myanalyzer.y"
                           { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1920 "myanalyzer.tab.c"
    break;

  case 37: /* expressions: KW_NOT expressions  */
#line 271 "myanalyzer.y"
                       {(yyval.crepr) = template("! %s", (yyvsp[0].crepr));}
#line 1926 "myanalyzer.tab.c"
    break;

  case 38: /* expressions: expressions KW_AND expressions  */
#line 272 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1932 "myanalyzer.tab.c"
    break;

  case 39: /* expressions: expressions KW_OR expressions  */
#line 273 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1938 "myanalyzer.tab.c"
    break;

  case 40: /* expressions: DEL_LPAR expressions DEL_RPAR  */
#line 274 "myanalyzer.y"
                                  {(yyval.crepr) = template("(%s)", (yyvsp[-1].crepr));}
#line 1944 "myanalyzer.tab.c"
    break;

  case 41: /* identifier_expressions: TK_IDENTIFIER  */
#line 278 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1950 "myanalyzer.tab.c"
    break;

  case 42: /* identifier_expressions: TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK  */
#line 279 "myanalyzer.y"
                                                   { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1956 "myanalyzer.tab.c"
    break;

  case 43: /* identifier_expressions: TK_IDENTIFIER DEL_LBLOCK TK_IDENTIFIER DEL_RBLOCK  */
#line 280 "myanalyzer.y"
                                                      { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1962 "myanalyzer.tab.c"
    break;

  case 44: /* arithmetic_expressions: TK_INTEGER  */
#line 284 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1968 "myanalyzer.tab.c"
    break;

  case 45: /* arithmetic_expressions: TK_FLOAT  */
#line 285 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1974 "myanalyzer.tab.c"
    break;

  case 46: /* arithmetic_expressions: expressions OP_POWER expressions  */
#line 286 "myanalyzer.y"
                                     {(yyval.crepr) = template("pow(%s, %s)", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1980 "myanalyzer.tab.c"
    break;

  case 47: /* arithmetic_expressions: expressions OP_MULT expressions  */
#line 287 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s * %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1986 "myanalyzer.tab.c"
    break;

  case 48: /* arithmetic_expressions: expressions OP_DIV expressions  */
#line 288 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1992 "myanalyzer.tab.c"
    break;

  case 49: /* arithmetic_expressions: expressions OP_MOD expressions  */
#line 289 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s % %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1998 "myanalyzer.tab.c"
    break;

  case 50: /* arithmetic_expressions: expressions OP_PLUS expressions  */
#line 290 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2004 "myanalyzer.tab.c"
    break;

  case 51: /* arithmetic_expressions: expressions OP_MINUS expressions  */
#line 291 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2010 "myanalyzer.tab.c"
    break;

  case 52: /* arithmetic_expressions: OP_PLUS expressions  */
#line 292 "myanalyzer.y"
                        {(yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 2016 "myanalyzer.tab.c"
    break;

  case 53: /* arithmetic_expressions: OP_MINUS expressions  */
#line 293 "myanalyzer.y"
                         {(yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 2022 "myanalyzer.tab.c"
    break;

  case 54: /* relational_expressions: expressions RP_LESS expressions  */
#line 297 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s < %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2028 "myanalyzer.tab.c"
    break;

  case 55: /* relational_expressions: expressions RP_LESSEQUALS expressions  */
#line 298 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2034 "myanalyzer.tab.c"
    break;

  case 56: /* relational_expressions: expressions RP_MORE expressions  */
#line 299 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2040 "myanalyzer.tab.c"
    break;

  case 57: /* relational_expressions: expressions RP_MOREEQUALS expressions  */
#line 300 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2046 "myanalyzer.tab.c"
    break;

  case 58: /* relational_expressions: expressions RP_EQUALS expressions  */
#line 301 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2052 "myanalyzer.tab.c"
    break;

  case 59: /* relational_expressions: expressions RP_NOTEQUALS expressions  */
#line 302 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2058 "myanalyzer.tab.c"
    break;

  case 60: /* assign_expressions: identifier_expressions AP_ASSIGN expressions  */
#line 306 "myanalyzer.y"
                                               {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2064 "myanalyzer.tab.c"
    break;

  case 61: /* assign_expressions: identifier_expressions AP_PLUSASSIGN expressions  */
#line 307 "myanalyzer.y"
                                                     {(yyval.crepr) = template("%s += %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2070 "myanalyzer.tab.c"
    break;

  case 62: /* assign_expressions: identifier_expressions AP_MINASSIGN expressions  */
#line 308 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s -= %s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2076 "myanalyzer.tab.c"
    break;

  case 63: /* assign_expressions: identifier_expressions AP_MULASSIGN expressions  */
#line 309 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s *= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2082 "myanalyzer.tab.c"
    break;

  case 64: /* assign_expressions: identifier_expressions AP_DIVASSIGN expressions  */
#line 310 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s /= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2088 "myanalyzer.tab.c"
    break;

  case 65: /* assign_expressions: identifier_expressions AP_MODASSIGN expressions  */
#line 311 "myanalyzer.y"
                                                    {(yyval.crepr) = template("%s %= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2094 "myanalyzer.tab.c"
    break;

  case 66: /* statements: if_statement DEL_SMCOLON  */
#line 316 "myanalyzer.y"
                           { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2100 "myanalyzer.tab.c"
    break;

  case 67: /* statements: for_statement DEL_SMCOLON  */
#line 317 "myanalyzer.y"
                              { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2106 "myanalyzer.tab.c"
    break;

  case 68: /* statements: array_statement DEL_SMCOLON  */
#line 318 "myanalyzer.y"
                                { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2112 "myanalyzer.tab.c"
    break;

  case 69: /* statements: while_statement DEL_SMCOLON  */
#line 319 "myanalyzer.y"
                                { (yyval.crepr) = template("%s", (yyvsp[-1].crepr)); }
#line 2118 "myanalyzer.tab.c"
    break;

  case 70: /* statements: KW_BREAK DEL_SMCOLON  */
#line 320 "myanalyzer.y"
                         {(yyval.crepr) = template("break;");}
#line 2124 "myanalyzer.tab.c"
    break;

  case 71: /* statements: KW_CONTINUE DEL_SMCOLON  */
#line 321 "myanalyzer.y"
                            {(yyval.crepr) = template("continue;");}
#line 2130 "myanalyzer.tab.c"
    break;

  case 72: /* statements: assign_expressions DEL_SMCOLON  */
#line 322 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s;", (yyvsp[-1].crepr));}
#line 2136 "myanalyzer.tab.c"
    break;

  case 73: /* statements: return_statement DEL_SMCOLON  */
#line 323 "myanalyzer.y"
                                 { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2142 "myanalyzer.tab.c"
    break;

  case 74: /* statements: function_statement DEL_SMCOLON  */
#line 324 "myanalyzer.y"
                                  { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2148 "myanalyzer.tab.c"
    break;

  case 75: /* command_statements: statements  */
#line 327 "myanalyzer.y"
             { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2154 "myanalyzer.tab.c"
    break;

  case 76: /* command_statements: command_statements statements  */
#line 328 "myanalyzer.y"
                                  { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2160 "myanalyzer.tab.c"
    break;

  case 77: /* command_statements: command_statements variable_declarations  */
#line 329 "myanalyzer.y"
                                             { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2166 "myanalyzer.tab.c"
    break;

  case 78: /* command_statements: variable_declarations  */
#line 330 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2172 "myanalyzer.tab.c"
    break;

  case 79: /* command_statements: command_statements constant_declarations  */
#line 331 "myanalyzer.y"
                                             { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2178 "myanalyzer.tab.c"
    break;

  case 80: /* command_statements: constant_declarations  */
#line 332 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2184 "myanalyzer.tab.c"
    break;

  case 81: /* if_statement: KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDIF  */
#line 337 "myanalyzer.y"
                                                                            {(yyval.crepr) = template("if (%s) {\n %s\n}", (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2190 "myanalyzer.tab.c"
    break;

  case 82: /* if_statement: KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ELSE command_statements KW_ENDIF  */
#line 338 "myanalyzer.y"
                                                                                                         {(yyval.crepr) = template("if (%s) {\n\t%s;\n} else {\n\t %s\n}", (yyvsp[-6].crepr), (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2196 "myanalyzer.tab.c"
    break;

  case 83: /* for_statement: KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR  */
#line 343 "myanalyzer.y"
                                                                                                                           {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s++) {\n\t%s;\n}", (yyvsp[-9].crepr), (yyvsp[-6].crepr), (yyvsp[-9].crepr), (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-1].crepr));}
#line 2202 "myanalyzer.tab.c"
    break;

  case 84: /* for_statement: KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements DEL_SMCOLON KW_ENDFOR  */
#line 344 "myanalyzer.y"
                                                                                                                                                              {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s = %s %s) {\n\t%s\n}", (yyvsp[-12].crepr), (yyvsp[-9].crepr), (yyvsp[-12].crepr), (yyvsp[-7].crepr), (yyvsp[-12].crepr), (yyvsp[-12].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2208 "myanalyzer.tab.c"
    break;

  case 85: /* array_statement: integral_array  */
#line 349 "myanalyzer.y"
                 { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2214 "myanalyzer.tab.c"
    break;

  case 86: /* array_statement: other_array  */
#line 350 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2220 "myanalyzer.tab.c"
    break;

  case 87: /* integral_array: identifiers AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR identifiers DEL_COLON TK_INTEGER DEL_RBLOCK DEL_COLON types  */
#line 354 "myanalyzer.y"
                                                                                                                       {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(%s %s = 0; %s < %s; ++%s) {\n\t %s[%s] = %s}", (yyvsp[0].crepr), (yyvsp[-10].crepr), (yyvsp[0].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr), (yyvsp[0].crepr), (yyvsp[-7].crepr), (yyvsp[-3].crepr), (yyvsp[-7].crepr), (yyvsp[-10].crepr), (yyvsp[-7].crepr), (yyvsp[-7].crepr));}
#line 2226 "myanalyzer.tab.c"
    break;

  case 88: /* other_array: identifiers AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR identifiers DEL_COLON types KW_IN identifiers KW_OF TK_INTEGER DEL_RBLOCK DEL_COLON types  */
#line 358 "myanalyzer.y"
                                                                                                                                                     {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(int %s10_i = 0; %s10_i < %s12; ++%s10_i) {\n\t %s1[%s10_i] = %s4}", (yyvsp[0].crepr), (yyvsp[-14].crepr), (yyvsp[0].crepr), (yyvsp[-3].crepr), (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-5].crepr), (yyvsp[-14].crepr), (yyvsp[-5].crepr), (yyvsp[-11].crepr));}
#line 2232 "myanalyzer.tab.c"
    break;

  case 89: /* while_statement: KW_WHILE DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDWHILE  */
#line 363 "myanalyzer.y"
                                                                                  {(yyval.crepr) = template("while (%s) {\n\t statements\n}", (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 2238 "myanalyzer.tab.c"
    break;

  case 90: /* return_statement: KW_RETURN  */
#line 368 "myanalyzer.y"
            {(yyval.crepr) = template("return");}
#line 2244 "myanalyzer.tab.c"
    break;

  case 91: /* return_statement: KW_RETURN expressions  */
#line 369 "myanalyzer.y"
                          {(yyval.crepr) = template("return %s", (yyvsp[0].crepr));}
#line 2250 "myanalyzer.tab.c"
    break;

  case 92: /* function_statement: TK_IDENTIFIER DEL_LPAR function_arg DEL_RPAR  */
#line 374 "myanalyzer.y"
                                               {(yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2256 "myanalyzer.tab.c"
    break;

  case 93: /* function_arg: %empty  */
#line 378 "myanalyzer.y"
         { (yyval.crepr) = ""; }
#line 2262 "myanalyzer.tab.c"
    break;

  case 94: /* function_arg: expressions  */
#line 379 "myanalyzer.y"
                { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2268 "myanalyzer.tab.c"
    break;

  case 95: /* function_arg: function_arg DEL_COMMA expressions  */
#line 380 "myanalyzer.y"
                                       { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 2274 "myanalyzer.tab.c"
    break;

  case 96: /* body: statements  */
#line 384 "myanalyzer.y"
             { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2280 "myanalyzer.tab.c"
    break;

  case 97: /* body: variable_declarations  */
#line 385 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2286 "myanalyzer.tab.c"
    break;

  case 98: /* body: constant_declarations  */
#line 386 "myanalyzer.y"
                          { (yyval.crepr) = (yyvsp[0].crepr); }
#line 2292 "myanalyzer.tab.c"
    break;

  case 99: /* body: body statements  */
#line 387 "myanalyzer.y"
                    { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2298 "myanalyzer.tab.c"
    break;

  case 100: /* body: body variable_declarations  */
#line 388 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2304 "myanalyzer.tab.c"
    break;

  case 101: /* body: body constant_declarations  */
#line 389 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2310 "myanalyzer.tab.c"
    break;


#line 2314 "myanalyzer.tab.c"

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

#line 392 "myanalyzer.y"

int main(void) {
    if ( yyparse() != 0 )
    printf("\nRejected!\n");
}
