
ifeq ("$(shell whoami)", "malloy")
  CXX = clang++
else
  CXX = g++
endif

# Warnings frequently signal eventual errors:
CXXFLAGS=`sdl-config --cflags` -g -W -Wall -Weffc++ -Wextra -pedantic -O0

ifeq ("$(shell uname)", "Darwin")
  LDFLAGS = -lm
else
  ifeq ("$(shell uname)", "Linux")
  LDFLAGS = `sdl-config --libs` -lm 
  endif
endif

OBJS = \
	main.o
EXEC = run

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LDFLAGS)

main.o: main.cpp

clean:
	rm -rf $(OBJS)
	rm -rf $(EXEC)
