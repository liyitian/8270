#include <iostream>
class Number {
public:
  Number()              { std::cout << "default" << std::endl;    }
  Number(float)         { std::cout << "convert" << std::endl;    }
  Number(const Number&) { std::cout << "copy" << std::endl;       }
  ~Number()             { std::cout << "destructor" << std::endl; }
  Number& operator=(const Number&) { 
    std::cout << "assign" << std::endl; 
    return *this;
  }
};

class Student {
public:
  Student(float g) :gpa(g) {
    gpa = g;
  }
private:
  Number gpa;
};

int main() {
  Student* npc = new Student(3.4);
}
