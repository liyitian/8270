CXX=g++
CXXFLAGS=-Wall
LEX=flex
LINK.o = $(LINK.cc)
OBJS = main.o scan.o
main: main.o scan.o
scan.o: scan.c
	$(CXX) $(CXXFLAGS) -Wno-unused -c $^
clean:
	rm -f $(OBJS) main scan.c
