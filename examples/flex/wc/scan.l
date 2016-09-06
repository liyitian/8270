%{
// The remainder of wc is left as an exercise
#include <iostream>
#include <cstring>
  int words = 0;
  int chars = 0;
  int lines = 0;
%}
letter      [ \t\n]
%option noinput
%option nounput

%%
{letter}+  { ++words; chars += strlen(yytext);}
.          { chars += strlen(yytext); }
%%
int yywrap() { return 1; }

