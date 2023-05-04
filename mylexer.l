%{
  #include <stdio.h>
  #include <string.h>
  #include "cgen.h"
  #include "myanalyzer.tab.h"
 

  int line_num = 1;

   void showError();
%}

DIGIT  [0-9]
SIGN [-+]

IDENTIFIERS                 [a-zA-Z][0-9a-zA-Z_]*
INTEGER_CONSTANTS           ({DIGIT}+)
FLOATING_POINT_CONSTANTS    ([+-]?{DIGIT}*\.{DIGIT}+([Ee][+-]?{DIGIT}+)?|{DIGIT}+\.{DIGIT}*([Ee][+-]?{DIGIT}+)?)
CONSTANT_STRINGS            (\"(([^\"\\]|\\[ntr\\"'])*)\")


%x line_comment


%%



"integer"                   {printf("Token KEYWORD_INTEGER: \t%s\n", yytext); return KW_INT;};
"scalar"                      {printf("Token KEYWORD_SCALAR: \t%s\n", yytext); return KW_SCALAR;};
"str"                       {printf("Token KEYWORD_STR: \t%s\n", yytext); return KW_STR;};
"boolean"                   {printf("Token KEYWORD_BOOLEAN: \t%s\n", yytext); return KW_BOOLEAN;};
"True"                      {printf("Token KEYWORD_TRUE: \t%s\n", yytext); return KW_TRUE;};
"False"                     {printf("Token KEYWORD_FALSE: \t%s\n", yytext); return KW_FALSE;};
"const"                     {printf("Token KEYWORD_CONST: \t%s\n", yytext); return KW_CONST;};
"if"                        {printf("Token KEYWORD_IF: \t%s\n", yytext); return KW_IF;};
"else"                      {printf("Token KEYWORD_ELSE: \t%s\n", yytext); return KW_ELSE;};
"endif"                     {printf("Token KEYWORD_ENDIF: \t%s\n", yytext); return KW_ENDIF;};
"for"                       {printf("Token KEYWORD_FOR: \t%s\n", yytext); return KW_FOR;};
"in"                        {printf("Token KEYWORD_IN: \t%s\n", yytext); return KW_IN;};
"endfor"                    {printf("Token KEYWORD_ENDFOR: \t%s\n", yytext); return KW_ENDFOR;};
"while"                     {printf("Token KEYWORD_WHILE: \t%s\n", yytext); return KW_WHILE;};
"endwhile"                  {printf("Token KEYWORD_ENDWHILE: \t%s\n", yytext); return KW_ENDWHILE;};
"break"                     {printf("Token KEYWORD_BREAK: \t%s\n", yytext); return KW_BREAK;};
"continue"                  {printf("Token KEYWORD_CONTINUE: \t%s\n", yytext); return KW_CONTINUE;};
"not"                       {printf("Token KEYWORD_NOT: \t%s\n", yytext); return KW_NOT;};
"and"                       {printf("Token KEYWORD_AND: \t%s\n", yytext); return KW_AND;};
"or"                        {printf("Token KEYWORD_OR: \t%s\n", yytext); return KW_OR;};
"def"                         {printf("Token KEYWORD_DEF: \t%s\n", yytext); return KW_DEF;};
"enddef"                    {printf("Token KEYWORD_ENDDEF: \t%s\n", yytext); return KW_ENDDEF;};
"main"                      {printf("Token KEYWORD_MAIN: \t%s\n", yytext); return KW_MAIN;};
"return"                    {printf("Token KEYWORD_RETURN: \t%s\n", yytext); return KW_RETURN;};
"comp"                      {printf("Token KEYWORD_COMP: \t%s\n", yytext); return KW_COMP;};
"endcomp"                   {printf("Token KEYWORD_ENDCOMP: \t%s\n", yytext); return KW_ENDCOMP;};
"of"                        {printf("Token KEYWORD_OF: \t%s\n", yytext); return KW_OF;};

{IDENTIFIERS}               {yylval.crepr = strdup(yytext); printf("Token IDENTIFIER:\t%s\n", yytext); return TK_IDENTIFIER;}
{INTEGER_CONSTANTS}         {yylval.crepr = strdup(yytext); printf("Token INTEGER CONSTANT: \t%s\n", yytext); return TK_INTEGER;}
{FLOATING_POINT_CONSTANTS}  {yylval.crepr = strdup(yytext); printf("Token FLOATING POINT CONSTANT: \t%s\n", yytext); return TK_FLOAT;}
{CONSTANT_STRINGS}          {yylval.crepr = strdup(yytext); printf("Token STRING CONSTANT: \t%s\n", yytext); return TK_STRING;}


"+"                         {printf("Token ARITHMETIC_OPERATOR_PLUS: \t%s\n", yytext); return OP_PLUS;}
"-"                         {printf("Token ARITHMETIC_OPERATOR_MINUS: \t%s\n", yytext); return OP_MINUS;};
"*"                         {printf("Token ARITHMETIC_OPERATOR_MULT: \t%s\n", yytext); return OP_MULT;};
"/"                         {printf("Token ARITHMETIC_OPERATOR_DIVISION: \t%s\n", yytext); return OP_DIV;};
"%"                         {printf("Token ARITHMETIC_OPERATOR_MODULO: \t%s\n", yytext); return OP_MOD;};
"**"                        {printf("Token ARITHMETIC_OPERATOR_MULT: \t%s\n", yytext); return OP_MULT;};

"=="                        {printf("Token RELATIONAL_OPERATOR_EQUALS: \t%s\n", yytext); return RP_EQUALS;};
"!="                        {printf("Token RELATIONAL_OPERATOR_NOTEQUALS: \t%s\n", yytext); return RP_NOTEQUALS;};
"<"                         {printf("Token RELATIONAL_OPERATOR_LESS: \t%s\n", yytext); return RP_LESS;};
"<="                        {printf("Token RELATIONAL_OPERATOR_LESS_EQUALS: \t%s\n", yytext); return RP_LESSEQUALS;};
">"                         {printf("Token RELATIONAL_OPERATOR_MORE: \t%s\n", yytext); return RP_MORE;};
">="                        {printf("Token RELATIONAL_OPERATOR_MORE_EQUALS: \t%s\n", yytext); return RP_MOREEQUALS;};

"="                         {printf("Token ASSIGNMENT_OPERATOR_ASSIGN: \t%s\n", yytext); return AP_ASSIGN;};
"#"                         {printf("Token ASSIGNMENT_OPERATOR_HASHTAG_ASSIGN: \t%s\n", yytext); return AP_HASHASSIGN;};
"+="                        {printf("Token ASSIGNMENT_OPERATOR_PLUS_ASSIGN: \t%s\n", yytext); return AP_PLUSASSIGN;};
"-="                        {printf("Token ASSIGNMENT_OPERATOR_MINUS_ASSIGN: \t%s\n", yytext); return AP_MINASSIGN;};
"*="                        {printf("Token ASSIGNMENT_OPERATOR_MULTIPLICATION_ASSIGN: \t%s\n", yytext); return AP_MULASSIGN;};
"/="                        {printf("Token ASSIGNMENT_OPERATOR_DIVISION_ASSIGN: \t%s\n", yytext); return AP_DIVASSIGN;};
"%="                        {printf("Token ASSIGNMENT_OPERATOR_MODULO_ASSIGN: \t%s\n", yytext); return AP_MODASSIGN;};
":="                        {printf("Token ASSIGNMENT_OPERATOR_COLON_ASSIGN: \t%s\n", yytext); return AP_COLONASSIGN;};
"->"                        {printf("Token ASSIGNMENT_OPERATOR_ARROW_ASSIGN: \t%s\n", yytext); return AP_ARROWASSIGN;};



";"                         {printf("Token DELIMITER_SEMICOLON: \t%s\n", yytext); return DEL_SMCOLON;};
"("                         {printf("Token DELIMITER_LEFT_PARENTHESIS: \t%s\n", yytext); return DEL_LPAR;};
")"                         {printf("Token DELIMITER_RIGHT_PARENTHESIS: \t%s\n", yytext); return DEL_RPAR;};
","                         {printf("Token DELIMITER_COMMA: \t%s\n", yytext); return DEL_COMMA;};
"["                         {printf("Token DELIMITER_LEFT_BLOCK: \t%s\n", yytext); return DEL_LBLOCK;};
"]"                         {printf("Token DELIMITER_RIGHT_BLOCK: \t%s\n", yytext); return DEL_RBLOCK;};
":"                         {printf("Token DELIMITER_COLON: \t%s\n", yytext); return DEL_COLON;};
"."                         {printf("Token DELIMITER_DOT: \t%s\n", yytext); return DEL_DOT;};



[ \r\t]+    /* skip whitespace and return on start */
\n           ++line_num;


"--"         {BEGIN(line_comment);}
<line_comment>[^\n]*    /*Eat all one line comments*/
<line_comment>\n {++line_num;BEGIN(INITIAL);}


<<EOF>>   return EOF; /*Marks End of file*/
.           {showError();}


%%


void showError(){
  printf("Unrecognized token %s in line %d\n", yytext, line_num);
  exit(-1);
}