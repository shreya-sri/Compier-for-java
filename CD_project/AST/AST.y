%{
#include <stdio.h>
#include <string.h>
#include "AST.h"

extern int yylineno;
char errMess[55] = "Error";
extern char* yytext;
int yylex(void);
void yyerror (char const *);


%}

%define parse.error verbose

%union
{
    int number;
    char *string;
    char character;
	float decimal;
	struct node * nd_type;
   	 
}

%token <number> T_NUM  
%token <decimal> T_DECIMAL
%token <string> T_IDENTIFIER
%token <character> T_CHARACTER 
%token <string> T_STRING_LITERAL
%token <number> T_TRUE
%token <number> T_FALSE

%type<nd_type> arithm_e rel_e  char_e float_e str_e stmnt s1  
%type<nd_type> expression id dtypes variable_declaration 
%type<nd_type> compilation_unit class_stmt method_stmnt other_method main_method
%type<nd_type> if_else if_stmt else_if_blocks else_if_block for_stmt for_args loop_init loop_conds arg2 arg3 
%type<nd_type> ids1 ids2 ids3 ids4

%token T_IMPORT T_CLASS T_PACKAGE T_MAIN T_ARGS T_SOP
%token T_TYPEDEF T_STATIC T_NEW
%token T_PUBLIC T_PRIVATE T_PROTECTED
%token T_OC T_CC T_OF T_CF T_OS T_CS
%token T_CHAR T_INT T_FLOAT T_VOID T_STRING 
%token T_IF T_ELSE T_FOR T_CONTINUE T_BREAK T_RETURN
%token T_ASSIGN T_ADD_ASSIGN T_SUB_ASSIGN T_MUL_ASSIGN T_DIV_ASSIGN 
%token T_ADD T_SUB T_MUL T_DIV T_MOD 
%token T_INC_OP T_DEC_OP T_LE T_GE  T_EQ T_LT T_GT
%token T_AND_OP T_OR_OP T_NE_OP T_BIT_AND T_BIT_OR T_NOT
%token T_COMMA T_COL T_DOT T_SEMC T_EXP T_QUE  

%nonassoc T_ASSIGN
%left T_ADD T_SUB T_MUL T_DIV
%right T_LT T_GT T_NE T_LE T_GE T_EQ

%%

S: 		compilation_unit      { print_ascii_tree($1); printf(" \n\n ACCEPTED\n");}
		;
		
compilation_unit: 	package_statement import_statement class_stmt     {$$ = $3;}
             		;
             	
package_statement: 	T_PACKAGE T_IDENTIFIER T_SEMC
					|
             		;
             		
import_statement: 	T_IMPORT package_name T_DOT T_MUL T_SEMC
   		  			| T_IMPORT package_name T_DOT T_IDENTIFIER  T_SEMC
                    | T_IMPORT T_MUL T_SEMC
                    |
   		  			;

package_name:    	T_IDENTIFIER T_DOT T_IDENTIFIER
					;
   
class_stmt: 		modifier T_CLASS T_IDENTIFIER T_OF stmnt method_stmnt T_CF    {$$ = createnode($5,$6, "class_stmnt");}
      				;
      				
modifier:           T_PUBLIC
					| T_PRIVATE
					| T_PROTECTED
					;
					
method_stmnt:       other_method main_method												{$$ = createnode($1,$2, "method_stmnt");}
					;

other_method:       other_method T_PUBLIC T_VOID T_IDENTIFIER T_OC T_CC T_OF stmnt T_CF		{$$ = createnode($1,$8, "public_method");}
					| other_method T_STATIC T_VOID T_IDENTIFIER T_OC T_CC T_OF stmnt T_CF	{$$ = createnode($1,$8, "static_method");}
					| 																		{$$ = createnode(0,0, "NULL");}
					;
					      	    	
main_method: 		T_PUBLIC T_STATIC T_VOID T_MAIN T_OC T_STRING T_OS T_CS T_ARGS T_CC T_OF stmnt T_CF   {$$ = createnode(0, $12, "main_method"); }
        			;

stmnt: 	stmnt s1		{$$ = createnode($1,$2, "stmnt");}
  		|				{$$ = createnode(0,0, "NULL");}
  		;

s1: 	variable_declaration T_SEMC   	{ $$=$1 ;}
		| expression T_SEMC   	 		{ $$=$1 ;}
		| if_else						{ $$=$1 ;}
		| for_stmt						{ $$=$1 ;}
		| print_stmnt					{$$ = createnode(0,0, "NULL");}
		| T_SEMC						{$$ = createnode(0,0, "NULL");}
		;

variable_declaration: 	dtypes 			{$$ = $1;}
                		;

dtypes: T_INT ids1						{$$ = $2;}
    	| T_FLOAT ids2					{$$ = $2;}
    	| T_CHAR ids3					{$$ = $2;}
    	| T_STRING  ids4				{$$ = $2;}
    	| array							{$$ = createnode(0,0, "NULL");}
    	;
    	
array: 	T_INT T_OS T_CS T_IDENTIFIER T_ASSIGN T_NEW T_INT T_OS T_NUM T_CS
		| T_FLOAT T_OS T_CS T_IDENTIFIER T_ASSIGN T_NEW T_FLOAT T_OS T_NUM T_CS
		;
		
ids1: 	id T_ASSIGN arithm_e		{$$ = createnode($1,$3, "=");}
   		| ids1 T_COMMA id 		
   		| id						{$$ = $1;}
   		;
   		
