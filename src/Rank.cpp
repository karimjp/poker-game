/**
 * @file Rank.cpp
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my Rank implemmentation file.
 * The core of the comparison and ranking logic is in here.  The names of the functions are
 * self explainable to what they are designed for.
 */
#include "Rank.h"
#include "Card.h"
#include "Globals.h"


PokerHand Rank::highCard() {
	PokerHand pokerHand1 = getPokerHand1();
	PokerHand pokerHand2 = getPokerHand2();

	std::array<Card, 5> cards1 = pokerHand1.getCards();
	std::array<Card, 5> cards2 = pokerHand2.getCards();

	for (int i = 0; i < pokerHand1.getNumberOfCards(); ++i) {
		Card card1 = cards1[i];
		Card card2 = cards2[i];
		if (card1.getNumber() == card2.getNumber())
			continue;
		if (card1.getNumber() < card2.getNumber())
			return pokerHand2;
		else
			return pokerHand1;
	}
//At this point both hands are equal so it is a tie,
//therefore return a nullHand to signal
	PokerHand nullPokerHand;
	return nullPokerHand;
}
;

PokerHand Rank::onePair() {
	PokerHand pokerHand1 = getPokerHand1();
	PokerHand pokerHand2 = getPokerHand2();

	std::vector<int> pairs1 = getPairs(pokerHand1);
	std::vector<int> pairs2 = getPairs(pokerHand2);
	for (int i = 0; i < pairs1.size(); ++i) {
		if (pairs1[i] == pairs2[i])
			continue;
		if (pairs1[i] < pairs2[i])
			return pokerHand2;
		else
			return pokerHand1;
	}
	//Both pairs are equal. Return null to check kickers.
	//PokerHand nullPokerHand;
	//return nullPokerHand;
	PokerHand highestKickerHand = highCard();
	return highestKickerHand;
}
;

PokerHand Rank::twoPair() {
	return onePair();
}
;

PokerHand Rank::threeOfAKind() {
	PokerHand pokerHand1 = getPokerHand1();
	PokerHand pokerHand2 = getPokerHand2();

	std::vector<int> trio1 = getTrio(pokerHand1);
	std::vector<int> trio2 = getTrio(pokerHand2);
	for (int i = 0; i < trio1.size(); ++i) {
		if (trio1[i] == trio2[i])
			continue;
		if (trio1[i] < trio2[i])
			return pokerHand2;
		else
			return pokerHand1;
	}

	PokerHand highestKickerHand = highCard();
	return highestKickerHand;
}
;

PokerHand Rank::straight() {
	PokerHand pokerHand1 = getPokerHand1();
	PokerHand pokerHand2 = getPokerHand2();

	std::array<Card, 5> cards1 = pokerHand1.getCards();
	std::array<Card, 5> cards2 = pokerHand2.getCards();
	if (cards1[0].getNumber() < cards2[0].getNumber())
		return pokerHand2;
	else if (cards1[0].getNumber() > cards2[0].getNumber())
		return pokerHand1;
	//At this point we have a tie
	PokerHand nullPokerHand;
	return nullPokerHand;
}
;

PokerHand Rank::flush() {
	return highCard();
}
;

PokerHand Rank::fullHouse() {
	PokerHand pokerHand1 = getPokerHand1();
	PokerHand pokerHand2 = getPokerHand2();

	std::vector<int> trio1 = getTrio(pokerHand1);
	std::vector<int> trio2 = getTrio(pokerHand2);
	for (int i = 0; i < trio1.size(); ++i) {
		//std::cout << trio1[i] << std::endl;
		if (trio1[i] == trio2[i])
			continue;
		if (trio1[i] < trio2[i])
			return pokerHand2;
		else
			return pokerHand1;
	}
	//At this point both trios are equal
	PokerHand highestPair = onePair();
	return highestPair;
}
;

PokerHand Rank::fourOfAKind() {
	PokerHand pokerHand1 = getPokerHand1();
	PokerHand pokerHand2 = getPokerHand2();

	std::vector<int> four1 = getFour(pokerHand1);
	std::vector<int> four2 = getFour(pokerHand2);
	for (int i = 0; i < four1.size(); ++i) {
		if (four1[i] == four2[i])
			continue;
		if (four1[i] < four2[i])
			return pokerHand2;
		else
			return pokerHand1;
	}

	PokerHand highestKickerHand = highCard();
	return highestKickerHand;
}

