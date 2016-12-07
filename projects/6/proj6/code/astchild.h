#ifndef _CHILDNODE_H
#define _CHILDNODE_H

#include "ast.h"
#include "SymbolTableManager.h"


class AstNumber : public AstNode {
public:
  AstNumber(char datatype, double n) : AstNode(datatype), number(n) 
  {
    AstNode::setType(datatype);
  } 
  void setVal(double num){number=num;}
  double eval(){
    bool isNum=(AstNode::getType()=='i'||AstNode::getType()=='d');
    if(!isNum){
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
    AstNode::setType('P');
  }
  virtual ~PrintNode(){}
  double eval()
  {
    double val=AstNode::getLeft()->eval();
    std::cout<<std::setprecision(12);
      if (AstNode::getLeft()->getType()=='d' && val == (int)val)
        std::cout << val << ".0" <<std::endl; 
      else 
        std::cout << val << std::endl;
    return 0;
  }
};

class AssignNode : public AstNode {
public:
  AssignNode(AstNode* l, AstNode * r) : AstNode(l,r){
    AstNode::setType('A');
  }
  virtual ~AssignNode(){}
  double eval()
  {
    double val=AstNode::getRight()->eval();
    SymbolTableManager::getInstance().getScope()->addSymbol(AstNode::getLeft()->getName(), AstNode::getRight());
    return 0;
  }
};

class SuiteNode : public AstNode {
public:
  SuiteNode(std::vector<AstNode *>* v) : AstNode(nullptr,nullptr),stmts(v){
    AstNode::setType('S');
  }
  virtual ~SuiteNode(){}
  double eval(){
    double val;
    for(i=0;i<stmts.size();i++){
      if ((*stmts)[i]->getType=='S'){
        SymbolTableManager::getInstance().addSymbol((*stmts)[i]->getName(),(*stmts)[i]);
        continue;
      }
      else if((*stmts)[i]->getType()=='R')
      {
        AstNode::setType((*stmts)[i]->getType());
        return (*stmts)[i]->eval();
      }
      
      (*stmts[i])->eval();
    }
    return val;
  }
private:
  std::vector<AstNode*> stmts;
};

class ReturnNode : public AstNode{
public:
  ReturnNode(AstNode* l):AstNode(l,nullptr){
    AstNode::setType('R');
  }
  virtual ~ReturnNode(){}
  double eval(){
    AstNode::setType(l->getType());
    return l->eval();
  }
};

class FuncNode : public AstNode
{
public:
  FuncNode(std::string str):AstNode(nullptr,nullptr),name(str){
    AstNode::setType('F');
  }
  ~FuncNode(){}
  double eval(){
    SymbolTableManager* stm=SymbolTableManager::getInstance();
    AstNode* tmp=stm->getAstNode(Ast::getName());
    stm->insertScope();
    double val=tmp->eval();
    stm->popScope();
    return val;
  }
};

class StringNode : public AstNode
{
public:
  StringNode(std::string str):Ast(nullptr,nullptr){
    AstNode::setType('T');
  }
  ~StringNode(){}
  char getType(){
    AstNode* tmp = SymbolTableManager::getInstance().getAstNode(Ast::getName());
    return tmp->getType(); 
  }
  double eval(){
    AstNode* tmp = SymbolTableManager::getInstance().getAstNode(Ast::getName());
    return tmp->eval();
  }
};

class GlobalNode : public AstNode
{
public:
  GlobalNode(std::string str):AstNode(nullptr,nullptr),name(str),table(0){}
  ~GlobalNode(){}
  void addName(std::string str){
    table.push_back(str);
  }
  double eval(){
    for(auto str: table){
            AstNode* local = SymbolTableManager::getInstance().getScope()->getAstNode(str);
            AstNode* global = SymbolTableManager::getInstance().getGlobalScope->getAstNode(str);
            if(local){
                SymbolTableManager::getInstance().getGlobalScope->addSymbol(str, local);
            }else if(global){
                SymbolTableManager::getInstance().getScope()->addSymbol(str, global);
            }
            else {
                AstNode* newMember = new NumberNode('i',-1);
                SymbolTableManager::getInstance().getGlobalScope->addSymbol(str, newMember);
                SymbolTableManager::getInstance().getScope()->addSymbol(str, newMember);
            }
            SymbolTableManager::getInstance().getAstNode(str)->setGlobal(true);
        } 
        return 0;
  }
private:
  std::vector<std::string> table;
};

class PlusEqualNode:public AstNode{
public:
  PlusEqualNode(AstNode* l, AstNode* r): Ast(l, r){
    int flag = (AstNode::getLeft()->getType() == 'd'||AstNode::getRight()->getType() == 'd')?0:1;
    flag? AstNode::getType('i'): AstNode::getType('d');
  }
  ~PlusEqualNode(){}
  double eval(){ 
    AstNode *left = Ast::getLeft();
    AstNode *right = Ast::getRight();
    if(left->getType()!='T') {
        std::cerr << "Not valid name" << std::endl;
        exit(0);
    }
    AstNode* node = SymbolTableManager::getInstance().getAstNode(left->getName());
    double val = node->getVal() + right->getVal();
    char nodetype = (left->getValueType()=='d'||right->getValueType()=='d')?'d':'i';
    Ast* tmp = new NumberNode(nodetype,val);
    SymbolTableManager::getInstance().addSymbol(left->getName(), tmp);
    if(node->isGlobal()) 
      SymbolTableManager::getInstance().getGlobalScope()->addSymbol(left->getName(), tmp);
    return -1;
  }
};

#endif
