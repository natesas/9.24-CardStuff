//============================================================================
// Name        : CardStuff.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include "Hand.h"
using namespace std;

int main() {
	int h1[10] = { 1, 0,  1, 2,  2, 0,  3, 0,  4, 0 };
	Hand pair = Hand(h1);
	pair.testHand();

	int h2[10] = { 1, 0,  1, 2,  2, 0,  2, 1,  4, 0 };
	Hand twoPair = Hand(h2);
	twoPair.testHand();

	int h3[10] = { 1, 0,  1, 2,  1, 3,  2, 1,  4, 0 };
	Hand threeKind = Hand(h3);
	threeKind.testHand();

	int h4[10] = { 2, 0,  2, 1,  2, 2,  2, 3,  4, 0 };
	Hand fourKind = Hand(h4);
	fourKind.testHand();

	int h5[10] = { 1, 0,  2, 2,  3, 3,  4, 1,  5, 0 };
	Hand straight = Hand(h5);
	straight.testHand();

	int h6[10] = { 1, 0,  3, 0,  4, 0,  7, 0,  9, 0 };
	Hand flush = Hand(h6);
	flush.testHand();

	return 0;
}
