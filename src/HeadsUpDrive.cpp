/**
 * @file HeadsUpDrive.cpp
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my heads up drive program implentation file.
 * A use case controller for each of the cases presented in wikipedia.
 * Each of the wrapper functions receives two competing hands.
 */

#include <iostream>
#include <vector>
#include <array>
#include "HeadsUpDrive.h"
#include "Card.h"
#include "PokerHand.h"
#include "Rank.h"
#include "Globals.h"

void HeadsUpDrive::test() {

	std::cout << "HeadsUpDriver in memory." << std::endl;
}
;
Rank HeadsUpDrive::getRanking() {
	return ranking;
}
;

void HeadsUpDrive::highCard(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "High Card Match:" << std::endl;
	PokerHand pokerHand1(hand1, HIGH_CARD);
	PokerHand pokerHand2(hand2, HIGH_CARD);

	ranking.setPokerHands(pokerHand1, pokerHand2);
	ranking.printGamePlay();
	PokerHand winner = ranking.highCard();
	ranking.showHand(winner);
}
;

void HeadsUpDrive::onePair(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "One Pair Match:" << std::endl;
	PokerHand pokerHandOnePair1(hand1, ONE_PAIR);
	PokerHand pokerHandOnePair2(hand2, ONE_PAIR);

	ranking.setPokerHands(pokerHandOnePair1, pokerHandOnePair2);
	ranking.printGamePlay();
	PokerHand winnerOnePair = ranking.onePair();
	ranking.showHand(winnerOnePair);

}
;

void HeadsUpDrive::twoPair(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "Two Pair Match:" << std::endl;
	PokerHand pokerHandTwoPair1(hand1, TWO_PAIR);
	PokerHand pokerHandTwoPair2(hand2, TWO_PAIR);

	ranking.setPokerHands(pokerHandTwoPair1, pokerHandTwoPair2);
	ranking.printGamePlay();
	PokerHand winnerTwoPair = ranking.twoPair();
	ranking.showHand(winnerTwoPair);

}
;

void HeadsUpDrive::threeOfAKind(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "Play 1 -- Three of a kind:" << std::endl;
	PokerHand pokerHandThreeOfAKind1(hand1, THREE_OF_A_KIND);
	PokerHand pokerHandThreeOfAKind2(hand2, THREE_OF_A_KIND);

	ranking.setPokerHands(pokerHandThreeOfAKind1, pokerHandThreeOfAKind2);
	ranking.printGamePlay();
	PokerHand winnerThreeOfAKindPair = ranking.threeOfAKind();
	ranking.showHand(winnerThreeOfAKindPair);
}
;

void HeadsUpDrive::straight(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "Straight Match:" << std::endl;
	PokerHand pokerHandStraigth1(hand1, STRAIGHT);
	PokerHand pokerHandStraigth2(hand2, STRAIGHT);

	ranking.setPokerHands(pokerHandStraigth1, pokerHandStraigth2);
	ranking.printGamePlay();
	PokerHand winnerStraigth = ranking.straight();
	ranking.showHand(winnerStraigth);

}
;
void HeadsUpDrive::flush(std::array<Card, 5> hand1, std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "Flush Match:" << std::endl;

	PokerHand pokerHandFlush1(hand1, FLUSH);
	PokerHand pokerHandFlush2(hand2, FLUSH);

	ranking.setPokerHands(pokerHandFlush1, pokerHandFlush2);
	ranking.printGamePlay();
	PokerHand winnerFlush = ranking.flush();
	ranking.showHand(winnerFlush);
}
;

void HeadsUpDrive::fullHouse(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "Full House Match:" << std::endl;

	PokerHand pokerHandFullHouse1(hand1, FULL_HOUSE);
	PokerHand pokerHandFullHouse2(hand2, FULL_HOUSE);

	ranking.setPokerHands(pokerHandFullHouse1, pokerHandFullHouse2);
	ranking.printGamePlay();
	PokerHand winnerFullHouse = ranking.fullHouse();
	ranking.showHand(winnerFullHouse);
}
;

void HeadsUpDrive::fourOfAKind(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();

	std::cout << "Four of a kind Match:" << std::endl;

	PokerHand pokerHandFourOfAKind1(hand1, FOUR_OF_A_KIND);
	PokerHand pokerHandFourOfAKind2(hand2, FOUR_OF_A_KIND);

	ranking.setPokerHands(pokerHandFourOfAKind1, pokerHandFourOfAKind2);
	ranking.printGamePlay();
	PokerHand winnerFourOfAKind = ranking.fourOfAKind();
	ranking.showHand(winnerFourOfAKind);
}
;

void HeadsUpDrive::straightFlush(std::array<Card, 5> hand1,
		std::array<Card, 5> hand2) {
	std::cout << "--------------------" << std::endl;
	Rank ranking = getRanking();
	std::cout << "Straight Flush Match:" << std::endl;

	PokerHand pokerHandStraigthFlush1(hand1, STRAIGHT_FLUSH);
	PokerHand pokerHandStraigthFlush2(hand2, STRAIGHT_FLUSH);

	ranking.setPokerHands(pokerHandStraigthFlush1, pokerHandStraigthFlush2);
	ranking.printGamePlay();
	PokerHand winnerStraigthFlush = ranking.straightFlush();
	ranking.showHand(winnerStraigthFlush);
}
;
