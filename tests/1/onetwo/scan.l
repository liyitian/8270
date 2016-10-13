%{
#include "parse.tab.h"
%}
%%

"1"       { return ONE; }
"2"       { return TWO; }
"\n"      { return CR; }
.         { ; }

%%
int yywrap() { return 1; }
