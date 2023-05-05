/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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


#line 82 "myanalyzer.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_IDENTIFIER = 258,
    KW_INT = 259,
    KW_SCALAR = 260,
    KW_STR = 261,
    KW_BOOLEAN = 262,
    KW_TRUE = 263,
    KW_FALSE = 264,
    KW_CONST = 265,
    KW_IF = 266,
    KW_ELSE = 267,
    KW_ENDIF = 268,
    KW_FOR = 269,
    KW_IN = 270,
    KW_ENDFOR = 271,
    KW_WHILE = 272,
    KW_ENDWHILE = 273,
    KW_BREAK = 274,
    KW_CONTINUE = 275,
    KW_NOT = 276,
    KW_AND = 277,
    KW_OR = 278,
    KW_DEF = 279,
    KW_ENDDEF = 280,
    KW_MAIN = 281,
    KW_RETURN = 282,
    KW_COMP = 283,
    KW_ENDCOMP = 284,
    KW_OF = 285,
    TK_INTEGER = 286,
    TK_FLOAT = 287,
    TK_STRING = 288,
    OP_PLUS = 289,
    OP_MINUS = 290,
    OP_MULT = 291,
    OP_DIV = 292,
    OP_MOD = 293,
    OP_POWER = 294,
    RP_EQUALS = 295,
    RP_NOTEQUALS = 296,
    RP_LESS = 297,
    RP_LESSEQUALS = 298,
    RP_MORE = 299,
    RP_MOREEQUALS = 300,
    AP_ASSIGN = 301,
    AP_HASHASSIGN = 302,
    AP_PLUSASSIGN = 303,
    AP_MINASSIGN = 304,
    AP_MULASSIGN = 305,
    AP_DIVASSIGN = 306,
    AP_MODASSIGN = 307,
    AP_COLONASSIGN = 308,
    AP_ARROWASSIGN = 309,
    DEL_SMCOLON = 310,
    DEL_LPAR = 311,
    DEL_RPAR = 312,
    DEL_COMMA = 313,
    DEL_LBLOCK = 314,
    DEL_RBLOCK = 315,
    DEL_COLON = 316,
    DEL_DOT = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "myanalyzer.y"

  char* crepr;

#line 201 "myanalyzer.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1021

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

