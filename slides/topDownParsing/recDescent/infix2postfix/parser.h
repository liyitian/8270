class Parser {
public:
  Parser();
  void expr() const;
  void rest() const;
  void term() const;
  void match(char ch) const;
private:
  static char lookahead;
};
