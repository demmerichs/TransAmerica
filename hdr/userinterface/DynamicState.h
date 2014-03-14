/*
 * DynamicState.h
 *
 *  Created on: 10.03.2014
 *      Author: David
 */

//==============================
// include guard
#ifndef DYNAMICSTATE_H_
#define DYNAMICSTATE_H_
//==============================
// forward declared dependencies
class Move;
//==============================
// included dependencies
#include "State.h"

//==============================
// the actual class

class DynamicState: public State {
public:
	Move* lastMove;
	bool*** fromUserSelectedRails;

	DynamicState(const Board &board); //Startzustand
	DynamicState(const DynamicState&);
	DynamicState(const State&);
	virtual ~DynamicState();
};

#endif /* DYNAMICSTATE_H_ */