#define YYUNDEFTOK  2
#define YYMAXUTOK   317


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,   140,   140,   165,   166,   167,   168,   169,   173,   179,
     180,   181,   182,   187,   188,   189,   190,   197,   201,   208,
     212,   213,   217,   218,   225,   233,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   275,   276,   277,   278,   279,   280,   284,   285,   286,
     287,   288,   289,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   309,   310,   315,   316,   321,   322,   326,
     330,   335,   340,   341,   346,   347,   351,   352,   353,   354,
     355
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_IDENTIFIER", "KW_INT", "KW_SCALAR",
  "KW_STR", "KW_BOOLEAN", "KW_TRUE", "KW_FALSE", "KW_CONST", "KW_IF",
  "KW_ELSE", "KW_ENDIF", "KW_FOR", "KW_IN", "KW_ENDFOR", "KW_WHILE",
  "KW_ENDWHILE", "KW_BREAK", "KW_CONTINUE", "KW_NOT", "KW_AND", "KW_OR",
  "KW_DEF", "KW_ENDDEF", "KW_MAIN", "KW_RETURN", "KW_COMP", "KW_ENDCOMP",
  "KW_OF", "TK_INTEGER", "TK_FLOAT", "TK_STRING", "OP_PLUS", "OP_MINUS",
  "OP_MULT", "OP_DIV", "OP_MOD", "OP_POWER", "RP_EQUALS", "RP_NOTEQUALS",
  "RP_LESS", "RP_LESSEQUALS", "RP_MORE", "RP_MOREEQUALS", "AP_ASSIGN",
  "AP_HASHASSIGN", "AP_PLUSASSIGN", "AP_MINASSIGN", "AP_MULASSIGN",
  "AP_DIVASSIGN", "AP_MODASSIGN", "AP_COLONASSIGN", "AP_ARROWASSIGN",
  "DEL_SMCOLON", "DEL_LPAR", "DEL_RPAR", "DEL_COMMA", "DEL_LBLOCK",
  "DEL_RBLOCK", "DEL_COLON", "DEL_DOT", "$accept", "program", "main_body",
  "main", "types", "identifiers", "variable_declarations",
  "constant_declarations", "function_declarations", "functions",
  "parameter_declarations", "complex_type_declarations",
  "comp_variable_declarations", "expressions", "arithmetic_expressions",
  "relational_expressions", "assign_expressions", "statements",
  "if_statement", "for_statement", "array_statement", "integral_array",
  "other_array", "while_statement", "return_statement",
  "function_statement", "body", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,   -27,    36,    14,    36,    57,  -122,  -122,   -20,    21,
      21,    21,    21,   218,   -39,    28,   -50,    51,  -122,   368,
      49,  -122,  -122,  -122,  -122,  -122,  -122,   368,  -122,  -122,
    -122,   368,   368,   368,  -122,    76,   515,  -122,  -122,  -122,
    -122,   368,    38,    36,    52,   732,  -122,  -122,  -122,  -122,
      62,   732,   811,   834,   577,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,  -122,   368,  -122,   453,
      46,    55,    61,    36,   115,  -122,  -122,   608,   762,   787,
     811,   834,   856,   877,   897,   897,   915,   932,   948,   963,
     209,    75,    75,   146,   323,   104,    53,   -29,   732,    49,
    -122,    49,   -33,    70,    36,   111,  -122,   368,   102,   262,
     105,    49,  -122,    49,    94,  -122,   639,  -122,   109,    36,
     110,   116,  -122,   118,   361,    83,    40,  -122,  -122,   732,
    -122,    83,    83,    83,  -122,  -122,    83,  -122,    83,    36,
     114,   295,   121,    36,  -122,   368,   -10,   368,  -122,  -122,
    -122,   732,    29,  -122,    83,   119,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,   124,  -122,   113,   670,   122,   701,   368,
     328,  -122,   134,   132,   368,   139,   391,   147,    49,    83,
     484,    83,    36,  -122,  -122,   150,   368,   189,    86,    34,
     422,   153,    84,    83,  -122,   149,   368,  -122,   156,   198,
     169,    83,   546,   167,    36,   217,   215,   171,    49,   -16,
    -122,   178,    83,   179,   204,  -122,   181,  -122,   180,   222,
     182,   187,    49,  -122,   190,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    13,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     1,    26,
       0,     6,     5,     7,     4,    29,    30,    26,    41,    42,
      28,    26,    26,    26,    15,    27,     0,    33,    34,    38,
      31,    26,     0,     0,     0,    16,     9,    11,    12,    10,
       0,    35,    49,    50,     0,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    39,    26,    14,     0,
       0,     0,     0,     0,     0,    17,    32,     0,    36,    37,
      47,    48,    44,    45,    46,    43,    55,    56,    51,    52,
      53,    54,    57,    58,    59,    60,    61,    62,    40,     0,
      86,     0,     0,     0,     0,     0,    84,    26,     0,    26,
      22,     0,    86,     0,     0,    24,     0,    18,     0,     0,
       0,     0,    69,     0,    26,    63,    27,    90,    89,    87,
      88,    63,    63,    63,    77,    78,    63,    70,    31,     0,
       0,    26,     0,     0,    85,    26,     0,    26,    68,     8,
      82,    83,     0,    72,    63,     0,    64,    65,    66,    67,
      71,    23,    86,     0,    25,     0,     0,     0,     0,    26,
      26,    20,     0,     0,    26,     0,     0,     0,     0,     0,
       0,    63,     0,    21,    19,     0,    26,     0,     0,     0,
       0,     0,     0,     0,    73,     0,    26,    81,     0,     0,
       0,    63,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    75,     0,    79,     0,     0,
       0,     0,     0,    76,     0,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,   174,  -122,   -96,     0,  -101,   -99,  -122,  -122,
    -116,  -122,  -122,     3,  -122,  -122,  -122,    77,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,    26,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    50,    35,     9,    10,   115,    11,
      82,    12,    84,   139,    37,    38,    39,   140,   141,   142,
     143,   144,   145,   146,   147,    40,   119
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       8,   151,    14,    16,    17,   177,    43,    41,    19,     8,
       8,     8,     8,   118,   224,   120,    36,     1,   137,    19,
     138,   121,    45,    75,     1,   150,    76,   152,   122,    77,
      51,     2,    13,   171,    52,    53,    54,   175,    19,     1,
      15,    20,    19,    81,    79,     3,   203,   204,    19,     4,
     137,   180,   138,    46,    47,    48,    49,    18,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   137,
     108,   138,   165,   113,    42,    55,     1,    19,    46,    47,
      48,    49,   194,   165,   128,    80,    55,   129,    19,    83,
     130,    20,   131,   132,    74,    75,   209,   110,    76,    19,
     134,    77,    44,    19,   124,   208,   111,    85,   112,   136,
     126,    70,   223,    71,    72,    73,    74,    75,    19,   156,
      76,   123,    55,    77,    19,   162,   234,   161,   135,   114,
     125,   162,   162,   162,    19,   148,   162,   202,   162,    81,
     153,   136,    19,    81,    73,    74,    75,   127,   176,    76,
     178,   164,    77,   149,   162,   155,   157,   164,   164,   164,
     182,   158,   164,   159,   164,   172,   174,   148,   179,   181,
     136,   184,   186,    21,    22,    23,    24,   190,   188,   162,
     164,   162,   198,   189,    71,    72,    73,    74,    75,   200,
     191,    76,   193,   162,    77,   199,   148,   201,   207,   212,
     211,   162,   163,   214,   219,   164,   213,   164,   166,   167,
     168,     1,   162,   169,   215,   170,    25,    26,   218,   164,
     220,   221,   222,   225,   227,   228,   229,   164,   231,    27,
     230,   170,   233,   232,     0,   235,     0,     0,   164,    28,
      29,    30,    31,    32,    69,    70,     0,    71,    72,    73,
      74,    75,     0,     0,    76,     1,   195,    77,   197,     0,
      25,    26,     2,   128,    33,     0,   129,     0,    34,   130,
     210,   131,   132,    27,     0,     0,     0,   133,   216,   134,
       0,     0,     0,    28,    29,    30,    31,    32,     1,   226,
       0,     0,     0,    25,    26,     2,   128,     0,     0,   129,
       0,     0,   130,     0,   131,   132,    27,   135,    33,     0,
     173,     0,   134,     0,     0,     0,    28,    29,    30,    31,
      32,     1,     0,     0,     0,     0,    25,    26,     2,   128,
       0,     0,   129,     0,     0,   130,     0,   131,   132,    27,
     135,    33,     0,   187,     0,   134,     0,     0,     0,    28,
      29,    30,    31,    32,     1,     0,     0,     0,     0,    25,
      26,     1,    72,    73,    74,    75,    25,    26,    76,     0,
       0,    77,    27,   135,    33,     0,     0,     0,     0,    27,
       0,     0,    28,    29,    30,    31,    32,     0,     0,    28,
      29,    30,    31,    32,     0,   192,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     0,   160,    33,     0,     0,
       0,     0,     0,     0,    33,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    71,
      72,    73,    74,    75,    56,    57,    76,     0,     0,    77,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    56,    57,    76,     0,     0,
      77,     0,   205,   206,     0,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,    71,    72,    73,    74,    75,    56,    57,    76,     0,
       0,    77,     0,     0,   109,     0,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,    73,    74,    75,    56,    57,    76,
       0,     0,    77,     0,     0,   196,     0,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,    71,    72,    73,    74,    75,    56,    57,
      76,     0,     0,    77,     0,    78,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,    71,    72,    73,    74,    75,    56,
      57,    76,     0,     0,    77,     0,   217,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      56,    57,    76,     0,    86,    77,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,    73,    74,
      75,    56,    57,    76,     0,   116,   117,     0,     0,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,    71,    72,    73,
      74,    75,    56,    57,    76,     0,   154,    77,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,    71,    72,
      73,    74,    75,    56,    57,    76,     0,   183,    77,     0,
       0,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    71,
      72,    73,    74,    75,    56,    57,    76,     0,   185,    77,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    57,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,     0,     0,    76,     0,     0,
      77,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,    71,    72,    73,    74,    75,
       0,     0,    76,     0,     0,    77,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    71,
      72,    73,    74,    75,     0,     0,    76,     0,     0,    77,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,    73,    74,    75,     0,     0,    76,
       0,     0,    77,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,    71,    72,    73,    74,    75,     0,
       0,    76,     0,     0,    77,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,    71,    72,    73,    74,    75,
       0,     0,    76,     0,     0,    77,    63,    64,    65,    66,
      67,    68,    69,    70,     0,    71,    72,    73,    74,    75,
       0,     0,    76,     0,     0,    77,    65,    66,    67,    68,
      69,    70,     0,    71,    72,    73,    74,    75,     0,     0,
      76,     0,     0,    77,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,     0,     0,    76,     0,     0,
      77,    67,    68,    69,    70,     0,    71,    72,    73,    74,
      75,     0,     0,    76,     0,     0,    77,    68,    69,    70,
       0,    71,    72,    73,    74,    75,     0,     0,    76,     0,
       0,    77
};

