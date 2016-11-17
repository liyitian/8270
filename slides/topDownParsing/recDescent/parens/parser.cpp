#include <iostream>
#include <string>
#include "parser.h"

Parser::Parser() {
  lookahead = std::cin.get(); 
}

void Parser::S() const {
  if ( lookahead == '(' ) {
    match('(');
    S();
    match(')');
    S();
  }
}

void Parser::match(char t) const {
  if ( lookahead == t ) lookahead = std::cin.get(); 
  else throw std::string("syntax error");
}

