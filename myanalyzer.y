%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
extern int line_num;
%}

%union
{
  char* crepr;
}

%token <crepr> TK_IDENTIFIER


//keywords
%token KW_INT
%tokek KW_SCALAR
%token KW_STR
%token KW_BOOLEAN
%token KW_TRUE
%token KW_FALSE
%token KW_CONST
%token KW_IF
%token KW_ELSE
%token KW_ENDIF
%token KW_BREAK
%token KW_CONTINUE
%token KW_NOT
%token KW_AND
%token KW_OR
%token KW_DEF
%token KW_ENDDEF
%token KW_MAIN
%token KW_RETURN
%token KW_COMP
%token KW_ENDCOMP
%token KW_OF


%token <crepr> TK_INTEGER
%token <crepr> TK_FLOAT
%token <crepr> TK_STRING


//arithmetic operators
%left OP_PLUS
%left OP_MINUS
%left OP_MULT
%left OP_DIV
%left OP_MOD
%left OP_POWER

//relational operators
%token RP_EQUALS
%nonassoc RP_NOTEQUALS
%nonassoc RP_LESS
%nonassoc RP_LESSEQUALS
%nonassoc RP_MORE
%nonassoc RP_MOREEQUALS

//assignment operators
%token AP_ASSIGN
%token AP_HASHASSIGN
%token AP_PLUSASSIGN 
%token AP_MINASSIGN
%token AP_MULASSIGN
%token AP_DIVASSIGN
%token AP_MODASSIGN
%token AP_COLONASSIGN
%token AP_ARROWASSIGN


//delimiters
%token DEL_SMCOLON
%token DEL_LPAR
%token DEL_RPAR
%token DEL_COMMA
%token DEL_LBLOCK
%token DEL_RBLOCK
%token DEL_COLON
%token DEL_DOT


//main 
%type <crepr> main_body
%type <crepr> body

//declarations
%type <crepr> types
%type <crepr> complex_type_declarations
%type <crepr> constant_declarations
%type <crepr> variable_declarations
%type <crepr> function_declarations


%type <crepr> input


program:
      main_body                  
      { 
          $$ = template("%s",$1); 
          if (yyerror_count == 0) 
          {     
                FILE *fp = fopen("bisonOUT.c","w");

                printf("\n\t\t\tC CODE SHOWCASE\n");
                printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
                printf("\n%s\n", $1);
                printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
                printf("\t\t\tC CODE END\n");
                printf("\nWrite everything on an output just for my ease.\n");
                fputs("#include <stdio.h>\n",fp);
                fputs(c_prologue,fp);
                fprintf(fp,"%s\n", $1);
                
                fclose(fp);               
          }
          
      }                               
      ;

main_body: main | complex_type_declarations | constant_declarations | variable_declarations | function_declarations;



main: KW_DEF KW_MAIN DEL_LPAR DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON L_SEMICOLON { $$ = template("int main(){\n%s};



types:
	KW_INT {$$ = template("%s", "int");}
|	KW_BOOLEAN {$$ = template("%s", "int");}	// no boolean types in c and C uses ints to depict them
|	KW_SCALAR {$$ = template("%s","double");}
|	KW_STR {$$ = template("%s", "char*");};



// identifier or array(with possitive integer to indicate size) identifier or more identifiers sep by comma
identifiers:
	TK_IDENTIFIER {$$=$1}
	| TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK {$$ = template("%s[%s]",$1,$3);}
	| identifiers DEL_COMMA TK_IDENTIFIER $$ = template("%s, %s", $1,$3);};



variable_declarations:
	identifiers DEL_COLON types DEL_SMCOLON {$$ = template("%s %s; ", $3, $2); };


constant_declarations:
	KW_CONST identifiers AP_ASSIGN input DEL_COLON types DEL_SMCOLON {$$ = template("%s = %s", $1, $3);}










int main(void) {
    yyparse();
    return 0;
}