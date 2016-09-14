#include <iostream>
#include <vector>
#include <string>

class Shape {
public:
  Shape(const std::string& n) : name(n) {}
  const std::string& getName() const { return name; }
  virtual int perimeter() const { return 0; }
  virtual float area() const = 0;
private:
  std::string name;
};

class Circle : public Shape {
public:
  Circle(const std::string& n, float r) : Shape(n), radius(r) {}
  virtual float area() const { return 3.14*radius*radius; } 
private:
  float radius;
};

void printArea(const Shape* s) {
  std::cout << "Area of " << s->getName() << " is " << s->area(); 
  std::cout << std::endl;
}

int main() {
  Shape* circle = new Circle("circle", 5.0);
  printArea( circle );
}
