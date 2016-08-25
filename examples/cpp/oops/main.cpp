// How many things are wrong with this class?

#include <cstring>
#include <iostream>
class string {
public:
   string(const char* s) : buf(new char[strlen(s)+1]) { strcpy(buf, s); }
   string(const string& s) : buf(new char[strlen(s.buf)+1]) { 
     strcpy(buf, s.buf); 
    }
   ~string() { delete [] buf; }
   char* getBuf() const { return buf; }
   void setBuf(const char* s) {
     delete [] buf;
     buf = new char[strlen(s)+1];
     strcpy(buf, s);
   }
   string& operator=(const string& rhs) {
     if ( this == &rhs ) return *this;
     setBuf(rhs.buf);
     return *this;
   }
private:
   char * buf;
};

int main() {
  string a("cat"), b = a;
  b.setBuf("dog");
  std::cout << a.getBuf() << std::endl;
}
