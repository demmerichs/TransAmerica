/*
 * Constants.cpp
 *
 *  Created on: 11.03.2014
 *      Author: David
 */

#include "../../hdr/game/Constants.h"

std::ostream& operator<<(std::ostream& lhs, DIRECTION direction) {
	switch (direction) {
	case EAST:
		lhs << "EAST";
		break;
	case SOUTH_WEST:
		lhs << "SOUTH_WEST";
		break;
	case SOUTH_EAST:
		lhs << "SOUTH_EAST";
		break;
	default:
		lhs << "UNDEFINED";
	}
	return lhs;
}

