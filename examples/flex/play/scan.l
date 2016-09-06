%{
#include <iostream>
  int words = 0;
%}
letter      [a-zA-Z]

%%
a*b*          { std::cout << "Match" << std::endl; }
{letter}*     { std::cout << "no match" << std::endl; }
.             { }
%%
int yywrap() { return 1; }

