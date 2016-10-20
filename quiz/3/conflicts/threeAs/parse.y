%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token A B C D X Y

%%
start   : threeAs X
        | twoAs Y
        ;

threeAs : threeAs A A A
        | %empty
        ;

twoAs   : A A twoAs
        | %empty;
        ;
