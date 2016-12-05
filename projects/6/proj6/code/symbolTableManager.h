/*************************************************************************
	> File Name: symbolTableManager.h
	> Author:Yitian Li 
	> Mail: yitianl@g.clemson.edu
************************************************************************/

#ifndef _SYMBOL_TABLE_MANAGER_H
#define _SYMBOL_TABLE_MANAGER_H

#include <stack>
#include "symbolTable.h"

class SymbolTableManager
{
public:
    
    static SymbolTableManager& getInstance(){
        static SymbolTableManager instance;
        return instance;
    }

    ~SymbolTableManager(){ 
    }

    int getScopeNum(){return CurScope};
    SymbolTable& getScope() {return tables[CurScope];}

    void PushScope()
    {
        SymbolTable NewSymbolTable;
        tables.push_back(NewSymbolTable);
    }

    void PopScope()
    {
        tables.pop_back();
    }

private:
    std::vector<SymbolTable> tables;
    int CurScope;
    SymbolTableManager():tables(),CurScope(0)
    {
        tables.push_back(SymbolTable());
    }
;
#endif