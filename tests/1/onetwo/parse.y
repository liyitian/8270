%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token ONE TWO CR
%%

lines   : lines expr CR
          { std::cout << "Sum is: " << $2 << std::endl; }
        | { ; }
        ;

expr    : ONE expr TWO 
          { $$ = $2 + 3; }
        | { $$ = 0; }
        ;
