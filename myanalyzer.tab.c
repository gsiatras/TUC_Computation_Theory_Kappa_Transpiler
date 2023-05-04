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
#define YYLAST   585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  232

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
     180,   181,   182,   187,   188,   189,   196,   200,   207,   211,
     212,   216,   217,   224,   232,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   271,   272,   273,
     274,   275,   276,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   297,   298,   299,   300,   301,   302,
     307,   308,   313,   314,   319,   320,   324,   328,   333,   338,
     339,   344,   348,   349,   350,   351,   352
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
  "relational_expressions", "statements", "assign_statement",
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

#define YYPACT_NINF (-162)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,   -45,    26,     5,    26,    54,  -162,  -162,   -39,    75,
      75,    75,    75,     4,   -25,    18,    53,   -18,  -162,    91,
     256,  -162,  -162,  -162,  -162,    74,    17,    89,    26,    88,
    -162,  -162,  -162,  -162,  -162,    98,  -162,  -162,  -162,    17,
    -162,  -162,  -162,    17,    17,  -162,    71,   230,  -162,  -162,
     104,    35,   112,    26,   146,  -162,   466,   540,   454,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,   256,  -162,   256,   -38,   102,    26,
     143,   314,   489,   529,   540,   454,   245,   272,   299,   299,
     321,    78,    43,    36,   128,  -162,   119,   191,   129,   256,
    -162,   256,    96,  -162,  -162,  -162,   121,    26,   130,   133,
    -162,   135,   116,  -162,   490,  -162,  -162,   466,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,    26,   131,
     224,   138,    26,    17,   -14,    17,  -162,   140,   258,   286,
      17,    17,    17,    17,    17,    17,   137,    17,  -162,  -162,
     148,  -162,   147,   338,   154,   362,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,    17,   386,    81,  -162,   153,   159,
      17,   160,   442,   181,   189,   256,   164,   466,   176,   164,
      26,  -162,   184,  -162,  -162,   504,   185,    17,   197,   103,
    -162,    17,    92,    57,   187,   151,   410,   164,  -162,   186,
      17,  -162,   188,   235,   181,   199,   164,   216,   217,    26,
     264,   249,   244,   256,    25,  -162,   290,   164,   252,   287,
     277,   278,  -162,   274,  -162,   319,   284,   291,   256,  -162,
     312,  -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    13,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     6,     5,     7,     4,     0,    25,     0,     0,     0,
      15,     9,    11,    12,    10,     0,    14,    28,    29,    25,
      37,    38,    27,    25,    25,    36,    26,     0,    31,    32,
       0,     0,     0,     0,     0,    16,    33,    40,    41,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,     0,    82,     0,     0,     0,     0,
       0,     0,    34,    35,    45,    46,    42,    43,    44,    39,
      51,    52,    47,    48,    49,    50,     0,    25,    21,     0,
      82,     0,     0,    23,    30,    17,     0,     0,     0,     0,
      60,     0,    25,    36,    26,    86,    85,    84,    83,    54,
      55,    56,    57,    74,    75,    58,    61,    62,     0,     0,
      25,     0,     0,    25,     0,    25,    59,     0,    79,     0,
      25,    25,    25,    25,    25,    25,     0,    25,    22,    82,
       0,    24,     0,     0,     0,     0,     8,    80,    64,    65,
      66,    67,    68,    69,    25,     0,    25,    19,     0,     0,
      25,     0,     0,    30,    61,     0,     0,     0,    31,    53,
       0,    81,     0,    18,    63,     0,     0,    25,     0,     0,
      20,    25,     0,    31,     0,     0,     0,     0,    70,     0,
      25,    78,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,    76,     0,    72,     0,     0,     0,     0,    73,
       0,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,   219,  -162,   -69,     0,   -91,   -84,  -162,  -162,
     -55,  -162,  -162,    -2,  -153,  -162,  -161,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,   202,  -162,   -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,    35,    46,     9,    10,    80,    11,
      52,    12,    54,   117,    48,    49,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,    97
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   154,    14,    16,    17,    96,   115,    98,     1,     8,
       8,     8,     8,   116,    13,   186,    99,   178,   188,    19,
       1,    26,    20,   100,    47,    37,    38,   130,    51,     1,
     129,    15,   131,    19,   193,    25,   205,    56,    39,   115,
      19,    57,    58,    29,    19,   211,   116,   207,    40,    41,
      42,    43,    44,    78,    18,   219,   221,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    45,   148,    27,   115,   166,   152,     1,   102,
      72,    73,   116,    19,     1,     2,    71,    72,    73,    37,
      38,     2,   106,    19,    30,   107,    76,   114,   108,     3,
     109,   110,    39,     4,   197,   198,   183,   134,   112,    28,
     139,    19,    40,    41,    42,    43,    44,   199,   200,     1,
      70,    71,    72,    73,    37,    38,   203,    59,    51,    19,
     114,   153,    51,   155,    36,    53,   113,    39,   158,   159,
     160,   161,   162,   163,   218,   165,    50,    40,    41,    42,
      43,    44,   132,    55,    19,    31,    32,    33,    34,   230,
      19,    19,   172,   101,   195,    75,   114,     1,   177,    77,
      79,   138,   103,    73,   105,   106,   185,   133,   107,   185,
     189,   108,   202,   109,   110,   177,   135,   128,   136,   196,
     137,   112,   149,   151,     1,   156,   164,   185,   177,    37,
      38,     2,   106,   167,   168,   107,   185,   175,   108,   214,
     109,   110,    39,   170,   182,   194,   111,   185,   112,   184,
     176,   179,    40,    41,    42,    43,    44,     1,    21,    22,
      23,    24,    37,    38,     2,   106,   181,   187,   107,   190,
     192,   108,   201,   109,   110,    39,   113,   206,   208,   150,
     209,   112,    60,    61,   210,    40,    41,    42,    43,    44,
      31,    32,    33,    34,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,   212,   215,   213,   113,
     -36,   -36,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   216,   217,   220,   222,    60,    61,
      66,    67,    68,    69,    70,    71,    72,    73,   223,   -36,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   224,   225,   226,   227,    60,    61,    67,    68,
      69,    70,    71,    72,    73,   228,   229,   157,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      60,    61,    69,    70,    71,    72,    73,   231,   174,     0,
       0,   104,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,   180,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    60,    61,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,   140,     0,   141,   142,
     143,   144,   145,   146,     0,     0,   147,     0,    19,     0,
     140,    20,   141,   142,   143,   144,   145,   146,     0,     0,
     191,     0,    19,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
       0,    15,     2,     3,     4,    74,    97,    76,     3,     9,
      10,    11,    12,    97,    59,   176,    54,   170,   179,    58,
       3,    46,    61,    61,    26,     8,     9,   100,    28,     3,
      99,    26,   101,    58,   187,    31,   197,    39,    21,   130,
      58,    43,    44,    61,    58,   206,   130,   200,    31,    32,
      33,    34,    35,    53,     0,    30,   217,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    55,   128,    56,   166,   149,   132,     3,    79,
      44,    45,   166,    58,     3,    10,    43,    44,    45,     8,
       9,    10,    11,    58,     3,    14,    61,    97,    17,    24,
      19,    20,    21,    28,    12,    13,   175,   107,    27,    56,
     112,    58,    31,    32,    33,    34,    35,    60,    61,     3,
      42,    43,    44,    45,     8,     9,   195,    56,   128,    58,
     130,   133,   132,   135,    60,    47,    55,    21,   140,   141,
     142,   143,   144,   145,   213,   147,    57,    31,    32,    33,
      34,    35,    56,    55,    58,     4,     5,     6,     7,   228,
      58,    58,   164,    61,    61,    61,   166,     3,   170,    57,
      24,    55,    29,    45,    55,    11,   176,    56,    14,   179,
     180,    17,    31,    19,    20,   187,    56,    58,    55,   191,
      55,    27,    61,    55,     3,    55,    59,   197,   200,     8,
       9,    10,    11,    55,    57,    14,   206,    54,    17,   209,
      19,    20,    21,    59,    25,    18,    25,   217,    27,    55,
      61,    61,    31,    32,    33,    34,    35,     3,     9,    10,
      11,    12,     8,     9,    10,    11,    55,    61,    14,    55,
      55,    17,    55,    19,    20,    21,    55,    61,    60,    25,
      15,    27,    22,    23,    55,    31,    32,    33,    34,    35,
       4,     5,     6,     7,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    60,    13,    61,    55,
      22,    23,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    61,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    55,    61,    16,    55,    22,    23,
      38,    39,    40,    41,    42,    43,    44,    45,    31,    61,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    55,    55,    60,    16,    22,    23,    39,    40,
      41,    42,    43,    44,    45,    61,    55,    61,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      22,    23,    41,    42,    43,    44,    45,    55,   166,    -1,
      -1,    57,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    22,    23,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    46,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    58,    -1,
      46,    61,    48,    49,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    58,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    10,    24,    28,    64,    65,    66,    68,    69,
      70,    72,    74,    59,    68,    26,    68,    68,     0,    58,
      61,    65,    65,    65,    65,    31,    46,    56,    56,    61,
       3,     4,     5,     6,     7,    67,    60,     8,     9,    21,
      31,    32,    33,    34,    35,    55,    68,    76,    77,    78,
      57,    68,    73,    47,    75,    55,    76,    76,    76,    56,
      22,    23,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    61,    61,    61,    57,    68,    24,
      71,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    67,    89,    67,    54,
      61,    61,    68,    29,    57,    55,    11,    14,    17,    19,
      20,    25,    27,    55,    68,    69,    70,    76,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    58,    67,
      89,    67,    56,    56,    68,    56,    55,    55,    55,    76,
      46,    48,    49,    50,    51,    52,    53,    56,    73,    61,
      25,    55,    73,    76,    15,    76,    55,    61,    76,    76,
      76,    76,    76,    76,    59,    76,    89,    55,    57,    57,
      59,    57,    76,    57,    87,    54,    61,    76,    77,    61,
      14,    55,    25,    67,    55,    68,    79,    61,    79,    68,
      55,    56,    55,    77,    18,    61,    76,    12,    13,    60,
      61,    55,    31,    67,    57,    79,    61,    77,    60,    15,
      55,    79,    60,    61,    68,    13,    55,    61,    67,    30,
      16,    79,    55,    31,    55,    55,    60,    16,    61,    55,
      67,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    66,    67,
      67,    67,    67,    68,    68,    68,    69,    70,    71,    72,
      72,    73,    73,    74,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    85,    86,    87,
      87,    88,    89,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     9,     1,
       1,     1,     1,     1,     4,     3,     4,     7,     7,     9,
      12,     3,     5,     6,     5,     0,     1,     1,     1,     1,
       4,     1,     1,     2,     3,     3,     1,     1,     1,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       8,    11,    13,    15,     1,     1,    12,    16,     8,     2,
       3,     5,     0,     2,     2,     2,     2
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
#line 1625 "myanalyzer.tab.c"
    break;

  case 3:
