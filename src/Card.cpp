/*
 * Card.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Student
 */

#include "Card.h"
using namespace std;

static std::string faces[13] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9",
		"10", "Jack", "Queen", "King" };
static std::string suits[4] = { "Hearts", "Clubs", "Spades", "Diamonds" };

Card::Card(int face, int suit) {
	face_ = face;
	suit_ = suit;
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

int Card::getFace() {
	return face_;
}

int Card::getSuit() {
	return suit_;
}

std::string Card::toString() {
	return faces[getFace()] + " of " + suits[getSuit()];
}
