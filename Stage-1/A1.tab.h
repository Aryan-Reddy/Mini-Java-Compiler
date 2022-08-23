/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_A1_TAB_H_INCLUDED
# define YY_YY_A1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENDFILE = 258,
    CLASS = 259,
    IDENTIFIER = 260,
    OC = 261,
    CC = 262,
    PUBLIC = 263,
    STATIC = 264,
    VOID = 265,
    MAIN = 266,
    OB = 267,
    CB = 268,
    STRING = 269,
    OSQ = 270,
    CSQ = 271,
    SEMICOLON = 272,
    INT = 273,
    COMMA = 274,
    RETURN = 275,
    BOOLEAN = 276,
    EQ = 277,
    EXTENDS = 278,
    AND = 279,
    OR = 280,
    NE = 281,
    LE = 282,
    ADD = 283,
    SUB = 284,
    MUL = 285,
    DIV = 286,
    DOT = 287,
    LENGTH = 288,
    TRUE = 289,
    FALSE = 290,
    THIS = 291,
    NEW = 292,
    NOT = 293,
    SYSTEM = 294,
    OUT = 295,
    PRINTLN = 296,
    DST = 297,
    DST0 = 298,
    DST1 = 299,
    DST2 = 300,
    DEXP = 301,
    DEXP0 = 302,
    DEXP1 = 303,
    DEXP2 = 304,
    IF = 305,
    ELSE = 306,
    WHILE = 307,
    NUMBER = 308,
    MYSTERY = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "A1.y"

	char * text;

#line 116 "A1.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A1_TAB_H_INCLUDED  */
