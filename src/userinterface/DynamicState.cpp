/*
 * DynamicState.cpp
 *
 *  Created on: 10.03.2014
 *      Author: David
 */

#include "DynamicState.h"

#include "Connection.h"
#include "Coordinate.h"

DynamicState::DynamicState(const Board& board) :
		State(board), lastMove(0) {
	fromUserSelectedConnections = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedConnections[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			fromUserSelectedConnections[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				fromUserSelectedConnections[i][j][k] = false;
		}
	}
	fromUserSelectedCoordinates = new bool*[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedCoordinates[i] = new bool[MAX_Y];
		for (int j = 0; j < MAX_Y; j++)
			fromUserSelectedCoordinates[i][j] = false;
	}
}

DynamicState::DynamicState(const DynamicState& copy) :
		State(copy), lastMove(copy.lastMove) {
	fromUserSelectedConnections = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedConnections[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			fromUserSelectedConnections[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				fromUserSelectedConnections[i][j][k] =
						copy.fromUserSelectedConnections[i][j][k];
		}
	}
	fromUserSelectedCoordinates = new bool*[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedCoordinates[i] = new bool[MAX_Y];
		for (int j = 0; j < MAX_Y; j++)
			fromUserSelectedCoordinates[i][j] = false;
	}
}

DynamicState::DynamicState(const State& copy) :
		State(copy), lastMove(0) {
	fromUserSelectedConnections = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedConnections[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			fromUserSelectedConnections[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				fromUserSelectedConnections[i][j][k] = false;
		}
	}
	fromUserSelectedCoordinates = new bool*[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedCoordinates[i] = new bool[MAX_Y];
		for (int j = 0; j < MAX_Y; j++)
			fromUserSelectedCoordinates[i][j] = false;
	}
}

DynamicState::~DynamicState() {
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++)
			delete[] fromUserSelectedConnections[i][j];
		delete[] fromUserSelectedConnections[i];
	}
	delete[] fromUserSelectedConnections;
	for (int i = 0; i < MAX_X; i++)
		delete fromUserSelectedCoordinates[i];
	delete fromUserSelectedCoordinates;
}

void DynamicState::setFromUserSelectedConnection(
		const Connection* connection) const {
	if (!railSet[connection->first->x][connection->first->y][connection->direction])
		fromUserSelectedConnections[connection->first->x][connection->first->y][connection->direction] =
				!fromUserSelectedConnections[connection->first->x][connection->first->y][connection->direction];
}

void DynamicState::setFromUserSelectedCoordinate(
		const Coordinate* coordinate) const {
	bool insert = true;
	for (int i = 0; i < (int) unsortedPawns.size(); i++) {
		if (((Vector) *unsortedPawns[i]).x == coordinate->x
				&& ((Vector) *unsortedPawns[i]).y == coordinate->y)
			insert = false;
	}
	if (insert)
		fromUserSelectedCoordinates[coordinate->x][coordinate->y] =
				!fromUserSelectedCoordinates[coordinate->x][coordinate->y];
}

bool*** DynamicState::getFromUserSelectedConnections() const {
	return fromUserSelectedConnections;
}

bool** DynamicState::getFromUserSelectedCoordinates() const {
	return fromUserSelectedCoordinates;
}
