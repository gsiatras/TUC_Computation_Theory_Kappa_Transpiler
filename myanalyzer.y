%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cgen.h"


int yylex(void);
extern int line_num;

%}

%union
{
  char* crepr;
}

%define parse.error verbose



%token <crepr> TK_IDENTIFIER
%token <crepr> TK_INTEGER
%token <crepr> TK_FLOAT
%token <crepr> TK_STRING



//keywords
%token KW_INT
%token KW_SCALAR
%token KW_STR
%token KW_BOOLEAN
%token KW_TRUE
%token KW_FALSE
%token KW_CONST
%token KW_IF
%token KW_ELSE
%token KW_ENDIF
%token KW_FOR
%token KW_IN
%token KW_ENDFOR
%token KW_WHILE
%token KW_ENDWHILE
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
%type <crepr> main
%type <crepr> main_body
%type <crepr> body
%type <crepr> declarations
%type <crepr> decl_body


//declarations
%type <crepr> types
%type <crepr> basic_types
%type <crepr> complex_type_declarations
%type <crepr> comp_variable_declarations
%type <crepr> constant_declarations
%type <crepr> variable_declarations
%type <crepr> function_declarations
%type <crepr> parameter_declarations
%type <crepr> comp_functions

%type <crepr> program
%type <crepr> identifiers
%type <crepr> expressions
%type <crepr> identifier_expressions
%type <crepr> arithmetic_expressions
%type <crepr> relational_expressions
%type <crepr> assign_expressions 
%type <crepr> functions
%type <crepr> function_arg

%type <crepr> statements
%type <crepr> command_statements
%type <crepr> if_statement
%type <crepr> for_statement
%type <crepr> array_statement
%type <crepr> while_statement
%type <crepr> return_statement
%type <crepr> integral_array
%type <crepr> other_array
%type <crepr> function_statement


%start program

%%

// ================================================================Program Body=================================================
program:
      main_body                  
      { 
          $$ = template("%s",$1); 
          if (yyerror_count == 0) 
          {     
                FILE *fp = fopen("bisonout.c","w");

                printf("\n\t\t\tC CODE SHOWCASE\n");
                printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
                printf("\n%s\n", $1);
                printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
                printf("\t\t\tC CODE END\n");
                printf("\nWrite everything on an output just for my ease.\n");
                fputs("#include <stdio.h>\n",fp);
                fputs("#include <math.h>\n",fp);
                fputs(c_prologue,fp);
                fprintf(fp,"%s\n", $1);
                
                fclose(fp);               
          }
      };


// -----------------------------------------------------------Main--------------------------------------------------------------
main_body: 
  decl_body main { $$ = template("%s\n%s\n",$1,$2); }
  | main { $$ = $1; };


main: 
  KW_DEF KW_MAIN DEL_LPAR DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON {$$ = template("int main(){\n\t%s\n}", $6);};



// =====================================================Types and Identifiers===================================================
types:
  DEL_LBLOCK DEL_RBLOCK basic_types { $$ = template("%s*", $3); }
  | basic_types { $$ = $1; };

basic_types:
	KW_INT {$$ = template("%s", "int");}
|	KW_BOOLEAN {$$ = template("%s", "int");}	// no boolean types in c and C uses ints to depict them
|	KW_SCALAR {$$ = template("%s","double");}
|	KW_STR {$$ = template("%s", "char*");};


// identifier or array(with possitive integer to indicate size) identifier or more identifiers sep by comma
identifiers:
	TK_IDENTIFIER  {$$ = $1;}
	| identifiers DEL_COMMA TK_IDENTIFIER {$$ = template("%s, %s", $1,$3);};



// ========================================================Declarations========================================================
//------------------------------------------------------variables and constants-------------------------------------------------
decl_body:
  decl_body declarations { $$ = template("%s\n%s", $1, $2); }
  | declarations { $$ = $1; };


declarations:
  variable_declarations { $$ = $1; }
  | complex_type_declarations { $$ = $1; }
  | constant_declarations { $$ = $1; }
  | functions { $$ = $1; };


variable_declarations:
	identifiers DEL_COLON basic_types DEL_SMCOLON {$$ = template("%s %s; ", $3, $1); }
  | TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK basic_types DEL_SMCOLON {$$ = template("%s %s[%s]; ", $5, $1, $3); }


