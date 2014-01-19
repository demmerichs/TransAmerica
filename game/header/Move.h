/*
 * Move.h
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#ifndef MOVE_H_
#define MOVE_H_

#include"Constants.h"
#include"Connection.h"
#include"State.h"

class Move {
private:
	bool gueltigkeit;
	bool gueltigkeitUEberprueft;
	bool richtigBelegt;
	PLAYERCOLOUR spielerfarbe;
	short anzahlSchienen;
	const Connection* Belegt[2];

public:
	Move(PLAYERCOLOUR spielerfarbe, const Connection* belegt1, const Connection* belegt2);
	virtual ~Move();

	bool valid(State, PLAYERCOLOUR);
	void execute(State&) const;

	void dump() const;
	Move& operator=(const Move& zuweisung) {
		this->spielerfarbe = zuweisung.spielerfarbe;
		this->anzahlSchienen = zuweisung.anzahlSchienen;
		this->gueltigkeitUEberprueft=zuweisung.gueltigkeitUEberprueft;
		this->richtigBelegt=zuweisung.richtigBelegt;
		for(int i=0;i<anzahlSchienen;i++)
			Belegt[i]=zuweisung.Belegt[i];
		return *this;
	}
};

#endif /* MOVE_H_ */
