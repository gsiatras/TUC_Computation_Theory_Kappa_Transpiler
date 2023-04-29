%{
int lineNum = 1;
%}


%x comment 

%%                        

"//"[^\n]*  		printf("Line %d: line comment: %s\n", lineNum, yytext);/* eat line comments */

"/*"                    { BEGIN(comment); printf("comment started at line: %d\n", lineNum); }

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++lineNum;
<comment>"*"+"/"        { BEGIN(INITIAL); printf("comment ended at line: %d\n", lineNum); }

<<EOF>> 		return EOF;

\n          ++lineNum;
.           { printf("Line %d Lexical Error: Unrecognized literal %s\n", lineNum, yytext); }

%%

int main ()
{
  int token;
  while ( (token = yylex()) != EOF )
    printf("Line %d Token %d: %s\n", lineNum, token, yytext);
}
