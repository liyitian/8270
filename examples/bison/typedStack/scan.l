%{
#include "parse.tab.h"
%}
letter      [a-zA-Z]
digit       [0-9]
ident       {letter}({letter}|{digit})*

extern      yylval
%%

"="       { return EQ; }
"+"       { return PLUS; }
"-"       { return MINUS; }
"*"       { return MULT; }
"/"       { return DIV; }
{digit}+  { yylval.no = atoi(yytext);
            return NUMBER; 
          }
{ident}   {
            yylval.id = new char[strlen(yytext)+1];
            strcpy(yylval.id, yytext);
            return IDENT; 
          }
"\n"      { return CR; }

%%
int yywrap() { return 1; }
