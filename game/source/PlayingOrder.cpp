/*
 * PlayingOrder.cpp
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#include "PlayingOrder.h"

PlayingOrder::PlayingOrder(int numberPlayers, AI** order) {
	list=new PlayingOrderElement*[numberPlayers];
	for(int i=0;i<numberPlayers-1;i++)
		list[i]=new PlayingOrderElement(order[i],list[i+1]);
	list[numberPlayers]=new PlayingOrderElement(order[numberPlayers],list[0]);
}

PlayingOrder::~PlayingOrder() {
	// TODO Auto-generated destructor stub
}

PlayingOrder::iterator PlayingOrder::begin(AI* player) const{
	iterator retValue=iterator(this->list[0]);
	while(true){
		if(retValue->spielerfarbe==player->spielerfarbe)
			return retValue;
		++retValue;
	}
	return retValue;
}
