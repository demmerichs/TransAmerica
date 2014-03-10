/*
 * testKI.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "../../hdr/ai/testKI.h"

//#include <qtextstream.h>
#include <cmath>
#include <string>
using std::string;
using std::abs;

#include "../../hdr/game/Constants.h"
#include "../../hdr/game/City.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/game/Pawn.h"

testKI::testKI(PLAYERCOLOR farb) :
		AI(farb) {
	this->owner = "David";
}

testKI::~testKI() {
}

Move testKI::doMove(State &aktuell, vector<Move*> moveList) {
	const State sicherkopie(aktuell);
	const Connection* firsty = 0;
	const Connection* secondary = 0;
	for (int i = 0; i < 5; i++) {
		firsty = secondary = 0;
		Vector aktStadt((*hand[i]));
		Vector a = getNaechsterPunktZu(aktStadt, aktuell);
		Vector diff = aktStadt - a;
		short dis = diff.distance();
		if (dis != 0) {
			Vector first(0, 0);
			if (diff.x != diff.y) {
				if (abs(diff.x) >= abs(diff.y))
					first = Vector(sign(diff.x), 0);
				else
					first = Vector(0, sign(diff.y));
			} else
				first = Vector(sign(diff.x), sign(diff.x));
			firsty = aktuell.getConnection(a, a + first);
			diff = aktStadt - a - first;
			dis = diff.distance();
			if (dis != 0) {
				Vector second(0, 0);
				if (diff.x != diff.y) {
					if (abs(diff.x) >= abs(diff.y))
						second = Vector(sign(diff.x), 0);
					else
						second = Vector(0, sign(diff.y));
				} else
					second = Vector(sign(diff.x), sign(diff.x));
				secondary = aktuell.getConnection(a + first,
						a + first + second);
			}
			Move ruckgabe(this->playerColor, firsty, secondary);
			if (ruckgabe.valid(sicherkopie, this->playerColor))
				return Move(this->playerColor, firsty, secondary);
			else
				return Move(this->playerColor, firsty, 0);
		}
	}
	return Move(this->playerColor, 0, 0);
}

short testKI::sign(short a) {
	if (a > 0)
		return 1;
	else if (a < 0)
		return -1;
	else
		return 0;
}

Vector testKI::getNaechsterPunktZu(Vector b, State akt) const {
	Vector ruckgabe(0, 0);
	short aktSchienennummer = akt.getPawn(this->playerColor).schienennetznummer;
	short minAbstand = MAX_X + MAX_Y;
	for (int x = 0; x < MAX_X; x++) {
		for (int y = 0; y < MAX_Y; y++) {
			Vector a(x, y);
			if (akt.getRailwayNumber(a) == aktSchienennummer) {
				short distance = (b - a).distance();
				if (distance < minAbstand) {
					minAbstand = distance;
					ruckgabe = a;
				}
			}
		}
	}
	return ruckgabe;
}

Vector testKI::setPawn(State &currentState) {
	for (int i = 0; i < NUMBER_CITYCOLORS; i++) {
		if (hand[i]->cityColor == C_YELLOW)
			return *hand[i];
	}
	cout << "Gelbe Stadt nicht gefunden in Handkarten!" << endl;
	return Vector(10, 6);
}
