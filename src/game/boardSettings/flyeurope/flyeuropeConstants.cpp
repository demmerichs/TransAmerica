/*
 * flyeuropeConstants.cpp
 *
 *  Created on: 03.04.2014
 *      Author: David
 */

#include "flyeuropeConstants.h"

namespace flyeurope {
CITYCOLOR operator>>(ifstream &infile, CITYCOLOR &citycolor) {
	string input;
	infile >> input;
	if (input.compare("BLUE") == 0) {
		citycolor = C_BLUE;
		return C_BLUE;
	} else if (input.compare("GREY") == 0) {
		citycolor = C_GREY;
		return C_GREY;
	} else if (input.compare("ORANGE") == 0) {
		citycolor = C_ORANGE;
		return C_ORANGE;
	} else if (input.compare("RED") == 0) {
		citycolor = C_RED;
		return C_RED;
	} else if (input.compare("WHITE") == 0) {
		citycolor = C_WHITE;
		return C_WHITE;
	}
	citycolor = C_NULLCOLOR;
	return C_NULLCOLOR;
}
}
