/*
 * State.h
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

#ifndef STATE_H_
#define STATE_H_

#include<iostream>
#include<vector>
#include <limits>
using std::cout;
using std::endl;

#include"Konstant.h"
#include"Board.h"
#include"Pawn.h"
#include"Connection.h"

class State {
	Pawn** sortedPawns; //hier soll an der Sortierung keiner rumpfuschen
	std::vector<Pawn*> unsortedPawns;
	unsigned short find_min(Vector actual, unsigned short ** &index) const;
	void calculate_surround(Vector actual, unsigned short ** &index,
			vector<Vector> &new_changed) const;
	State();
	State& operator=(const State&);
	short round;
	short turn;
	PLAYERCOLOUR playersTurn;
public:
	State(Board &Spielbrett); //Startzustand
	State(const State&);
	virtual ~State();
	//State &operator=(const State&) const;

	short** schienenNetzNummer;//[MAX_X][MAX_Y]; //jeder hat eine eigene SchienenNetzNummer, kann ueber Pawn bestimmt werden
	bool*** schieneGelegt;//[MAX_X][MAX_Y][3]; //zu jeder Coordinate: 0=(1,0); 1=(0,1); 2=(1,1) s. RichtungsWert
	short anzahlPoeppel;
	const Board &Spielbrett;

	Pawn getPoeppel(const PLAYERCOLOUR spielerfarbe) const;
	bool schienenNetzNummerVon_Ist_(const Connection&,
			const short schienennr) const; //ueberprueft, ob die Connection an der schienennr anliegt
	short getSchienenNetzNummer(const Vector &koo) const;
	void setSchienenNetzNummer(const Coordinate &koo, const short nr);
	void setSchiene(const Connection &);
	static short RichtungsWert(const Vector&);
	void resetNr_ZuNr_(const short, const short);
	void schieneLegen(const Connection&);
	const Connection* getVerbindung(Vector a, Vector b) const;
	void addPoeppel(Pawn insert);
	void resetAll();
	unsigned short** evaluateBoard(Vector target) const;
	unsigned short distance(Vector target,
			const vector<Vector> &possibleStarts) const;
	vector<Vector> pointsBelongingToRailwaySystem(PLAYERCOLOUR playercolour) const;

	//static void dumpEvaluateBoard(unsigned short ** & index);

	void setRound(short x){round=x;}
	void setTurn(short x){turn=x;}
	void setPlayersTurn(PLAYERCOLOUR x){playersTurn=x;}
};

#endif /* STATE_H_ */
