%{
  // What happens when flex encounters ambiguous patterns?
  // This is explained on page 22 by John Levine:
  // Most flex specifications have ambiguous patterns;
  // that is, multiple patterns that can match a given input.
  // To handle ambiguity, flex imposes two rules:
  //    (1) Match the longest possible string every time
  //        flex matches an input, and
  //    (2) in case of a tie, match the first pattern in the spec.
%}

%%
"+="        { return 258; }
"+"         { return 259; }
"4"         { return 260; }
"444"       { return 261; }
[0-9]+      { return 262; }
\n          { return 263; }
.           { return -1; }

%%
int yywrap() { return 1; }

