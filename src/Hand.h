/*
 * Hand.h
 *
 *  Created on: Apr 9, 2014
 *      Author: Student
 */

#ifndef HAND_H_
#define HAND_H_

#include "DeckOfCards.h"
#include <string>
#include <iostream>

class Hand {
public:
	Hand();
	Hand(DeckOfCards deck);
	Hand(int nums[10]); // only for testing purposes {face, suit, face, suit....}
	virtual ~Hand();
	Card cards[5];
	bool hasPair();
	bool hasTwoPair();
	bool hasThreeKind();
	bool hasFourKind();
	bool hasFlush();
	bool hasStraigt();
	void testHand();
	std::string toString();
};

#endif /* HAND_H_ */
