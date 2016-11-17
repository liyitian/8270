CCC = clang++
LEX = flex
YACC = bison
CFLAGS = -Wall -std=c++11
LEXFLAGS = -Wno-unused

#LEXDEBUG = -d
LEXDEBUG =
YACCDEBUG = -vtd

OBJS = main.o symbolTable.o ast.o parse.tab.o lex.yy.o

run: $(OBJS)
	$(CCC) $(CFLAGS) -o run $(OBJS)

main.o: main.cpp includes/parse.y includes/scan.l parse.tab.cpp lex.yy.cpp \
	includes/symbolTable.o
	$(CCC) $(CFLAGS) -c main.cpp

symbolTable.o: includes/symbolTable.cpp includes/symbolTable.h
	$(CCC) $(CFLAGS) -c includes/symbolTable.cpp

ast.o: includes/ast.cpp includes/ast.h includes/symbolTable.h
	$(CCC) $(CFLAGS) -c includes/ast.cpp

parse.tab.cpp: includes/parse.y includes/ast.h includes/symbolTable.h
	$(YACC) -o parse.tab.cpp $(YACCDEBUG) includes/parse.y

parse.tab.o: parse.tab.cpp
	$(CCC) $(CFLAGS) -c parse.tab.cpp

lex.yy.cpp: includes/scan.l parse.tab.o
	$(LEX) -o lex.yy.cpp $(LEXDEBUG) includes/scan.l

lex.yy.o: lex.yy.cpp
	$(CCC) $(CFLAGS) $(LEXFLAGS) -c lex.yy.cpp
	
clean:
	rm -f run *.o includes/*.o parse.tab.cpp lex.yy.cpp
	rm -f parse.tab.hpp
	rm -f parse.output
