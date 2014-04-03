/*
 * Board.h
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

//==============================
// include guards
#ifndef BOARD_H_
#define BOARD_H_
//==============================
// forward declared dependencies
//==============================
// included dependencies
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>
using std::ifstream;
using std::cout;
using std::endl;
using std::string;

#include "Coordinate.h"
#include "City.h"
#include "Connection.h"
//==============================
// the actual class
/**
 * This class provides the game board, which is of course constant and you shouldn't be able to modify
 * anything here with operations out of your AI-class.
 */
class Board {
public:
	Board(bool abovePlayerLimit); /**< This constructor constructs a game board.*/
	virtual ~Board();

	const bool abovePlayerLimit; /**< If the board is constructed for more than PLAYER_LIMIT players, this value is true. */
	const short numberCities; /**< This is the number of cities on the game board. */
	const City* const * const cityList; /**< This is the list of city-pointers, pointing to the cities, existing in the game. */
	const Coordinate* const * const * const grid; /**< This is the grid on the game board (2-dimensional array of coordinate-pointers). It is starting with (0,0) in the upper left corner.  */
	const Connection* const * const * const * const edges; /**< These are the connection(-pointers) between two coordinates. If you get edges[x][y][z], you get the connection starting in (x,y) and going in directin z (see also DIRECTION in Constants.h)*/

	const Coordinate*** constructGrid() const; /**< Constructs the grid.*/
	City** constructCities() const;/**< Constructs the cityList. */
	Connection**** constructEdges() const; /**< Constructs the edges. */
	void dump() const; /**< Dumps the board on the standard output stream. */
	const City* const lookForCity(short xkoo, short ykoo) const;/**< Finds the city, if it exists in the list. */
	const City* getCity(CITYCOLOR color, short number) const; /**< Gets the city with the passed color and number.*/
	const Coordinate* getCoordinate(Vector vector) const; /**< Gets the coordinate on the board, or returns 0, if it doesn't exist.*/
	const Connection* getConnection(const Coordinate* a,
			const Coordinate* b) const; /**< Gets the connection on the board, or returns 0, if it doesn't exist. a and b are the ends of the connection.*/
	const Connection* getConnection(Vector a, Vector b) const; /**< Gets the connection on the board, or returns 0, if it doesn't exist. a and b are the ends of the connection.*/
};

#endif /* BOARD_H_ */
