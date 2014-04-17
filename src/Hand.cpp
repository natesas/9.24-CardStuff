/*
 * Hand.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: Student
 */

#include "Hand.h"
#include <iostream>
using namespace std;

Hand::Hand() {
	{
		DeckOfCards d = DeckOfCards();
		d.shuffle();
		for (int i = 0; i < 5; i++) {
			cards[i] = d.nextCard();
		}
	}
}

Hand::Hand(DeckOfCards deck) {
	for (int i = 0; i < 5; i++) {
		cards[i] = deck.nextCard();
	}
}

Hand::Hand(int nums[10]) {
	for (int i = 0; i < 10; i += 2) {
		cards[i / 2] = Card(nums[i], nums[i + 1]);
	}
}

Hand::~Hand() {
	// TODO Auto-generated destructor stub
}

bool Hand::hasPair() {
	// I'm almost certain all of these are doable in O(n), I'll probably fix it later :)
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (cards[i].getFace() == cards[j].getFace()) {
				return true;
			}
		}
	}
	return false;
}

bool Hand::hasTwoPair() {
	int n = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (cards[i].getFace() == cards[j].getFace()) {
				n++;
			}
			if (n == 2) {
				return true;
			}
		}
	}
	return false;
}

bool Hand::hasThreeKind() {
	int n = -1;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (cards[i].getFace() == cards[j].getFace()) {
				if (cards[i].getFace() == n) {
					return true;
				}
				n = cards[i].getFace();
			}
		}
	}
	return false;
}

bool Hand::hasFourKind() {
	int c1 = -1;
	int c2 = -1;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (cards[i].getFace() == cards[j].getFace()) {
				if (cards[j].getFace() == cards[c1].getFace() && c1 != j) {
					if (cards[j].getFace() == cards[c2].getFace() && c2 != j) {
						return true;
					}
					c2 = j;
				}
				c1 = j;
			}
		}
	}
	return false;
}

bool Hand::hasFlush() {
	for (int i = 1; i < 5; i++) {
		if (cards[i - 1].getSuit() != cards[i].getSuit()) {
			return false;
		}
	}
	return true;
}

bool Hand::hasStraigt() {
	int temp[5];
	temp[0] = 0;
	for (int i = 1; i < 5; i++) {
		if (cards[i].getFace() == cards[i - 1].getFace() + 1) {
			temp[i] = temp[i - 1] + 1;
		} else {
			return false;
		}
	}
	return true;
}

void Hand::testHand() {
	cout << this->toString() << endl;
	if (this->hasFourKind())
			cout << "Four of a kind" << endl;
	else if (this->hasStraigt())
			cout << "Straight" << endl;
	else if (this->hasFlush())
			cout << "Flush" << endl;
	else if (this->hasThreeKind())
			cout << "Three of a kind" << endl;
	else if (this->hasTwoPair())
			cout << "Two Pair" << endl;
	else if (this->hasPair())
			cout << "Pair" << endl;
}

std::string Hand::toString() {
	std::string ret = "| ";
	for (int i = 0; i < 5; i++) {
		ret += (cards[i].toString() + " | ");
	}
	return ret;
}
