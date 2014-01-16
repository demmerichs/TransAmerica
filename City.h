/*
 * City.h
 *
 *  Created on: 17.11.2013
 *      Author: David
 */

#ifndef CITY_H_
#define CITY_H_

#include<string>
using namespace std;

#include"Konstant.h"
#include"Vector.h"

class City : public Vector{
public:
	City(string name, CITYCOLOUR cityColour, short number, Vector place);
	virtual ~City();

	//TODO mehr const setzen
	string name;
	CITYCOLOUR cityColour;
	short number; //Staedte kriegen einfache Kennnummern
};

#endif /* CITY_H_ */
