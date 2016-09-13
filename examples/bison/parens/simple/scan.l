%{
#include <iostream>
#include <cstring>
#include "parse.tab.h"
%}

%%

"("       { return '('; }
")"       { return ')'; }
"\n"      { return CR; }
.         { ; }

%%
int yywrap() { return 1; }
