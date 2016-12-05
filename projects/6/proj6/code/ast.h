//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy
#ifndef AST_H
#define AST_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
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
  virtual double eval() { throw std::string("No Number"); }
  virtual void setVal(double) { throw std::string("No Value to be set");}
  void setType(char ch) {datatype=ch;}
  char getType() const{return datatype;}
private:
  char datatype;
  AstNode *left;
  AstNode *right;
};


class AstNumber : public AstNode {
public:
  AstNumber(char datatype, double n) : AstNode(datatype), number(n) 
  {
    AstNode::setType(datatype);
  } 
  void setVal(double num){number=num;}
  double eval(){
    if(AstNode::getType()=='s'){
      std::cerr << "not Number!"<< std::endl;
      exit(0);
    }
    return number; 
  }

private:
  double number;
};

class TempleteNode: public AstNode{
public:
  TempleteNode(AstNode* l, AstNode * r):AstNode(l,r){
    if (r!=nullptr){
      int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
      flag?AstNode::setType('i'):AstNode::setType('d');
    }
    else
    {
      int flag = (AstNode::getLeft()->getType()=='d')?0:1;
      flag?AstNode::setType('i'):AstNode::setType('d');
    
    }
  }
  virtual ~TempleteNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return leftVal+rightVal;
  }
};

class AddNode: public AstNode{
public:
  AddNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
    flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~AddNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return leftVal+rightVal;
  }
};

class DecNode: public AstNode{
public:
  DecNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
    flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~DecNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return leftVal - rightVal;
  }
};

class MulNode: public AstNode{
public:
  MulNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
    flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~MulNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return leftVal*rightVal;
  }
};

class DivNode: public AstNode{
public:
  DivNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
    flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~DivNode(){}
  double eval()
  {
    if (AstNode::getRight()->eval()==0){
      std::cerr << "divide can not be zero!" <<std::endl;
      exit(0);
    }
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    
    if (AstNode::getType()=='i')
      return floor(leftVal/rightVal);
    else 
      return leftVal/rightVal;
  }
};

class PowNode: public AstNode{
public:
  PowNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
    flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~PowNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return pow(leftVal,rightVal);
  }
};


class DoubleSlashNode: public AstNode{
public:
  DoubleSlashNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
    flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~DoubleSlashNode(){}
  double eval()
  {
    if (AstNode::getRight()->eval()==0){
      std::cerr << "divide can not be zero!" <<std::endl;
      exit(0);
    }
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return floor(leftVal/rightVal);
  }
};

class ModNode: public AstNode{
public:
  ModNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d' || AstNode::getRight()->getType()=='d')?0:1;
    flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~ModNode(){}
  double eval()
  {
    if (AstNode::getRight()->eval()==0){
      std::cerr << "divide can not be zero!" <<std::endl;
      exit(0);
    }
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return leftVal-rightVal*floor(leftVal/rightVal);
  }
};

class NegNode: public AstNode{
public:
  NegNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d')?0:1;
      flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~NegNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    return -leftVal;
  }
};

class PosNode: public AstNode{
public:
  PosNode(AstNode* l, AstNode * r):AstNode(l,r){
    int flag = (AstNode::getLeft()->getType()=='d')?0:1;
      flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~PosNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    return leftVal;
  }
};

class PrintNode : public AstNode {
public:
  PrintNode(AstNode* l) : AstNode(l,nullptr){
  }
  virtual ~PrintNode(){}
  void eval()
  {
    double val=AstNode::getLeft()->eval();
    double flag=0;
    std::cout<<std::setprecision(12);
      if (AstNode::getLeft()->getType()=='d' && val == (int)val)
        std::cout << val << ".0" <<std::endl; 
      else 
        std::cout << val << std::endl;
      }
  }
}

class AssignNode : public AstNode {
public:
  AssignNode(AstNode* l, AstNode * r) : AstNode(l,r){
  }
  virtual ~AssignNode(){}
  void eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    return leftVal;
  }
}
class SuiteNode : public AstNode {
public:
  SuiteNode(std::string) : AstNode(nullptr,nullptr),
}


#endif
