%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token A B C D COMMA

%%
start   : A y COMMA
        | A y
        ;

y       : COMMA A y 
        | %empty
        ;
