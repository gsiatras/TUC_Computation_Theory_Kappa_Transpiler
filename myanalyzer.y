%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cgen.h"

#define MAX_STRING_LENGTH 1024 


int yylex(void);
extern int line_num;

// arrays used for comp types 
char** comp_function_output = NULL;
char** comp_function_names = NULL;
char** cfnames = NULL;
char** comp_names = NULL;

// counters for comp type arrays
int num_functions = 0;
int num_comps = 0;
int total_functions = 0;

// flags
int cflag = 0; // flag to choose -> or not 
int dflag = 0; // flag used for expr.func(&expr)

// buffers and dot_call for &expr
char* buffer;
char* namebuffer;
char* dot_call;
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
%type <crepr> parameter_declarations
%type <crepr> comp_functions
%type <crepr> comp_body
%type <crepr> comp_identifiers
%type <crepr> comp_variables

%type <crepr> program
%type <crepr> identifiers
%type <crepr> expressions
%type <crepr> identifier_expressions
%type <crepr> arithmetic_expressions
%type <crepr> relational_expressions
%type <crepr> comp_expressions
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

                printf("\n\t\t\tC CODE\n");
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
  KW_DEF KW_MAIN DEL_LPAR DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON {$$ = template("int main(){\n%s\n}", $6);};



// =====================================================Types and Identifiers===================================================
types:
  DEL_LBLOCK DEL_RBLOCK basic_types { $$ = template("%s*", $3); }
  | basic_types { $$ = $1; }
  | TK_IDENTIFIER {
    // Check if there is a comp type declared with with TK_IDENTIFIER name if not give error
    int found = 0;
      //printf("\n%d\n", num_comps);
      for (int i = 0; i < num_comps; i++) {
        //printf("\n%s || %s\n", comp_names[i], $1);
        if (strcmp(comp_names[i], $1) == 0) {
          found = 1;
          //printf("\nFound = 1\n");
          $$ = $1;
          break;
        }
      }
      if (found == 0) {
        //printf("\n1\n");
        yyerror("There is no complex type %s declared.", $1);
        YYERROR;

      }
  }

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
  | TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK DEL_COLON basic_types DEL_SMCOLON {$$ = template("%s %s[%s]; ", $6, $1, $3); }


comp_variables:
  identifiers DEL_COLON TK_IDENTIFIER DEL_SMCOLON {$$ = template("%s %s = ctor_%s; ", $3, $1, $3); }


constant_declarations:
	KW_CONST identifiers AP_ASSIGN expressions DEL_COLON types DEL_SMCOLON {$$ = template("const %s %s = %s;", $6, $2, $4);};




// -------------------------------------------------functions and function declarations----------------------------------------
functions: 
  KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON {$$ = template("\nvoid %s(%s) {\n%s\n}\n", $2, $4, $7);}
  | KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON {$$ = template("\n%s %s(%s) {\n%s\n\n}\n", $7, $2, $4, $9);};


parameter_declarations: 
  %empty { $$ = "" ;}
  | TK_IDENTIFIER DEL_COLON types {$$ = template("%s %s", $3, $1);}
  | TK_IDENTIFIER DEL_LBLOCK DEL_RBLOCK DEL_COLON types {$$ = template("%s *%s", $5, $1);}
  | TK_IDENTIFIER DEL_LBLOCK DEL_RBLOCK DEL_COLON types DEL_COMMA parameter_declarations {$$ = template("%s *%s, %s", $5, $1, $7);}
  | TK_IDENTIFIER DEL_COLON types DEL_COMMA parameter_declarations {$$ = template("%s %s, %s", $3, $1, $5);};




