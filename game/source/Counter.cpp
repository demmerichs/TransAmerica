/*
 * Counter.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../header/Counter.h"

Counter::Counter() {
	counter = new int[MAX_PLAYER];
	for (int i = 0; i < MAX_PLAYER; i++)
		counter[i] = 0;
}

Counter::Counter(const Counter& copy) {
	counter = new int[MAX_PLAYER];
	for (int i = 0; i < MAX_PLAYER; i++)
		counter[i] = copy.counter[i];
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

Counter Counter::operator+(const Counter& rhs) const {
	Counter retValue;
	for (int i = 0; i < MAX_PLAYER; i++)
		retValue.counter[i] = counter[i] + rhs.counter[i];
	return retValue;
}

Counter Counter::operator-(const Counter& rhs) const {
	Counter retValue;
	for (int i = 0; i < MAX_PLAYER; i++)
		retValue.counter[i] = counter[i] - rhs.counter[i];
	return retValue;
}

Counter Counter::operator=(const Counter& copy) {
	for (int i = 0; i < MAX_PLAYER; i++)
		counter[i] = copy.counter[i];
	return *this;
}

Counter Counter::operator+=(const Counter& rhs) {
	*this = *this + rhs;
	return *this;
}

Counter Counter::operator-=(const Counter& rhs) {
	*this = *this - rhs;
	return *this;
}
