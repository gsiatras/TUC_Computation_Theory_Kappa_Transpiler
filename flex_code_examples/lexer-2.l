%{
  #define TK_IDENT 258
  #define TK_POSINT 259
  #define TK_REAL 260
  #define TK_ASSGN 261
  
   int lineNum = 1;
%}


ID      [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  {DIGIT}{DIGIT}*
DECIMAL ([+-]?"."{NUMBER})|([+-]?{NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?

%%
{ID}        { return TK_IDENT; }
{NUMBER}    { return TK_POSINT; }
{REAL}      { return TK_REAL; }

":="        { return TK_ASSGN ;}

[ \r\t]			/* skip whitespace */
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
