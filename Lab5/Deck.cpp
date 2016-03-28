#include "card.h"
#include "Deck.h"
#include <algorithm>
#include <deque>

using namespace std;
//Deck constructor. Creates card of each value for each suit and stores it in deque deck
Deck::Deck(){
	for(int i = 1; i <= 13; i++){
		for(int q = 1; q <= 4; q++){
			deck.push_front(Card(i, q));
		}
	}
}

//randomizes the order of the deque
void Deck::shuffle(){
	random_shuffle(deck.begin(), deck.end());
}

//returns the drawn card and deletes it from deque
Card Deck::draw(){
	Card c = deck.back();	
	deck.pop_back();
	return c;
}
