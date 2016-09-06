%{
#include <iostream>
  int words = 0;
%}
letter      [a-zA-Z]
%option noinput
%option nounput

%%
a          { std::cout << "4"; }
aabb       { std::cout << "match 1\n ";}
l          { std::cout << "1"; }
a*b*       { std::cout << "match 2\n ";}
e          { std::cout << "3"; }
t          { std::cout << "7"; }
.          { std::cout << yytext; }
\n         { std::cout << std::endl; }
%%
int yywrap() { return 1; }

