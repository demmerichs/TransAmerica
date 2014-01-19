/*
 * Counter.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

#ifndef COUNTER_H_
#define COUNTER_H_

#include"AI.h"

class Counter {
	int* counter;
public:
	Counter();
	virtual ~Counter();

	int add(AI* player, int counter);
	int get(AI* player);
};

#endif /* COUNTER_H_ */
