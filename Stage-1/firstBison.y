%{
	#include <stdio.h>
	#include<string.h>
	extern FILE *yyin;
	extern FILE *yyout;
	int count=0;

%}

%union{
	char* text;
	int val;
}

%token INTEGER IDENTIFIER JUNK

%type<text> INTEGER IDENTIFIER b c 

%%

a : b c
{	
	printf("%s\n",$1);
	printf("%s\n",$2);
	//$$=$1+$2;
	//printf("%d",$$);
};

b : INTEGER {
	$$=$1;
	
};

c : IDENTIFIER {
	$$=$1;
};


%%


int yyerror(char* s){
	printf("%s\n",s);
	return 0;
}

int main(int argc, char **argv){
	yyparse();
	printf("%d\n",count);
	return 0;
}