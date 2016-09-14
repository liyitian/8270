%{
#include <iostream>
#include <cmath>
extern int yylex();
void yyerror(const char * msg);
%}

%union {
  int no;
  char *id;
}

%token CR
%token EQ
%token<id> IDENT
%token NUMBER
%type<no> lines expr
%left PLUS MINUS
%left MULT DIV

%%
lines   : lines expr CR
          { std::cout << $2 << std::endl; }
        | lines IDENT EQ expr CR
          { std::cout << "ident is:  " << $2 << std::endl; }
          { std::cout << "ident val: " << $4 << std::endl; }
        | lines CR
        | { ; }
        ;

expr    : expr PLUS expr     { $$ = $1 + $3;   }
        | expr MINUS expr    { $$ = $1 - $3;   }
        | expr MULT expr     { $$ = $1 * $3;   }
        | expr DIV expr      { $$ = $1 / $3;   }
        | NUMBER             { $$ = yylval.no; }
        ;
%%
void yyerror(const char * msg) { std::cout << msg << std::endl; }
