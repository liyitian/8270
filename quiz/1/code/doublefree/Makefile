
CC = g++
LIB = -lSDL -lm -lstdc++
OBJ = 	main.o
FLAGS = -Wall -c -ggdb
EXE = run

$(EXE): $(OBJ)
	$(CC) $(OBJ) $(LIB)  -o $(EXE)

.c.cpp.o: $.h
	$(CC) $(FLAGS) $< 
	
clean:
	 rm -rf *.o $(EXE)