PokerHand Rank::straightFlush() {
	return straight();
}
/**
 * getPairs
 * wrapper function for the card of a pair detecting pairs
 * @param pokerHand
 * @param numberOfDuplicates
 * @return array of pairs
 *
 */
std::vector<int> Rank::getPairs(PokerHand pokerHand, int numberOfDuplicates) {
	return getDuplicates(pokerHand, numberOfDuplicates);
}
;
/**
 * getTrio
 * wrapper function for detecting the card of a three of a kind
 * @param pokerHand
 * @param numberOfDuplicates
 * @return array of trios
 */
std::vector<int> Rank::getTrio(PokerHand pokerHand, int numberOfDuplicates) {
	return getDuplicates(pokerHand, numberOfDuplicates);
}
/**
 * getFour
 * wrapper function for detecting the card of a four of a kind
 * @param pokerHand
 * @param numberOfDuplicates
 * @return array of four of a kinds
 */
std::vector<int> Rank::getFour(PokerHand pokerHand, int numberOfDuplicates) {
	return getDuplicates(pokerHand, numberOfDuplicates);
}

/**
 * getDuplicates
 * generic function to detect repetitions of the same card in a hand
 * @param pokerHand
 * @param numberOfDuplicates
 * @return array of caller request duplicate
 */
std::vector<int> Rank::getDuplicates(PokerHand pokerHand,
		int numberOfDuplicates) {
	std::vector<int> pairs;
	int newNumber = 0;
	int oldNumber = 0;
	int count = 0;
	std::array<Card, 5> cards = pokerHand.getCards();
	for (int i = 0; i < pokerHand.getNumberOfCards(); ++i) {
		newNumber = cards[i].getNumber();
		if (oldNumber == newNumber) {
			count += 1;
		} else {
			count = 0;
		}
		//if found card n times
		if (count == numberOfDuplicates) {
			pairs.push_back(newNumber);
			count = 0;
		}
		oldNumber = newNumber;
	}
	return pairs;
}
;

void Rank::showHand(PokerHand pokerHand) {
	std::cout << std::endl;
	const int NULL_DECK = 0;
	int number;
	char suit;
	if (pokerHand.getCards().front().getNumber() != NULL_DECK) {
		std::cout << "The winner hand is: ";
		for (int i = 0; i < pokerHand.getNumberOfCards(); ++i) {
			number = pokerHand.getCards()[i].getNumber();
			suit = pokerHand.getCards()[i].getSuit();
			printf("(%s,%c) ", &letters[number], suit);
		}
		std::cout << std::endl;
	} else {
		std::cout << "It's a tie." << std::endl;
	}
}
;

void Rank::setPokerHands(PokerHand pokerHand1, PokerHand pokerHand2) {
	this->pokerHand1.setCards(pokerHand1.getCards());
	this->pokerHand1.setCategory(pokerHand1.getCategory());

	this->pokerHand2.setCards(pokerHand2.getCards());
	this->pokerHand2.setCategory(pokerHand2.getCategory());
}
;

PokerHand Rank::getPokerHand1() {
	return this->pokerHand1;
}
;

PokerHand Rank::getPokerHand2() {
	return this->pokerHand2;
}
;

void Rank::printGamePlay() {

	PokerHand pokerHand1 = getPokerHand1();
	PokerHand pokerHand2 = getPokerHand2();
	int number;
	char suit;
	for (int i = 0; i < pokerHand1.getNumberOfCards(); ++i) {
		number = pokerHand1.getCards()[i].getNumber();
		suit = pokerHand1.getCards()[i].getSuit();
		printf("(%s,%c) ", &letters[number], suit);
	}

	std::cout << std::endl << "versus" << std::endl;

	for (int i = 0; i < pokerHand2.getNumberOfCards(); ++i) {
		number = pokerHand2.getCards()[i].getNumber();
		suit = pokerHand2.getCards()[i].getSuit();
		printf("(%s,%c) ", &letters[number], suit);
	}
	std::cout << std::endl;
}
;

