/*************************************************************************
	> File Name: symbolTable.h
	> Author:Yitian Li 
	> Mail: yitianl@g.clemson.edu
************************************************************************/

#ifndef _SYMBOLTABLE_H
#define _SYMBOLTABLE_H

#include <unordered_map>
#include "ast.h"
class AstNode;

class SymbolTable
{
public:
    
    ~SymbolTable(){ 
        // for(auto i: table)
        //     delete i.second;
    }

    void addSymbol(std::string str, AstNode* ast)
    {
        table[str] = ast;
    }

    AstNode* getAstNode(std::string str){
        if(table.count(str)==0) return NULL;
        return table[str]; 
    }

private:
    std::unordered_map<std::string, AstNode*> table;
};
#endif