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
class City: public Coordinate {
	friend class Board;
private:
	City(string name, CITYCOLOR cityColor, short number, Vector place);
	City(const City&);
	City& operator=(const City&);
	virtual ~City();
public:
	const string name;
	const CITYCOLOR cityColor;
	const short number; //Staedte kriegen einfache Kennnummern
};

#endif /* CITY_H_ */
