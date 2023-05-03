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
%left KW_NOT
%left KW_AND
%left KW_OR
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
%right OP_POWER

//relational operators
%left RP_EQUALS
%left RP_NOTEQUALS
%left RP_LESS
%left RP_LESSEQUALS
%left RP_MORE
%left RP_MOREEQUALS

//assignment operators
%right AP_ASSIGN
%token AP_HASHASSIGN
%right AP_PLUSASSIGN 
%right AP_MINASSIGN
%right AP_MULASSIGN
%right AP_DIVASSIGN
%right AP_MODASSIGN
%right AP_COLONASSIGN
%right AP_ARROWASSIGN


//delimiters
%token DEL_SMCOLON
%left DEL_LPAR
%left DEL_RPAR
%token DEL_COMMA
%left DEL_LBLOCK
%left DEL_RBLOCK
%token DEL_COLON
%left DEL_DOT


//main 
%type <crepr> main_body
%type <crepr> body
%type <crepr> commands
%type <crepr> return_statement



//declarations
%type <crepr> types
%type <crepr> complex_type_declarations
%type <crepr> comp_variable_declarations
%type <crepr> constant_declarations
%type <crepr> variable_declarations
%type <crepr> function_declarations
%type <crepr> parameter_declarations


%type <crepr> input
%type <crepr> identifiers
%type <crepr> methods


// Program Body
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
                fputs("#include <stdio.h>\n"
                    "#include <stdlib.h>\n"
                    "#include <string.h>\n"
                    "#include <math.h>\n"
                    "#include \"pilib.h\"\n"
                    "\n",fp);
                fputs(c_prologue,fp);
                fprintf(fp,"%s\n", $1);
                
                fclose(fp);               
          }
      }                               
      ;


// Main
main_body: 
  main {$$ = template("int main(){\n%s}
  | main_body complex_type_declarations {$$ = template("%s\nint main(){\n%s}, $2, $1);}
  | main_body constant_declarations {$$ = template("%s\nint main(){\n%s}, $2, $1);}
  | main_body variable_declarations {$$ = template("%s\nint main(){\n%s}, $2, $1);}
  | main_body function_declarations {$$ = template("%s\nint main(){\n%s}, $2, $1);};


main: 
  KW_DEF KW_MAIN DEL_LPAR DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON L_SEMICOLON {$$ = template("int main(){\n%s);};



// Types and Identifiers
types:
	KW_INT {$$ = template("%s", "int");}
|	KW_BOOLEAN {$$ = template("%s", "int");}	// no boolean types in c and C uses ints to depict them
|	KW_SCALAR {$$ = template("%s","double");}
|	KW_STR {$$ = template("%s", "char*");};


// identifier or array(with possitive integer to indicate size) identifier or more identifiers sep by comma
identifiers:
	TK_IDENTIFIER {$$=$1}
  | DEL_LBLOCK DEL_RBLOCK DEL_COLON types {$$ = template("%s*", $4);}
	| TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK {$$ = template("%s[%s]",$1,$3);}
	| identifiers DEL_COMMA TK_IDENTIFIER {$$ = template("%s, %s", $1,$3);};




// Declarations
variable_declarations:
	identifiers DEL_COLON types DEL_SMCOLON {$$ = template("%s %s; ", $3, $1); };


constant_declarations:
	KW_CONST identifiers AP_ASSIGN input DEL_COLON types DEL_SMCOLON {$$ = template("const %s = %s", $2, $4);};


function_declarations:
  KW_DEF identifiers DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types {$$ = template("\n%s (*) %s(%s)", $7, $2, $4);};


functions: 
  KW_DEF identifiers DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON {$$ = template("\nvoid %s(%s) {\n%s\n}\n", $2, $4, $7);}
  | KW_DEF identifiers DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body return_statement KW_ENDDEF DEL_SMCOLON {$$ = template("\n%s %s(%s) {\n%s\nreturn %s;}\n", $6, $2, $4, $8, $9);};


parameter_declarations: 
  identifiers DEL_COLON types {$$ = template("%s %s", $3, $1);}
  | identifiers DEL_COLON types DEL_COMMA parameter_declarations {$$ = template("%s %s, %s", $3, $1, $5);};


complex_type_declarations:
  KW_COMP identifiers DEL_COLON comp_declarations function_declarations KW_ENDCOMP {$$ = template("\ntypedef struct %s {\n%s\n%s}%s\n %s", $2, $4, $5, $2, $5);};


comp_declarations:
  


comp_variable_declarations:
  AP_HASHASSIGN identifiers DEL_COLON types DEL_SMCOLON {$$ = template("%s %s", $4, $2)};


comp_function:
  KW_DEF identifiers DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body return_statement KW_ENDDEF DEL_SMCOLON {$$ = template("type (*%s) (struct )")}









body: 
  | constant_declarations
  | variable_declarations
  commands
  | return_statement;



expressions:
  identifiers {$$ = $1;}
  | TK_INTEGER {$$ = $1;}
  | TK_FLOAT {$$ = $1;}
  | TK_STRING {$$ = $1;}
  | KW_TRUE {$$ = template("%s" = "1");}
  | KW_FALSE {$$ = template("%s" = "0");}
  | DEL_LPAR expressions DEL_RPAR {$$ = template("(%s)" = $2);}
  | DEL_LBLOCK TK_INTEGER DEL_RBLOCK {$$ = template("[%s]" = $2);}
  | expressions OP_POWER {$$ = template("[%s]" = $2);}

  | expression
  





int main(void) {
    yyparse();
    return 0;
}