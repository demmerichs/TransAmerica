/*
 * AIList.cpp
 *
 *  Created on: 12.03.2014
 *      Author: David
 */

#include "../../hdr/ai/AIList.h"

AI* createAI(string name, PLAYERCOLOR playerColor) {
	if (name.compare("testKI") == 0)
		return new testKI(playerColor);
	if (name.compare("debuggerAI") == 0)
		return new debuggerAI(playerColor);
	if (name.compare("DavidAI") == 0)
        return new testKI(playerColor);
	return 0;
}

