class Parser {
public:
  Parser() { lookahead = std::cin.get(); }
  void S() const {
    if ( lookahead == '(' ) {
      match('(');
      S();
      match(')');
      S();
    }
  }
  void match(char ch) const {
    if ( lookahead == ch ) lookahead = std::cin.get(); 
    else throw std::string("syntax error");
  }

private:
  static char lookahead;
};
