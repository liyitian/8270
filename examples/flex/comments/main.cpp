#include <iostream>
int yylex();

int main() {
  yylex();
  std::cout << "terminating ..." << std::endl;
  return 0;
}
