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

#ifndef YY_YY_S1_TAB_H_INCLUDED
# define YY_YY_S1_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    CLASS = 259,
    LP1 = 260,
    RP1 = 261,
    LP2 = 262,
    RP2 = 263,
    LP3 = 264,
    RP3 = 265,
    PUBLIC = 266,
    STATIC = 267,
    VOIDD = 268,
    MAIN = 269,
    STRING = 270,
    JUNK = 271,
    SYSPRINT = 272,
    SEMICOLON = 273,
    EXTENDS = 274,
    RETURN = 275,
    COMMA = 276,
    EQUALS = 277,
    IF = 278,
    ELSE = 279,
    WHILE = 280,
    AND = 281,
    NOT = 282,
    GREATER = 283,
    LESS = 284,
    OR = 285,
    DOT = 286,
    MINUS = 287,
    INTO = 288,
    PLUS = 289,
    BY = 290,
    DOTLENGTH = 291,
    THIS = 292,
    NEW = 293,
    INTEGER = 294,
    INTT = 295,
    BOOLL = 296,
    NWLN = 297,
    SPACE = 298,
    TAB = 299,
    DEFEXPR = 300,
    DEFEXPR0 = 301,
    DEFEXPR1 = 302,
    DEFEXPR2 = 303,
    DEFSTMT = 304,
    DEFSTMT0 = 305,
    DEFSTMT1 = 306,
    DEFSTMT2 = 307,
    EOFF = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "S1.y"

	char* text;
	int val;
	char* ptr;

#line 117 "S1.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_S1_TAB_H_INCLUDED  */
