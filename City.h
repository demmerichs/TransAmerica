/*
 * City.h
 *
 *  Created on: 17.11.2013
 *      Author: David
 */

#ifndef CITY_H_
#define CITY_H_

#include"Konstant.h"
#include"Vector.h"
#include<string>
using namespace std;

class City : public Vector{
	City();
public:
	City(string name, short cityColour, short number, Vector place);
	virtual ~City();

	//TODO mehr const setzen
	string name;
	short cityColour;
	short number; //Staedte kriegen einfache Kennnummern
};

#endif /* CITY_H_ */