//-----------------------------------------------------------complex type------------------------------------------------------ 
complex_type_declarations:
  KW_COMP TK_IDENTIFIER DEL_COLON comp_body KW_ENDCOMP DEL_SMCOLON { // reset comp flag
    cflag = 0;
    // get all the function output strings in one buffer to print them (one buffer for the functions and one for the function names)
    buffer = malloc(1);
    buffer[0] = '\0';
    namebuffer = malloc(1);
    namebuffer[0] = '\0';

    //printf("1\n");
    //printf("nf%d\n", num_functions);
    // loop through the array allocate space 
    for (int i = 0; i < num_functions; i++) {
      //printf("2\n");
      char* curr_string = comp_function_output[i];
      char* name_string = comp_function_names[i];

      //printf("2.5\n");
      buffer = realloc(buffer,  strlen(buffer) + strlen(curr_string) + 3); // +3 for 2new line and null terminator

      namebuffer = realloc(namebuffer, strlen(namebuffer) + strlen(name_string) + 3); // +3 for comma space and null terminator
      //printf("3\n");

      // add to buffer
      strcat(buffer, curr_string);
      strcat(namebuffer, name_string);
      //printf("Buffers:%s\n", name_string);
      if (i != num_functions -1) {
        strcat(buffer, "\n\n");
        strcat(namebuffer, ", ");
      }


    }

    //printf("\n%s\n", $2);
    // store the comp name
    // raise counters
    num_comps = num_comps + 1;

    // allocate space
    comp_names = realloc(comp_names, num_comps * sizeof(char*));

    // add output string to array
    comp_names[num_comps - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));

    comp_names[num_comps - 1] = strdup(template("%s", $2)); 

    //printf("\n%s\n", comp_names[num_comps -1]);

    //for(int i = 0; i < num_comps; i++){
      //printf("\n%s\n", comp_names[i]);
    //}

    $$ = template("\n#define SELF struct %s *self\ntypedef struct %s {\n%s\n} %s;\n\n%s\n\nconst %s ctor_%s = { %s };\n#undef SELF", $2, $2, $4, $2, buffer, $2, $2, namebuffer); 

   
    num_functions = 0;
    };


comp_body:
  comp_variable_declarations { $$ = $1; }
  | comp_variable_declarations comp_body {$$ = template("%s\n%s", $1, $2);}
  | comp_functions { $$ = $1; }
  | comp_functions comp_body {$$ = template("%s\n%s", $1, $2);};


comp_variable_declarations:
  comp_identifiers DEL_COLON types DEL_SMCOLON {
  // raise comp flag
  cflag = 1;
  $$ = template("%s %s;", $3, $1);};
  


comp_identifiers:
  AP_HASHASSIGN TK_IDENTIFIER { $$ = $2; }
  | AP_HASHASSIGN TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK {$$ = template("%s[%s]", $2, $4);};
  | AP_HASHASSIGN TK_IDENTIFIER DEL_COMMA comp_identifiers {$$ = template("%s, %s", $2, $4);};
  

comp_functions:
  KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR DEL_COLON body KW_ENDDEF DEL_SMCOLON 
  {
    // add every function outputs to a char** array to print after the comp
    // raise counter
    num_functions = num_functions + 1;
    total_functions = total_functions + 1;

    // allocate space
    comp_function_output = realloc(comp_function_output, num_functions * sizeof(char*));

    comp_function_names = realloc(comp_function_names, num_functions * sizeof(char*));

    cfnames = realloc(cfnames, total_functions * sizeof(char*));


    // add output string to array
    comp_function_output[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));

    comp_function_names[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));

    cfnames[total_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));
    

    comp_function_output[num_functions - 1] = strdup(template("void %s(SELF%s%s) {\n%s\n} ", $2, strlen($4) != 0  ? ", " : "", $4, $7)); 

    comp_function_names[num_functions - 1] = strdup(template(".%s=%s", $2, $2));

    cfnames[total_functions - 1] = strdup(template("%s", $2));

    //printf("\n%s\n", comp_function_names[num_functions - 1]);
    // do the normal $$
    $$ = template("\nvoid (*%s)(SELF%s%s);", $2, ($4[0] != '\0') ? ", " : "", $4);
    } 

  | KW_DEF TK_IDENTIFIER DEL_LPAR parameter_declarations DEL_RPAR AP_ARROWASSIGN types DEL_COLON body KW_ENDDEF DEL_SMCOLON 
  { 
    // add every function output to a char** array to print after the comp
    // raise counter
    num_functions = num_functions +1;
    total_functions = total_functions + 1;

    // allocate space
    comp_function_output = realloc(comp_function_output, num_functions * sizeof(char*));

    comp_function_names = realloc(comp_function_names, num_functions * sizeof(char*));

    cfnames = realloc(cfnames, total_functions * sizeof(char*));


    // add output string to array
    comp_function_output[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char));

    comp_function_names[num_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));

    cfnames[total_functions - 1] = malloc(MAX_STRING_LENGTH * sizeof(char*));


    cfnames[total_functions - 1] = strdup(template("%s", $2));

    comp_function_output[num_functions - 1] = strdup(template("%s %s(SELF%s%s) {\n%s\n} ", $7, $2, ($4[0] != '\0') ? ", " : "", $4 ,$9));

    comp_function_names[num_functions - 1] = strdup(template(".%s=%s", $2, $2));


    //printf("\n%s\n", comp_function_names[num_functions - 1]);
    // do the normal $$
    $$ = template("\n%s (*%s)(SELF%s%s);", $7, $2, ($4[0] != '\0') ? ", " : "", $4);
    };