#line 165 "myanalyzer.y"
       { (yyval.crepr) = template("%s\n",(yyvsp[0].crepr));}
#line 1631 "myanalyzer.tab.c"
    break;

  case 4:
#line 166 "myanalyzer.y"
                                        { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1637 "myanalyzer.tab.c"
    break;

  case 5:
#line 167 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1643 "myanalyzer.tab.c"
    break;

  case 6:
#line 168 "myanalyzer.y"
                                    { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1649 "myanalyzer.tab.c"
    break;

  case 7:
#line 169 "myanalyzer.y"
                        { (yyval.crepr) = template("%s\n%s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1655 "myanalyzer.tab.c"
    break;

  case 8:
#line 173 "myanalyzer.y"
                                                                                    {(yyval.crepr) = template("int main(){\n\t%s\n}", (yyvsp[-3].crepr));}
#line 1661 "myanalyzer.tab.c"
    break;

  case 9:
#line 179 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "int");}
#line 1667 "myanalyzer.tab.c"
    break;

  case 10:
#line 180 "myanalyzer.y"
                   {(yyval.crepr) = template("%s", "int");}
#line 1673 "myanalyzer.tab.c"
    break;

  case 11:
#line 181 "myanalyzer.y"
                  {(yyval.crepr) = template("%s","double");}
#line 1679 "myanalyzer.tab.c"
    break;

  case 12:
#line 182 "myanalyzer.y"
               {(yyval.crepr) = template("%s", "char*");}
#line 1685 "myanalyzer.tab.c"
    break;

  case 13:
#line 187 "myanalyzer.y"
                       {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1691 "myanalyzer.tab.c"
    break;

  case 14:
#line 188 "myanalyzer.y"
                                                         {(yyval.crepr) = template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1697 "myanalyzer.tab.c"
    break;

  case 15:
#line 189 "myanalyzer.y"
                                              {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1703 "myanalyzer.tab.c"
    break;

  case 16:
#line 196 "myanalyzer.y"
                                                {(yyval.crepr) = template("%s %s; ", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1709 "myanalyzer.tab.c"
    break;

  case 17:
#line 200 "myanalyzer.y"
                                                                               {(yyval.crepr) = template("const %s = %s;", (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1715 "myanalyzer.tab.c"
    break;

  case 18:
#line 207 "myanalyzer.y"
                                                                                   {(yyval.crepr) = template("\n%s (*) %s(%s)", (yyvsp[0].crepr), (yyvsp[-5].crepr), (yyvsp[-3].crepr));}
#line 1721 "myanalyzer.tab.c"
    break;

  case 19:
#line 211 "myanalyzer.y"
                                                                                                   {(yyval.crepr) = template("\nvoid %s(%s) {\n%s\n}\n", (yyvsp[-7].crepr), (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 1727 "myanalyzer.tab.c"
    break;

  case 20:
#line 212 "myanalyzer.y"
                                                                                                                                           {(yyval.crepr) = template("\n%s %s(%s) {\n\t%s\n\treturn %s;}\n", (yyvsp[-5].crepr), (yyvsp[-10].crepr), (yyvsp[-8].crepr), (yyvsp[-3].crepr), (yyvsp[-2].crepr));}
#line 1733 "myanalyzer.tab.c"
    break;

  case 21:
#line 216 "myanalyzer.y"
                              {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1739 "myanalyzer.tab.c"
    break;

  case 22:
#line 217 "myanalyzer.y"
                                                                 {(yyval.crepr) = template("%s %s, %s", (yyvsp[-2].crepr), (yyvsp[-4].crepr), (yyvsp[0].crepr));}
#line 1745 "myanalyzer.tab.c"
    break;

  case 23:
#line 224 "myanalyzer.y"
                                                                                            {(yyval.crepr) = template("\ntypedef struct %s {\n%s\n%s}%s\n %s", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[-1].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr));}
#line 1751 "myanalyzer.tab.c"
    break;

  case 24:
#line 232 "myanalyzer.y"
                                                        {(yyval.crepr) = template("%s %s", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1757 "myanalyzer.tab.c"
    break;

  case 25:
#line 243 "myanalyzer.y"
         {(yyval.crepr) = template("");}
#line 1763 "myanalyzer.tab.c"
    break;

  case 26:
#line 244 "myanalyzer.y"
                {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1769 "myanalyzer.tab.c"
    break;

  case 27:
#line 245 "myanalyzer.y"
              {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1775 "myanalyzer.tab.c"
    break;

  case 28:
#line 246 "myanalyzer.y"
            {(yyval.crepr) = template("%s", "1");}
#line 1781 "myanalyzer.tab.c"
    break;

  case 29:
#line 247 "myanalyzer.y"
             {(yyval.crepr) = template("%s", "0");}
#line 1787 "myanalyzer.tab.c"
    break;

  case 30:
#line 248 "myanalyzer.y"
                                              {(yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 1793 "myanalyzer.tab.c"
    break;

  case 33:
#line 251 "myanalyzer.y"
                       {(yyval.crepr) = template("! %s", (yyvsp[0].crepr));}
#line 1799 "myanalyzer.tab.c"
    break;

  case 34:
#line 252 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1805 "myanalyzer.tab.c"
    break;

  case 35:
#line 253 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1811 "myanalyzer.tab.c"
    break;

  case 36:
#line 254 "myanalyzer.y"
                {(yyval.crepr) = template("%s", ";");}
#line 1817 "myanalyzer.tab.c"
    break;

  case 37:
#line 258 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1823 "myanalyzer.tab.c"
    break;

  case 38:
#line 259 "myanalyzer.y"
             {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1829 "myanalyzer.tab.c"
    break;

  case 39:
#line 260 "myanalyzer.y"
                                     {(yyval.crepr) = template("pow(%s, %s)", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1835 "myanalyzer.tab.c"
    break;

  case 40:
#line 261 "myanalyzer.y"
                        {(yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 1841 "myanalyzer.tab.c"
    break;

  case 41:
#line 262 "myanalyzer.y"
                         {(yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 1847 "myanalyzer.tab.c"
    break;

  case 42:
#line 263 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s * %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1853 "myanalyzer.tab.c"
    break;

  case 43:
#line 264 "myanalyzer.y"
                                   {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1859 "myanalyzer.tab.c"
    break;

  case 44:
#line 265 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s % %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1865 "myanalyzer.tab.c"
    break;

  case 45:
#line 266 "myanalyzer.y"
                                     {(yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1871 "myanalyzer.tab.c"
    break;

  case 46:
#line 267 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1877 "myanalyzer.tab.c"
    break;

  case 47:
#line 271 "myanalyzer.y"
                                  {(yyval.crepr) = template("%s < %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1883 "myanalyzer.tab.c"
    break;

  case 48:
#line 272 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1889 "myanalyzer.tab.c"
    break;

  case 49:
#line 273 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1895 "myanalyzer.tab.c"
    break;

  case 50:
#line 274 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1901 "myanalyzer.tab.c"
    break;

  case 51:
#line 275 "myanalyzer.y"
                                      {(yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1907 "myanalyzer.tab.c"
    break;

  case 52:
#line 276 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1913 "myanalyzer.tab.c"
    break;

  case 53:
#line 282 "myanalyzer.y"
         {(yyval.crepr) = template("");}
#line 1919 "myanalyzer.tab.c"
    break;

  case 59:
#line 288 "myanalyzer.y"
                         {(yyval.crepr) = template("break;");}
#line 1925 "myanalyzer.tab.c"
    break;

  case 60:
#line 289 "myanalyzer.y"
                {(yyval.crepr) = template("continue;");}
#line 1931 "myanalyzer.tab.c"
    break;

  case 63:
#line 292 "myanalyzer.y"
                {(yyval.crepr) = template("%s", ";");}
#line 1937 "myanalyzer.tab.c"
    break;

  case 64:
#line 297 "myanalyzer.y"
                                    {(yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1943 "myanalyzer.tab.c"
    break;

  case 65:
#line 298 "myanalyzer.y"
                                          {(yyval.crepr) = template("%s += %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1949 "myanalyzer.tab.c"
    break;

  case 66:
#line 299 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s -= %s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1955 "myanalyzer.tab.c"
    break;

  case 67:
#line 300 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s *= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1961 "myanalyzer.tab.c"
    break;

  case 68:
#line 301 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s /= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1967 "myanalyzer.tab.c"
    break;

  case 69:
#line 302 "myanalyzer.y"
                                         {(yyval.crepr) = template("%s %= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1973 "myanalyzer.tab.c"
    break;

  case 70:
#line 307 "myanalyzer.y"
                                                                                {(yyval.crepr) = template("if (%s) {\n %s;\n}", (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 1979 "myanalyzer.tab.c"
    break;

  case 71:
#line 308 "myanalyzer.y"
                                                                                                                 {(yyval.crepr) = template("if (%s) {\n\t%s;\n} else {\n\t %s\n}", (yyvsp[-8].crepr), (yyvsp[-5].crepr));}
#line 1985 "myanalyzer.tab.c"
    break;

  case 72:
#line 313 "myanalyzer.y"
                                                                                                                                                                {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s++) {\n\t%s;\n}", (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-11].crepr), (yyvsp[-6].crepr), (yyvsp[-11].crepr), (yyvsp[-3].crepr));}
#line 1991 "myanalyzer.tab.c"
    break;

  case 73:
#line 314 "myanalyzer.y"
                                                                                                                                                                                                   {(yyval.crepr) = template("for (int %s = %s; %s < %s; %s = %s %s) {\n\t%s\n}", (yyvsp[-13].crepr), (yyvsp[-10].crepr), (yyvsp[-13].crepr), (yyvsp[-8].crepr), (yyvsp[-13].crepr), (yyvsp[-13].crepr), (yyvsp[-6].crepr), (yyvsp[-3].crepr));}
#line 1997 "myanalyzer.tab.c"
    break;

  case 76:
#line 324 "myanalyzer.y"
                                                                                                                                   {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(%s %s = 0; %s < %s; ++%s) {\n\t %s[%s] = %s}", (yyvsp[-1].crepr), (yyvsp[-11].crepr), (yyvsp[-1].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr), (yyvsp[-1].crepr), (yyvsp[-8].crepr), (yyvsp[-4].crepr), (yyvsp[-8].crepr), (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-8].crepr));}
#line 2003 "myanalyzer.tab.c"
    break;

  case 77:
#line 328 "myanalyzer.y"
                                                                                                                                                                 {(yyval.crepr) = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(int %s10_i = 0; %s10_i < %s12; ++%s10_i) {\n\t %s1[%s10_i] = %s4}", (yyvsp[-1].crepr), (yyvsp[-15].crepr), (yyvsp[-1].crepr), (yyvsp[-4].crepr), (yyvsp[-1].crepr), (yyvsp[-6].crepr), (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[-15].crepr), (yyvsp[-6].crepr), (yyvsp[-12].crepr));}
#line 2009 "myanalyzer.tab.c"
    break;

  case 78:
#line 333 "myanalyzer.y"
                                                                                      {(yyval.crepr) = template("while (%s) {\n\t statements\n}", (yyvsp[-5].crepr), (yyvsp[-2].crepr));}
#line 2015 "myanalyzer.tab.c"
    break;

  case 79:
#line 338 "myanalyzer.y"
                        {(yyval.crepr) = template("return;");}
#line 2021 "myanalyzer.tab.c"
    break;

  case 80:
#line 339 "myanalyzer.y"
                                    {(yyval.crepr) = template("return %s;", (yyvsp[-1].crepr));}
#line 2027 "myanalyzer.tab.c"
    break;

  case 81:
#line 344 "myanalyzer.y"
                                                        {(yyval.crepr) = template("%s(%s);", (yyvsp[-4].crepr), (yyvsp[-2].crepr));}
#line 2033 "myanalyzer.tab.c"
    break;

  case 82:
#line 348 "myanalyzer.y"
         {(yyval.crepr) = template("");}
#line 2039 "myanalyzer.tab.c"
    break;

  case 83:
#line 349 "myanalyzer.y"
                    { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2045 "myanalyzer.tab.c"
    break;

  case 84:
#line 350 "myanalyzer.y"
                     { (yyval.crepr) = template("%s\n%s;",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2051 "myanalyzer.tab.c"
    break;

  case 85:
#line 351 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2057 "myanalyzer.tab.c"
    break;

  case 86:
#line 352 "myanalyzer.y"
                               { (yyval.crepr) = template("%s\n%s",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 2063 "myanalyzer.tab.c"
    break;


#line 2067 "myanalyzer.tab.c"

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
#line 355 "myanalyzer.y"

int main(void) {
    yyparse();
    return 0;
}
