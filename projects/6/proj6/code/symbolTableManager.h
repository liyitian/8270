/*************************************************************************
	> File Name: symbolTableManager.h
	> Author:Yitian Li 
	> Mail: yitianl@g.clemson.edu
************************************************************************/

#ifndef _SYMBOL_TABLE_MANAGER_H
#define _SYMBOL_TABLE_MANAGER_H

#include <vector>
#include <unordered_map>
#include "ast.h"


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

class SymbolTableManager
{
public:
    
    static SymbolTableManager& getInstance(){
        static SymbolTableManager instance;
        return instance;
    }

    ~SymbolTableManager(){ 
    }

    int getScopeNum(){return CurScope;}
    SymbolTable* getScope() {return tables[CurScope];}
    SymbolTable* getGlobalScope(){return tables[0];}

    void PushScope()
    {
        SymbolTable *NewSymbolTable= new SymbolTable();
        tables.push_back(NewSymbolTable);
        CurScope++;
    }
    void addSymbol(std::string name, AstNode* node){
        getInstance().tables[CurScope]->addSymbol(name,node);
    }
    void PopScope()
    {
        tables.pop_back();
        CurScope--;
    }

    AstNode* getAstNode(std::string str){
        int cur = CurScope;
        while(cur >= 0){
            if(getInstance().tables[cur]->getAstNode(str)){
                return getInstance().tables[cur--]->getAstNode(str);
            }
            cur--;
        }
        std::cerr << "Symbol Not Found" << std::endl;
        exit(0);
        
    }

private:
    std::vector<SymbolTable*> tables;
    int CurScope;
    SymbolTableManager():tables(),CurScope(0)
    {
        tables.push_back(new SymbolTable());
    }
;
#endif