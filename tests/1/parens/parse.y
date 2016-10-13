%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token CR LPAR RPAR
%%
lines   : lines expr CR
          { std::cout << "accept" << std::endl; }
        | { ; }
        ;
expr    : expr expr
        | LPAR expr RPAR
        | LPAR RPAR
        ;
