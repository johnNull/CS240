all: lab6

lab6: lab6.o BSTree.o
	g++ -std=c++11 lab6.o BSTree.o -o lab6

lab6.o: lab6.cpp
	g++ -std=c++11 -o lab6.o -c lab6.cpp

BSTree.o: BSTree.cpp BSTree.h
	g++ -std=c++11 -o BSTree.o -c BSTree.cpp

clean:
	rm -f *.o lab6
