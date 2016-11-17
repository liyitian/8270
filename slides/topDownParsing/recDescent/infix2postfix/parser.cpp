#include <iostream>
#include <string>
#include "parser.h"

Parser::Parser() {
  lookahead = std::cin.get(); 
}

void Parser::expr() const {
  term();
  rest();
}

void Parser::rest() const {
  if ( lookahead == '+' ) {
    match('+');
    term();
    std::cout << '+';
    rest();
  }
  else if ( lookahead == '-' ) {
    match('-');
    term();
    std::cout << '-';
    rest();
  }
  else return;
}

void Parser::term() const {
  if ( isdigit(lookahead) ) {
    std::cout << lookahead;
    match(lookahead);
  }
  else throw std::string("syntax error");
}

void Parser::match(char t) const {
  if ( lookahead == t ) lookahead = std::cin.get(); 
  else throw std::string("syntax error");
}

