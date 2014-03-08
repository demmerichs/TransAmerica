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
public:
	City(string name, CITYCOLOUR cityColour, short number, Vector place);
	virtual ~City();

	//TODO mehr const setzen
	string name;
	CITYCOLOUR cityColour;
	short number; //Staedte kriegen einfache Kennnummern
};

#endif /* CITY_H_ */
