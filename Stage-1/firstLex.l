%{
	#include<stdio.h>
	#include<string.h>
	#include "firstBison.tab.h"
%}
%%

[_a-zA-Z][_a-zA-Z0-9]* {yylval.text=yytext;return IDENTIFIER;}
[1-9][0-9]* {yylval.text=yytext;return INTEGER;}
[\n] {}
[ ] {}
[\t] {}
. {return JUNK;}



%%