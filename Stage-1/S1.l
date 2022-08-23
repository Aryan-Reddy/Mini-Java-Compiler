%{
	#include<stdio.h>
	#include<string.h>
	#include "A1.tab.h"
	
%}

%%
<<EOF>> {
	printf("hello\n");
	return EOFF;
}
[/][/][^\n]*[\n] {
	
}
[/][][^][*][/] {
	
}
"#defineStmt"  {
	int len = strlen(yytext);  
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFSTMT;
}
"#defineStmt0" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFSTMT0;
}
"#defineStmt1" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFSTMT1;
}
"#defineStmt2" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFSTMT2;
}
"#defineExpr" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFEXPR;
}
"#defineExpr0" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFEXPR0;
}
"#defineExpr1" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFEXPR1;
}
"#defineExpr2" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DEFEXPR2;
}
"-" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return MINUS;
}
"+" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return PLUS;
}
"*" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return INTO;
}
"/" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return BY;
}
".length" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DOTLENGTH;
}
"this" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return THIS;
}
"new" {int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return NEW;
}
"int" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return INTT;
}
"true" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return BOOLL;
}
"false" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return BOOLL;
}
"System.out.println" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return SYSPRINT;
}
"." {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return DOT;
}
"," {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return COMMA;
}
"return" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return RETURN;
}
"extends" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return EXTENDS;
}
";" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return SEMICOLON;
}
"=" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);return EQUALS;
}
"if" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return IF;
}
"else" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return ELSE;
}
"while" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return WHILE;
}
"&" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return AND;
}
"|" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return OR;
}
">" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return GREATER;
}
"<" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return LESS;
}
"!" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return NOT;
}
"(" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
		return LP1;
	}
")" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return RP1;
}
"{" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return LP2;
}
"}" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return RP2;
}
"[" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return LP3;
}
"]" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return RP3;
}
"class" {
	yylval.ptr=yytext;
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return CLASS;
}
"public" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return PUBLIC;
}
"void" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return VOIDD;
}
"static" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return STATIC;
}
"String" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return STRING;
}
"main" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return MAIN;
}
"0" {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return INTEGER;
}
[_a-zA-Z][_a-zA-Z0-9]* {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return IDENTIFIER;
}
[1-9][0-9]* {
	int len = strlen(yytext); 
	yylval.text = (char*) malloc((len + 1) * sizeof(char));
	yylval.text[0] = '\0';
	strcat(yylval.text,yytext);
	return INTEGER;
}
[\n] {}
[ ] {}
[\t] {}
. {return JUNK;}


%%

/*int main(){
	yylex();
	printf("%d\n",count);
	return 0;
}*/


