/*
 * PlayingOrder.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef PLAYINGORDER_H_
#define PLAYINGORDER_H_

#include"Constants.h"

class PlayingOrder {
	class PlayingOrderElement {
	public:
		PLAYERCOLOUR playersTurn;
		PlayingOrderElement* nextPlayer;
	};
public:
	PlayingOrder();
	PlayingOrder(PLAYERCOLOUR**);
	virtual ~PlayingOrder();

	class iterator {
	public:
		PlayingOrderElement* cursor;

		PLAYERCOLOUR& operator->() const {
			return cursor->playersTurn;
		}

		PLAYERCOLOUR& operator*() const {
			return cursor->playersTurn;
		}

		iterator operator++() {
			this->cursor = this->cursor->nextPlayer;
			return *this;
		}
	};
};

#endif /* PLAYINGORDER_H_ */
