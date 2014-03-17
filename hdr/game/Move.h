/*
 * Move.h
 *
 *  Created on: 02.12.2013
 *      Author: David
 */

#ifndef MOVE_H_
#define MOVE_H_

#include "Constants.h"
#include "Connection.h"
#include "State.h"

class Move {
	friend class Round;
private:
	bool gueltigkeit;
	bool gueltigkeitUEberprueft;
	bool richtigBelegt;
	PLAYERCOLOR spielerfarbe;
	short anzahlSchienen;
	short sumRailValue;
	const Connection* Belegt[2];
	BANNED_STATUS bannedStatus;

public:
	Move(PLAYERCOLOR spielerfarbe, const Connection* belegt1,
			const Connection* belegt2);
	Move(const Move& copy);
	virtual ~Move();

	bool valid(State, PLAYERCOLOR);
	void execute(State&) const;

	void dump() const;
	Move& operator=(const Move& zuweisung) {
		this->spielerfarbe = zuweisung.spielerfarbe;
		this->anzahlSchienen = zuweisung.anzahlSchienen;
		this->gueltigkeitUEberprueft = zuweisung.gueltigkeitUEberprueft;
		this->richtigBelegt = zuweisung.richtigBelegt;
		for (int i = 0; i < 2; i++)
			Belegt[i] = zuweisung.Belegt[i];
		this->bannedStatus = zuweisung.bannedStatus;
		return *this;
	}

	const Connection* const * getBelegt() const;
	PLAYERCOLOR getSpielerfarbe() const;
	BANNED_STATUS getBannedStatus() const;
	short getSumRailValue() const;
};

#endif /* MOVE_H_ */
