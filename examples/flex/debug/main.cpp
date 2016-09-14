#include <iostream>
int yylex();

extern int words;
extern int lines;
extern int chars;

int main() {
  int token = yylex();
  while ( token ) {
    std::cout << "token: " << token << std::endl;
    token = yylex();
  }
  return 0;
}
