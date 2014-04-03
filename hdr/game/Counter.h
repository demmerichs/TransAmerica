/*
 * Counter.h
 *
 *  Created on: 17.01.2014
 *      Author: David
 */

//==============================
// include guards
#ifndef COUNTER_H_
#define COUNTER_H_
//==============================
// forward declared dependencies
//==============================
// included dependencies
#include"AI.h"
//==============================
// the actual class
class Counter {
	int* counter;
public:
	Counter(int startValue);
	Counter(const Counter& copy);
	virtual ~Counter();

	int add(AI* player, int counter);
	int get(AI* player) const;
	//int get(PLAYERCOLOR) const; //TODO @OEtzi007: is this okay? (needed in GUIBoard::drawRat(..))
	/*TODO @nikbo: well it works, but for the future, think more structural:
	 * it makes more sense to make a member "aiList" in GUIBoard, because the interface should know
	 * the players. this is just a feeling, but you can proof it by taking a closer look, if other
	 * datas are needed from them, and that is indeed true, because for the pointlist, we need their names
	 */

	Counter operator+(const Counter& rhs) const;
	Counter operator-(const Counter& rhs) const;
	Counter operator=(const Counter& copy);
	Counter operator+=(const Counter& rhs);
	Counter operator-=(const Counter& rhs);
};

#endif /* COUNTER_H_ */
