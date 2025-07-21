/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SOLIDITY_TAB_H_INCLUDED
# define YY_YY_SOLIDITY_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONTRACT = 258,                /* CONTRACT  */
    FUNCTION = 259,                /* FUNCTION  */
    PUBLIC = 260,                  /* PUBLIC  */
    PRIVATE = 261,                 /* PRIVATE  */
    EXTERNAL = 262,                /* EXTERNAL  */
    INTERNAL = 263,                /* INTERNAL  */
    PAYABLE = 264,                 /* PAYABLE  */
    VIEW = 265,                    /* VIEW  */
    PURE = 266,                    /* PURE  */
    RETURNS = 267,                 /* RETURNS  */
    MAPPING = 268,                 /* MAPPING  */
    ADDRESS = 269,                 /* ADDRESS  */
    UINT = 270,                    /* UINT  */
    INT = 271,                     /* INT  */
    BOOL = 272,                    /* BOOL  */
    STRING = 273,                  /* STRING  */
    REQUIRE = 274,                 /* REQUIRE  */
    ASSERT = 275,                  /* ASSERT  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    FOR = 279,                     /* FOR  */
    RETURN = 280,                  /* RETURN  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    EMIT = 283,                    /* EMIT  */
    EVENT = 284,                   /* EVENT  */
    MODIFIER = 285,                /* MODIFIER  */
    CONSTRUCTOR = 286,             /* CONSTRUCTOR  */
    SELFDESTRUCT = 287,            /* SELFDESTRUCT  */
    SEND = 288,                    /* SEND  */
    CALL = 289,                    /* CALL  */
    TRANSFER = 290,                /* TRANSFER  */
    MSGSENDER = 291,               /* MSGSENDER  */
    MSGVALUE = 292,                /* MSGVALUE  */
    BLOCKTIMESTAMP = 293,          /* BLOCKTIMESTAMP  */
    BLOCKNUMBER = 294,             /* BLOCKNUMBER  */
    TRUE = 295,                    /* TRUE  */
    FALSE = 296,                   /* FALSE  */
    NUM = 297,                     /* NUM  */
    ID = 298,                      /* ID  */
    LBRACE = 299,                  /* LBRACE  */
    RBRACE = 300,                  /* RBRACE  */
    LPAREN = 301,                  /* LPAREN  */
    RPAREN = 302,                  /* RPAREN  */
    LBRACKET = 303,                /* LBRACKET  */
    RBRACKET = 304,                /* RBRACKET  */
    SEMICOLON = 305,               /* SEMICOLON  */
    COMMA = 306,                   /* COMMA  */
    DOT = 307,                     /* DOT  */
    ASSIGN = 308,                  /* ASSIGN  */
    PLUSEQ = 309,                  /* PLUSEQ  */
    MINUSEQ = 310,                 /* MINUSEQ  */
    EQ = 311,                      /* EQ  */
    NEQ = 312,                     /* NEQ  */
    LEQ = 313,                     /* LEQ  */
    GEQ = 314,                     /* GEQ  */
    LT = 315,                      /* LT  */
    GT = 316,                      /* GT  */
    PLUS = 317,                    /* PLUS  */
    MINUS = 318,                   /* MINUS  */
    MUL = 319,                     /* MUL  */
    DIV = 320,                     /* DIV  */
    NOT = 321,                     /* NOT  */
    AND = 322,                     /* AND  */
    OR = 323,                      /* OR  */
    ARROW = 324                    /* ARROW  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "solidity.y"

    int num;
    const char* id;
    bool boolean;

#line 139 "solidity.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SOLIDITY_TAB_H_INCLUDED  */
