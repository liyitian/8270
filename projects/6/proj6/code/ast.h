//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy
#ifndef AST_H
#define AST_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
#include <iomanip>

extern void yyerror(const char*);
extern void yyerror(const char*, const char);


class AstNode {
public:
  AstNode():datatype('i'),left(nullptr),right(nullptr) {}
  AstNode(char type):datatype(type),left(nullptr),right(nullptr) {}
  AstNode(AstNode* l, AstNode* r) :left(l), right(r) {}
  virtual ~AstNode() {
    if(left!=nullptr)
      delete left;
    if(right!=nullptr)
      delete right;
  }
  AstNode* getLeft() const  { return left; }
  AstNode* getRight() const { return right; }
  virtual double eval() { throw std::string("No Number\n"); }
  virtual void setVal(double) { throw std::string("No Value to be set\n");}
  virtual void setName(std::string) { throw std::string("No String\n");}
  std::string getName(){return name;}
  void setType(char ch) {datatype=ch;}
  char getType() const{return datatype;}
  void setGlobal(bool t){inglobal=t;}
  bool isGlobal(){return inglobal;}
private:
  char datatype;
  AstNode *left;
  AstNode *right;
  std::string name;
  bool inglobal;
};


#endif
