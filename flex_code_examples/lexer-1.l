%{
  #include <stdio.h>

  int lineNum = 1;
%}

DIGIT       [0-9]
NUMBER      {DIGIT}{DIGIT}*
DECIMAL     ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)

ID          [a-zA-Z_][0-9a-zA-Z_]*

%%
{DECIMAL}   { printf("Line %d: Found the number %s\n", lineNum, yytext); }
{ID}        { printf("Line %d: Found the identifier %s\n", lineNum, yytext); }

[ \r\t]		/* skip whitespace */
\n 			++lineNum;
<<EOF>> 	return EOF;

.           { printf("Line %d: Error %s\n", lineNum, yytext); }


%%
int main() { 
  yylex(); 
}
