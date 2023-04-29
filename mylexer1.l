%{
  #include <stdio.h>
  #include <string.h>
  #include "cgen.h"
 

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
{IDENTIFIERS}               { printf("Token IDENTIFIER:\t%s\n", yytext);}


"integer"                   {printf("Token KEYWORD_INTEGER: \t%s\n", yytext);};
"scalar"                    {printf("Token KEYWORD_SCALAR: \t%s\n", yytext);};
"str"                       {printf("Token KEYWORD_STR: \t%s\n", yytext);};
"boolean"                   {printf("Token KEYWORD_BOOLEAN: \t%s\n", yytext);};
"True"                      {printf("Token KEYWORD_TRUE: \t%s\n", yytext);};
"False"                     {printf("Token KEYWORD_FALSE: \t%s\n", yytext);};
"const"                     {printf("Token KEYWORD_CONST: \t%s\n", yytext);};
"if"                        {printf("Token KEYWORD_IF: \t%s\n", yytext);};
"else"                      {printf("Token KEYWORD_ELSE: \t%s\n", yytext);};
"endif"                     {printf("Token KEYWORD_ENDIF: \t%s\n", yytext);};
"break"                     {printf("Token KEYWORD_BREAK: \t%s\n", yytext);};
"continue"                  {printf("Token KEYWORD_CONTINUE: \t%s\n", yytext);};
"not"                       {printf("Token KEYWORD_NOT: \t%s\n", yytext);};
"and"                       {printf("Token KEYWORD_AND: \t%s\n", yytext);};
"or"                        {printf("Token KEYWORD_OR: \t%s\n", yytext); };
"def"                       {printf("Token KEYWORD_DEF: \t%s\n", yytext); };
"enddef"                    {printf("Token KEYWORD_ENDDEF: \t%s\n", yytext);};
"main"                      {printf("Token KEYWORD_MAIN: \t%s\n", yytext);};
"return"                    {printf("Token KEYWORD_RETURN: \t%s\n", yytext); };
"comp"                      {printf("Token KEYWORD_COMP: \t%s\n", yytext);};
"endcomp"                   {printf("Token KEYWORD_ENDCOMP: \t%s\n", yytext);};
"of"                        {printf("Token KEYWORD_OF: \t%s\n", yytext);};


{INTEGER_CONSTANTS}         {printf("Token INTEGER CONSTANT: \t%s\n", yytext); }
{FLOATING_POINT_CONSTANTS}  {printf("Token FLOATING POINT CONSTANT: \t%s\n", yytext);}
{CONSTANT_STRINGS}          {printf("Token STRING CONSTANT: \t%s\n", yytext);}


"+"                         {printf("Token ARITHMETIC_OPERATOR_PLUS: \t%s\n", yytext); };
"-"                         {printf("Token ARITHMETIC_OPERATOR_MINUS: \t%s\n", yytext); };
"*"                         {printf("Token ARITHMETIC_OPERATOR_MULT: \t%s\n", yytext); };
"/"                         {printf("Token ARITHMETIC_OPERATOR_DIVISION: \t%s\n", yytext);};
"%"                         {printf("Token ARITHMETIC_OPERATOR_MODULO: \t%s\n", yytext); };
"**"                        {printf("Token ARITHMETIC_OPERATOR_MULT: \t%s\n", yytext); };

"=="                        {printf("Token RELATIONAL_OPERATOR_EQUALS: \t%s\n", yytext); };
"!="                        {printf("Token RELATIONAL_OPERATOR_NOTEQUALS: \t%s\n", yytext); };
"<"                         {printf("Token RELATIONAL_OPERATOR_LESS: \t%s\n", yytext); };
"<="                        {printf("Token RELATIONAL_OPERATOR_LESS_EQUALS: \t%s\n", yytext); };
">"                         {printf("Token RELATIONAL_OPERATOR_MORE: \t%s\n", yytext); };
">="                        {printf("Token RELATIONAL_OPERATOR_MORE_EQUALS: \t%s\n", yytext); };

"="                         {printf("Token ASSIGNMENT_OPERATOR_ASSIGN: \t%s\n", yytext); };
"#"                         {printf("Token ASSIGNMENT_OPERATOR_HASHTAG_ASSIGN: \t%s\n", yytext); }
"+="                        {printf("Token ASSIGNMENT_OPERATOR_PLUS_ASSIGN: \t%s\n", yytext); };
"-="                        {printf("Token ASSIGNMENT_OPERATOR_MINUS_ASSIGN: \t%s\n", yytext); };
"*="                        {printf("Token ASSIGNMENT_OPERATOR_MULTIPLICATION_ASSIGN: \t%s\n", yytext);};
"/="                        {printf("Token ASSIGNMENT_OPERATOR_DIVISION_ASSIGN: \t%s\n", yytext); };
"%="                        {printf("Token ASSIGNMENT_OPERATOR_MODULO_ASSIGN: \t%s\n", yytext); };
":="                        {printf("Token ASSIGNMENT_OPERATOR_COLON_ASSIGN: \t%s\n", yytext); };
"->"                        {printf("Token ASSIGNMENT_OPERATOR_ARROW_ASSIGN: \t%s\n", yytext); };


";"                         {printf("Token DELIMITER_SEMICOLON: \t%s\n", yytext); };
"("                         {printf("Token DELIMITER_LEFT_PARENTHESIS: \t%s\n", yytext); };
")"                         {printf("Token DELIMITER_RIGHT_PARENTHESIS: \t%s\n", yytext); };
","                         {printf("Token DELIMITER_COMMA: \t%s\n", yytext); };
"["                         {printf("Token DELIMITER_LEFT_BLOCK: \t%s\n", yytext); };
"]"                         {printf("Token DELIMITER_RIGHT_BLOCK: \t%s\n", yytext); };
"["                         {printf("Token DELIMITER_LEFT_BLOCK: \t%s\n", yytext); };
":"                         {printf("Token DELIMITER_COLON: \t%s\n", yytext); };
"."                         {printf("Token DELIMITER_DOT: \t%s\n", yytext); };



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

int main() {
    yylex();
    return 0;
}