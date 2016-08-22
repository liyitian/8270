// How many things are wrong with this class?

#include <cstring>
#include <iostream>
class string {
public:
   string(const char* s) : buf(new char[strlen(s)+1]) { strcpy(buf, s); }
   char* getBuf() const { return buf; }
   void setBuf(char* s) {
     buf = s;
   }
private:
   char * buf;
};

int main() {
  string a("cat"), b = a;
  b.setBuf("dog");
  std::cout << a.getBuf() << std::endl;
}
