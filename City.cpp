/*
 * City.cpp
 *
 *  Created on: 17.11.2013
 *      Author: David
 */

#include "City.h"

City::City() :
		Vector(NULL_KOOWERT, NULL_KOOWERT) {
	cityColour = NULL_FARBE;
	number = 0;
}

City::City(string name, short cityColour, short number, Vector place) :
		Vector(place), name(name), cityColour(cityColour), number(number) {
}

City::~City() {
}

