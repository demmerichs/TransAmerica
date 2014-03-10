/*
 * Simulation.h
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

//==============================
// include guards
#ifndef SIMULATION_H_
#define SIMULATION_H_
//==============================
// forward declared dependencies
//==============================
// included dependencies
#include "../../hdr/logger/SimulationLogger.h"
#include "PlayingOrder.h"
#include "../../hdr/logger/GameLogger.h"
#include "Game.h"
//==============================
// the actual class
class Simulation {
	SimulationLogger* simulationLogger;
	bool ran;
	vector<AI*> getPlayingOrder(int simulationRound) const;
public:
	Simulation(SimulationLogger* simulationLogger);
	virtual ~Simulation();

	void run();
};

#endif /* SIMULATION_H_ */
