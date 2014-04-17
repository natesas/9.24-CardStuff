/*
 * DeckOfCards.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Student
 */

#ifndef DECKOFCARDS_H_
#define DECKOFCARDS_H_

#include <string>

#include "Card.h"

class DeckOfCards {
public:
	DeckOfCards();
	virtual ~DeckOfCards();
	void shuffle();
	Card nextCard();
	bool moreCards();
	std::string toString();
private:
	Card deck[52];
	int currentCard;
};

#endif /* DECKOFCARDS_H_ */