// ============================================================Expressions=====================================================
expressions:
  identifier_expressions { $$ = $1; dot_call = strdup(template("%s", $1)); }
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



comp_expressions:
  expressions DEL_DOT expressions { 
    //printf("1\n");
    // dot_call variable used to store last expression for &expr 
    dot_call = strdup(template("%s", $1));
    $$ = template("%s.%s", $1, $3); };

  
  
identifier_expressions:
  TK_IDENTIFIER { $$ = $1; }
  | AP_HASHASSIGN TK_IDENTIFIER { 
    //printf("\nflag: %d\n", cflag);
    if (cflag == 1) {$$ = template("self->%s", $2);}
    else {$$ = template("%s", $2);} }
  | AP_HASHASSIGN TK_IDENTIFIER DEL_LBLOCK identifier_expressions DEL_RBLOCK { 
    if (cflag == 1) {$$ = template("self->%s[%s]", $2, $4);}
    else {$$ = template("%s[%s]", $2, $4);} }
  | TK_IDENTIFIER DEL_LBLOCK TK_INTEGER DEL_RBLOCK { $$ = template("%s[%s]", $1, $3); }
  | TK_IDENTIFIER DEL_LBLOCK TK_IDENTIFIER DEL_RBLOCK { $$ = template("%s[%s]", $1, $3); }
  | comp_expressions { $$ = $1; };


arithmetic_expressions:
  TK_INTEGER {$$ = $1;}
  | TK_FLOAT {$$ = $1;}
  | expressions OP_POWER expressions {$$ = template("pow(%s, %s)", $1, $3);}
  | expressions OP_MULT expressions {$$ = template("%s * %s",$1, $3);}
  | expressions OP_DIV expressions {$$ = template("%s / %s", $1, $3);}
  | expressions OP_MOD expressions {$$ = template("%s %% %s", $1, $3);}
  | expressions OP_PLUS expressions {$$ = template("%s + %s", $1, $3);}
  | expressions OP_MINUS expressions {$$ = template("%s - %s", $1, $3);}
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
  | array_statement DEL_SMCOLON { $$ = template("%s;", $1); }
  | while_statement DEL_SMCOLON { $$ = template("%s", $1); }
  | KW_BREAK DEL_SMCOLON {$$ = template("break;");}
  | KW_CONTINUE DEL_SMCOLON {$$ = template("continue;");}
  | assign_expressions DEL_SMCOLON {$$ = template("%s;", $1);}; 
  | return_statement DEL_SMCOLON { $$ = template("%s;", $1); }
  | function_statement DEL_SMCOLON { $$ = template("%s;", $1); };
  | comp_expressions DEL_SMCOLON { $$ = template("%s;", $1); };


command_statements:
  statements { $$ = template("%s", $1); }
  | command_statements statements { $$ = template("%s\n%s", $1, $2); }
  | command_statements variable_declarations { $$ = template("%s\n%s", $1, $2); }
  | variable_declarations { $$ = $1; }
  | command_statements constant_declarations { $$ = template("%s\n%s", $1, $2); }
  | constant_declarations { $$ = template("%s", $1); };


//if else statements
if_statement:
  KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDIF {$$ = template("if (%s) {\n%s\n}", $3, $6);}
  | KW_IF DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ELSE DEL_COLON command_statements KW_ENDIF {$$ = template("if (%s) {\n%s\n} else {\n%s\n}", $3, $6, $9);};


//for statements
for_statement:
  KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR  {$$ = template("for (int %s = %s; %s < %s; %s++) {\n%s\n}", $2, $5, $2, $7, $2, $10);}
  | KW_FOR identifiers KW_IN DEL_LBLOCK expressions DEL_COLON expressions DEL_COLON expressions DEL_RBLOCK DEL_COLON command_statements KW_ENDFOR {$$ = template("for (int %s = %s; %s < %s; %s = %s + %s) {\n%s\n}", $2, $5, $2, $7, $2, $2, $9, $12);};


