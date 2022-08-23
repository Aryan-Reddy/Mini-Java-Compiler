%{
	#include "A1.tab.h"
%}
%%
<<EOF>> {return ENDFILE;}
[/][/][^\n]*[\n] {
	//inline comments do nothing
}
[/][*][^]*[*][/] {
	//comments do nothing
}
"class" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return CLASS;}
"{" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return OC;}
"}" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return CC;}
"public" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return PUBLIC;}
"static" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return STATIC;}
"void" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return VOID;}
"main" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return MAIN;}
"(" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return OB;}
")" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return CB;}
"String" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return STRING;}
"[" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return OSQ;}
"]" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return CSQ;}
"System" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return SYSTEM;}
"out" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return OUT;}
"println" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return PRINTLN;}
";" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return SEMICOLON;}
"int" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return INT;}
"," {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return COMMA;}
"return" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return RETURN;}
"boolean" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return BOOLEAN;}
"=" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return EQ;}
"extends" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return EXTENDS;}
"&&" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return AND;}
"||" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return OR;}
"!=" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return NE;}
"<=" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return LE;}
"+" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return ADD;}
"-" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return SUB;}
"*" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return MUL;}
"/" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DIV;}
"." {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DOT;}
"length" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return LENGTH;}
"true" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return TRUE;}
"false" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return FALSE;}
"this" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return THIS;}
"new" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return NEW;}
"!" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return NOT;}
"#defineStmt0" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DST0;}
"#defineStmt1" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DST1;}
"#defineStmt2" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DST2;}
"#defineStmt" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DST;}
"#defineExpr0" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DEXP0;}
"#defineExpr1" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DEXP1;}
"#defineExpr2" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DEXP2;}
"#defineExpr" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return DEXP;}
"if" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return IF;}
"else" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return ELSE;}
"while" {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return WHILE;}
[a-zA-Z_][a-zA-Z0-9_]* {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return IDENTIFIER;}
[0-9]+ {yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);return NUMBER;}
\n {}
[ \t] {}
. {//yylval.text = (char *)calloc(strlen(yytext)+1,sizeof(char));yylval.text[0] = '\0';strcat(yylval.text,yytext);printf("Unknown Character in stream:%s\n",yytext);return MYSTERY;
}
%%