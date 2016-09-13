%{
  // Most flex specifications have ambiguous patterns;
  // that is, multiple patterns that can match a given input.
  // To handle ambiguity, flex imposes two rules:
  //    (1) Match the longest possible string every time
  //        flex matches an input, and
  //    (2) in case of a tie, match the first pattern in the spec.
  #include <iostream>
%}

%%
a+b+        { std::cout << "match: " << yytext << std::endl; }
(?i:m)      { std::cout << "matched m/M: " << yytext << std::endl; }
\n          { }
.           { }

%%
int yywrap() { return 1; }

