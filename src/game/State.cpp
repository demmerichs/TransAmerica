/*
 * State.cpp
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

#include "../../hdr/game/State.h"

#include <limits>

using std::numeric_limits;

#include "../../hdr/game/Constants.h"
#include "../../hdr/game/Board.h"
#include "../../hdr/game/City.h"
#include "../../hdr/game/Connection.h"

State::State(const Board &board) :
		numberPawns(0), board(board), playerStatus(0) {
	sortedPawns = new Pawn*[MAX_PLAYER];
	playerStatus = new BANNED_STATUS[MAX_PLAYER];
	for (int i = 0; i < MAX_PLAYER; i++) {
		sortedPawns[i] = 0;
		playerStatus[i] = NOT_BANNED;
	}
	railwayNumber = new short*[MAX_X];
	railSet = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		railwayNumber[i] = new short[MAX_Y];
		railSet[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			railwayNumber[i][j] = NORAILS;
			railSet[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				railSet[i][j][k] = false;
		}
	}
}

State::State(const State &copy) :
		board(copy.board) {
	turn = copy.turn;
	round = copy.round;
	playersTurn = copy.playersTurn;
	sortedPawns = new Pawn*[MAX_PLAYER];
	playerStatus = new BANNED_STATUS[MAX_PLAYER];
	railwayNumber = new short*[MAX_X];
	railSet = new bool**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		railwayNumber[i] = new short[MAX_Y];
		railSet[i] = new bool*[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			railwayNumber[i][j] = NORAILS;
			railSet[i][j] = new bool[3];
			for (int k = 0; k < 3; k++)
				railSet[i][j][k] = false;
		}
	}
	numberPawns = copy.numberPawns;
	for (int i = 0; i < MAX_PLAYER; i++) {
		if (copy.sortedPawns[i])
			sortedPawns[i] = new Pawn(*copy.sortedPawns[i]);
		else
			sortedPawns[i] = 0;
		playerStatus[i] = copy.playerStatus[i];
	}
	for (unsigned i = 0; i < copy.unsortedPawns.size(); i++)
		unsortedPawns.push_back(
				sortedPawns[copy.unsortedPawns[i]->spielerfarbe]);
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			for (int k = 0; k < 3; k++)
				railSet[i][j][k] = copy.railSet[i][j][k];
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			railwayNumber[i][j] = copy.railwayNumber[i][j];
}

State::~State() {
	for (int i = 0; i < MAX_PLAYER; i++)
		delete sortedPawns[i];
	delete[] sortedPawns;
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++) {
			delete[] railSet[i][j];
		}
		delete[] railwayNumber[i];
		delete[] railSet[i];
	}
	delete[] railwayNumber;
	delete[] railSet;
}

Pawn State::getPawn(const PLAYERCOLOR spielerfarbe) const {
	return *sortedPawns[spielerfarbe];
}

bool State::isRailwayNumberOfConnectionEqualsNumber(const Connection &von,
		const short schienennr) const {
	bool ruckgabe = false;
	if (getRailwayNumber(von.first) == schienennr)
		ruckgabe = ruckgabe || true;
	if (getRailwayNumber(von.second) == schienennr)
		ruckgabe = ruckgabe || true;
	return ruckgabe;
}

short State::getRailwayNumber(const Coordinate* koo) const {
	return railwayNumber[koo->x][koo->y];
}

void State::setRailwayNumber(const Coordinate* koo, const short nr) {
	railwayNumber[koo->x][koo->y] = nr;
}

void State::resetRailwayNr_ToNr_(const short von, const short zu) {
	for (unsigned i = 0; i < unsortedPawns.size(); i++)
		if (this->unsortedPawns[i]->schienennetznummer == von)
			this->unsortedPawns[i]->schienennetznummer = zu;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			if (this->railwayNumber[i][j] == von)
				this->railwayNumber[i][j] = zu;
}

void State::setRail(const Connection* sollGelegt) {
	railSet[sollGelegt->first->x][sollGelegt->first->y][sollGelegt->direction] =
			true;
	short nummerFirst = getRailwayNumber(sollGelegt->first);
	short nummerSecond = getRailwayNumber(sollGelegt->second);
	if (nummerFirst == NORAILS) {
		setRailwayNumber(sollGelegt->first, nummerSecond);
		return;
	} else if (nummerSecond == NORAILS) {
		setRailwayNumber(sollGelegt->second, nummerFirst);
		return;
	}
	if (nummerFirst == nummerSecond) {
		return;
	}
	if (nummerFirst < nummerSecond)
		resetRailwayNr_ToNr_(nummerFirst, nummerSecond);
	else if (nummerSecond < nummerFirst)
		resetRailwayNr_ToNr_(nummerSecond, nummerFirst);
	else
		cout << "Zustand::schieneLegen ist fehlerhaft" << endl;
//TODO Exceptions
}

void State::setRails(vector<const Connection*> connections) {
	for (unsigned i = 0; i < connections.size(); i++)
		setRail(connections[i]);
}

BANNED_STATUS State::addPawn(Pawn insert) {
	if (railwayNumber[((Vector) insert).x][((Vector) insert).y] == NORAILS) {
		this->numberPawns++;
		this->railwayNumber[((Vector) insert).x][((Vector) insert).y] =
				insert.schienennetznummer;
		sortedPawns[insert.spielerfarbe] = new Pawn(insert);
		unsortedPawns.push_back(sortedPawns[insert.spielerfarbe]);
		return NOT_BANNED;
	} else
		return INVALID_PAWN_SET;
}

void State::resetAll() {
	numberPawns = 0;
	for (int i = 0; i < MAX_PLAYER; i++)
		sortedPawns[i] = 0;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++) {
			railwayNumber[i][j] = NORAILS;
			for (int k = 0; k < 3; k++)
				railSet[i][j][k] = false;
		}
	unsortedPawns.clear();
}

#include <iomanip>
void State::dumpEvaluateBoard(unsigned short ** & index) {
	for (int j = 0; j < MAX_Y; j++) {
		for (int i = 0; i < MAX_X; i++) {
			cout << std::setw(6) << index[i][j];
		}
		cout << endl;
	}
}

unsigned short** State::evaluateBoard(const Coordinate* target) const {
	unsigned short **index = new unsigned short*[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		index[i] = new unsigned short[MAX_Y];
	}
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++) {
			index[i][j] = numeric_limits<unsigned short>::max() / 2;
		}
	}
	index[target->x][target->y] = 0;

	vector<Vector> old_changed;
	vector<Vector> new_changed;
	old_changed.push_back(*target);
	vector<Vector>::iterator it;
	while (old_changed.size() != 0) {
		for (it = old_changed.begin(); it != old_changed.end(); it++) {
			calculate_surround(*it, index, new_changed);
		}
		old_changed = new_changed;
		new_changed.clear();
	}
	return index;
}

void State::calculate_surround(Vector current, unsigned short ** &index,
		vector<Vector> &new_changed) const {
	Vector direction[6] = { Vector(1, 0), Vector(1, 1), Vector(0, 1), Vector(-1,
			0), Vector(-1, -1), Vector(0, -1) };
	unsigned short results[6];
	Vector now(0, 0);
	for (int i = 0; i < 6; i++) {
		now = (current + direction[i]);
		if (now.x >= 0 && now.x < MAX_X && now.y >= 0 && now.y < MAX_Y) {
			results[i] = find_min(now, index);
			if (index[now.x][now.y] > results[i]) {
				index[now.x][now.y] = results[i];
				new_changed.push_back(now);
			}
		}
	}
}

unsigned short State::find_min(Vector actual, unsigned short ** &index) const {
	unsigned short min = numeric_limits<unsigned short>::max();
	Vector richtungsvektoren[] = { Vector(1, 0), Vector(1, 1), Vector(0, 1),
			Vector(-1, 0), Vector(-1, -1), Vector(0, -1) };
	for (int i = 0; i < 6; i++) {
		const Connection* connection = board.getConnection(
				actual + richtungsvektoren[i], actual);
		if (connection != 0) {
			unsigned short value =
					index[(actual + richtungsvektoren[i]).x][(actual
							+ richtungsvektoren[i]).y];
// what kind of connection is it?
			if (!this->railSet[connection->first->x][connection->first->y][connection->direction]) {
				if (connection->barrier)
					value += 2;
				else
					value += 1;
			}
			if (value < min) {
				min = value;
			}
		}
	}
	return min;
}

vector<const Coordinate*> State::pointsBelongingToRailwaySystem(
		PLAYERCOLOR playercolour) const {
	int playersRailwayID = getPawn(playercolour).schienennetznummer;
	vector<const Coordinate*> returnval;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			if (playersRailwayID == railwayNumber[i][j])
				returnval.push_back(board.grid[i][j]);
	return returnval;
}

unsigned short State::distance(const Coordinate* target,
		const vector<const Coordinate*> &possibleStarts) const {
	unsigned short distance = numeric_limits<unsigned short>::max();
	unsigned short ** array = this->evaluateBoard(target);
	for (unsigned i = 0; i < possibleStarts.size(); i++) {
		Vector act = *possibleStarts[i];
		if (array[act.x][act.y] < distance)
			distance = array[act.x][act.y];
	}
	return distance;
}

void State::dump() const {
	for (int y = 0; y < 2 * MAX_Y - 1; y++) {
		for (int leerzeichen = 0; leerzeichen < 2 * MAX_Y - 2 - y;
				leerzeichen++)
			cout << " ";
		for (int x = 0; x < 2 * MAX_X - 1; x++) {
			if (x % 2 == 0 && y % 2 == 0) {
				if (board.grid[x / 2][y / 2] == 0)
					cout << " ";
				else if (board.grid[x / 2][y / 2]->vorOrt == 0)
					cout << "X";
				else
					cout << board.grid[x / 2][y / 2]->vorOrt->name[0];
				if (board.edges[x / 2][y / 2][0] != 0
						&& this->railSet[x / 2][y / 2][0])
					cout << "-";
				else
					cout << " ";
			} else if (x % 2 == 0 && y % 2 == 1) {
				if (board.edges[x / 2][(y - 1) / 2][1] != 0)
					if (railSet[x / 2][(y - 1) / 2][1])
						cout << "/ ";
					else
						cout << "  ";
				else
					cout << "  ";
			} else if (x % 2 == 1 && y % 2 == 0) {
				if (board.edges[(x - 1) / 2][y / 2][0] != 0)
					if (railSet[(x - 1) / 2][y / 2][0])
						cout << "--";
					else
						cout << "  ";
				else
					cout << "  ";
			} else {
				if (board.edges[(x - 1) / 2][(y - 1) / 2][2] != 0)
					if (railSet[(x - 1) / 2][(y - 1) / 2][2])
						cout << "\\ ";
					else
						cout << "  ";
				else
					cout << "  ";
			}
		}
		cout << endl;
	}
}
