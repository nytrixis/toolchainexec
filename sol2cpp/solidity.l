%{
#include "solidity.tab.h"
%}

%%

"contract"              { return CONTRACT; }
"function"              { return FUNCTION; }
"public"                { return PUBLIC; }
"private"               { return PRIVATE; }
"external"              { return EXTERNAL; }
"internal"              { return INTERNAL; }
"payable"               { return PAYABLE; }
"view"                  { return VIEW; }
"pure"                  { return PURE; }
"returns"               { return RETURNS; }
"mapping"               { return MAPPING; }
"address"               { return ADDRESS; }
"uint"|"uint256"        { return UINT; }
"int"|"int256"          { return INT; }
"bool"                  { return BOOL; }
"string"                { return STRING; }
"require"               { return REQUIRE; }
"assert"                { return ASSERT; }
"if"                    { return IF; }
"else"                  { return ELSE; }
"while"                 { return WHILE; }
"for"                   { return FOR; }
"return"                { return RETURN; }
"break"                 { return BREAK; }
"continue"              { return CONTINUE; }
"emit"                  { return EMIT; }
"event"                 { return EVENT; }
"modifier"              { return MODIFIER; }
"constructor"           { return CONSTRUCTOR; }
"selfdestruct"          { return SELFDESTRUCT; }
"send"                  { return SEND; }
"call"                  { return CALL; }
"transfer"              { return TRANSFER; }
"msg.sender"            { return MSGSENDER; }
"msg.value"             { return MSGVALUE; }
"block.timestamp"       { return BLOCKTIMESTAMP; }
"block.number"          { return BLOCKNUMBER; }
"true"                  { yylval.boolean = true; return TRUE; }
"false"                 { yylval.boolean = false; return FALSE; }
[0-9]+                  { yylval.num = atoi(yytext); return NUM; }
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.id = strdup(yytext); return ID; }
"{"                     { return LBRACE; }
"}"                     { return RBRACE; }
"("                     { return LPAREN; }
")"                     { return RPAREN; }
"["                     { return LBRACKET; }
"]"                     { return RBRACKET; }
";"                     { return SEMICOLON; }
","                     { return COMMA; }
"."                     { return DOT; }
"="                     { return ASSIGN; }
"+="                    { return PLUSEQ; }
"-="                    { return MINUSEQ; }
"=="                    { return EQ; }
"!="                    { return NEQ; }
"<="                    { return LEQ; }
">="                    { return GEQ; }
"<"                     { return LT; }
">"                     { return GT; }
"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return MUL; }
"/"                     { return DIV; }
"!"                     { return NOT; }
"&&"                    { return AND; }
"||"                    { return OR; }
"=>"                     { return ARROW; }
[ \t\r\n]+              { /* skip whitespace */ }
.                       { /* skip unknown */ }

%%

int yywrap() { return 1; }

int yylex(void);