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
	bool*** fromUserSelectedConnections;
	bool** fromUserSelectedCoordinates;
public:
	Move* lastMove;

	DynamicState(const Board &board); //Startzustand
	DynamicState(const DynamicState&);
	DynamicState(const State&);
	virtual ~DynamicState();

	void setFromUserSelectedConnection(const Connection* connection) const;
	void setFromUserSelectedCoordinate(const Coordinate* coordinate) const;
	bool*** getFromUserSelectedConnections() const;
	bool** getFromUserSelectedCoordinates() const;
};

#endif /* DYNAMICSTATE_H_ */
