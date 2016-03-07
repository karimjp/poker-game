/**
 * @file HeadsUpDrive.h
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my HeadsUpDriver class.  It is called heads up because it only takes two players.
 */
#ifndef HEADSUPDRIVE_H_
#define HEADSUPDRIVE_H_

#include "Rank.h"

class HeadsUpDrive {
public:
	void test();
	Rank getRanking();
	void highCard(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void onePair(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void twoPair(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void threeOfAKind(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void straight(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void flush(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void fullHouse(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void fourOfAKind(std::array<Card, 5> hand1, std::array<Card, 5> hand2);
	void straightFlush(std::array<Card, 5> hand1, std::array<Card, 5> hand2);

private:
	Rank ranking;
};

//#endif /* TESTDRIVE_H_ */

#endif /* HEADSUPDRIVE_H_ */
