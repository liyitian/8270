#include <iostream>
#include "parser.h"

char Parser::lookahead;

int main() {
  Parser parser;
  try {
    parser.S();
    std::cout << "parens match" << std::endl;
  }
  catch( const std::string& msg ) {
    std::cout << msg << std::endl;
  }
  return 0;
}
