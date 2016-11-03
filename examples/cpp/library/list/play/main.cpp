#include <iostream>
#include <cstdlib>
#include <list>

void eraseEvens(std::list<int> & mylist) {
  std::list<int>::iterator ptr = mylist.begin();
  while ( ptr != mylist.end() ) {
    if (*ptr %2 == 0) {
      ptr = mylist.erase(ptr);
    }
    else {
      ++ptr;
    }
  }
}

void print(const std::list<int> & mylist) {
  std::list<int>::const_iterator ptr = mylist.begin();
  while ( ptr != mylist.end() ) {
    std::cout << *ptr << std::endl;
    ++ptr;
  }
}

int main() {
  std::list<int> mylist;
  for (int i = 0; i < 9; ++i) {
    mylist.push_back( rand()%100 );
  }
  print(mylist);
}
