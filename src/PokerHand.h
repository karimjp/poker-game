/**
 * @file PokerHand.h
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my PokerHand class file.
 */
#include <iostream>
#include <array>
#include <algorithm>
#include "Card.h"

#ifndef POKERHAND_H_
#define POKERHAND_H_

class PokerHand {

public:
	PokerHand();
	PokerHand(std::array<Card, 5> cards, int category);
	bool static wayToSort(Card i, Card j);
	int getNumberOfCards();
	std::array<Card, 5> getCards();
	int getCategory();
	void setCards(std::array<Card, 5> cards);
	void setCategory(int category);

private:
	int category;
	std::array<Card, 5> cards;
	const int NUMBER_OF_CARDS = 5;
};

#endif /* POKERHAND_H_ */
