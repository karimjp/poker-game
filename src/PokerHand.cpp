/**
 * @file PokerHand.cpp
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my PokerHand implentation file.
 * As any Poker Hand this class has an attribute cards of type array<Card> of size 5.
 * The most important aspect of this class is the sorting.  This class at initialization
 * sorts the cards in descending order.  This makes the logic for detecting ranking a lot more
 * easier than having unsorted cards.  Without the sorting, the current code would not work.
 *
 */
#include "PokerHand.h"

PokerHand::PokerHand() {
	std::array<Card, 5> cards { };
	setCards(cards);
	setCategory(0);

}
;

PokerHand::PokerHand(std::array<Card, 5> cards, int category) {
	//sorts in descending order all the Card objects in array cards
	std::sort(cards.begin(), cards.end(), wayToSort);
	setCards(cards);
	setCategory(category);
}
;

bool PokerHand::wayToSort(Card i, Card j) {
	return i.getNumber() > j.getNumber();
}
;

int PokerHand::getNumberOfCards() {
	return this->NUMBER_OF_CARDS;
}
;

std::array<Card, 5> PokerHand::getCards() {
	return this->cards;
}
;

int PokerHand::getCategory() {
	return this->category;
}
;

void PokerHand::setCards(std::array<Card, 5> cards) {
	this->cards = cards;
}
;

void PokerHand::setCategory(int category) {
	this->category = category;
}
;

