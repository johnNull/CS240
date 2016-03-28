#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <map>

static std::map<int, std::string> suitVals = {{1, "Heart"}, {2, "Spade"}, {3, "Diamond"}, {4, "Club"}};
class Card{
	int value;
	int suit;
	public:
	//card constructor
	Card(int value, int suit){
		this->value = value;
		this->suit = suit;
	};

	//returns card value
	int getValue(){
		return value;
	};
	//returns card suit
	int getSuit(){
		return suit;
	};
};
#endif
