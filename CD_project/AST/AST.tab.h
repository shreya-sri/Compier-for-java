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

#ifndef YY_YY_AST_TAB_H_INCLUDED
# define YY_YY_AST_TAB_H_INCLUDED
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
    T_NUM = 258,
    T_DECIMAL = 259,
    T_IDENTIFIER = 260,
    T_CHARACTER = 261,
    T_STRING_LITERAL = 262,
    T_TRUE = 263,
    T_FALSE = 264,
    T_IMPORT = 265,
    T_CLASS = 266,
    T_PACKAGE = 267,
    T_MAIN = 268,
    T_ARGS = 269,
    T_SOP = 270,
    T_TYPEDEF = 271,
    T_STATIC = 272,
    T_NEW = 273,
    T_PUBLIC = 274,
    T_PRIVATE = 275,
    T_PROTECTED = 276,
    T_OC = 277,
    T_CC = 278,
    T_OF = 279,
    T_CF = 280,
    T_OS = 281,
    T_CS = 282,
    T_CHAR = 283,
    T_INT = 284,
    T_FLOAT = 285,
    T_VOID = 286,
    T_STRING = 287,
    T_IF = 288,
    T_ELSE = 289,
    T_FOR = 290,
    T_CONTINUE = 291,
    T_BREAK = 292,
    T_RETURN = 293,
    T_ASSIGN = 294,
    T_ADD_ASSIGN = 295,
    T_SUB_ASSIGN = 296,
    T_MUL_ASSIGN = 297,
    T_DIV_ASSIGN = 298,
    T_ADD = 299,
    T_SUB = 300,
    T_MUL = 301,
    T_DIV = 302,
    T_MOD = 303,
    T_INC_OP = 304,
    T_DEC_OP = 305,
    T_LE = 306,
    T_GE = 307,
    T_EQ = 308,
    T_LT = 309,
    T_GT = 310,
    T_AND_OP = 311,
    T_OR_OP = 312,
    T_NE_OP = 313,
    T_BIT_AND = 314,
    T_BIT_OR = 315,
    T_NOT = 316,
    T_COMMA = 317,
    T_COL = 318,
    T_DOT = 319,
    T_SEMC = 320,
    T_EXP = 321,
    T_QUE = 322,
    T_NE = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "AST.y"

    int number;
    char *string;
    char character;
	float decimal;
	struct node * nd_type;
   	 

#line 135 "AST.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_AST_TAB_H_INCLUDED  */
