/**
 * @file Card.h
 * @author  Karim Jana <karimjana@gmail.com>
 * @date	June, 2015.
 * @version 1.0
 * @details Proffesor Doug Ferguson - C++ class
 *
 * @brief This is my Card class file.
 */

#ifndef CARD_H_
#define CARD_H_
class Card {
private:
	int number;
	char suit;
public:
	Card();
	Card(int number, char suit);
	int getNumber();
	char getSuit();
	void setNumber(int number);
	void setSuit(char suit);
};

#endif /* CARD_H_ */