static const yytype_int16 yycheck[] =
{
       0,   122,     2,     3,     4,    15,    56,    46,    58,     9,
      10,    11,    12,   109,    30,   111,    13,     3,   119,    58,
     119,    54,    19,    52,     3,   121,    55,   123,    61,    58,
      27,    10,    59,   149,    31,    32,    33,   153,    58,     3,
      26,    61,    58,    43,    41,    24,    12,    13,    58,    28,
     151,   172,   151,     4,     5,     6,     7,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   180,
      77,   180,    53,    83,    56,    56,     3,    58,     4,     5,
       6,     7,   188,    53,    11,    57,    56,    14,    58,    47,
      17,    61,    19,    20,    51,    52,   202,    61,    55,    58,
      27,    58,    61,    58,   114,    31,    61,    55,    57,   119,
     117,    46,   218,    48,    49,    50,    51,    52,    58,   129,
      55,    61,    56,    58,    58,   135,   232,   134,    55,    24,
      29,   141,   142,   143,    58,   119,   146,    61,   148,   149,
      56,   151,    58,   153,    50,    51,    52,    55,   155,    55,
     157,   135,    58,    58,   164,    56,    56,   141,   142,   143,
      57,    55,   146,    55,   148,    61,    55,   151,    59,    55,
     180,    59,   179,     9,    10,    11,    12,   184,    54,   189,
     164,   191,   192,    61,    48,    49,    50,    51,    52,   196,
      61,    55,    55,   203,    58,    55,   180,    18,    55,   206,
      61,   211,   135,    15,   214,   189,    60,   191,   141,   142,
     143,     3,   222,   146,    55,   148,     8,     9,    61,   203,
      13,    16,    61,    55,    55,    31,    55,   211,    16,    21,
      60,   164,    55,    61,    -1,    55,    -1,    -1,   222,    31,
      32,    33,    34,    35,    45,    46,    -1,    48,    49,    50,
      51,    52,    -1,    -1,    55,     3,   189,    58,   191,    -1,
       8,     9,    10,    11,    56,    -1,    14,    -1,    60,    17,
     203,    19,    20,    21,    -1,    -1,    -1,    25,   211,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    35,     3,   222,
      -1,    -1,    -1,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    19,    20,    21,    55,    56,    -1,
      25,    -1,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,     3,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,    21,
      55,    56,    -1,    25,    -1,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    35,     3,    -1,    -1,    -1,    -1,     8,
       9,     3,    49,    50,    51,    52,     8,     9,    55,    -1,
      -1,    58,    21,    55,    56,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    31,    32,    33,    34,    35,    -1,    -1,    31,
      32,    33,    34,    35,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    22,    23,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    22,    23,    55,    -1,    -1,
      58,    -1,    60,    61,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    22,    23,    55,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    22,    23,    55,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    22,    23,
      55,    -1,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    22,
      23,    55,    -1,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      22,    23,    55,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    22,    23,    55,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    22,    23,    55,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    22,    23,    55,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    22,    23,    55,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    23,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    -1,    58,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    -1,    58,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    -1,    58,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    -1,    -1,    55,    -1,    -1,    58,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    55,    -1,
      -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    10,    24,    28,    64,    65,    66,    68,    69,
      70,    72,    74,    59,    68,    26,    68,    68,     0,    58,
      61,    65,    65,    65,    65,     8,     9,    21,    31,    32,
      33,    34,    35,    56,    60,    68,    76,    77,    78,    79,
      88,    46,    56,    56,    61,    76,     4,     5,     6,     7,
      67,    76,    76,    76,    76,    56,    22,    23,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    48,    49,    50,    51,    52,    55,    58,    60,    76,
      57,    68,    73,    47,    75,    55,    57,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    61,
      61,    61,    57,    68,    24,    71,    57,    58,    67,    89,
      67,    54,    61,    61,    68,    29,    76,    55,    11,    14,
      17,    19,    20,    25,    27,    55,    68,    69,    70,    76,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    58,
      67,    89,    67,    56,    57,    56,    68,    56,    55,    55,
      55,    76,    68,    80,    88,    53,    80,    80,    80,    80,
      80,    73,    61,    25,    55,    73,    76,    15,    76,    59,
      89,    55,    57,    57,    59,    57,    76,    25,    54,    61,
      76,    61,    14,    55,    67,    80,    61,    80,    68,    55,
      76,    18,    61,    12,    13,    60,    61,    55,    31,    67,
      80,    61,    76,    60,    15,    55,    80,    60,    61,    68,
      13,    16,    61,    67,    30,    55,    80,    55,    31,    55,
      60,    16,    61,    55,    67,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    66,    67,
      67,    67,    67,    68,    68,    68,    68,    69,    70,    71,
      72,    72,    73,    73,    74,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      85,    86,    87,    87,    88,    88,    89,    89,    89,    89,
      89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     8,     1,
       1,     1,     1,     1,     4,     3,     3,     4,     7,     7,
       9,    11,     3,     5,     6,     5,     0,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     3,     3,     1,     2,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     2,     2,     2,     2,     2,     1,
       1,     2,     2,     8,    11,    12,    15,     1,     1,    12,
      16,     8,     2,     2,     4,     6,     0,     2,     2,     2,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 141 "myanalyzer.y"
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

  case 3:
#line 165 "myanalyzer.y"
       { (yyval.crepr) = template("%s\n",(yyvsp[0].crepr));}
#line 1722 "myanalyzer.tab.c"
    break;

  case 4:
#line 166 "myanalyzer.y"
                                        { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1728 "myanalyzer.tab.c"
    break;

  case 5:
#line 167 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1734 "myanalyzer.tab.c"
    break;

  case 6:
#line 168 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1740 "myanalyzer.tab.c"
    break;

  case 7:
#line 169 "myanalyzer.y"
                        { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1746 "myanalyzer.tab.c"
    break;

  case 8:
#line 173 "myanalyzer.y"
                                                                        {(yyval.crepr) = template("int main(){\n\t%s\n}", (yyvsp[-2].crepr));}
#line 1752 "myanalyzer.tab.c"
    break;

  case 9:
#line 179 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "int");}
#line 1758 "myanalyzer.tab.c"
    break;

  case 10:
#line 180 "myanalyzer.y"
                   {(yyval.crepr) = template("%s", "int");}
#line 1764 "myanalyzer.tab.c"
    break;

  case 11:
#line 181 "myanalyzer.y"
                  {(yyval.crepr) = template("%s","double");}
#line 1770 "myanalyzer.tab.c"
    break;

  case 12:
#line 182 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "char*");}
#line 1776 "myanalyzer.tab.c"
    break;

  case 13:
#line 187 "myanalyzer.y"
                       {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1782 "myanalyzer.tab.c"
    break;

  case 14:
#line 188 "myanalyzer.y"
                                                          {(yyval.crepr) = template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1788 "myanalyzer.tab.c"
    break;

  case 15:
#line 189 "myanalyzer.y"
                                        {(yyval.crepr) = template("%s*",(yyvsp[-2].crepr));}
#line 1794 "myanalyzer.tab.c"
    break;

  case 16:
#line 190 "myanalyzer.y"
                                            {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1800 "myanalyzer.tab.c"
    break;

  case 17:
#line 197 "myanalyzer.y"
                                                {(yyval.crepr) = template("%s %s; ", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1806 "myanalyzer.tab.c"
    break;

  case 18:
#line 201 "myanalyzer.y"
                                                                               {(yyval.crepr) = template("const %s = %s;", (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1812 "myanalyzer.tab.c"
    break;

  case 19:
#line 208 "myanalyzer.y"
                                                                                   {(yyval.crepr) = template("\n%s (*) %s(%s)", (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1818 "myanalyzer.tab.c"
    break;

  case 20:
#line 212 "myanalyzer.y"
                                                                                                   {(yyval.crepr) = template("\nvoid %s(%s) {\n%s\n}\n", (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 1824 "myanalyzer.tab.c"
    break;

  case 21:
#line 213 "myanalyzer.y"
                                                                                                                          {(yyval.crepr) = template("\n%s %s(%s) {\n%s\n\n}\n", (yyvsp[-4].crepr), (yyvsp[-9].crepr), (yyvsp[-7].crepr), (yyvsp[-2].crepr));}
#line 1830 "myanalyzer.tab.c"
    break;

  case 22:
#line 217 "myanalyzer.y"
                              {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1836 "myanalyzer.tab.c"
    break;

  case 23:
#line 218 "myanalyzer.y"
                                                                 {(yyval.crepr) = template("%s %s, %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1842 "myanalyzer.tab.c"
    break;

  case 24:
#line 225 "myanalyzer.y"
                                                                                            {(yyval.crepr) = template("\ntypedef struct %s {\n%s\n%s}%s\n %s", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[-1].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 1848 "myanalyzer.tab.c"
    break;

  case 25:
#line 233 "myanalyzer.y"
                                                        {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1854 "myanalyzer.tab.c"
    break;

  case 26:
#line 244 "myanalyzer.y"
         {(yyval.crepr) = template("");}
#line 1860 "myanalyzer.tab.c"
    break;

  case 27:
#line 245 "myanalyzer.y"
                {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1866 "myanalyzer.tab.c"
    break;

  case 28:
#line 246 "myanalyzer.y"
              {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1872 "myanalyzer.tab.c"
    break;

  case 29:
#line 247 "myanalyzer.y"
            {(yyval.crepr) = template("%s", "1");}
#line 1878 "myanalyzer.tab.c"
    break;

  case 30:
#line 248 "myanalyzer.y"
             {(yyval.crepr) = template("%s", "0");}
#line 1884 "myanalyzer.tab.c"
    break;

  case 32:
#line 250 "myanalyzer.y"
                                  {(yyval.crepr) = template("(%s)", (yyvsp[-1].crepr));}
#line 1890 "myanalyzer.tab.c"
    break;

  case 35:
#line 253 "myanalyzer.y"
                       {(yyval.crepr) = template("! %s", (yyvsp[0].crepr));}
#line 1896 "myanalyzer.tab.c"
    break;

  case 36:
#line 254 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1902 "myanalyzer.tab.c"
    break;

  case 37:
#line 255 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1908 "myanalyzer.tab.c"
    break;

  case 39:
#line 257 "myanalyzer.y"
                            {(yyval.crepr) =  template("%s", (yyvsp[-1].crepr));}
#line 1914 "myanalyzer.tab.c"
    break;

  case 40:
#line 258 "myanalyzer.y"
                                      {(yyval.crepr) =  template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1920 "myanalyzer.tab.c"
    break;

  case 41:
#line 262 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1926 "myanalyzer.tab.c"
    break;

  case 42:
#line 263 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1932 "myanalyzer.tab.c"
    break;

  case 43:
#line 264 "myanalyzer.y"
                                     {(yyval.crepr) = template("pow(%s, %s)", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1938 "myanalyzer.tab.c"
    break;

  case 44:
#line 265 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s * %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1944 "myanalyzer.tab.c"
    break;

  case 45:
#line 266 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1950 "myanalyzer.tab.c"
    break;

  case 46:
#line 267 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s % %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1956 "myanalyzer.tab.c"
    break;

  case 47:
#line 268 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1962 "myanalyzer.tab.c"
    break;

  case 48:
#line 269 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1968 "myanalyzer.tab.c"
    break;

  case 49:
#line 270 "myanalyzer.y"
                        {(yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 1974 "myanalyzer.tab.c"
    break;

  case 50:
#line 271 "myanalyzer.y"
                         {(yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 1980 "myanalyzer.tab.c"
    break;

  case 51:
#line 275 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s < %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1986 "myanalyzer.tab.c"
    break;

  case 52:
#line 276 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1992 "myanalyzer.tab.c"
    break;

  case 53:
#line 277 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1998 "myanalyzer.tab.c"
    break;

  case 54:
#line 278 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2004 "myanalyzer.tab.c"
    break;

  case 55:
#line 279 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2010 "myanalyzer.tab.c"
    break;

  case 56:
#line 280 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2016 "myanalyzer.tab.c"
    break;

  case 57:
#line 284 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2022 "myanalyzer.tab.c"
    break;

  case 58:
#line 285 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s += %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2028 "myanalyzer.tab.c"
    break;

  case 59:
#line 286 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s -= %s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2034 "myanalyzer.tab.c"
    break;

  case 60:
#line 287 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s *= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2040 "myanalyzer.tab.c"
    break;

  case 61:
#line 288 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s /= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2046 "myanalyzer.tab.c"
    break;

  case 62:
#line 289 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s %= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 2052 "myanalyzer.tab.c"
    break;

  case 63:
#line 294 "myanalyzer.y"
         {(yyval.crepr) = template("");}
#line 2058 "myanalyzer.tab.c"
    break;

  case 64:
#line 295 "myanalyzer.y"
                            { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2064 "myanalyzer.tab.c"
    break;

  case 65:
#line 296 "myanalyzer.y"
                             { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2070 "myanalyzer.tab.c"
    break;

  case 66:
#line 297 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2076 "myanalyzer.tab.c"
    break;

  case 67:
#line 298 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2082 "myanalyzer.tab.c"
    break;

  case 68:
#line 299 "myanalyzer.y"
                         {(yyval.crepr) = template("break;");}
#line 2088 "myanalyzer.tab.c"
    break;

  case 69:
#line 300 "myanalyzer.y"
                {(yyval.crepr) = template("continue;");}
#line 2094 "myanalyzer.tab.c"
    break;

  case 71:
#line 302 "myanalyzer.y"
                                  { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2100 "myanalyzer.tab.c"
    break;

  case 72:
#line 303 "myanalyzer.y"
                           { (yyval.crepr) = template(";\n%s",(yyvsp[0].crepr)); }
#line 2106 "myanalyzer.tab.c"
    break;

  case 73:
#line 309 "myanalyzer.y"
                                                                                {(yyval.crepr) = template("if (%s) {\n %s;\n}", (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2112 "myanalyzer.tab.c"
    break;

  case 74:
#line 310 "myanalyzer.y"
                                                                                                                 {(yyval.crepr) = template("if (%s) {\n\t%s;\n} else {\n\t %s\n}", (yyvsp[-8].crepr), (yyvsp[-5].crepr));}
#line 2118 "myanalyzer.tab.c"
    break;

  case 75:
#line 315 "myanalyzer.y"
                                                                                                                              {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s++) {\n\t%s;\n}", (yyvsp[-10].crepr), (yyvsp[-7].crepr), (yyvsp[-10].crepr), (yyvsp[-5].crepr), (yyvsp[-10].crepr), (yyvsp[-2].crepr));}
#line 2124 "myanalyzer.tab.c"
    break;

  case 76:
#line 316 "myanalyzer.y"
                                                                                                                                                                  {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s = %s %s) {\n\t%s\n}", (yyvsp[-13].crepr), (yyvsp[-10].crepr), (yyvsp[-13].crepr), (yyvsp[-8].crepr), (yyvsp[-13].crepr), (yyvsp[-13].crepr), (yyvsp[-6].crepr), (yyvsp[-3].crepr));}
#line 2130 "myanalyzer.tab.c"
    break;

  case 79:
#line 326 "myanalyzer.y"
                                                                                                                                   {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(%s %s = 0; %s < %s; ++%s) {\n\t %s[%s] = %s}", (yyvsp[-1].crepr), (yyvsp[-11].crepr), (yyvsp[-1].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr), (yyvsp[-1].crepr), (yyvsp[-8].crepr), (yyvsp[-4].crepr), (yyvsp[-8].crepr), (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-8].crepr));}
#line 2136 "myanalyzer.tab.c"
    break;

  case 80:
#line 330 "myanalyzer.y"
                                                                                                                                                                 {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(int %s10_i = 0; %s10_i < %s12; ++%s10_i) {\n\t %s1[%s10_i] = %s4}", (yyvsp[-1].crepr), (yyvsp[-15].crepr), (yyvsp[-1].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[-15].crepr), (yyvsp[-6].crepr), (yyvsp[-12].crepr));}
#line 2142 "myanalyzer.tab.c"
    break;

  case 81:
#line 335 "myanalyzer.y"
                                                                                      {(yyval.crepr) = template("while (%s) {\n\t statements\n}", (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2148 "myanalyzer.tab.c"
    break;

  case 82:
#line 340 "myanalyzer.y"
                        {(yyval.crepr) = template("return;");}
#line 2154 "myanalyzer.tab.c"
    break;

  case 83:
#line 341 "myanalyzer.y"
                          {(yyval.crepr) = template("return %s;", (yyvsp[0].crepr));}
#line 2160 "myanalyzer.tab.c"
    break;

  case 84:
#line 346 "myanalyzer.y"
                                            {(yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2166 "myanalyzer.tab.c"
    break;

  case 85:
#line 347 "myanalyzer.y"
                                                                    {(yyval.crepr) = template("%s(%s, %s)", (yyvsp[-5].crepr), (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 2172 "myanalyzer.tab.c"
    break;

  case 86:
#line 351 "myanalyzer.y"
         {(yyval.crepr) = template("");}
#line 2178 "myanalyzer.tab.c"
    break;

  case 87:
#line 352 "myanalyzer.y"
                     { (yyval.crepr) = template("%s\n%s;",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2184 "myanalyzer.tab.c"
    break;

  case 88:
#line 353 "myanalyzer.y"
                    { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2190 "myanalyzer.tab.c"
    break;

  case 89:
#line 354 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2196 "myanalyzer.tab.c"
    break;

  case 90:
#line 355 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2202 "myanalyzer.tab.c"
    break;


#line 2206 "myanalyzer.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 358 "myanalyzer.y"

int main(void) {
    yyparse();
    return 0;
}
