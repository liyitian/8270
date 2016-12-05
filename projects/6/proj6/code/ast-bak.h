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
  AstNode():datatype('0'),left(nullptr),right(nullptr) {}
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
  virtual double eval() const { throw std::string("No Number"); }
  virtual void setVal(double) { throw std::string("No Number To Be Set");}
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
    if(!(AstNode::getType()=='i'||AstNode::getType()=='d')){
      std::cerr << "not Number!"<<endl;
      exit(0);
    }
    return number; 
  }

private:
  double number;
};

class TempleteNode: public AstNode{
public:
  TempleteNode(AstNode* l, AstNode * r){
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
}

class AddNode: public AstNode{
public:
  AddNode(AstNode* l, AstNode * r){
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
}

class DecNode: public AstNode{
public:
  DecNode(AstNode* l, AstNode * r){
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
}

class MulNode: public AstNode{
public:
  MulNode(AstNode* l, AstNode * r){
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
}

class DivNode: public AstNode{
public:
  DivNode(AstNode* l, AstNode * r){
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
}

class PowNode: public AstNode{
public:
  PowNode(AstNode* l, AstNode * r){
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
}


class DoubleSlashNode: public AstNode{
public:
  DoubleSlashNode(AstNode* l, AstNode * r){
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
}

class ModNode: public AstNode{
public:
  ModNode(AstNode* l, AstNode * r){
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
}

class MinusNode: public AstNode{
public:
  MinusNode(AstNode* l, AstNode * r){
    int flag = (AstNode::getLeft()->getType()=='d')?0:1;
      flag?AstNode::setType('i'):AstNode::setType('d');
  }
  virtual ~MinusNode(){}
  double eval()
  {
    double leftVal=AstNode::getLeft()->eval();
    double rightVal=AstNode::getRight()->eval();
    return leftVal+rightVal;
  }
}

double eval(AstNode *a) {
  double v = 0;
  switch( a->getNodetype() ) {
  case 'M': 
    v = -eval(a->getLeft()); break;
  default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;;
  }
  return v;
}

void treeFree(AstNode *a) {
  switch(a->getNodetype()) {
   // two subtrees
  case '+':
  case '-':
  case '*':
  case '/':
    treeFree(a->getRight());

   // one subtrees
  case 'M':
    treeFree(a->getLeft());

   //no subtree
  case 'K':
    delete a;
    break;

  default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;;
  }
}




class SuiteNode : public AstNode {
public:
  SuiteNode() : Node(BOTTOM),
}


double eval(AstNode*);   // Evaluate an AST
void treeFree(AstNode*); // delete and free an AST 

#endif
