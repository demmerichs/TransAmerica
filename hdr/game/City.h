/*
 * City.h
 *
 *  Created on: 17.11.2013
 *      Author: David
 */

//==============================
// include guard
#ifndef CITY_H_
#define CITY_H_
//==============================
// forward declared dependencies
//==============================
// included dependencies
#include <string>
using std::string;

#include "Constants.h"
#include "Coordinate.h"
//==============================
// the actual class
/** This class represents the cities on the board.
 * 	They inheret the class Coordinate, which is a more general point on the board.
 */
class City: public Coordinate {
	friend class Board;
private:
	City(string name, CITYCOLOR cityColor, short number, Vector place);
	City(const City&);
	City& operator=(const City&);
	virtual ~City();
public:
	const string name; /**< This is the name of the city.*/
	const CITYCOLOR cityColor; /**< This is the color of the city.*/
	/** This is the number of the city, which exist only in this programm, but not in the real game.
	 * The numbers greater than CITYNR_LIMIT are the ones, that are sorted out in the real game (they are striped),
	 * if the number of players is greater than PLAYER_LIMIT. (see also Constants.h)
	 */
	const short number;
};

#endif /* CITY_H_ */
