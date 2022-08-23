%{
	#include <stdio.h>
	#include<string.h> 

%}

%union{
	char* text;
	int val;
	char* ptr;
}
%token IDENTIFIER CLASS LP1 RP1 LP2 RP2 LP3 RP3 PUBLIC STATIC VOIDD MAIN STRING JUNK
%token SYSPRINT SEMICOLON EXTENDS RETURN COMMA EQUALS IF ELSE WHILE AND NOT GREATER LESS OR DOT 
%token MINUS INTO PLUS BY DOTLENGTH THIS NEW INTEGER INTT BOOLL NWLN SPACE TAB
%token DEFEXPR DEFEXPR0 DEFEXPR1 DEFEXPR2 DEFSTMT DEFSTMT0 DEFSTMT1 DEFSTMT2 EOFF

%type<text> IDENTIFIER CLASS LP1 RP1 LP2 RP2 LP3 RP3 PUBLIC STATIC VOIDD MAIN STRING JUNK
%type<text> SYSPRINT SEMICOLON EXTENDS RETURN COMMA EQUALS IF ELSE WHILE AND NOT GREATER LESS OR DOT 
%type<text> MINUS INTO PLUS BY DOTLENGTH THIS NEW INTEGER INTT BOOLL NWLN SPACE TAB
%type<text> DEFEXPR DEFEXPR0 DEFEXPR1 DEFEXPR2 DEFSTMT DEFSTMT0 DEFSTMT1 DEFSTMT2 

%type<text> left1 right1 TypeDeclaration Identifier Expression Goal
%type<text> left2 right2 deep1 deep2 left3 right3 left4 right4 left5 right5 deep3
%type<text> MethodDeclaration Statement PrimaryExpression Integer Type statement2
%type<text> MacroDefExpression MacroDefStatement MacroDefinition 

%type<ptr> MainClass


%%

Goal : left1 MainClass right1 EOFF {
	printf("hello2\n");
	return 0;
};

left1 : /*empty*/ {
	
}

| left1 MacroDefinition {
	
} ;

right1 : /*empty*/ {
	
}

| TypeDeclaration right1

{	
	
};

MainClass : CLASS Identifier LP2 PUBLIC STATIC VOIDD MAIN LP1 STRING LP3 RP3 Identifier RP1 LP2 SYSPRINT LP1 Expression RP1 SEMICOLON RP2 RP2 
{	
	
};


TypeDeclaration : CLASS Identifier LP2 left2 right2 RP2 
{
	
	
}

| CLASS Identifier EXTENDS Identifier LP2 left2 right2 RP2 {
	
};

left2 : /*empty*/ {
	
}

| left2 Type Identifier SEMICOLON {
	
};

right2 : /*empty*/ {
	
}
	
| right2 MethodDeclaration {
	
};


MethodDeclaration : PUBLIC Type Identifier LP1 left3 RP1 LP2 left4 right4 RETURN Expression SEMICOLON RP2 {
	
};

left3 : /*empty*/ {
	
}

| right3 {
	
};

right3 : Type Identifier deep1{
	
};

deep1 : /*empty*/ {
	
}

| deep1 COMMA Type Identifier  {
	
};

left4 : /*empty*/ {
	
};

| left4 Type Identifier SEMICOLON  {
	
};

right4 : /*empty*/ {
	
}

| Statement right4{
	
};




Type : INTT LP3 RP3 {
	
}
	
|BOOLL {
	
}

|INTT {
	
}

|Identifier {
	
};



Statement : LP2 statement2 RP2 {
	
}

| Identifier EQUALS Expression SEMICOLON {

}
| SYSPRINT LP1 Expression RP1 SEMICOLON {

}

| Identifier LP3 Expression RP3 EQUALS Expression SEMICOLON {

}

| IF LP1 Expression RP1 Statement  {

}

| IF LP1 Expression RP1 Statement ELSE Statement {

}

| WHILE LP1 Expression RP1 Statement {

}	

| Identifier LP1 left5 RP1 SEMICOLON {	

};

statement2 : /*empty*/ {
	
}

| statement2 Statement {
	
};


left5 : /*empty*/ {
	
}

| right5 {

};

right5 : Expression deep2 {
	
};

deep2 : /*empty*/ {
	
}

| deep2 COMMA Expression {
 	
};




Expression : PrimaryExpression AND AND PrimaryExpression {
	
}

|   PrimaryExpression OR OR  PrimaryExpression {

}

| 	PrimaryExpression NOT EQUALS PrimaryExpression {

}

| 	PrimaryExpression LESS EQUALS PrimaryExpression {

}

| 	PrimaryExpression PLUS PrimaryExpression {

}

| 	PrimaryExpression MINUS PrimaryExpression {

}

| 	PrimaryExpression INTO PrimaryExpression {

}

| 	PrimaryExpression BY PrimaryExpression {

}

| 	PrimaryExpression LP3 PrimaryExpression RP3 {

}

| 	PrimaryExpression DOTLENGTH {

}

|	PrimaryExpression {

}

|	PrimaryExpression DOT Identifier LP1 left5 RP1 {

}

|	Identifier LP1 left5 RP1 {

};





PrimaryExpression : Integer {
	
}

| BOOLL {

}

| Identifier {

}

| THIS {

}

| NEW INTT LP3 Expression RP3 {

}

| NEW Identifier LP1 RP1 {

}

| NOT Expression {

}

| LP1 Expression RP1 {

};





MacroDefinition : MacroDefExpression {
	
}

| MacroDefStatement {
	
};

MacroDefStatement : DEFSTMT Identifier LP1 Identifier COMMA Identifier deep3 RP1 LP2 right4 RP2 {
	
}

	| DEFSTMT0 Identifier LP1 RP1 LP2 right4 RP2 {
	
	}

	| DEFSTMT1 Identifier LP1 Identifier RP1 LP2 right4 RP2 {
	
	}

	| DEFSTMT2 Identifier LP1 Identifier COMMA Identifier RP1 LP2 right4 RP2 {
	
	};

deep3 : COMMA Identifier {
	
}

	| COMMA Identifier deep3 {
	
	};




MacroDefExpression :  DEFEXPR Identifier LP1 Identifier COMMA Identifier deep3 RP1 LP1 Expression RP1 {
	
}

	| DEFEXPR0 Identifier LP1 RP1 LP1 Expression RP1 {
	
	}

	| DEFEXPR1 Identifier LP1 Identifier RP1 LP1 Expression RP1 {
	
	}

	| DEFEXPR2 Identifier LP1 Identifier COMMA Identifier RP1 LP1 Expression RP1 {
	
	};




Identifier : IDENTIFIER {
	
};

Integer : INTEGER {
	
};

%%

int yyerror(char* s){
	printf("//Failed to parse input code\n");
	return 0;
}

int main(int argc, char **argv){
	
	yyparse();

	return 0;
}

