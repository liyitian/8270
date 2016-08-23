%{
#include <iostream>
  int words = 0;
%}
word      [a-zA-Z]+

%%
{word}        { ++words; }
.             { }
%%
int yywrap() { return 1; }

