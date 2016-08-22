#include <iostream>

void caseTheJoint(int n) {
  int result = 0;
  switch ( n ) { 
    case 1 : result = 1;
    case 2 : result = 2;
    case 3 : result = 3;
    case 4 : result = 4;
    default: result = 5;
  }
  std::cout << "result: " << result << std::endl;
}

int main() {
  int i = 5;
  std::cout << i++ << std::endl;
  caseTheJoint(1);
  caseTheJoint(i/6);
  return 0;
}
