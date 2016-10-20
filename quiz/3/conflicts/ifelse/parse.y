%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token IF THEN ELSE TRUE FALSE FOOBAR 

%%
start   : expr
        ;

expr    : FOOBAR
        | conditional
        |
        ;

conditional : IF BOOL_LITERAL THEN expr
            | IF BOOL_LITERAL THEN expr ELSE expr

BOOL_LITERAL : TRUE | FALSE ;
