class Parser {
public:
  Parser();
  void S() const;
  void match(char ch) const;
private:
  static char lookahead;
};
