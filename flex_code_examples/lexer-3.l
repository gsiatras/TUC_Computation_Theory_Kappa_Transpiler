%{
  #define TK_IDENT 258
  #define TK_INT 259
  #define TK_REAL 260
  #define TK_ASSGN 261
  #define KW_IF 262  
  #define KW_ELSE 263
  
  #include <math.h>
  int lineNum = 1;
%}


ID      [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  [+-]?{DIGIT}{DIGIT}*
DECIMAL ([+-]?"."{NUMBER})|([+-]?{NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?

%%

if          return KW_IF;
else		    return KW_ELSE;

{ID}        { return TK_IDENT; }
{NUMBER}    { return TK_INT; }
{REAL}      { printf("A real: (%g) ", atof(yytext)); return TK_REAL; }

"+"         printf("An operator "); return '+';
"-"         printf("An operator "); return '-';
"*"         printf("An operator "); return '*';
"/"         printf("An operator "); return '/';
"("					return '(';
")"					return ')';

"//"[^\n]*  printf("Line %d: line comment: %s\n", lineNum, yytext);/* eat line comments */

":="        { return TK_ASSGN ;}

[ \r\t]+		/* eat whitespace */
\n 					 ++lineNum;

<<EOF>> 	return EOF;
.           { printf("Line %d Lexical Error: Unrecognized literal %s\n", lineNum, yytext); }

%%
int main ()
{
   int token;
   while ( (token = yylex()) != EOF )
      printf("Line %d Token %d: %s\n", lineNum, token, yytext);
}





