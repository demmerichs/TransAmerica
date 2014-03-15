/*
 * Constants.h
 *
 *  Created on: 22.12.2013
 *      Author: Marvin
 */
#include "Vector.h"
//==============================
// include guards
#ifndef CONSTANTS_H_
#define CONSTANTS_H_
//==============================
// included dependencies
#include <string>
using std::string;

#include "boardSettings/standard/standardConstants.h"

enum DIRECTION {
	EAST, SOUTH_WEST, SOUTH_EAST, UNDEFINED
};

enum BANNED_STATUS {
	NOT_BANNED,
	INVALID_PAWN_SET,
	MOVE_WITHOUT_RAILS,
	MOVE_WRONG_COLOR,
	MOVE_NOT_CONNECTED_RAILWAY,
	MOVE_TOO_MANY_BARRIERS,
	MOVE_RAILS_ALREADY_EXIST
};

std::ostream& operator<<(std::ostream& lhs, DIRECTION direction);

string bannedStatusToString(BANNED_STATUS status);

#endif /* CONSTANTS_H_ */
