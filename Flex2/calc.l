%option noyywrap

%{
#include <stdio.h>
#include <stdbool.h>

#define YY_DECL int yylex()

#include "calc.tab.h"

%}

ID	    [a-z][a-z0-9]*

%%




[ \t]	; // ignore all whitespace
[0-9]+\.[0-9]+ 	{yylval.fval = atof(yytext); return T_FLOAT;}
[0-9]+		{ yylval.ival = atoi(yytext); return T_INT;}
\n		{return T_NEWLINE;}
"+"		{return T_PLUS;}
"-"		{return T_MINUS;}
"*"		{return T_MULTIPLY;}
"/"		{return T_DIVIDE;}
"("		{return T_LEFT;}
")"		{return T_RIGHT;}
"["		{return T_LEFT;}
"]"		{return T_RIGHT;}
"{"		{return T_LEFT;}
"}"		{return T_RIGHT;}
":"		{return T_COLON;}
","		{return T_COMMA;}

"exit"		{return T_QUIT;}
"quit"		{return T_QUIT;}

"true" {yylval.bval = true; return T_BOOL;}
"false" {yylval.bval = false; return T_BOOL;}

"<"		{return T_LESS;}
">"		{return T_GREATER;}
"<="		{ return T_LESS_E;}
">="		{ return T_GREATER_E;}
"="			{ return T_EQUAL;}
"<>"			{ return T_NOT_EQUAL;}
"!="			{ return T_NOT_EQUAL;}

"and"			{ return T_AND;}
"or"			{ return T_OR;}
"AND"			{ return T_AND;}
"OR"			{ return T_OR;}
"NOT"			{ return T_NOT;}
"not"			{ return T_NOT;}
"end"			{ return T_END;}
"loop"			{return T_LOOP;}

"if"			{ return T_IF;}
"else"			{ return T_ELSE;}
"while"			{ return T_WHILE;}

"//".*			{return T_COMEN;}

"return"		{ return T_RETURN;}

"int"			{return N_INT;}
"bool"			{return N_BOOL;}
"char"			{return N_CHAR;}
"string"		{return N_STRING;}
"float"			{return N_FLOAT;}
"fun"			{return N_FUN;}

{ID}			{return T_STRING; }

%%