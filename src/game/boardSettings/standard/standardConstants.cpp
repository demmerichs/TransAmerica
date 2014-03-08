/*
 * standardConstants.cpp
 *
 *  Created on: 15.01.2014
 *      Author: David
 */

#include "standardConstants.h"

CITYCOLOUR operator>>(std::ifstream &infile, CITYCOLOUR &citycolour) {
	std::string input;
	infile >> input;
	if (input.compare("BLUE") == 0) {
		citycolour = C_BLUE;
		return C_BLUE;
	} else if (input.compare("GREEN") == 0) {
		citycolour = C_GREEN;
		return C_GREEN;
	} else if (input.compare("ORANGE") == 0) {
		citycolour = C_ORANGE;
		return C_ORANGE;
	} else if (input.compare("RED") == 0) {
		citycolour = C_RED;
		return C_RED;
	} else if (input.compare("YELLOW") == 0) {
		citycolour = C_YELLOW;
		return C_YELLOW;
	}
	citycolour = C_NULLCOLOUR;
	return C_NULLCOLOUR;
}

