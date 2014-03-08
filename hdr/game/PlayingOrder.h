/*
 * PlayingOrder.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef PLAYINGORDER_H_
#define PLAYINGORDER_H_

#include"AI.h"
//#include"iterator.h"

class PlayingOrder {
	class PlayingOrderElement {
	public:
		PlayingOrderElement(AI* player, PlayingOrderElement* next);
		virtual ~PlayingOrderElement();
		AI* playersTurn;
		PlayingOrderElement* nextPlayer;
	};
	PlayingOrderElement** list;
public:
	//PlayingOrder();
	PlayingOrder(vector<AI*> order);
	virtual ~PlayingOrder();

	class iterator{
	public:
		iterator(PlayingOrderElement* cursor);
		virtual ~iterator();

		PlayingOrderElement* cursor;

		AI* operator->() const;

		AI* operator*() const;

		iterator operator++();

		bool operator!=(const PlayingOrder::iterator &rhs) const;
	};

	PlayingOrder::iterator begin(AI *player) const;
};

#endif /* PLAYINGORDER_H_ */
