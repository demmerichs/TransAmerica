/*
 * testKI.cpp
 *
 *  Created on: 01.12.2013
 *      Author: David
 */

#include "testKI.h"
#include "Vector.h"
#include "Konstant.h"
#include <cmath>

testKI::testKI(short farb) :
		AI(farb) {
	this->programmierer = "David";
}

testKI::~testKI() {
	// TODO Auto-generated destructor stub
}

Move testKI::zug(State &aktuell) const {
	const State sicherkopie(aktuell);
	const Verbindung* firsty = 0;
	const Verbindung* secondary = 0;
	for (int i = 0; i < 5; i++) {
		firsty = secondary = 0;
		Vector aktStadt = *handkarten[i];
		Vector a = getNaechsterPunktZu(aktStadt, aktuell);
		Vector diff = aktStadt - a;
		short dis = diff.distance();
		if (dis != 0) {
			Vector first(0, 0);
			if (diff.x != diff.y) {
				if (std::abs(diff.x) >= std::abs(diff.y))
					first = Vector(sign(diff.x), 0);
				else
					first = Vector(0, sign(diff.y));
			} else
				first = Vector(sign(diff.x), sign(diff.x));
			firsty = aktuell.getVerbindung(a, a + first);
			diff = aktStadt - a - first;
			dis = diff.distance();
			if (dis != 0) {
				Vector second(0, 0);
				if (diff.x != diff.y) {
					if (std::abs(diff.x) >= std::abs(diff.y))
						second = Vector(sign(diff.x), 0);
					else
						second = Vector(0, sign(diff.y));
				} else
					second = Vector(sign(diff.x), sign(diff.x));
				secondary = aktuell.getVerbindung(a + first,
						a + first + second);
			}
			Move ruckgabe(this->spielerfarbe, firsty, secondary);
			if (ruckgabe.gueltig(sicherkopie, this->spielerfarbe))
				return Move(this->spielerfarbe, firsty, secondary);
			else
				return Move(this->spielerfarbe, firsty, 0);
		}
	}
	return Move(this->spielerfarbe, 0, 0);
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
	short aktSchienennummer =
			akt.getPoeppel(this->spielerfarbe).schienennetznummer;
	short minAbstand = MAX_X + MAX_Y;
	for (int x = 0; x < MAX_X; x++) {
		for (int y = 0; y < MAX_Y; y++) {
			Vector a(x, y);
			if (akt.getSchienenNetzNummer(a) == aktSchienennummer) {
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


Vector testKI::poeppelSetzen(State &currenState) const {
	for (int i = 0; i < NUMBER_CITYCOLOURS; i++) {
		if (handkarten[i]->cityColour == C_YELLOW)
			return *handkarten[i];
	}
	cout << "Gelbe Stadt nicht gefunden in Handkarten!" << endl;
	return Vector(10, 6);
}
