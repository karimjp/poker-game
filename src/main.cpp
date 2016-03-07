/**
 * @file main.cpp
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my main.cpp file where the Poker Game takes action.
 * The HeadsUpDriver puts to play to hands against each other and runs it through its appropriate
 * category.  This is a very simple approach because we were given the category
 * from https://en.wikipedia.org/wiki/List_of_poker_hands.  In a full fledged
 * game we would have to decode what kind of category our hands falls on and
 * from there compare appropriately.
 *
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include "Globals.h"
#include "HeadsUpDrive.h"
#include "Card.h"
#include "PokerHand.h"
#include "Rank.h"

int main() {

	HeadsUpDrive Play;
	Play.test();
	Play.highCard(highCardHand1, highCardHand2);
	Play.highCard(highCardHand2, highCardHand3);

	Play.onePair(onePairHand1, onePairHand2);
	Play.onePair(onePairHand3, onePairHand4);

	Play.twoPair(twoPairHand1, twoPairHand2);
	Play.twoPair(twoPairHand3, twoPairHand4);
	Play.twoPair(twoPairHand5, twoPairHand6);

	Play.threeOfAKind(threeOfAKindHand1, threeOfAKindHand2);
	Play.threeOfAKind(threeOfAKindHand3, threeOfAKindHand4);

	Play.straight(straightHand1, straightHand2);
	Play.straight(straightHand3, straightHand4);

	Play.flush(flushHand1, flushHand2);
	Play.flush(flushHand3, flushHand4);

	Play.fullHouse(fullHouseHand1, fullHouseHand2);
	Play.fullHouse(fullHouseHand3, fullHouseHand4);

	Play.fourOfAKind(fourOfAKindHand1, fourOfAKindHand2);
	Play.fourOfAKind(fourOfAKindHand3, fourOfAKindHand4);

	Play.straightFlush(straightFlushHand1, straightFlushHand2);
	Play.straightFlush(straightFlushHand3, straightFlushHand4);

	return 0;
}//
