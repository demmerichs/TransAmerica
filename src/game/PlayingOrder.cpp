/*
 * PlayingOrder.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "../../hdr/game/PlayingOrder.h"

PlayingOrder::PlayingOrder(vector<AI*> order) {
	list = new PlayingOrderElement*[order.size()];
	for (int i = 0; i < (int) order.size() - 1; i++)
		list[i] = new PlayingOrderElement(order[i], list[i + 1]);
	list[order.size() - 1] = new PlayingOrderElement(order[order.size() - 1],
			list[0]);
	for (int i = 0; i < (int) order.size() - 1; i++)
		list[i]->nextPlayer = list[i + 1];
}

PlayingOrder::~PlayingOrder() {
	// TODO Auto-generated destructor stub
}

PlayingOrder::iterator PlayingOrder::begin(AI* player) const {
	iterator retValue = iterator(this->list[0]);
	while (true) {
		if (retValue->playercolor == player->playercolor)
			return retValue;
		++retValue;
	}
	return retValue;
}
