/*
 * PlayingOrderElement.cpp
 *
 *  Created on: 19.01.2014
 *      Author: David
 */

#include "../../hdr/game/PlayingOrder.h"

PlayingOrder::PlayingOrderElement::PlayingOrderElement(AI* ai,
		PlayingOrder::PlayingOrderElement* next) :
		playersTurn(ai), nextPlayer(next) {
}

PlayingOrder::PlayingOrderElement::~PlayingOrderElement() {
}
