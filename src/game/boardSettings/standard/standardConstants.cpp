/*
 * standardConstants.cpp
 *
 *  Created on: 15.01.2014
 *      Author: David
 */

#include "standardConstants.h"

CITYCOLOR operator>>(ifstream &infile, CITYCOLOR &citycolor) {
	string input;
	infile >> input;
	if (input.compare("BLUE") == 0) {
		citycolor = C_BLUE;
		return C_BLUE;
	} else if (input.compare("GREEN") == 0) {
		citycolor = C_GREEN;
		return C_GREEN;
	} else if (input.compare("ORANGE") == 0) {
		citycolor = C_ORANGE;
		return C_ORANGE;
	} else if (input.compare("RED") == 0) {
		citycolor = C_RED;
		return C_RED;
	} else if (input.compare("YELLOW") == 0) {
		citycolor = C_YELLOW;
		return C_YELLOW;
	}
	citycolor = C_NULLCOLOR;
	return C_NULLCOLOR;
}

