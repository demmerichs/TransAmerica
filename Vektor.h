/*
 * Vector.h
 *
 *  Created on: 18.11.2013
 *      Author: David
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include<iostream>
#include"Konstant.h"

/**
 * An object of the class Vector represents a 2-dimensional vector with two integer values.
 * It is a vector referenced to the board of the game.
 */

class Vector {
public:
	Vector();
	Vector(short x, short y);
	virtual ~Vector();
	short x;
	short y;

	Vector operator-(const Vector) const;
	Vector operator+(const Vector) const;
	short distance() const; /**< Determines a non-negative integer,
	 that represents the distance on the board in terms of steps. @Important: This distance doesn't represent
	 the number of steps, because it doesn't take care of bridges/tunnels!*/

	void dump() const {
		std::cout << x << " " << y << std::endl;
	} /**< Dumps the values of the vector on the standard stream. */
};

#endif /* VECTOR_H_ */
