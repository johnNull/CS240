#ifndef DECK_H
#define DECK_H
#include <deque>
#include "card.h"

class Deck{
	public:
	std::deque<Card> deck;
	Deck();
	void shuffle();
	Card draw();
};

#endif
