/*
 * City.cpp
 *
 *  Created on: 17.11.2013
 *      Author: David
 */

#include "../../hdr/game/City.h"

City::City(string name, CITYCOLOR cityColor, short number, Vector place) :
		Coordinate(place, this), name(name), cityColor(cityColor), number(
				number) {
}

City::~City() {
}
