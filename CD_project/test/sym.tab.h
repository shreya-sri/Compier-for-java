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

#ifndef YY_YY_SYM_TAB_H_INCLUDED
# define YY_YY_SYM_TAB_H_INCLUDED
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
    T_IMPORT = 258,
    T_CLASS = 259,
    T_PUBLIC = 260,
    T_PRIVATE = 261,
    T_PROTECTED = 262,
    T_STATIC = 263,
    T_FINAL = 264,
    T_VOID = 265,
    T_INT = 266,
    T_CHAR = 267,
    T_DOUBLE = 268,
    T_WHILE = 269,
    T_SWITCH = 270,
    T_CASE = 271,
    T_DEFAULT = 272,
    T_BREAK = 273,
    T_CONTINUE = 274,
    T_RETURN = 275,
    T_NEW = 276,
    T_INC = 277,
    T_DEC = 278,
    T_SHORTHANDADD = 279,
    T_SHORTHANDSUB = 280,
    T_SHORTHANDMUL = 281,
    T_SHORTHANDDIV = 282,
    T_SHORTHANDAND = 283,
    T_SHORTHANDORE = 284,
    T_SHORTHANDCAR = 285,
    T_SHORTHANDMOD = 286,
    T_OROR = 287,
    T_ANDAND = 288,
    T_EQCOMP = 289,
    T_NOTEQUAL = 290,
    T_GREATEREQ = 291,
    T_LESSEREQ = 292,
    T_LEFTSHIFT = 293,
    T_RIGHTSHIFT = 294,
    T_NUM = 295,
    T_ID = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYM_TAB_H_INCLUDED  */
