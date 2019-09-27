%{

#include <stdio.h>
#include <stdlib.h>


extern int yylex();
extern int yyparse();
extern FILE* yyin;



void yyerror(const char* s);
%}


%union {

	int ival;
	float fval;
	bool bval;

	
	
	
	

}




%token<ival> T_INT
%token<fval> T_FLOAT
%token<bval> T_BOOL

%token T_PLUS T_MINUS T_MULTIPLY T_DIVIDE T_LEFT T_RIGHT
%token T_NEWLINE T_QUIT
%token T_LESS T_GREATER T_LESS_E T_GREATER_E
%token T_EQUAL T_NOT_EQUAL T_AND T_OR T_NOT
%token T_IF T_ELSE T_WHILE
%token N_INT N_BOOL N_CHAR N_STRING N_FLOAT
%token T_STRING T_RETURN
%left T_PLUS T_MINUS T_END T_COMEN
%left T_MULTIPLY T_DIVIDE N_FUN T_COLON T_COMMA T_LOOP



%type<ival> expression
%type<fval> mixed_expression
%type<bval> bool_expression


%start calculation

%%

calculation: 
	| calculation exitp   
;


exitp: 
	| programa T_QUIT 

;

programa:	
	| decl T_NEWLINE
	| decl programa 
;

decl:  funcao | global  ;
global: parametro T_NEWLINE;


bool_expression: T_BOOL { $$ = $1; }
	| T_LEFT bool_expression T_RIGHT		 { $$ = $2; }
	| T_NOT bool_expression		 { $$ = !($2); }
	| expression T_LESS expression {$$ = $1 < $3;}
	| mixed_expression T_LESS mixed_expression {$$ = $1 < $3;}
	| expression T_GREATER expression {$$ = $1 > $3;}
	| mixed_expression T_GREATER mixed_expression {$$ = $1 > $3;}

	| expression T_LESS_E expression {$$ = $1 <= $3;}
	| mixed_expression T_LESS_E mixed_expression {$$ = $1 <= $3;}
	| expression T_GREATER_E expression {$$ = $1 >= $3;}
	| mixed_expression T_GREATER_E mixed_expression {$$ = $1 >= $3;}

	| expression T_EQUAL expression {$$ = $1 != $3;}
	| mixed_expression T_EQUAL mixed_expression {$$ = $1 != $3;}
	| expression T_NOT_EQUAL expression {$$ = $1 != $3;}
	| mixed_expression T_NOT_EQUAL mixed_expression {$$ = $1 != $3;}

	| bool_expression T_AND bool_expression {$$ = $1 && $3;}
	| bool_expression T_OR bool_expression {$$ = $1 || $3;}

;

mixed_expression: T_FLOAT                 		 { $$ = $1; }
	  | mixed_expression T_PLUS mixed_expression	 { $$ = $1 + $3; }
	  | mixed_expression T_MINUS mixed_expression	 { $$ = $1 - $3; }
	  | mixed_expression T_MULTIPLY mixed_expression { $$ = $1 * $3; }
	  | mixed_expression T_DIVIDE mixed_expression	 { $$ = $1 / $3; }
	  | T_LEFT mixed_expression T_RIGHT		 { $$ = $2; }
	  | T_MINUS mixed_expression		 { $$ = (-1) * $2; }
	  | expression T_PLUS mixed_expression	 	 { $$ = $1 + $3; }
	  | expression T_MINUS mixed_expression	 	 { $$ = $1 - $3; }
	  | expression T_MULTIPLY mixed_expression 	 { $$ = $1 * $3; }
	  | expression T_DIVIDE mixed_expression	 { $$ = $1 / $3; }
	  | mixed_expression T_PLUS expression	 	 { $$ = $1 + $3; }
	  | mixed_expression T_MINUS expression	 	 { $$ = $1 - $3; }
	  | mixed_expression T_MULTIPLY expression 	 { $$ = $1 * $3; }
	  | mixed_expression T_DIVIDE expression	 { $$ = $1 / $3; }
	  | expression T_DIVIDE expression		 { $$ = $1 / (float)$3; }
;

expression: T_INT				{ $$ = $1; }
	  | expression T_PLUS expression	{ $$ = $1 + $3; }
	  | expression T_MINUS expression	{ $$ = $1 - $3; }
	  | T_MINUS expression		 { $$ = (-1) * $2; }
	  | expression T_MULTIPLY expression	{ $$ = $1 * $3; }
	  | T_LEFT expression T_RIGHT		{ $$ = $2; }
;

cmdif:  T_IF bool_expression T_NEWLINE bloco T_END
		| T_IF bool_expression T_NEWLINE bloco T_ELSE bloco T_END
		| T_IF T_NEWLINE bloco T_END {printf("falta expresion luego del if \n");}
		| T_IF expression T_NEWLINE bloco T_END {printf("falta expresion bool luego del if \n");}

;	


cmdwhile: T_WHILE bool_expression T_NEWLINE bloco T_LOOP
		|  T_WHILE T_NEWLINE T_NEWLINE bloco T_LOOP {printf("falta expresion luego del while \n");}

;
		

exp: mixed_expression | expression | bool_expression;
cmdreturn : T_RETURN exp | T_RETURN ;

comando: cmdif {printf("se reconocio un IF  \n");} 
| cmdwhile {printf("se reconocio un while \n");} 
| cmdatrib | cmdreturn | chamada ;

tipobase: N_INT | N_BOOL | N_CHAR | N_STRING | N_FLOAT ;

cmdatrib: N_INT T_STRING T_EQUAL expression {printf("Se asigno un int como %i \n",$4); } 
		| N_FLOAT T_STRING T_EQUAL mixed_expression {printf("Se asigno un float como %f \n",$4);} 
		| N_BOOL T_STRING T_EQUAL bool_expression {printf("Se asigno un booleano  como %i \n",$4);} 
		| N_INT T_STRING T_EQUAL mixed_expression {printf("Error float a int\n");}
		| N_FLOAT T_STRING T_EQUAL expression {printf("Error int a float\n");} 
		| N_INT T_STRING T_EQUAL bool_expression {printf("Error bool a int\n");} 
		| N_FLOAT T_STRING T_EQUAL bool_expression {printf("Error bool a float\n");} 


;

parametro:  T_STRING T_COLON tipobase;

params: parametro
	| parametro T_COMMA params
;

bld: 
	| parametro T_NEWLINE
	| parametro T_NEWLINE bld;
blc: 
	| comando T_NEWLINE 
	| comando T_NEWLINE blc;

bloco: bld blc;
	


funcao: N_FUN T_STRING T_LEFT params T_RIGHT T_NEWLINE bloco T_END {printf("se reconocio funcion \n");}
		|  N_FUN T_STRING T_LEFT params T_RIGHT T_COLON tipobase T_NEWLINE bloco T_END {printf("se reconocio funcion \n");}
		| N_FUN T_LEFT params T_RIGHT T_NEWLINE bloco T_END {printf("Falta id de la funcion \n");}

;

listaexp: exp | exp T_COMMA listaexp;

chamada:  T_STRING T_LEFT params T_RIGHT  ;

%%

int main() {
	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));



	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	//exit(1);
}