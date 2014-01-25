/*
 * Counter.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "Counter.h"

Counter::Counter() {
	counter = new int[MAX_PLAYER];
	for (int i = 0; i < MAX_PLAYER; i++)
		counter[i] = 0;
}

Counter::~Counter() {
	delete[] counter;
}

int Counter::add(AI* player, int counter) {
	this->counter[player->spielerfarbe] += counter;
	return this->counter[player->spielerfarbe];
}

int Counter::get(AI* player) const {
	return counter[player->spielerfarbe];
}
