all: Program1

Program1: Program1.o User.o MovieChart.o
	g++ -g Program1.o User.o MovieChart.o -o Program1

Program1.o: Program1.cpp LinkedList.h
	g++ -g -o Program1.o -c Program1.cpp

User.o: User.cpp User.h
	g++ -o User.o -c User.cpp

MovieChart.o: User.h MovieChart.h LinkedList.h MovieChart.cpp
	g++ -o MovieChart.o -c MovieChart.cpp

clean:
	rm -f *.o Program1