constant_declarations:
	KW_CONST identifiers AP_ASSIGN expressions DEL_COLON types DEL_SMCOLON {$$ = template("const %s = %s;", $2, $4);};




// -------------------------------------------------functions and function declarations----------------------------------------
function_declarations:
  KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types {$$ = template("\n%s (*) %s(%s)", $7, $2, $4);};


functions: 
  KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON {$$ = template("\nvoid %s(%s) {\n%s\n}\n", $2, $4, $7);}
  | KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON {$$ = template("\n%s %s(%s) {\n%s\n\n}\n", $7, $2, $4, $9);};


parameter_declarations: 
  TK_IDENTIFIER DEL_COLON types {$$ = template("%s %s", $3, $1);}
  | TK_IDENTIFIER DEL_COLON types DEL_COMMA parameter_declarations {$$ = template("%s %s, %s", $3, $1, $5);};




//-----------------------------------------------------------complex type------------------------------------------------------ 
complex_type_declarations:
  KW_COMP identifiers DEL_COLON comp_variable_declarations function_declarations KW_ENDCOMP {$$ = template("\ntypedef struct %s {\n%s\n%s}%s\n %s", $2, $4, $5, $2, $5);};


 //comp_declarations: 
 // %empty {$$ = template("");}
  

comp_variable_declarations:
  AP_HASHASSIGN identifiers DEL_COLON types DEL_SMCOLON {$$ = template("%s %s", $4, $2);};


comp_functions:
  KW_DEF identifiers DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body return_statement KW_ENDDEF DEL_SMCOLON {$$ = template("type (*%s) (struct )")};




// ============================================================Expressions=====================================================
expressions:
  identifier_expressions { $$ = $1; }
  | TK_STRING {$$ = $1;}
  | KW_TRUE {$$ = template("%s", "1");}
  | KW_FALSE {$$ = template("%s", "0");}
  | function_statement { $$ = $1; }
  | arithmetic_expressions { $$ = $1; }
  | relational_expressions { $$ = $1; }
  | KW_NOT expressions {$$ = template("! %s", $2);}
  | expressions KW_AND expressions {$$ = template("%s && %s", $1, $3);}
  | expressions KW_OR expressions {$$ = template("%s || %s", $1, $3);}
  | DEL_LPAR expressions DEL_RPAR {$$ = template("(%s)", $2);};
  
  
identifier_expressions:
  TK_IDENTIFIER { $$ = $1; }
  | TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK { $$ = template("%s[%s]", $1, $3); }
  | TK_IDENTIFIER DEL_LBLOCK TK_IDENTIFIER DEL_RBLOCK { $$ = template("%s[%s]", $1, $3); };


arithmetic_expressions:
  TK_INTEGER {$$ = $1;}
  | TK_FLOAT {$$ = $1;}
  | expressions OP_POWER expressions {$$ = template("pow(%s, %s)", $1, $3);}
  | expressions OP_MULT expressions {$$ = template("%s * %s",$1, $3);}
  | expressions OP_DIV expressions {$$ = template("%s / %s", $1, $3);}
  | expressions OP_MOD  expressions {$$ = template("%s % %s", $1, $3);}
  | expressions OP_PLUS  expressions {$$ = template("%s + %s", $1, $3);}
  | expressions OP_MINUS  expressions {$$ = template("%s - %s", $1, $3);}
  | OP_PLUS expressions {$$ = template("+%s", $2);}
  | OP_MINUS expressions {$$ = template("-%s", $2);};


relational_expressions:
  expressions RP_LESS expressions {$$ = template("%s < %s",$1, $3);}
  | expressions RP_LESSEQUALS expressions {$$ = template("%s <= %s", $1, $3);}
  | expressions RP_MORE expressions {$$ = template("%s > %s", $1, $3);}
  | expressions RP_MOREEQUALS expressions {$$ = template("%s >= %s", $1, $3);}
  | expressions RP_EQUALS expressions {$$ = template("%s == %s", $1, $3);}
  | expressions RP_NOTEQUALS expressions {$$ = template("%s != %s", $1, $3);};


