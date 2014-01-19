/*
 * iterator.cpp
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#include "PlayingOrder.h"

PlayingOrder::iterator::iterator(PlayingOrderElement* cursor) :
		cursor(cursor) {
}

PlayingOrder::iterator::~iterator() {
}

AI* PlayingOrder::iterator::operator->() const {
	return cursor->playersTurn;
}

AI* PlayingOrder::iterator::operator*() const {
	return cursor->playersTurn;
}

PlayingOrder::iterator PlayingOrder::iterator::operator++() {
	this->cursor = this->cursor->nextPlayer;
	return *this;
}

bool PlayingOrder::iterator::operator!=(const PlayingOrder::iterator &rhs) const {
	return (this->cursor != rhs.cursor);
}
