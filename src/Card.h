/*
 * Card.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Student
 */

#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card {
public:
	Card(int face = 0, int suit = 0);
	virtual ~Card();
	std::string toString();
	int getSuit();
	int getFace();
protected:
private:
	int face_;
	int suit_;
};

#endif /* CARD_H_ */
