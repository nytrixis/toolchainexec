%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>

void yyerror(const char *s);
extern int yylex();

char* concatenate(int count, ...) {
    va_list args;
    va_start(args, count);
    
    size_t length = 0;
    for (int i = 0; i < count; i++) {
        char *arg = va_arg(args, char*);
        length += strlen(arg);
    }
    
    char *result = (char*)malloc(length + 1);
    result[0] = '\0';
    
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        char *arg = va_arg(args, char*);
        strcat(result, arg);
    }
    
    va_end(args);
    return result;
}

char* create_number(int num) {
    char *result = (char*)malloc(32);
    sprintf(result, "%d", num);
    return result;
}
%}

%token CONTRACT FUNCTION PUBLIC PRIVATE EXTERNAL INTERNAL PAYABLE VIEW PURE RETURNS
%token MAPPING ADDRESS UINT INT BOOL STRING REQUIRE ASSERT IF ELSE WHILE FOR RETURN BREAK CONTINUE EMIT EVENT MODIFIER CONSTRUCTOR SELFDESTRUCT SEND CALL TRANSFER MSGSENDER MSGVALUE BLOCKTIMESTAMP BLOCKNUMBER TRUE FALSE
%token NUM ID
%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET SEMICOLON COMMA DOT ASSIGN PLUSEQ MINUSEQ EQ NEQ LEQ GEQ LT GT PLUS MINUS MUL DIV NOT AND OR ARROW

%union {
    int num;
    const char* id;
    bool boolean;
}

%type <id> ID type expr
%type <num> NUM
%type <id> expr

%%

program: contractlist ;

contractlist: contract contractlist
            | /* empty */ ;

contract: CONTRACT ID LBRACE contract_body RBRACE
        {
            printf("#include \"ethereum_model.h\"\n");
            printf("class %s {\npublic:\n", $2);
            printf("// State variables\n");
        }
        ;

contract_body: statevars functionlist
             | functionlist ;

statevars: statevar statevars
         | statevar ;

statevar: MAPPING LPAREN ADDRESS ARROW UINT RPAREN ID SEMICOLON
        {
            printf("std::unordered_map<Address, uint> %s;\n", $7);
        }
        | type ID SEMICOLON
        {
            printf("%s %s;\n", $1, $2);
        }
        ;

type: UINT   { $$ = "uint"; }
    | INT    { $$ = "int"; }
    | BOOL   { $$ = "bool"; }
    | ADDRESS{ $$ = "Address"; }
    | STRING { $$ = "std::string"; }
    ;

functionlist: function functionlist
            | function ;

function: FUNCTION ID LPAREN parameterlist RPAREN visibility payable_opt returns_opt LBRACE stmtlist RBRACE
        {
            printf("void %s(", $2);
            // Print parameters
            printf(") {\n");
            // Print statements
            printf("}\n");
        }
        ;

parameterlist: parameters
             | /* empty */ ;

parameters: parameter COMMA parameters
          | parameter ;

parameter: type ID
         ;

visibility: PUBLIC
          | PRIVATE
          | EXTERNAL
          | INTERNAL
          | /* empty */ ;

payable_opt: PAYABLE
           | /* empty */ ;

returns_opt: RETURNS LPAREN type RPAREN
           | /* empty */ ;

stmtlist: stmt stmtlist
        | /* empty */ ;

stmt: expr SEMICOLON
    | declaration SEMICOLON
    | assignment SEMICOLON
    | ifstmt
    | whilestmt
    | forstmt
    | returnstmt SEMICOLON
    | block
    | sendstmt SEMICOLON
    | callstmt SEMICOLON
    | transferstmt SEMICOLON
    | selfdestructstmt SEMICOLON
    | /* empty */ ;

declaration: type ID
           {
               printf("%s %s;\n", $1, $2);
           }
           ;

assignment: ID ASSIGN expr
          {
              printf("%s = ", $1);
              // Print expr
              printf(";\n");
          }
          ;

expr: expr PLUS expr   { $$ = concatenate(3, $1, " + ", $3); }
    | expr MINUS expr  { $$ = concatenate(3, $1, " - ", $3); }
    | expr MUL expr    { $$ = concatenate(3, $1, " * ", $3); }
    | expr DIV expr    { $$ = concatenate(3, $1, " / ", $3); }
    | expr EQ expr     { $$ = concatenate(3, $1, " == ", $3); }
    | expr NEQ expr    { $$ = concatenate(3, $1, " != ", $3); }
    | expr LT expr     { $$ = concatenate(3, $1, " < ", $3); }
    | expr GT expr     { $$ = concatenate(3, $1, " > ", $3); }
    | expr LEQ expr    { $$ = concatenate(3, $1, " <= ", $3); }
    | expr GEQ expr    { $$ = concatenate(3, $1, " >= ", $3); }
    | expr AND expr    { $$ = concatenate(3, $1, " && ", $3); }
    | expr OR expr     { $$ = concatenate(3, $1, " || ", $3); }
    | NOT expr         { $$ = concatenate(2, "!", $2); }
    | LPAREN expr RPAREN { $$ = concatenate(3, "(", $2, ")"); }
    | ID               { $$ = $1; }
    | NUM              { $$ = create_number($1); }
    | TRUE             { $$ = "true"; }
    | FALSE            { $$ = "false"; }
    | MSGSENDER        { $$ = "msg_sender"; }
    | MSGVALUE         { $$ = "msg_value"; }
    | BLOCKTIMESTAMP   { $$ = "block_timestamp"; }
    | BLOCKNUMBER      { $$ = "block_number"; }
    ;

ifstmt: IF LPAREN expr RPAREN stmt ELSE stmt
      | IF LPAREN expr RPAREN stmt ;

whilestmt: WHILE LPAREN expr RPAREN stmt ;

forstmt: FOR LPAREN assignment SEMICOLON expr SEMICOLON assignment RPAREN stmt ;

returnstmt: RETURN expr ;

block: LBRACE stmtlist RBRACE ;

sendstmt: ID DOT SEND LPAREN ID RPAREN
        {
            printf("send(%s, %s);\n", $1, $5);
        }
        ;

callstmt: ID DOT CALL LPAREN ID RPAREN
        {
            printf("call(%s, %s);\n", $1, $5);
        }
        ;

transferstmt: ID DOT TRANSFER LPAREN ID RPAREN
            {
                printf("transfer(%s, %s);\n", $1, $5);
            }
            ;

selfdestructstmt: SELFDESTRUCT LPAREN ID RPAREN
                {
                    printf("selfdestruct(%s);\n", $3);
                }
                ;

%%

void yyerror(const char *s) { fprintf(stderr, "Error: %s\n", s); }