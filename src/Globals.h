/**
 * @file Globals.h
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is a configuration file from where you can define the mapping of card values.
 * In the Poker Hands Definition section you can change the hands that are input to the HeadsUpDriver object
 * in main.cpp.  Because libconfig did not work on my MAC I was forced to do this.
 *
 * @todo In the future: make libconfig be the configuration file.
 *
 */
#include "Card.h"
#include <string>
#include <map>
#ifndef GLOBALS_H_
#define GLOBALS_H_
/** Suit Definitions: not being use with importance
 ** Given that we know what categories we are comparing,
 ** all the rankings can be done correctly without taking
 ** into account the suit.*/
#define HEART 			'H'
#define SPADE 			'S'
#define TREBOL 			'T'
#define DIAMOND 		'D'
/** Card Value Definitions: */
#define A 14
#define K 13
#define Q 12
#define J 11
#define TEN 10
#define NINE 9
#define EIGHT 8
#define SEVEN 7
#define SIX 6
#define FIVE 5
#define FOUR 4
#define THREE 3
#define TWO 2
#define A_LOW 1

/**Category Priorities: not being used with importance.
 ** For this program we are comparing equal priorities*/
#define HIGH_CARD 		1
#define ONE_PAIR		2
#define TWO_PAIR 		3
#define THREE_OF_A_KIND	4
#define STRAIGHT		5
#define FLUSH			6
#define FULL_HOUSE		7
#define FOUR_OF_A_KIND	8
#define STRAIGHT_FLUSH	9

/** Value to Letter Mapping for Print functions */
static std::map<int, std::string> letters = { { 1, "A" }, { 2, "2" },
		{ 3, "3" }, { 4, "4" }, { 5, "5" }, { 6, "6" }, { 7, "7" }, { 8, "8" },
		{ 9, "9" }, { 10, "10" }, { 11, "J" }, { 12, "Q" }, { 13, "K" },
		{ 14, "A" }, };

/**
 * Poker Hands Definition:
 */
/**High Card Hands*/
static std::array<Card, 5> highCardHand1 = { Card(A, DIAMOND), Card(TEN,
		DIAMOND), Card(NINE, SPADE), Card(FIVE, TREBOL), Card(FOUR, TREBOL) };

static std::array<Card, 5> highCardHand2 = { Card(K, TREBOL), Card(Q, DIAMOND),
		Card(J, TREBOL), Card(EIGHT, HEART), Card(SEVEN, HEART) };

static std::array<Card, 5> highCardHand3 = { Card(A, TREBOL), Card(Q, TREBOL),
		Card(SEVEN, SPADE), Card(FIVE, HEART), Card(TWO, TREBOL) };

static std::array<Card, 5> highCardHand4 = { Card(A, DIAMOND), Card(TEN,
		DIAMOND), Card(NINE, SPADE), Card(FIVE, TREBOL), Card(FOUR, TREBOL) };

/**One Pair Hands*/
static std::array<Card, 5> onePairHand1 = { Card(TEN, TREBOL), Card(TEN, SPADE),
		Card(SIX, SPADE), Card(FOUR, HEART), Card(TWO, HEART) };

static std::array<Card, 5> onePairHand2 = { Card(NINE, HEART), Card(NINE,
		TREBOL), Card(A, HEART), Card(Q, DIAMOND), Card(TEN, DIAMOND) };

static std::array<Card, 5> onePairHand3 = { Card(TWO, DIAMOND), Card(TWO,
		HEART), Card(EIGHT, SPADE), Card(FIVE, TREBOL), Card(FOUR, TREBOL) };

static std::array<Card, 5> onePairHand4 = { Card(TWO, TREBOL), Card(TWO, SPADE),
		Card(EIGHT, TREBOL), Card(FIVE, HEART), Card(THREE, HEART) };

/**Two Pair Hands*/
static std::array<Card, 5> twoPairHand1 = { Card(K, HEART), Card(K, DIAMOND),
		Card(TWO, TREBOL), Card(TWO, DIAMOND), Card(J, HEART) };

static std::array<Card, 5> twoPairHand2 = { Card(J, DIAMOND), Card(J, SPADE),
		Card(TEN, SPADE), Card(TEN, TREBOL), Card(NINE, SPADE) };

static std::array<Card, 5> twoPairHand3 = { Card(NINE, TREBOL), Card(NINE,
		DIAMOND), Card(SEVEN, DIAMOND), Card(SEVEN, SPADE), Card(SIX, HEART) };

static std::array<Card, 5> twoPairHand4 = { Card(NINE, HEART), Card(NINE,
		SPADE), Card(FIVE, HEART), Card(FIVE, DIAMOND), Card(K, TREBOL) };

static std::array<Card, 5> twoPairHand5 = { Card(FOUR, SPADE), Card(FOUR,
		TREBOL), Card(THREE, SPADE), Card(THREE, HEART), Card(K, DIAMOND) };

static std::array<Card, 5> twoPairHand6 = { Card(FOUR, HEART), Card(FOUR,
		DIAMOND), Card(THREE, DIAMOND), Card(THREE, TREBOL), Card(TEN, SPADE) };

/**Three of a Kind Hands*/
static std::array<Card, 5> threeOfAKindHand1 = { Card(Q, SPADE), Card(Q,
		TREBOL), Card(Q, DIAMOND), Card(FIVE, SPADE), Card(THREE, TREBOL) };

