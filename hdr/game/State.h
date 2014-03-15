/*
 * State.h
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

//==============================
// include guard
#ifndef STATE_H_
#define STATE_H_
//==============================
// forward declared dependencies
class Board;
class Connection;
class Coordinate;
//==============================
// included dependencies

//#include <iostream>
//#include <limits>
#include <vector>

using std::vector;

#include"Constants.h"
//#include"Board.h"
#include"Pawn.h"
//#include"Connection.h"
//==============================
// the actual class
class State {
	Pawn** sortedPawns; //hier soll an der Sortierung keiner rumpfuschen
	unsigned short find_min(Vector actual, unsigned short ** &index) const;
	void calculate_surround(Vector actual, unsigned short ** &index,
			vector<Vector> &new_changed) const;
	State();
	State& operator=(const State&);
	short round;
	short turn;
	PLAYERCOLOR playersTurn;
public:
	State(const Board &Spielbrett); //Startzustand
	State(const State&);
	virtual ~State();
	//State &operator=(const State&) const;

	short** railwayNumber; //[MAX_X][MAX_Y]; //jeder hat eine eigene SchienenNetzNummer, kann ueber Pawn bestimmt werden
	bool*** railSet; //[MAX_X][MAX_Y][3]; //zu jeder Coordinate: 0=(1,0); 1=(0,1); 2=(1,1) s. DirectionValueOfVector
	short numberPawns;
	const Board &board;
	vector<Pawn*> unsortedPawns;
	BANNED_STATUS* playerStatus;

	Pawn getPawn(const PLAYERCOLOR spielerfarbe) const;
	bool isRailwayNumberOfConnectionEqualsNumber(const Connection&,
			const short schienennr) const; //ueberprueft, ob die Connection an der schienennr anliegt
	short getRailwayNumber(const Vector &koo) const;
	void setRailwayNumber(const Coordinate &koo, const short nr);
	void setRail(const Connection &);
	void resetRailwayNr_ToNr_(const short, const short);
	const Connection* getConnection(Vector a, Vector b) const;
	BANNED_STATUS addPawn(Pawn insert);
	void resetAll();
	unsigned short** evaluateBoard(Vector target) const;
	unsigned short distance(const Vector& target,
			const vector<Vector> &possibleStarts) const;
	vector<Vector> pointsBelongingToRailwaySystem(
			PLAYERCOLOR playercolour) const;
	void dump() const;

	void setRound(short x) {
		round = x;
	}
	void setTurn(short x) {
		turn = x;
	}
	void setPlayersTurn(PLAYERCOLOR x) {
		playersTurn = x;
	}

};

#endif /* STATE_H_ */
