#include <iostream>
#include "parser.h"

char Parser::lookahead;

int main() {
  try {
    Parser parser;
    parser.expr();
    std::cout << std::endl;
  }
  catch( std::string& msg ) {
    std::cout << std::endl;
    std::cout << msg << std::endl;
  }
  return 0;
}
