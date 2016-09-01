#include <iostream>
#include <FlexLexer.h>

extern int words;
extern int lines;
extern int chars;

int main() {
  FlexLexer* lexer = new yyFlexLexer;
  lexer->yylex();
  std::cout << "words: " << words << std::endl;
  return 0;
}
