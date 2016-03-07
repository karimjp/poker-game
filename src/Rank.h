/**
 * @file Rank.h
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my Rank class file
 */
#include "PokerHand.h"
#include <vector>

#ifndef RANK_H_
#define RANK_H_
class Rank {

public:

	PokerHand highCard();
	PokerHand onePair();
	PokerHand twoPair();
	PokerHand threeOfAKind();
	PokerHand straight();
	PokerHand flush();
	PokerHand fullHouse();
	PokerHand fourOfAKind();
	PokerHand straightFlush();
	std::vector<int> getPairs(PokerHand pokerHand, int numberOfDuplicates = 1);
	std::vector<int> getTrio(PokerHand pokerHand, int numberOfDuplicates = 2);
	std::vector<int> getFour(PokerHand pokerHand, int numberOfDuplicates = 3);
	std::vector<int> getDuplicates(PokerHand pokerHand, int numberOfDuplicates);
	void showHand(PokerHand pokerHand);
	void setPokerHands(PokerHand pokerHand1, PokerHand pokerHand2);
	void printGamePlay();
	PokerHand getPokerHand1();
	PokerHand getPokerHand2();

private:
	PokerHand pokerHand1;
	PokerHand pokerHand2;
};

#endif /* RANK_H_ */
