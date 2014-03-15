/*
 * DynamicState.cpp
 *
 *  Created on: 10.03.2014
 *      Author: David
 */

#include "DynamicState.h"

DynamicState::DynamicState(const Board& board) :
		State(board), lastMove(0) {
	fromUserSelectedRails = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedRails[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			fromUserSelectedRails[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				fromUserSelectedRails[i][j][k] = false;
		}
	}
}

DynamicState::DynamicState(const DynamicState& copy) :
		State(copy), lastMove(copy.lastMove) {
	fromUserSelectedRails = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedRails[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			fromUserSelectedRails[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				fromUserSelectedRails[i][j][k] =
						copy.fromUserSelectedRails[i][j][k];
		}
	}
}

DynamicState::DynamicState(const State& copy) :
		State(copy), lastMove(0) {
	fromUserSelectedRails = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		fromUserSelectedRails[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			fromUserSelectedRails[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				fromUserSelectedRails[i][j][k] = false;
		}
	}
}

DynamicState::~DynamicState() {
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++)
			delete[] fromUserSelectedRails[i][j];
		delete[] fromUserSelectedRails[i];
	}
	delete[] fromUserSelectedRails;
}

