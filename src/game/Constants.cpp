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

string bannedStatusToString(BANNED_STATUS status) {
	switch (status) {
	case NOT_BANNED:
		return "0";
	case INVALID_PAWN_SET:
		return "1";
	case MOVE_WITHOUT_RAILS:
		return "2";
	case MOVE_WRONG_COLOR:
		return "3";
	case MOVE_NOT_CONNECTED_RAILWAY:
		return "4";
	case MOVE_TOO_MANY_BARRIERS:
		return "5";
	case MOVE_RAILS_ALREADY_EXIST:
		return "6";
	default:
		return "";
	}
}
