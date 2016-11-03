#include <iostream>
#include <cstdlib>
#include <string>
#include <map>

void print(const std::map<std::string, int> & myMap) {
  std::map<std::string, int>::const_iterator ptr = 
    myMap.begin();
  while ( ptr != myMap.end() ) {
    std::cout << '(' << ptr->first << ", " << ptr->second 
              << ')' << std::endl;
    ++ptr;
  }
}

int main() {
  std::map<std::string, int> myMap;
  myMap["sum"] = rand()%100;
  myMap["value"] = rand()%100;
  myMap["i"] = rand()%100;
  std::map<std::string, int>::const_iterator it =
    myMap.find("snorlax");
  if ( it == myMap.end() ) {
    std::cout << "Not there" << std::endl;
  }
  else std::cout << myMap["snorlax"] << std::endl;
  print(myMap);
}
