%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token A B C D

%%
start   : threeAs B
        | twoAs C
        ;

threeAs : threeAs A A A
        | %empty
        ;

twoAs   : A A twoAs
        | %empty;
        ;
