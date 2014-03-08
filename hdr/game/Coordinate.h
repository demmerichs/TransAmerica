/*
 * Coordinate.h
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

#ifndef COORDINATE_H_
#define COORDINATE_H_

#include"Constants.h"
#include"City.h"
#include"Vector.h"

/**
 * Objects of this class are coordiantes on the board, where the x-axis is parallel to the
 * west-east direction and the y-axis parallel to the north-(south-west) direction. The (0,0)
 * coordinate is the most upper left corner of the board.
 * The range of the x-values is from 0 to MAX_X and the y-values from 0 to MAX_Y.
 */

class Coordinate:public Vector {
public:
	Coordinate(short x, short y);	/**< This constructor creates a coordinate with no city on it.*/
	Coordinate(short x, short y, const City * const CityOnCoordinate);	/**< This constructor creates a coordinate with city on it.*/
	virtual ~Coordinate();
	const City * const vorOrt;	/**<This pointer is zero, if there is no city on the coordinate, otherwise it's pointing to the city.*/
};

#endif /* COORDINATE_H_ */
