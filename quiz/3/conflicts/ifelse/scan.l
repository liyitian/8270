%{
#include <iostream>
#include <cstring>
#include "parse.tab.h"
%}
%option noyywrap

%%

"if"   { return IF;}
"then"   { return THEN;}
"else"   { return ELSE;}
"true"   { return TRUE;}
"false"   { return FALSE;}
"foobar" { return FOOBAR;}
"\n"  { }
.		  { }
%%
