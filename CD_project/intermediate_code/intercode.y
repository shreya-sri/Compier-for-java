%{

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "intercode.h"

void yyerror (char const *);
int yylex(void);
char errMess[55] = "Error";
extern char* yytext;
extern int yylineno;

%}

%define parse.error verbose

%union
{
    int number;
    char *string;
    char character;
	float decimal;
	struct inherited* inode;
   	 
}


%token <number> T_NUM  
%token <decimal> T_DECIMAL
%token <string> T_IDENTIFIER
%token <character> T_CHARACTER 
%token <string> T_STRING_LITERAL
%token <number> T_TRUE
%token <number> T_FALSE

%type<number> arithm_e
%type<number> rel_e
%type<decimal> float_e
%type<character> char_e
%type<string> str_e
%type<string> ids1 ids2 ids3 ids4

 

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

S: 		compilation_unit    //{printf("\n ACCEPTED\n\n\n\n");  print_INT_CODE(); }
		;
		
compilation_unit: 	package_statement import_statement class_stmt
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
   
class_stmt: 		modifier T_CLASS T_IDENTIFIER T_OF stmnt method_stmnt T_CF  
      				;
      				
modifier:           T_PUBLIC
					| T_PRIVATE
					| T_PROTECTED
					;
					
method_stmnt:       other_method main_method
					;

other_method:       other_method T_PUBLIC T_VOID T_IDENTIFIER T_OC T_CC T_OF stmnt T_CF
					|other_method T_STATIC T_VOID T_IDENTIFIER T_OC T_CC T_OF stmnt T_CF 
					|
					;
					      	    	
main_method: 		T_PUBLIC T_STATIC T_VOID T_MAIN T_OC T_STRING T_OS T_CS T_ARGS T_CC T_OF stmnt T_CF    
        			;

stmnt: 	stmnt s1
  		|
  		;

s1: 	variable_declaration T_SEMC   
		| expression T_SEMC   	 
		| if_stmt
		|for_stmt
		|print_stmnt
		| T_SEMC
		;

variable_declaration: 	dtypes 
                		;

dtypes: T_INT ids1		
    	| T_FLOAT ids2
    	| T_CHAR ids3
    	| T_STRING  ids4
    	| array
    	;
    	
array: 	T_INT T_OS T_CS T_IDENTIFIER T_ASSIGN T_NEW T_INT T_OS T_NUM T_CS
		| T_FLOAT T_OS T_CS T_IDENTIFIER T_ASSIGN T_NEW T_FLOAT T_OS T_NUM T_CS
		;
		
ids1: 	T_IDENTIFIER { pushId($1);} T_ASSIGN {push();} arithm_e { codegen_assign();}
		| ids1 T_COMMA T_IDENTIFIER
		| T_IDENTIFIER						
		;
		
ids2: 	T_IDENTIFIER { pushId($1);} T_ASSIGN {push();} float_e { codegen_assign();}
		|ids2 T_COMMA T_IDENTIFIER
		| T_IDENTIFIER						
		;
		
ids3: 	T_IDENTIFIER { pushId($1);} T_ASSIGN {push();} char_e { codegen_assign();}
		| ids3 T_COMMA T_IDENTIFIER
		| T_IDENTIFIER
		;
		
ids4: 	T_IDENTIFIER { pushId($1);} T_ASSIGN {push();} str_e { codegen_assign();}
		| ids4 T_COMMA T_IDENTIFIER
		| T_IDENTIFIER
		;
		
expression:	arithm_e
		| rel_e
		;
		
rel_e: 		arithm_e T_LT {push();} arithm_e {codegen();}
			| arithm_e T_GT {push();} arithm_e {codegen();} 	
			| arithm_e T_LE {push();} arithm_e {codegen();}
			| arithm_e T_GE {push();} arithm_e {codegen();}
			| arithm_e T_EQ {push();} arithm_e {codegen();}
			| arithm_e T_NE_OP {push();} arithm_e {codegen();}	
			| T_TRUE {push();}
			| T_FALSE {push();}
			;
			
arithm_e: 	arithm_e T_MUL {push();} arithm_e {codegen();}
			| arithm_e T_DIV {push();} arithm_e {codegen();}
			| arithm_e T_ADD {push();} arithm_e {codegen();}
			| arithm_e T_SUB {push();} arithm_e {codegen();}
			| T_IDENTIFIER { pushId($1);}
			| T_NUM {push();} 
			| T_IDENTIFIER T_INC_OP {push();} { pushId($1); pushId("=");} {pushId($1); pushId("+"); pushId("1"); codegen();} {codegen_assign();}
			| T_IDENTIFIER T_DEC_OP {push();} { pushId($1); pushId("=");} {pushId($1); pushId("-"); pushId("1"); codegen();} {codegen_assign();}
			| T_INC_OP  T_IDENTIFIER  {pushId($2); pushId("=");} {pushId($2); pushId("+"); pushId("1"); codegen();} {codegen_assign();}
			| T_DEC_OP T_IDENTIFIER {pushId($2); pushId("=");} {pushId($2); pushId("-"); pushId("1"); codegen();} {codegen_assign();}
			| T_IDENTIFIER {pushId($1);} T_ASSIGN {push();} arithm_e { codegen_assign();}
			| T_OC arithm_e T_CC {$$ = $2;}
			;
			
float_e: 	T_IDENTIFIER { pushId($1);}
			| T_IDENTIFIER { pushId($1);} T_ASSIGN {push();} float_e { codegen_assign();}
			| T_DECIMAL {push();}  
			;
			
char_e: 	T_IDENTIFIER { pushId($1);}  
			| T_IDENTIFIER {pushId($1);} T_ASSIGN {push();} char_e { codegen_assign();}
			| T_CHARACTER {push();} 
			;
			
str_e:      T_IDENTIFIER  { pushId($1);} 
			| T_IDENTIFIER {pushId($1);} T_ASSIGN {push();} str_e { codegen_assign();}
			| T_STRING_LITERAL {push();} 
			;
						
if_stmt:	T_IF T_OC rel_e T_CC {if_label1();} T_OF stmnt T_CF else_stmnt
			;
			
else_stmnt: T_ELSE {if_label2();}  if_stmt
			| T_ELSE {if_label2();}  T_OF stmnt T_CF {if_label3();}
			| {if_label3();}
			;

for_stmt: T_FOR T_OC arg1 T_SEMC {for_label1();} arg2 T_SEMC {for_label2();} arg3 {for_label4();} T_CC T_OF stmnt {for_label3();} T_CF 
          ;
 

arg1: variable_declaration 
       |expression 
       | 
       ;


arg2: rel_e 
     |
     ;

arg3:arithm_e 
     |
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