static std::array<Card, 5> threeOfAKindHand2 = { Card(FIVE, TREBOL), Card(FIVE,
		HEART), Card(FIVE, DIAMOND), Card(Q, DIAMOND), Card(TEN, TREBOL) };

static std::array<Card, 5> threeOfAKindHand3 = { Card(EIGHT, TREBOL), Card(
		EIGHT, HEART), Card(EIGHT, DIAMOND), Card(A, TREBOL), Card(THREE,
		DIAMOND) };

static std::array<Card, 5> threeOfAKindHand4 = { Card(EIGHT, SPADE), Card(EIGHT,
		HEART), Card(EIGHT, DIAMOND), Card(FIVE, SPADE), Card(TEN, TREBOL) };

/**Straight Hands*/
static std::array<Card, 5> straightHand1 = { Card(EIGHT, SPADE), Card(SEVEN,
		SPADE), Card(SIX, HEART), Card(FIVE, HEART), Card(FOUR, SPADE) };

static std::array<Card, 5> straightHand2 = { Card(SIX, DIAMOND), Card(FIVE,
		SPADE), Card(FOUR, DIAMOND), Card(THREE, HEART), Card(TWO, TREBOL) };

static std::array<Card, 5> straightHand3 = { Card(EIGHT, SPADE), Card(SEVEN,
		SPADE), Card(SIX, HEART), Card(FIVE, HEART), Card(FOUR, SPADE) };

static std::array<Card, 5> straightHand4 = { Card(EIGHT, HEART), Card(SEVEN,
		DIAMOND), Card(SIX, TREBOL), Card(FIVE, TREBOL), Card(FOUR, HEART) };

/**Flush Hands*/
static std::array<Card, 5> flushHand1 = { Card(A, HEART), Card(Q, HEART), Card(
		TEN, HEART), Card(FIVE, HEART), Card(THREE, HEART) };

static std::array<Card, 5> flushHand2 = { Card(K, SPADE), Card(Q, SPADE), Card(
		J, SPADE), Card(9, SPADE), Card(6, SPADE) };

static std::array<Card, 5> flushHand3 = { Card(A, DIAMOND), Card(K, DIAMOND),
		Card(7, DIAMOND), Card(6, DIAMOND), Card(2, DIAMOND) };

static std::array<Card, 5> flushHand4 = { Card(A, HEART), Card(Q, HEART), Card(
		TEN, HEART), Card(FIVE, HEART), Card(THREE, HEART) };

/**Full House Hands*/
static std::array<Card, 5> fullHouseHand1 = { Card(TEN, SPADE), Card(TEN,
		HEART), Card(TEN, DIAMOND), Card(FOUR, SPADE), Card(FOUR, DIAMOND) };

static std::array<Card, 5> fullHouseHand2 = { Card(NINE, HEART), Card(NINE,
		TREBOL), Card(NINE, SPADE), Card(A, HEART), Card(A, TREBOL) };

static std::array<Card, 5> fullHouseHand3 = { Card(A, SPADE), Card(A, TREBOL),
		Card(A, HEART), Card(FOUR, DIAMOND), Card(FOUR, TREBOL) };

static std::array<Card, 5> fullHouseHand4 = { Card(A, SPADE), Card(A, HEART),
		Card(A, DIAMOND), Card(THREE, SPADE), Card(THREE, DIAMOND) };

/**Four of a Kind Hands*/
static std::array<Card, 5> fourOfAKindHand1 = { Card(TEN, TREBOL), Card(TEN,
		DIAMOND), Card(TEN, HEART), Card(TEN, SPADE), Card(Q, DIAMOND) };

static std::array<Card, 5> fourOfAKindHand2 = { Card(SIX, DIAMOND), Card(SIX,
		HEART), Card(SIX, SPADE), Card(SIX, TREBOL), Card(SEVEN, SPADE) };

static std::array<Card, 5> fourOfAKindHand3 = { Card(TEN, TREBOL), Card(TEN,
		DIAMOND), Card(TEN, HEART), Card(TEN, SPADE), Card(FIVE, TREBOL) };

static std::array<Card, 5> fourOfAKindHand4 = { Card(TEN, TREBOL), Card(TEN,
		DIAMOND), Card(TEN, HEART), Card(TEN, SPADE), Card(TWO, DIAMOND) };

/**Straight Flush Hands*/
static std::array<Card, 5> straightFlushHand1 = { Card(EIGHT, HEART), Card(
		SEVEN, HEART), Card(SIX, HEART), Card(FIVE, HEART), Card(FOUR, HEART) };

static std::array<Card, 5> straightFlushHand2 = { Card(SIX, SPADE), Card(FIVE,
		SPADE), Card(FOUR, SPADE), Card(THREE, SPADE), Card(TWO, SPADE) };

static std::array<Card, 5> straightFlushHand3 = { Card(J, TREBOL), Card(TEN,
		TREBOL), Card(NINE, TREBOL), Card(EIGHT, TREBOL), Card(SEVEN, TREBOL) };

static std::array<Card, 5> straightFlushHand4 = { Card(J, DIAMOND), Card(TEN,
		DIAMOND), Card(NINE, DIAMOND), Card(EIGHT, DIAMOND), Card(SEVEN,
		DIAMOND) };

#endif /* GLOBALS_H_ */
