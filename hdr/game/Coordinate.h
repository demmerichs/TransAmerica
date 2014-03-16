/*
 * Coordinate.h
 *
 *  Created on: 11.11.2013
 *      Author: David
 */

//==============================
// include guards
#ifndef COORDINATE_H_
#define COORDINATE_H_
//==============================
// forward declared dependencies
class City;
//==============================
// included dependencies
#include"Constants.h"
#include"Vector.h"
//==============================
// the actual class
/**
 * Objects of this class are coordiantes on the board, where the x-axis is parallel to the
 * west-east direction and the y-axis parallel to the north-(south-west) direction. The (0,0)
 * coordinate is the most upper left corner of the board.
 * The range of the x-values is from 0 to MAX_X-1 and the y-values from 0 to MAX_Y-1.
 */
class Coordinate: public Vector {
	friend class Board;
protected:
	Coordinate(short x, short y); /**< This constructor creates a coordinate with no city on it.*/
	Coordinate(Vector place, const City* const ort);
	Coordinate(short x, short y, const City * const CityOnCoordinate); /**< This constructor creates a coordinate with city on it.*/
	Coordinate(const Coordinate&);
	Coordinate& operator=(const Coordinate&);
	virtual ~Coordinate();
public:
	const City * const vorOrt; /**<This pointer is zero, if there is no city on the coordinate, otherwise it's pointing to the city.*/
};

#endif /* COORDINATE_H_ */
