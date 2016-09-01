%{
#include <iostream>
  int words = 0;
%}
word      [a-zA-Z]+

%%
([A-Z]|[a-z])+   { words++;
                   std::cout << "matched: " << yytext << std::endl; }
.                { }
%%
int yyFlexLexer::yywrap() { return 1; }

