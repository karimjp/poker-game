/**
 * @file Card.cpp
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my Card implentation file.
 * This class cannot convert from the card ascci value to the actual value.
 * A card can be initialized by passing the value of the card and the suit.
 *
 * @todo In the future: add converter from card letter to value.
 *
 */

#include "Card.h"
Card::Card() {
	char noCard = 'N';
	setNumber(0);
	setSuit(noCard);
}
;

Card::Card(int number, char suit) {
	this->number = number;
	this->suit = suit;
}
;

int Card::getNumber() {
	return this->number;
}
;
char Card::getSuit() {
	return this->suit;
}
;
void Card::setNumber(int number) {
	this->number = number;
}
;
void Card::setSuit(char suit) {
	this->suit = suit;
}
;

