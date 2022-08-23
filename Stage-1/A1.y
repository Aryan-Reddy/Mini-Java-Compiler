%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <assert.h>
	char *func(char **,int);
	void freeAll(char **,int);
	int __DEFEXPCNT = 0;
	int __DEFSTMTCNT = 0;
	struct mapExpDefinitions
	{
		char *id;
		int whatToCopy[100];
		int lenCopy;
		char *strs[100];
	};
	struct mapStmtDefinitions
	{
		char *id;
		int whatToCopy[100];
		int lenCopy;
		char *strs[100];
	};
	struct mapExpDefinitions defEXP[100];
	struct mapStmtDefinitions defStmt[100];
%}
%union {
	char * text;
}
%token ENDFILE CLASS IDENTIFIER OC CC PUBLIC STATIC VOID MAIN OB CB STRING OSQ CSQ SEMICOLON INT COMMA RETURN BOOLEAN EQ EXTENDS//Add whatever required on the go
%token AND OR NE LE ADD SUB MUL DIV DOT LENGTH TRUE FALSE THIS NEW NOT
%token SYSTEM OUT PRINTLN
%token DST DST0 DST1 DST2 DEXP DEXP0 DEXP1 DEXP2
%token IF ELSE WHILE
%token NUMBER
%token MYSTERY 
%type<text> ENDFILE CLASS IDENTIFIER OC CC PUBLIC STATIC VOID MAIN OB CB STRING OSQ CSQ SEMICOLON INT COMMA RETURN BOOLEAN EQ EXTENDS
%type<text> AND OR NE LE ADD SUB MUL DIV DOT LENGTH TRUE FALSE THIS NEW NOT
%type<text> SYSTEM OUT PRINTLN
%type<text> DST DST0 DST1 DST2 DEXP DEXP0 DEXP1 DEXP2
%type<text> IF ELSE WHILE NUMBER MYSTERY
%type<text> goal macroDefinitionKleen MainClass typeDeclarationKleen typeDeclaration typeIdentifierSCKleen typeIdentifierSCKleenP methodDeclarationKleen typeIdentifierSC typeIdentifier cmtypeIdentifier cmtypeIdentifierKleen methodArgs methodDeclaration statementKleenP statementKleen cmExpressionKleen cmExpression
%type<text> expressionS statement expression primaryExpression macroDefinition cmIdentifierkleenP macroDefStatement macroDefExpression integer type
%%
goal : macroDefinitionKleen MainClass typeDeclarationKleen ENDFILE
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);	
	printf("%s",$$);
	return 0;
};
MainClass : CLASS IDENTIFIER OC PUBLIC STATIC VOID MAIN OB STRING OSQ CSQ IDENTIFIER CB OC SYSTEM DOT OUT DOT PRINTLN OB expression CB SEMICOLON CC CC 
{
	char *final;
	char **strs;
	strs = (char **)calloc(25,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;strs[7]= $8;strs[8]= $9;strs[9]= $10;strs[10]= $11;strs[11]= $12;strs[12]= $13;strs[13]= $14;strs[14]= $15;strs[15]= $16;strs[16]= $17;strs[17]= $18;strs[18]= $19;strs[19]= $20;strs[20]= $21;strs[21]= $22;strs[22]= $23;strs[23]= $24;strs[24]= $25;
	final = func(strs,25);
	freeAll(strs,25);
	$$ = final;
	free(strs);
};
typeDeclarationKleen : typeDeclarationKleen typeDeclaration 
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
					| 
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
macroDefinitionKleen : macroDefinitionKleen macroDefinition 
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
					| 
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
typeDeclaration : CLASS IDENTIFIER OC typeIdentifierSCKleen methodDeclarationKleen CC
{
	char *final;
	char **strs;
	strs = (char **)calloc(6,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;
	final = func(strs,6);
	freeAll(strs,6);
	$$ = final;
	free(strs);	
}
				| CLASS IDENTIFIER EXTENDS IDENTIFIER OC typeIdentifierSCKleen methodDeclarationKleen CC
{
	char *final;
	char **strs;
	strs = (char **)calloc(8,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;strs[7]= $8;
	final = func(strs,8);
	freeAll(strs,8);
	$$ = final;
	free(strs);
};
typeIdentifierSCKleen : typeIdentifierSCKleen typeIdentifierSC
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
					| 
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
typeIdentifierSCKleenP : typeIdentifierSCKleenP typeIdentifierSC
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
					| typeIdentifierSC
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
};
methodDeclarationKleen :methodDeclarationKleen methodDeclaration
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
					|
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
typeIdentifierSC : typeIdentifier SEMICOLON
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
};
typeIdentifier : type IDENTIFIER
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
};
cmtypeIdentifier : COMMA typeIdentifier
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
};
cmtypeIdentifierKleen : cmtypeIdentifierKleen cmtypeIdentifier 
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
            		|
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
methodArgs : typeIdentifier cmtypeIdentifierKleen
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
			|
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
methodDeclaration : PUBLIC typeIdentifier OB methodArgs CB OC typeIdentifierSCKleenP statementKleenP RETURN expression SEMICOLON CC
{
	char *final;
	char **strs;
	strs = (char **)calloc(12,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;strs[7]= $8;strs[8]= $9;strs[9]= $10;strs[10]= $11;strs[11]= $12;
	final = func(strs,12);
	freeAll(strs,12);
	$$ = final;
	free(strs);
}
				| PUBLIC typeIdentifier OB methodArgs CB OC typeIdentifierSCKleenP RETURN expression SEMICOLON CC
{
	char *final;
	char **strs;
	strs = (char **)calloc(11,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;strs[7]= $8;strs[8]= $9;strs[9]= $10;strs[10]= $11;
	final = func(strs,11);
	freeAll(strs,11);
	$$ = final;
	free(strs);
}
				| PUBLIC typeIdentifier OB methodArgs CB OC statementKleenP RETURN expression SEMICOLON CC
{
	char *final;
	char **strs;
	strs = (char **)calloc(11,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;strs[7]= $8;strs[8]= $9;strs[9]= $10;strs[10]= $11;
	final = func(strs,11);
	freeAll(strs,11);
	$$ = final;
	free(strs);
}
				| PUBLIC typeIdentifier OB methodArgs CB OC RETURN expression SEMICOLON CC
{
	char *final;
	char **strs;
	strs = (char **)calloc(10,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;strs[7]= $8;strs[8]= $9;strs[9]= $10;
	final = func(strs,10);
	freeAll(strs,10);
	$$ = final;
	free(strs);
};
statementKleenP	: statementKleenP statement
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
				| statement
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);	
};
statementKleen : statementKleen statement
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
				|
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
type : INT OSQ CSQ
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
	| BOOLEAN
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
	| INT
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
	| IDENTIFIER
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
};
cmExpressionKleen : cmExpression cmExpressionKleen
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
				| 
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
cmExpression : COMMA expression
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);	
};
expressionS : expression cmExpressionKleen
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
			| 
{
	char *final;
	char **strs;
	strs = (char **)calloc(0,sizeof(char *));

	final = func(strs,0);
	freeAll(strs,0);
	$$ = final;
	free(strs);
};
statement : OC statementKleen CC
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	SYSTEM DOT OUT DOT PRINTLN OB expression CB SEMICOLON
{
	char *final;
	char **strs;
	strs = (char **)calloc(9,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;strs[7]= $8;strs[8]= $9;
	final = func(strs,9);
	freeAll(strs,9);
	$$ = final;
	free(strs);
}
		| 	IDENTIFIER EQ expression SEMICOLON
{
	char *final;
	char **strs;
	strs = (char **)calloc(4,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;
	final = func(strs,4);
	freeAll(strs,4);
	$$ = final;
	free(strs);
}
		|  	IDENTIFIER OSQ expression CSQ EQ expression SEMICOLON
{
	char *final;
	char **strs;
	strs = (char **)calloc(7,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;
	final = func(strs,7);
	freeAll(strs,7);
	$$ = final;
	free(strs);
}
		| 	IF OB expression CB statement ELSE statement
{
	char *final;
	char **strs;
	strs = (char **)calloc(7,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;strs[6]= $7;
	final = func(strs,7);
	freeAll(strs,7);
	$$ = final;
	free(strs);
}
		| 	IF OB expression CB statement
{
	char *final;
	char **strs;
	strs = (char **)calloc(5,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;
	final = func(strs,5);
	freeAll(strs,5);
	$$ = final;
	free(strs);
}
		|	WHILE OB expression CB statement
{
	char *final;
	char **strs;
	strs = (char **)calloc(5,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;
	final = func(strs,5);
	freeAll(strs,5);
	$$ = final;
	free(strs);
}
		| 	IDENTIFIER OB expressionS CB SEMICOLON
{
	int index = -1;
	for(int i = 0;i < __DEFSTMTCNT;i++)
	{
		if(strcmp(defStmt[i].id,$1)==0)
		{
			index = i;
			break;
		}
	}
	if(index == -1)
	{
		char *final;
		char **strs;
		strs = (char **)calloc(5,sizeof(char *));
		strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;
		final = func(strs,5);
		freeAll(strs,5);
		$$ = final;
		free(strs);
	}
	else
	{
		$$ = (char *)calloc(1011,sizeof(char *));
		$$[0] = '\0';
		strcat($$,"{");
		int args = 0;
		int l = strlen($3);
		char idents[10][50];
		int c = 0;
		for(int i = 0;i < l;i++)
		{
			if($3[i]==' ') continue;
			if($3[i]==',')
			{
				idents[args][c] = '\0';
				args++;
				c = 0;
			}
			else
			{
				idents[args][c] = $3[i];
				c++;
			}
		}
		if(c!=0)
		{
			idents[args][c] = '\0';
			args++;
		}
		for(int i = 0;i < defStmt[index].lenCopy;i++)
		{
			if(defStmt[index].whatToCopy[i] >= 1000)
			{
				int a = defStmt[index].whatToCopy[i] - 1000;
				strcat($$,idents[a]);
			}
			else
			{
				int a = defStmt[index].whatToCopy[i];
				strcat($$,defStmt[index].strs[a]);
			}
			strcat($$," ");
		}
		strcat($$,"} ");
	}
};
expression : primaryExpression AND primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		|	 primaryExpression OR primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression NE primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression LE primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression ADD primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression SUB primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression MUL primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression DIV primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression OSQ primaryExpression CSQ
{
	char *final;
	char **strs;
	strs = (char **)calloc(4,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;
	final = func(strs,4);
	freeAll(strs,4);
	$$ = final;
	free(strs);
}
		|	 primaryExpression DOT LENGTH
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
		| 	 primaryExpression DOT IDENTIFIER OB expressionS CB
{
	char *final;
	char **strs;
	strs = (char **)calloc(6,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;strs[5]= $6;
	final = func(strs,6);
	freeAll(strs,6);
	$$ = final;
	free(strs);
}
		| 	 IDENTIFIER OB expressionS CB
{
	int index = -1;
	for(int i = 0;i < __DEFEXPCNT;i++)
	{
		if(strcmp(defEXP[i].id,$1)==0)
		{
			index = i;
			break;
		}
	}
	if(index == -1)
	{
		char *final;
		char **strs;
		strs = (char **)calloc(4,sizeof(char *));
		strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;
		final = func(strs,4);
		freeAll(strs,4);
		$$ = final;
		free(strs);
	}
	else
	{
		$$ = (char *)calloc(1011,sizeof(char *));
		$$[0] = '\0';
		strcat($$,"(");
		int args = 0;
		int l = strlen($3);
		char idents[10][33];
		int c = 0;
		for(int i = 0;i < l;i++)
		{
			if($3[i]==' ') continue;
			if($3[i]==',')
			{
				idents[args][c] = '\0';
				args++;
				c = 0;
			}
			else
			{
				idents[args][c] = $3[i];
				c++;
			}
		}
		if(c!=0)
		{
			idents[args][c] = '\0';
			args++;
		}
		for(int i = 0;i < defEXP[index].lenCopy;i++)
		{
			if(defEXP[index].whatToCopy[i] >= 1000)
			{
				int a = defEXP[index].whatToCopy[i] - 1000;
				strcat($$,idents[a]);
			}
			else
			{
				int a = defEXP[index].whatToCopy[i];
				strcat($$,defEXP[index].strs[a]);
			}
			strcat($$," ");
		}
		strcat($$,") ");
	}

};
primaryExpression : integer
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
				| TRUE
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
				|  FALSE
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
				| IDENTIFIER
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
				| THIS
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
				| NEW INT OSQ expression CSQ
{
	char *final;
	char **strs;
	strs = (char **)calloc(5,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;strs[4]= $5;
	final = func(strs,5);
	freeAll(strs,5);
	$$ = final;
	free(strs);
}
				| NEW IDENTIFIER OB CB
{
	char *final;
	char **strs;
	strs = (char **)calloc(4,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;strs[3]= $4;
	final = func(strs,4);
	freeAll(strs,4);
	$$ = final;
	free(strs);
}
				| NOT expression
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);
}
				| OB expression CB
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
};

macroDefinition : macroDefExpression
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
}
				| macroDefStatement
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
};
cmIdentifierkleenP : cmIdentifierkleenP COMMA IDENTIFIER
{
	char *final;
	char **strs;
	strs = (char **)calloc(3,sizeof(char *));
	strs[0]= $1;strs[1]= $2;strs[2]= $3;
	final = func(strs,3);
	freeAll(strs,3);
	$$ = final;
	free(strs);
}
			|	COMMA IDENTIFIER
{
	char *final;
	char **strs;
	strs = (char **)calloc(2,sizeof(char *));
	strs[0]= $1;strs[1]= $2;
	final = func(strs,2);
	freeAll(strs,2);
	$$ = final;
	free(strs);	
};
macroDefStatement : DST0 IDENTIFIER OB CB OC statementKleen CC
{

	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,$2);
	defStmt[index].lenCopy = 1;
	int stmtLen = strlen($6);
	defStmt[index].strs[0] = (char *)calloc(stmtLen+1,sizeof(char));
	defStmt[index].strs[0][0] = '\0';
	defStmt[index].whatToCopy[0] = 0;
	strcat(defStmt[index].strs[0],$6);
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';
}
				| 	DST1 IDENTIFIER OB IDENTIFIER CB OC statementKleen CC
{
	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,$2);
	char arg[33];
	arg[0] = '\0';
	strcat(arg,$4);	
	int argLen = strlen($4);
	int stmtLen = strlen($7);
	int p = -1;
	int strCnt = 0;
	defStmt[index].lenCopy = 0;
	for(int i = 0;i < stmtLen;i++)
	{
		int poss = 1;
		int j;
		for(j = i;(j < stmtLen) && (j < i + argLen);j++)
		{
			if(arg[j-i]!=$7[j])
			{
				poss = 0;
			}
		}
		if(j != i + argLen || ($7[j]!='\0' && $7[j] != ' ')) poss = 0;
		if(poss)
		{
			int len = i - p - 1;
			if(len > 0)
			{
				defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
				defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
				defStmt[index].lenCopy++;
				int c =0;
				for(int k = p + 1;k < i;k++)
				{
					defStmt[index].strs[strCnt][c] = $7[k];
					c++;
				}
				defStmt[index].strs[strCnt][c] = '\0';
				strCnt++;
			}
			defStmt[index].whatToCopy[defStmt[index].lenCopy] = 1000;
			defStmt[index].lenCopy++;
			p = i + argLen - 1;
		}

	}
	int len = stmtLen - p - 1;
	if(len > 0)
	{
		defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
		defStmt[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < stmtLen;k++)
		{
			defStmt[index].strs[strCnt][c] = $7[k];
			c++;
		}
		defStmt[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';

}
				| 	DST2 IDENTIFIER OB IDENTIFIER COMMA IDENTIFIER CB OC statementKleen CC
{
	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,$2);	
	char arg[2][33];arg[0][0] = '\0';arg[1][0] = '\0';
	strcat(arg[0],$4);
	strcat(arg[1],$6);
	int argLen[2];	
	argLen[0] = strlen($4);
	argLen[1] = strlen($6);
	int stmtLen = strlen($9);
	int p = -1;
	int strCnt = 0;
	defStmt[index].lenCopy = 0;
	for(int i = 0;i < stmtLen;i++)
	{
		for(int a = 0;a < 2;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < stmtLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=$9[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ($9[j]!='\0' && $9[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
					defStmt[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defStmt[index].strs[strCnt][c] = $9[k];
						c++;
					}
					defStmt[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defStmt[index].whatToCopy[defStmt[index].lenCopy] = 1000+a;
				defStmt[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = stmtLen - p - 1;
	if(len > 0)
	{
		defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
		defStmt[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < stmtLen;k++)
		{
			defStmt[index].strs[strCnt][c] = $9[k];
			c++;
		}
		defStmt[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';
}
				| 	DST IDENTIFIER OB IDENTIFIER COMMA IDENTIFIER cmIdentifierkleenP CB OC statementKleen CC
{
	__DEFSTMTCNT++;
	assert(__DEFSTMTCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFSTMTCNT-1;
	defStmt[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defStmt[index].id)[0] = '\0';
	strcat(defStmt[index].id,$2);
	int argCnt =  2;	
	char arg[10][33];
	arg[0][0] = '\0';
	arg[1][0] = '\0';
	strcat(arg[0],$4);
	strcat(arg[1],$6);
	int argLen[10];
	argLen[0] = strlen(arg[0]);
	argLen[1] = strlen(arg[1]);
	int cmIDLen = strlen($7);
	for(int i = 0;i < cmIDLen;i++)
	{
		if($7[i]==',')
		{
			int c = 0;
			int j;
			for(j = i+2;j < cmIDLen;j++)
			{
				if($7[j]==' ' || $7[j] == '\0')
				{
					arg[argCnt][c] = '\0';
					c++;
					argLen[argCnt] = c-1;
					argCnt++;
					break;
				}
				arg[argCnt][c] = $7[j];
				c++;
			}
			i = j - 1;
		}
	}
	int stmtLen = strlen($10);
	int p = -1;
	int strCnt = 0;
	defStmt[index].lenCopy = 0;
	for(int i = 0;i < stmtLen;i++)
	{
		for(int a = 0;a < argCnt;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < stmtLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=$10[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ($10[j]!='\0' && $10[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
					defStmt[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defStmt[index].strs[strCnt][c] = $10[k];
						c++;
					}
					defStmt[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defStmt[index].whatToCopy[defStmt[index].lenCopy] = 1000+a;
				defStmt[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = stmtLen - p - 1;
	if(len > 0)
	{
		defStmt[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defStmt[index].whatToCopy[defStmt[index].lenCopy] = strCnt;
		defStmt[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < stmtLen;k++)
		{
			defStmt[index].strs[strCnt][c] = $10[k];
			c++;
		}
		defStmt[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';
};
macroDefExpression : DEXP0 IDENTIFIER OB CB OB expression CB
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,$2);
	defEXP[index].lenCopy = 1;
	int expLen = strlen($6);
	defEXP[index].strs[0] = (char *)calloc(expLen+1,sizeof(char));
	defEXP[index].strs[0][0] = '\0';
	defEXP[index].whatToCopy[0] = 0;
	strcat(defEXP[index].strs[0],$6);
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';
}
					| DEXP1 IDENTIFIER OB IDENTIFIER CB OB expression CB
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,$2);
	char arg[33];
	arg[0] = '\0';
	strcat(arg,$4);	
	int argLen = strlen($4);
	int expLen = strlen($7);
	int p = -1;
	int strCnt = 0;
	defEXP[index].lenCopy = 0;
	for(int i = 0;i < expLen;i++)
	{
		int poss = 1;
		int j;
		for(j = i;(j < expLen) && (j < i + argLen);j++)
		{
			if(arg[j-i]!=$7[j])
			{
				poss = 0;
			}
		}
		if(j != i + argLen || ($7[j]!='\0' && $7[j] != ' ')) poss = 0;
		if(poss)
		{
			int len = i - p - 1;
			if(len > 0)
			{
				defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
				defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
				defEXP[index].lenCopy++;
				int c =0;
				for(int k = p + 1;k < i;k++)
				{
					defEXP[index].strs[strCnt][c] = $7[k];
					c++;
				}
				defEXP[index].strs[strCnt][c] = '\0';
				strCnt++;
			}
			defEXP[index].whatToCopy[defEXP[index].lenCopy] = 1000;
			defEXP[index].lenCopy++;
			p = i + argLen - 1;
		}

	}
	int len = expLen - p - 1;
	if(len > 0)
	{
		defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
		defEXP[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < expLen;k++)
		{
			defEXP[index].strs[strCnt][c] = $7[k];
			c++;
		}
		defEXP[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';

}
					| DEXP2 IDENTIFIER OB IDENTIFIER COMMA IDENTIFIER CB OB expression CB
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,$2);	
	char arg[2][33];arg[0][0] = '\0';arg[1][0] = '\0';
	strcat(arg[0],$4);
	strcat(arg[1],$6);
	int argLen[2];	
	argLen[0] = strlen($4);
	argLen[1] = strlen($6);
	int expLen = strlen($9);
	int p = -1;
	int strCnt = 0;
	defEXP[index].lenCopy = 0;
	for(int i = 0;i < expLen;i++)
	{
		for(int a = 0;a < 2;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < expLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=$9[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ($9[j]!='\0' && $9[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
					defEXP[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defEXP[index].strs[strCnt][c] = $9[k];
						c++;
					}
					defEXP[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defEXP[index].whatToCopy[defEXP[index].lenCopy] = 1000+a;
				defEXP[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = expLen - p - 1;
	if(len > 0)
	{
		defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
		defEXP[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < expLen;k++)
		{
			defEXP[index].strs[strCnt][c] = $9[k];
			c++;
		}
		defEXP[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';

}
					| DEXP IDENTIFIER OB IDENTIFIER COMMA IDENTIFIER cmIdentifierkleenP CB OB expression CB
{
	__DEFEXPCNT++;
	assert(__DEFEXPCNT <= 100);
	int idLen = strlen($2);
	int index = __DEFEXPCNT-1;
	defEXP[index].id = (char *)calloc(idLen + 1,sizeof(char));
	(defEXP[index].id)[0] = '\0';
	strcat(defEXP[index].id,$2);
	int argCnt =  2;	
	char arg[10][33];
	arg[0][0] = '\0';
	arg[1][0] = '\0';
	strcat(arg[0],$4);
	strcat(arg[1],$6);
	int argLen[10];
	argLen[0] = strlen(arg[0]);
	argLen[1] = strlen(arg[1]);
	int cmIDLen = strlen($7);
	for(int i = 0;i < cmIDLen;i++)
	{
		if($7[i]==',')
		{
			int c = 0;
			int j;
			for(j = i+2;j < cmIDLen;j++)
			{
				if($7[j]==' ' || $7[j] == '\0')
				{
					arg[argCnt][c] = '\0';
					c++;
					argLen[argCnt] = c-1;
					argCnt++;
					break;
				}
				arg[argCnt][c] = $7[j];
				c++;
			}
			i = j - 1;
		}
	}
	int expLen = strlen($10);
	int p = -1;
	int strCnt = 0;
	defEXP[index].lenCopy = 0;
	for(int i = 0;i < expLen;i++)
	{
		for(int a = 0;a < argCnt;a++)
		{
			int poss = 1;
			int j;
			for(j = i;(j < expLen) && (j < i + argLen[a]);j++)
			{
				if(arg[a][j-i]!=$10[j])
				{
					poss = 0;
				}
			}
			if(j != i + argLen[a] || ($10[j]!='\0' && $10[j] != ' ')) poss = 0;
			if(poss)
			{
				int len = i - p - 1;
				if(len > 0)
				{
					defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
					defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
					defEXP[index].lenCopy++;
					int c =0;
					for(int k = p + 1;k < i;k++)
					{
						defEXP[index].strs[strCnt][c] = $10[k];
						c++;
					}
					defEXP[index].strs[strCnt][c] = '\0';
					strCnt++;
				}
				defEXP[index].whatToCopy[defEXP[index].lenCopy] = 1000+a;
				defEXP[index].lenCopy++;
				p = i + argLen[a] - 1;
			}
		}

	}
	int len = expLen - p - 1;
	if(len > 0)
	{
		defEXP[index].strs[strCnt] = (char *)calloc(len + 1,sizeof(char));
		defEXP[index].whatToCopy[defEXP[index].lenCopy] = strCnt;
		defEXP[index].lenCopy++;
		int c =0;
		for(int k = p + 1;k < expLen;k++)
		{
			defEXP[index].strs[strCnt][c] = $10[k];
			c++;
		}
		defEXP[index].strs[strCnt][c] = '\0';
		strCnt++;
	}
	$$ = (char *) malloc(sizeof(char));
	$$[0] = '\0';

};
integer : NUMBER
{
	char *final;
	char **strs;
	strs = (char **)calloc(1,sizeof(char *));
	strs[0]= $1;
	final = func(strs,1);
	freeAll(strs,1);
	$$ = final;
	free(strs);
};
%%
char *func(char **strs,int cnt)
{
	int totLen = 0;
	int i;
	for(i = 0;i < cnt;i++)
	{
		totLen += strlen(strs[i]);
	}
	char *final = (char *) calloc(totLen+1+cnt,sizeof(char));
	i = 0;
	int j;
	for(j = 0;j < cnt;j++)
	{
		int k;
		int len = strlen(strs[j]);
		for(k = 0;k < len;k++)
		{
			final[i] = strs[j][k];
			i++;
		}
		final[i] = ' ';
		i++;
	}
	final[i]  = '\0';
	return final;
}
void freeAll(char **strs,int cnt)
{
	int i;
	for(i = 0;i < cnt;i++)
	{
		free(strs[i]);
	}
} 
int yyerror(char *s)
{
	printf("//Failed to parse input code\n");
	return 0;
}


int main(int argc, char **argv)
{
	//#ifdef YYDEBUG
	 	//yydebug = 1;
	//#endif
	yyparse();
	printf("\n");
	return 0;
}
