%{																//DO ERROR MESSAGES AND TYPE CHECKING!!!!
#include <stdio.h>
#include <string.h>

void PSymTable();
int lookupsymb(char *, int);
void print();
int mapping(char *, int);
int yylex(void);
void yyerror (char const *);
int func(int, int, int);

char errMess[55] = "Error";
extern char* yytext;
extern int yylineno;
extern int yyscope;
int block;
int xpos =-1;
int idx = -1; // A global variable to hold the number of entries in the symbol table

struct SymTable {
    char idName[50];
    int value;
    float f_val;
    char c_val;
    char s_val[100];
    int type;  //0-int , 1-float, 2-char, 3-String, 4-int[], 5-float[] 
    int line_no;
    int scope;
    int size;
}; struct SymTable st[50];

%}

%define parse.error verbose

%union
{
    int number;
    char *string;
    char character;
	float decimal;
   	 
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

S: 		compilation_unit    {PSymTable(); printf("\n ACCEPTED\n"); return 0; }
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
   
class_stmt: 		modifier T_CLASS T_IDENTIFIER T_OF {block = 0;} stmnt method_stmnt T_CF  
      				;
      				
modifier:           T_PUBLIC
					| T_PRIVATE
					| T_PROTECTED
					;
					
method_stmnt:       other_method main_method
					;

other_method:       other_method T_PUBLIC T_VOID T_IDENTIFIER T_OC T_CC T_OF {block = 0;} stmnt T_CF
					|other_method T_STATIC T_VOID T_IDENTIFIER T_OC T_CC T_OF {block = 0;} stmnt T_CF 
					|
					;
					      	    	
main_method: 		T_PUBLIC T_STATIC T_VOID T_MAIN T_OC T_STRING T_OS T_CS T_ARGS T_CC T_OF {block = 0;} stmnt T_CF    
        			;

stmnt: 	stmnt s1
  		|
  		;

s1: 	variable_declaration T_SEMC   
		| expression T_SEMC  
		| if_stmt
		|for_stmt
		|print_stmnt T_SEMC
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
    	
array: 	T_INT T_OS T_CS T_IDENTIFIER T_ASSIGN T_NEW T_INT T_OS T_NUM T_CS   	{if(lookupsymb($4, yyscope)==-1) {idx++; strcpy(st[idx].idName,$4); 																				st[idx].type =4; st[idx].size=($9)*4; st[idx].scope = yyscope; 																					st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
		|T_FLOAT T_OS T_CS T_IDENTIFIER T_ASSIGN T_NEW T_FLOAT T_OS T_NUM T_CS  {if(lookupsymb($4, yyscope)==-1) {idx++; strcpy(st[idx].idName,$4); 																				st[idx].type =5; st[idx].size=($9)*4; st[idx].scope = yyscope; 																					st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
		;


ids1: 	T_IDENTIFIER T_ASSIGN arithm_e    	{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1); st[idx].type =0; st[idx].value = $3; 												st[idx].size = 4; st[idx].scope = yyscope;  st[idx].line_no = yylineno; } else {yyerror("variable already declared");}} 
   		| ids1 T_COMMA T_IDENTIFIER    		{if(lookupsymb($3, yyscope)==-1) {idx++; strcpy(st[idx].idName,$3);  st[idx].type =0; st[idx].size = 4;
   											st[idx].scope =yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");} }
   		| T_IDENTIFIER    	 				{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1); st[idx].type =0; st[idx].scope = 												yyscope; st[idx].size = 4;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		;

ids2: 	T_IDENTIFIER T_ASSIGN float_e		{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1); st[idx].type =1; st[idx].f_val = $3; 												st[idx].size = 4; st[idx].scope = yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		| ids2 T_COMMA T_IDENTIFIER    		{if(lookupsymb($3, yyscope)==-1) { idx++; strcpy(st[idx].idName,$3);  st[idx].type =1; st[idx].scope = 												yyscope; st[idx].size = 4;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		| T_IDENTIFIER   		 			{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1);  st[idx].type =1; st[idx].scope = 												yyscope; st[idx].size = 4;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		;
   					
ids3: 	T_IDENTIFIER T_ASSIGN char_e		{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1); st[idx].type =2; st[idx].c_val = $3; 												st[idx].size = 2; st[idx].scope = yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		| ids3 T_COMMA T_IDENTIFIER    		{if(lookupsymb($3, yyscope)==-1) { idx++; strcpy(st[idx].idName,$3);  st[idx].type =2; st[idx].scope = 												yyscope; st[idx].size = 2;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		| T_IDENTIFIER   		 			{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1);  st[idx].type =2; st[idx].scope = 												yyscope; st[idx].size = 2;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		;
   					
ids4: 	T_IDENTIFIER T_ASSIGN str_e			{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1); st[idx].type =3; 
											strcpy(st[idx].s_val,$3); st[idx].size = (2*strlen($3)); st[idx].scope = yyscope;  												st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		| ids4 T_COMMA T_IDENTIFIER    		{if(lookupsymb($3, yyscope)==-1) { idx++; strcpy(st[idx].idName,$3); st[idx].type =3; st[idx].scope = 												yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		| T_IDENTIFIER   		 			{if(lookupsymb($1, yyscope)==-1) {idx++; strcpy(st[idx].idName,$1); st[idx].type =3; st[idx].scope = 												yyscope; st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
   		;   					
   					
expression:	arithm_e
         	| rel_e
      		;
      		
      		
rel_e: 		arithm_e T_LT arithm_e   	 	{$$ = func($1,$3,1);}
      		| arithm_e T_GT arithm_e 	 	{$$ = func($1,$3,2);}
      		| arithm_e T_LE arithm_e 	 	{$$ = func($1,$3,3);}
      		| arithm_e T_GE arithm_e 	 	{$$ = func($1,$3,4);}
      		| arithm_e T_EQ arithm_e     	{$$ = func($1,$3,5);}
      		| arithm_e T_NE_OP arithm_e     {$$ = func($1,$3,6);}
      		| T_TRUE						{$$ = $1; }
      		| T_FALSE						{$$ = $1; }
      		;

arithm_e: 	arithm_e T_MUL arithm_e   		 	{$$ = $1 * $3;}
     		| arithm_e T_DIV arithm_e   	 	{$$ = $1 / $3;}
     		| arithm_e T_ADD arithm_e   	 	{$$ = $1 + $3;}
     		| arithm_e T_SUB arithm_e   	 	{$$ = $1 - $3;}
     		| T_IDENTIFIER   					{xpos = mapping($1, yyscope); if(xpos!=-1) { $$ = st[xpos].value; } else {yyerror("variable not declared");} }
     		| T_NUM                      	 	{$$ = $1; }
     		| T_IDENTIFIER T_INC_OP   	 		{xpos = mapping($1, yyscope); $$=st[xpos].value++;}
     		| T_IDENTIFIER T_DEC_OP   	 		{xpos = mapping($1, yyscope); $$=st[xpos].value--;}
     		| T_INC_OP T_IDENTIFIER    	 		{xpos = mapping($2, yyscope); $$=++st[xpos].value;}
     		| T_DEC_OP T_IDENTIFIER    	 		{xpos = mapping($2, yyscope); $$=--st[xpos].value;}
     		| T_IDENTIFIER T_ASSIGN arithm_e    {xpos = mapping($1, yyscope); if(xpos!=-1) { st[xpos].value = $3; } else {yyerror("variable not declared");}}     
	 		|T_OC arithm_e T_CC					{$$ = $2; }
	 		;

float_e: 	T_IDENTIFIER   						{xpos = mapping($1, yyscope); if(xpos!=-1) { $$ = st[xpos].f_val; } else {yyerror("variable not declared");} }
			| T_IDENTIFIER T_ASSIGN float_e   	{xpos = mapping($1, yyscope); if(xpos!=-1) { st[xpos].f_val = $3; } else {yyerror("variable not declared");}}
			| T_DECIMAL                   		{$$ = $1; }
			;

char_e: 	T_IDENTIFIER   						{xpos = mapping($1, yyscope); if(xpos!=-1) { $$ = st[xpos].c_val; } else {yyerror("variable not declared");} }
			| T_IDENTIFIER T_ASSIGN char_e  	{xpos = mapping($1, yyscope); if(xpos!=-1) { st[xpos].c_val = $3; } else {yyerror("variable not declared");}}
			| T_CHARACTER                  		{$$ = $1; }
			;
					
str_e:      T_IDENTIFIER   						{xpos = mapping($1, yyscope); if(xpos!=-1) { $$ = strcpy(st[idx].s_val,$1); } 
												else {yyerror("variable not declared");} }
			| T_IDENTIFIER T_ASSIGN str_e  		{xpos = mapping($1, yyscope); if(xpos!=-1) { strcpy(st[idx].s_val,$3); } else {yyerror("variable not declared");}}
			| T_STRING_LITERAL            		{$$ = $1; }
			;


if_stmt:	T_IF T_OC rel_e T_CC T_OF { block = 1;} stmnt T_CF else_stmnt {block = 0; }
			;
			
else_stmnt: T_ELSE if_stmt
			| T_ELSE T_OF {block = 1;} stmnt T_CF {block = 0;}
			|
			;
          	
for_stmt: 		T_FOR T_OC {block = 1; yyscope +=1; } for_args T_CC T_OF stmnt T_CF  {block = 0; yyscope -=1;}
    			;

for_args: 		loop_init T_SEMC loop_cond
   				;

loop_cond: 		arg2 T_SEMC arg3
				;
			
loop_init: 	variable_declaration
   			| expression
   			|
   			;
   				
arg2: 	rel_e
 		|
 		;

arg3:	arithm_e
 		|
 		;
print_stmnt: T_SOP T_OC T_STRING_LITERAL T_CC   {printf("%s\n", $3); }
			| T_SOP T_OC T_IDENTIFIER T_CC      {xpos = mapping($3, yyscope); if(xpos!=-1) {if (st[xpos].type == 0) {printf("%d\n", st[xpos].value);} 
													else if (st[xpos].type == 1) {printf("%f\n", st[xpos].f_val);} 
													else if (st[xpos].type == 2) {printf("%c\n", st[xpos].c_val);} 
													else if (st[xpos].type == 3) {printf("%s\n", st[xpos].s_val);} } else {yyerror(errMess);}} 
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

int func(int a, int b, int k ) {
	switch(k) {
		case 1: return (a<b);
     	break;

		case 2: return (a>b);
     	break;
     	 
		case 3: return (a<=b);
     	break;
     	 
		case 4: return (a>=b);
     	break;
     	 
		case 5: return (a==b);
     	break;
     	 
		case 6: return (a!=b);
     	break;
	}
}    

int lookupsymb (char* name, int scope) {
	for (int j=0; j<idx+1; j++) {
		if (strcmp(name, st[j].idName)==0) {
			if (scope > st[j].scope) 
				return j;
			else if (scope == st[j].scope) {
				if (block == 0)
					return j;
			}
		}
	}
	return -1;
}

int mapping (char* name, int scope) {
	for (int j=0; j<idx+1; j++) {
		if ((strcmp(name, st[j].idName)==0) && (scope >= st[j].scope))
			return j;
	}
	return -1;
} 


void PSymTable() {
    printf("\n| Type\t| Name\t| Value\t| Scope\t| line\t| Size\n");
    for(int j=0;j<=idx;j++)	{    
		if(st[j].type==0) {
			printf("| int\t");
			printf("| %s\t| %d\t| %d\t| %d\t| %d\n",st[j].idName,st[j].value, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==1) {
			printf("| float\t");
			printf("| %s\t| %f\t| %d\t| %d\t| %d\n",st[j].idName,st[j].f_val, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==2) {
			printf("| char\t");
			printf("| %s\t| %c\t| %d\t| %d\t| %d\n",st[j].idName,st[j].c_val, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==3) {
			printf("| string\t");
			printf("| %s\t| %s\t| %d\t| %d\t| %d\n",st[j].idName,st[j].s_val, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==4) {
			printf("| int[]\t");
			printf("| %s\t| %d\t| %d\t| %d\t| %d\n",st[j].idName,st[j].value, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==5) {
			printf("| float[]\t");
			printf("| %s\t| %d\t| %d\t| %d\t| %d\n",st[j].idName,st[j].value, st[j].scope, st[j].line_no, st[j].size);
		}
		
    }
}

 	 
     	 
