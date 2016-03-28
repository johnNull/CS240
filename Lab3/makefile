all: lab3

lab3: lab3.o User.o MovieChart.o
	g++ lab3.o User.o MovieChart.o -o lab3

lab3.o: lab3.cpp
	g++ -o lab3.o -c lab3.cpp

User.o: User.cpp User.h
	g++ -o User.o -c User.cpp

MovieChart.o: User.h MovieChart.h MovieChart.cpp
	g++ -o MovieChart.o -c MovieChart.cpp

clean:
	rm -f *.o lab3