//array statements
array_statement:
  integral_array { $$ = $1; }
  | other_array { $$ = $1; };


integral_array:
  TK_IDENTIFIER AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR TK_IDENTIFIER DEL_COLON TK_INTEGER DEL_RBLOCK DEL_COLON types {$$ = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(%s %s = 0; %s < %s; ++%s) {\n %s[%s] = %s;\n}", $11, $1, $11, $8, $11, $11, $6, $6, $8, $6, $1, $6, $4);};


other_array:
  TK_IDENTIFIER AP_COLONASSIGN DEL_LBLOCK expressions KW_FOR TK_IDENTIFIER DEL_COLON types KW_IN TK_IDENTIFIER KW_OF TK_INTEGER DEL_RBLOCK DEL_COLON types {  
    char* old_str = $4; // expr
    char* new_str = NULL; // new expr
    const char* search_str = $6; // elm in expression
    char* replace_str = NULL; // a[a_i]

    // Create a[a_i]
    // supress a warning
    #pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
    asprintf(&replace_str, "%s[%s_i]", $10, $10);

    // Find the first occurrence of elm in expr
    char* pos = strstr(old_str, search_str);

    if (pos != NULL) {
        // Find the possition of occurance in expr
        int index = pos - old_str;

        // Allocate memory
        new_str = (char*) malloc(strlen(old_str) - strlen(search_str) + strlen(replace_str) + 1);

        // Copy the part of the old expr
        strncpy(new_str, old_str, index);

        // Append the new expr to expr
        strcat(new_str, replace_str);

        // Copy the rest of the expr
        strcat(new_str, old_str + index + strlen(search_str));
    } else {
        // If search_str is not found, copy the old_str to the new_str
        yyerror("No element %s found in expression %s", $6, $4);
        YYERROR;
    }

    
    $$ = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\nfor(int %s_i = 0; %s_i < %s; ++%s_i) {\n\t%s[%s_i] = %s;\n}", $15, $1, $15, $12, $15, $10, $10, $12, $10, $1, $10, new_str);

    // Free the memory allocated
    free(new_str); 
    free(replace_str);
    free(old_str);};


//while statements
while_statement:
  KW_WHILE DEL_LPAR expressions DEL_RPAR DEL_COLON command_statements KW_ENDWHILE {$$ = template("while (%s) {\n%s\n}", $3, $6);};
  
 
//return statements
return_statement:
  KW_RETURN {$$ = template("return");}
  | KW_RETURN expressions {$$ = template("return %s", $2);};


//function_statements
function_statement:
  TK_IDENTIFIER DEL_LPAR DEL_RPAR {
  // check if there is a comp function declared with that name else give error
  int found = 0;
  for (int i=0; i < total_functions; i++) {
    //printf("%s || %s", $1, cfnames[i]);
    if (strcmp(cfnames[i], $1) == 0){
      //printf("2\n");
      //printf("%s\n", dot_call);
      $$ = template("%s(&%s)", $1, dot_call);
      found = 1;
      break;       
    }
  } 
  if (found == 0) {
    $$ = template("%s()", $1);
    }
  }
  | TK_IDENTIFIER DEL_LPAR function_arg DEL_RPAR {
  // check if there is a comp function declared with that name else give error
  int found = 0;
  for (int i=0; i < total_functions; i++) {
    //printf("%s || %s", $1, cfnames[i]);
    if (strcmp(cfnames[i], $1) == 0){
      //printf("2\n");
      //printf("%s\n", dot_call);
      $$ = template("%s(&%s, %s)", $1, dot_call, $3);
      found = 1;
      break;       
    }
  } 
  if (found == 0) {
    $$ = template("%s(%s)", $1, $3);
    }
  };
  

function_arg:
  expressions { $$ = template("%s", $1);}
  | expressions DEL_COMMA function_arg { $$ = template("%s, %s", $1, $3); }


body: 
  statements { $$ = $1; }
  | variable_declarations { $$ = $1; }
  | constant_declarations { $$ = $1; }
  | comp_variables { $$ = $1; }
  | body statements { $$ = template("%s\n%s", $1, $2); }
  | body variable_declarations { $$ = template("%s\n%s", $1, $2); }
  | body constant_declarations { $$ = template("%s\n%s", $1, $2); }
  | body comp_variables { $$ = template("%s\n%s", $1, $2); };


%%


int main(void) {
  if ( yyparse() != 0 )
  printf("\nRejected!\n");
}