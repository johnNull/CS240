#include "card.h"
#include "Deck.h"
#include <iostream>
using namespace std;
//prints an ordered deck and shuffled deck
int main(){
	Deck d1;
	Deck d2;
	d2.shuffle();
	//printing out the decks
	for(int i = 0; i < 52; i++){
		Card c = d1.draw();
		cout << suitVals.at(c.getSuit()) << " " << c.getValue() << endl;
	}
	cout << endl;
	for(int i = 0; i < 52; i++){
		Card c = d2.draw();
		cout << suitVals.at(c.getSuit()) << " " << c.getValue() << endl;
	}
	return 0;
}
