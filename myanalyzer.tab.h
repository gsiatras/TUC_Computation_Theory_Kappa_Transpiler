/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 124 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
