%{
#include <iostream>
#include <cstring>
#include "parse.tab.h"
%}
%option noyywrap

%%

"a"   { return A;}
"b"   { return B;}
"c"   { return C;}
"d"   { return D;}
"x"   { return X;}
"y"   { return Y;}
"\n"  { }
.		  { }
%%
