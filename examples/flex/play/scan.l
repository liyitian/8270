%{
#include <iostream>
  int words = 0;
%}
word      [a-zA-Z]+

%%
([A-Z]|[a-z])+   { std::cout << "matched: " << yytext << std::endl; }
.                { }
%%
int yywrap() { return 1; }

