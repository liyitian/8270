#include <iostream>
#include <cstring>

class string {
public:
  string() : buf(new char[1]) { buf[0] = '\0'; }
  string(const char* b) : buf(new char[strlen(b)+1]) { 
    strcpy(buf, b);
  }
  string(const string& s) : buf(new char[strlen(s.buf)+1]) { 
    strcpy(buf, s.buf);
  }
  ~string() { delete [] buf; }
  const char* getBuf() const { return buf; }
  string& operator=(const string&);
  std::ostream& operator<<(std::ostream& out) {
    return out << buf;
  }
private:
  char* buf;
};
string& string::operator=(const string& s) {
  if ( this == & s) return *this;
  delete [] buf;
  buf = new char[strlen(s.buf)+1];
  strcpy(buf, s.buf);
  return *this;
}

int main() {
  string a, b("cat"), c(b);
  //b.operator<<(std::cout);
  b << std::cout;
  std::cout << std::endl;
  return 0;
}