ids2: 	id T_ASSIGN float_e			{$$ = createnode($1,$3, "=");}
		| ids2 T_COMMA id
		| id						{$$ = $1;}
		;
		
ids3: 	id T_ASSIGN char_e			{$$ = createnode($1,$3, "=");}
		| ids2 T_COMMA id
		| id						{$$ = $1;}
		;	
		
ids4: 	id T_ASSIGN str_e			{$$ = createnode($1,$3, "=");}
		| ids2 T_COMMA id
		| id						{$$ = $1;}
		;
		
expression:	arithm_e						{$$ = $1;}
         	| rel_e							{$$ = $1;}
      		;

rel_e: 		arithm_e T_LT arithm_e		{$$ = createnode($1, $3, "<");}
          	| arithm_e T_GT arithm_e	{$$ = createnode($1, $3, ">");}
          	| arithm_e T_LE arithm_e	{$$ = createnode($1, $3, "<=");}
          	| arithm_e T_GE arithm_e	{$$ = createnode($1, $3, ">=");}
          	| arithm_e T_EQ arithm_e	{$$ = createnode($1, $3, "==");}
          	| arithm_e T_NE_OP arithm_e	{$$ = createnode($1, $3, "!=");}
          	| T_TRUE					{$$ = createnode(0,0, "true");}
          	| T_FALSE					{$$ = createnode(0,0, "false");}
          	;
      		
arithm_e: 	arithm_e T_MUL arithm_e   		{$$ = createnode($1, $3, "*");} 	
     		| arithm_e T_DIV arithm_e   	{$$ = createnode($1, $3, "/");}
     		| arithm_e T_ADD arithm_e   	{$$ = createnode($1, $3, "+");}
     		| arithm_e T_SUB arithm_e   	{$$ = createnode($1, $3, "-");}
     		| id   							{$$ = $1;}
     		| T_NUM                       	{$$ = createnode(0,0, yytext);}
     		| id T_INC_OP   	 			{$$ = createnode($1,0, "++");}
     		| id T_DEC_OP   	 			{$$ = createnode($1,0, "--");}
     		| T_INC_OP id    	 			{$$ = createnode(0,$2, "++");}
     		| T_DEC_OP id    	 			{$$ = createnode(0,$2, "--");}
     		| id T_ASSIGN arithm_e    		{$$ = createnode($1,$3, "=");}  
     		| T_OC arithm_e T_CC	   		{$$ = $2;}
	 		;
	 		
float_e: 	id   						{$$ = $1;}
			| id T_ASSIGN float_e   	{$$ = createnode($1,$3, "=");} 
			| T_DECIMAL                 {$$ = createnode(0,0, yytext);}
			;

char_e: 	id   						{$$ = $1;}
			| id T_ASSIGN char_e  		{$$ = createnode($1,$3, "=");} 
			| T_CHARACTER                {$$ = createnode(0,0, yytext);}
			;
					
str_e:      id   						{$$ = $1;}									
			| id T_ASSIGN str_e  		{$$ = createnode($1,$3, "=");} 
			| T_STRING_LITERAL          {$$ = createnode(0,0, yytext);}
			;
			
id: 		T_IDENTIFIER 				{char *name = $1 ; $$ = createnode(0,0, name);}
   			;	 		

if_else:    if_stmt  													{$$ = $1;}
			| if_stmt else_if_blocks									{$$ = createnode($1,$2, "IF_ELSE");}
			;

if_stmt: 	T_IF T_OC rel_e T_CC T_OF stmnt T_CF    		 			{$$ = createnode($3,$6, "IF");}
   			;    		 			
    		
else_if_blocks:	T_ELSE else_if_block									{$$ = $2;}  
           		| else_if_blocks  T_ELSE else_if_block					{$$ = createnode($1,$3, "ELSE");}
           		;

else_if_block: 	T_IF T_OC rel_e T_CC T_OF stmnt T_CF  					{$$ = createnode($3,$6, "IF");}
      			| T_OF stmnt T_CF										{$$ = $2;}
          		;
          	
for_stmt: 		T_FOR T_OC for_args T_CC T_OF stmnt T_CF  				{$$ = createnode($3,$6, "FOR");}
    			;

for_args: 		loop_init T_SEMC loop_conds								{$$ = createnode($1,$3, "FOR_ARGS");}
   				;
  
loop_conds: 		arg2 T_SEMC arg3									{$$ = createnode($1,$3, "loop_conds");}
				;

loop_init: 	variable_declaration										{$$=$1;}
   			| expression												{$$=$1;}
   			|															{$$ = createnode(0,0, "NULL");}
   			;
   				
arg2: 	rel_e															{$$=$1;}
 		|																{$$ = createnode(0,0, "NULL");}
 		;

arg3:	arithm_e														{$$=$1;}
 		|																{$$ = createnode(0,0, "NULL");}
 		;
 		
print_stmnt: T_SOP T_OC T_STRING_LITERAL T_CC  
			| T_SOP T_OC T_IDENTIFIER T_CC 
			 ;

%%

void yyerror (char const *s) {
	fprintf (stderr, "Error: %s\n", s);
  	printf("Error occured at  Line No.  %d\n" , yylineno);
   	printf("Error before : %s\n" , yytext);
}

int yywrap() { 
	return 1;
}

int main() {
	yyparse();
	return 1;
}





