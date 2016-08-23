#include <iostream>
int pokedex = 112;

namespace Pokemon {
  int pokedex = 250;
}

int main() {
  int pokedex = 0;
  std::cout << pokedex << std::endl;
  std::cout << Pokemon::pokedex << std::endl;
  std::cout << ::pokedex << std::endl;
  return 0;
}
