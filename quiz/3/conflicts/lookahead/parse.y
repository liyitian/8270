%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token A B C D

%%
start   : x B C
        | y B D
        ;

x       : A;
y       : A;
