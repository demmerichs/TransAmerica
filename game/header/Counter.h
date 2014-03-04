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
	Counter(const Counter& copy);
	virtual ~Counter();

	int add(AI* player, int counter);
	int get(AI* player) const;

	Counter operator+(const Counter& rhs) const;
	Counter operator-(const Counter& rhs) const;
	Counter operator=(const Counter& copy);
	Counter operator+=(const Counter& rhs);
	Counter operator-=(const Counter& rhs);
};

#endif /* COUNTER_H_ */
