CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: Animal.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp Animal.o -o pe6
	
clean:
	rm Animal.o pe6
	
Animal.o: Animal.cpp
	$(CXX) $(CXXFLAGS) -c Animal.cpp
	
