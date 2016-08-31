#include <cstring>
#include <iostream>
class string {
public:
   string(const char* s) : buf(new char[strlen(s)+1]) { strcpy(buf, s); }
   ~string() { delete [] buf; }
   const char* getBuf() const { return buf; }
private:
   char * buf;
};

int main() {
  string a("cat"), b = a;
}
