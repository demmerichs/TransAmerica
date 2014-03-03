/*
 * Simulation.h
 *
 *  Created on: 18.01.2014
 *      Author: David
 */

#ifndef SIMULATION_H_
#define SIMULATION_H_

#include "../../logger/header/SimulationLogger.h"
#include "Game.h"

class Simulation {
	SimulationLogger* simulationLogger;
	bool ran;
public:
	Simulation(SimulationLogger* simulationLogger);
	virtual ~Simulation();

	void run();
};

#endif /* SIMULATION_H_ */
