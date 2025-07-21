#define yylex yylex_debug
#include <cstdio>
#include "solidity.tab.h"
extern int yyparse();
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main() {
    yyparse();
    return 0;
}