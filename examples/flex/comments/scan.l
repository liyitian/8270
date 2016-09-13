%{
#include <iostream>
#include <string>
%}

/***** Start state for comments *****/
%x COMMENT
%x KOMMENT
  void display(const std::string&);
%%

"/*"                { BEGIN(KOMMENT); }
<KOMMENT>"*/"       { BEGIN(0); display("KOMMENT"); }
<KOMMENT>.          { ; }

"'''"               { BEGIN(COMMENT); }
<COMMENT>"'''"      { BEGIN(0); display("COMMENT"); }
<COMMENT>\n         { ; }
<COMMENT>.          { ; }

.                   { std::cout << yytext << std::endl; }
'\n'                { }
%%
int yywrap() { return 1; }

void display(const std::string&  msg) { 
  std::cout << "msg: " << msg << std::endl;
}

