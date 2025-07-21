%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>

void yyerror(const char *s);
extern int yylex(void);

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
%type <id> arglist
%type <id> parameterlist parameters parameter returnstmt
%type <num> NUM

%%

program: contractlist ;

contractlist: contract contractlist
            | /* empty */ ;

contract: CONTRACT ID 
        {
            printf("#include \"ethereum_model.h\"\n");
            printf("class %s {\npublic:\n", $2);
        }
        LBRACE contract_body RBRACE
        {
            printf("};\n");
        }
        ;

contract_body: statevars functionlist
             | functionlist
             | statevars
             | /* empty */
        ;

statevars: statevar statevars
         | statevar ;

statevar: MAPPING LPAREN ADDRESS ARROW UINT RPAREN ID SEMICOLON
        {
            printf("    std::unordered_map<Address, uint> %s;\n", $7);
        }
        | type ID SEMICOLON
        {
            printf("    %s %s;\n", $1, $2);
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

function: FUNCTION ID LPAREN parameterlist RPAREN visibility payable_opt returns_opt 
    {
        printf("    void %s(%s) {\n", $2, $4);
    }
    LBRACE stmtlist RBRACE
    {
        printf("    }\n");
    }
    ;

parameters: parameter
    { $$ = $1; }
    | parameter COMMA parameters
    { $$ = concatenate(3, $1, ", ", $3); }
    ;

parameter: type ID
    { $$ = concatenate(3, $1, " ", $2); }
    | /* empty */ { $$ = ""; }
    ;

parameterlist: parameters
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

stmt: REQUIRE LPAREN expr RPAREN SEMICOLON
    { printf("        require(%s);\n", $3); }
    | ID ASSIGN expr SEMICOLON
    { printf("        %s = %s;\n", $1, $3); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); }
    | ID LBRACKET expr RBRACKET ASSIGN expr SEMICOLON
    { printf("        %s[%s] = %s;\n", $1, $3, $6); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); if ($6 != NULL && $6 != "true" && $6 != "false" && $6 != "msg_sender" && $6 != "msg_value" && $6 != "block_timestamp" && $6 != "block_number") free((void*)$6); }
    | ID PLUSEQ expr SEMICOLON
    { printf("        %s += %s;\n", $1, $3); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); }
    | ID LBRACKET expr RBRACKET PLUSEQ expr SEMICOLON
    { printf("        %s[%s] += %s;\n", $1, $3, $6); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); if ($6 != NULL && $6 != "true" && $6 != "false" && $6 != "msg_sender" && $6 != "msg_value" && $6 != "block_timestamp" && $6 != "block_number") free((void*)$6); }
    | ID MINUSEQ expr SEMICOLON
    { printf("        %s -= %s;\n", $1, $3); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); }
    | ID LBRACKET expr RBRACKET MINUSEQ expr SEMICOLON
    { printf("        %s[%s] -= %s;\n", $1, $3, $6); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); if ($6 != NULL && $6 != "true" && $6 != "false" && $6 != "msg_sender" && $6 != "msg_value" && $6 != "block_timestamp" && $6 != "block_number") free((void*)$6); }
    | ID LPAREN arglist RPAREN SEMICOLON
    { printf("        %s(%s);\n", $1, $3); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); }
    | PAYABLE LPAREN expr RPAREN DOT TRANSFER LPAREN expr RPAREN SEMICOLON
    { printf("        transfer(%s, %s);\n", $3, $8); if ($3 != NULL && $3 != "true" && $3 != "false" && $3 != "msg_sender" && $3 != "msg_value" && $3 != "block_timestamp" && $3 != "block_number") free((void*)$3); if ($8 != NULL && $8 != "true" && $8 != "false" && $8 != "msg_sender" && $8 != "msg_value" && $8 != "block_timestamp" && $8 != "block_number") free((void*)$8); }
    | declaration SEMICOLON
    | ifstmt
    | whilestmt
    | forstmt
    | returnstmt SEMICOLON
    { printf("        return %s;\n", $1); if ($1 != NULL && $1 != "true" && $1 != "false" && $1 != "msg_sender" && $1 != "msg_value" && $1 != "block_timestamp" && $1 != "block_number") free((void*)$1); }
    | block
    | sendstmt SEMICOLON
    | callstmt SEMICOLON
    | transferstmt SEMICOLON
    | selfdestructstmt SEMICOLON
    | expr SEMICOLON
    { printf("        %s;\n", $1); if ($1 != NULL && $1 != "true" && $1 != "false" && $1 != "msg_sender" && $1 != "msg_value" && $1 != "block_timestamp" && $1 != "block_number") free((void*)$1); }
    | /* empty */ ;

declaration: type ID
        {
            printf("        %s %s;\n", $1, $2);
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
    | ID LBRACKET expr RBRACKET { $$ = concatenate(4, $1, "[", $3, "]"); }
    | PAYABLE LPAREN expr RPAREN { $$ = concatenate(3, "payable(", $3, ")"); }
    | ID LPAREN arglist RPAREN { $$ = concatenate(4, $1, "(", $3, ")"); }
    | NUM              { $$ = create_number($1); }
    | TRUE             { $$ = "true"; }
    | FALSE            { $$ = "false"; }
    | MSGSENDER        { $$ = "msg_sender"; }
    | MSGVALUE         { $$ = "msg_value"; }
    | BLOCKTIMESTAMP   { $$ = "block_timestamp"; }
    | BLOCKNUMBER      { $$ = "block_number"; }
    | expr DOT ID LPAREN arglist RPAREN
    {
        $$ = concatenate(6, $1, ".", $3, "(", $5, ")");
    }
    ;

arglist: expr { $$ = $1; }
       | expr COMMA arglist { $$ = concatenate(3, $1, ", ", $3); }
       | /* empty */ { $$ = ""; }
       ;

assignment: ID ASSIGN expr
          | ID LBRACKET expr RBRACKET ASSIGN expr
          | ID PLUSEQ expr
          | ID LBRACKET expr RBRACKET PLUSEQ expr
          ;

ifstmt: IF LPAREN expr RPAREN stmt ELSE stmt
      | IF LPAREN expr RPAREN stmt ;

whilestmt: WHILE LPAREN expr RPAREN stmt ;

forstmt: FOR LPAREN assignment SEMICOLON expr SEMICOLON assignment RPAREN stmt ;

returnstmt: RETURN expr
    { $$ = $2; }
    ;

block: LBRACE { printf("        {\n"); } stmtlist RBRACE { printf("        }\n"); } ;

sendstmt: ID DOT SEND LPAREN ID RPAREN
        {
            printf("        send(%s, %s);\n", $1, $5);
        }
        ;

callstmt: ID DOT CALL LPAREN ID RPAREN
        {
            printf("        call(%s, %s);\n", $1, $5);
        }
        ;

transferstmt: ID DOT TRANSFER LPAREN ID RPAREN
            {
                printf("        transfer(%s, %s);\n", $1, $5);
            }
            ;

selfdestructstmt: SELFDESTRUCT LPAREN ID RPAREN
                {
                    printf("        selfdestruct(%s);\n", $3);
                }
                ;

%%
