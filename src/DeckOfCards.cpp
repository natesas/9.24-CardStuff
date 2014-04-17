/*
 * DeckOfCards.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Student
 */

#include <iostream>
#include <algorithm>
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards() {
	int n = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			deck[n] = Card(j, i);
			n++;
		}
	}
	currentCard = 0;
}

DeckOfCards::~DeckOfCards() {
	// TODO Auto-generated destructor stub
}

void DeckOfCards::shuffle() {
	std::random_shuffle(begin(deck), end(deck));
}

Card DeckOfCards::nextCard() {
	return deck[currentCard++];
}

bool DeckOfCards::moreCards() {
	return currentCard <= 52;
}

string DeckOfCards::toString() {
	string ret = "";
	for (int i = 0; i < 52; i++) {
		ret = ret + deck[i].toString() + " ";
	}
	return ret;
}
