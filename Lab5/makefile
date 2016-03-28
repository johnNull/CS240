lab5: lab5.o Deck.o
	g++ -std=c++11 lab5.o Deck.o -o lab5
lab5.o: lab5.cpp
	g++ -std=c++11 -o lab5.o -c lab5.cpp
Deck.o: card.h Deck.h Deck.cpp
	g++ -std=c++11 -o Deck.o -c Deck.cpp
Card.o: card.h
	g++ -std=c++11 card.h
clean:
	rm -f *.o lab5