assign_expressions:
  identifier_expressions AP_ASSIGN expressions {$$ = template("%s = %s", $1, $3);}
  | identifier_expressions AP_PLUSASSIGN expressions {$$ = template("%s += %s", $1, $3);}
  | identifier_expressions AP_MINASSIGN expressions {$$ = template("%s -= %s" , $1, $3);}
  | identifier_expressions AP_MULASSIGN expressions {$$ = template("%s *= %s", $1, $3);}
  | identifier_expressions AP_DIVASSIGN expressions {$$ = template("%s /= %s", $1, $3);}
  | identifier_expressions AP_MODASSIGN expressions {$$ = template("%s %= %s", $1, $3);}; 


  //==============================================================Statements====================================================
statements:
  if_statement DEL_SMCOLON { $$ = template("%s", $1); }
  | for_statement DEL_SMCOLON { $$ = template("%s", $1); }
  | array_statement DEL_SMCOLON { $$ = template("%s", $1); }
  | while_statement DEL_SMCOLON { $$ = template("%s", $1); }
  | KW_BREAK DEL_SMCOLON {$$ = template("break;");}
  | KW_CONTINUE DEL_SMCOLON {$$ = template("continue;");}
  | assign_expressions DEL_SMCOLON {$$ = template("%s;", $1);}; 
  | return_statement DEL_SMCOLON { $$ = template("%s;", $1); }
  | function_statement DEL_SMCOLON{ $$ = template("%s;", $1); };

command_statements:
  statements { $$ = $1; }
  | command_statements statements { $$ = template("%s\n%s", $1, $2); }
  | command_statements variable_declarations { $$ = template("%s\n%s", $1, $2); }
  | variable_declarations { $$ = $1; }
  | command_statements constant_declarations { $$ = template("%s\n%s", $1, $2); }
  | constant_declarations { $$ = $1; };


//if else statements
if_statement:
  KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDIF {$$ = template("if (%s) {\n %s\n}", $3, $6);}
  | KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ELSE command_statements KW_ENDIF {$$ = template("if (%s) {\n\t%s;\n} else {\n\t %s\n}", $3, $6, $8);};


//for statements
for_statement:
  KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR  {$$ = template("for (int %s = %s; %s < %s; %s++) {\n\t%s;\n}", $2, $5, $2, $7, $2, $10);}
  | KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements DEL_SMCOLON KW_ENDFOR {$$ = template("for (int %s = %s; %s < %s; %s = %s %s) {\n\t%s\n}", $2, $5, $2, $7, $2, $2, $9, $12);};


//array statements
array_statement:
  integral_array { $$ = $1; }
  | other_array { $$ = $1; };


integral_array:
  identifiers AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR identifiers DEL_COLON TK_INTEGER DEL_RBLOCK DEL_COLON types {$$ = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(%s %s = 0; %s < %s; ++%s) {\n\t %s[%s] = %s}", $11, $1, $11, $8, $11, $11, $4, $8, $4, $1, $4, $4);};


other_array:
  identifiers AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR identifiers DEL_COLON types KW_IN identifiers KW_OF TK_INTEGER DEL_RBLOCK DEL_COLON types {$$ = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(int %s10_i = 0; %s10_i < %s12; ++%s10_i) {\n\t %s1[%s10_i] = %s4}", $15, $1, $15, $12, $15, $10, $10, $12, $10, $1, $10, $4);};


//while statements
while_statement:
  KW_WHILE DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDWHILE {$$ = template("while (%s) {\n\t statements\n}", $3, $6);};
  
 
//return statements
return_statement:
  KW_RETURN {$$ = template("return");}
  | KW_RETURN expressions {$$ = template("return %s", $2);};


//function_statements
function_statement:
  TK_IDENTIFIER DEL_LPAR function_arg DEL_RPAR {$$ = template("%s(%s)", $1, $3);};
  

function_arg:
  %empty { $$ = ""; }
  | expressions { $$ = $1; }
  | function_arg DEL_COMMA expressions { $$ = template("%s, %s", $1, $3); }


body: 
  statements { $$ = $1; }
  | variable_declarations { $$ = $1; }
  | constant_declarations { $$ = $1; }
  | body statements { $$ = template("%s\n%s",$1,$2); }
  | body variable_declarations { $$ = template("%s\n%s",$1,$2); }
  | body constant_declarations { $$ = template("%s\n%s",$1,$2); };


%%
int main(void) {
    if ( yyparse() != 0 )
    printf("\nRejected!\n");
}