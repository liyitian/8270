#include <iostream>
#include <vector>
#include <string>

class Shape {
public:
  Shape(const std::string& n) : name(n) {}
  const std::string& getName() const { return name; }
  virtual float area() const = 0;
private:
  std::string name;
};

class Rectangle : public Shape {
public:
  Rectangle(float w, float h) : 
     Shape("rectangle"), width(w), height(h) {}
  virtual float area() const { return width*height; } 
private:
  float width;
  float height;
};

class Circle : public Shape {
public:
  Circle(float r) : Shape("circle"), radius(r) {}
  virtual float area() const { return 3.14*radius*radius; } 
private:
  float radius;
};

void printAreas(const std::vector<Shape*> &s) {
  for (unsigned int i = 0; i < s.size(); ++i) {
    std::cout << "Area of " << s[i]->getName() 
              << " is " << s[i]->area() 
              << std::endl;
  }
}

int main() {
  std::vector<Shape*> shapes;
  shapes.push_back( new Circle(5.0) );
  shapes.push_back( new Rectangle(5.0, 6.5) );
  shapes.push_back( new Circle(5.0) );
  printAreas(shapes);
}
