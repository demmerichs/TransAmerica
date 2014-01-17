/*
 * Board.cpp
 *
 *  Created on: 03.12.2013
 *      Author: David
 */

#include "Board.h"

Board::Board() :
		anzahlStaedte(35), Stadtliste(stadtlisteAnlegen()), Gitter(
				gitterAnlegen()), Kanten(kantenAnlegen()) {
}

Board::~Board() {
	delete[] Stadtliste;
	for (int i = 0; i < MAX_X; i++) {
		for (int j = 0; j < MAX_Y; j++) {
			delete Gitter[i][j];
			for (int k = 0; k < 3; k++)
				delete Kanten[i][j][k];
			delete[] Kanten[i][j];
		}
		delete[] Gitter[i];
		delete[] Kanten[i];
	}
	delete[] Gitter;
	delete[] Kanten;
}

void Board::Ausgabe() const {
	for (int y = 0; y < 2 * MAX_Y - 1; y++) {
		for (int leerzeichen = 0; leerzeichen < 2 * MAX_Y - 2 - y;
				leerzeichen++)
			cout << " ";
		for (int x = 0; x < 2 * MAX_X - 1; x++) {
			if (x % 2 == 0 && y % 2 == 0) {
				if (this->Gitter[x / 2][y / 2] == 0)
					cout << " ";
				else if (this->Gitter[x / 2][y / 2]->vorOrt == 0)
					cout << "X";
				else
					cout << Gitter[x / 2][y / 2]->vorOrt->name[0];
				if (this->Kanten[x / 2][y / 2][0] != 0
						&& this->Kanten[x / 2][y / 2][0]->hindernis)
					cout << "-";
				else
					cout << " ";
			} else if (x % 2 == 0 && y % 2 == 1) {
				if (this->Kanten[x / 2][(y - 1) / 2][1] != 0)
					if (this->Kanten[x / 2][(y - 1) / 2][1]->hindernis)
						cout << "/ ";
					else
						cout << "  ";
				else
					cout << "  ";
			} else if (x % 2 == 1 && y % 2 == 0) {
				if (this->Kanten[(x - 1) / 2][y / 2][0] != 0)
					if (this->Kanten[(x - 1) / 2][y / 2][0]->hindernis)
						cout << "--";
					else
						cout << "  ";
				else
					cout << "  ";
			} else {
				if (this->Kanten[(x - 1) / 2][(y - 1) / 2][2] != 0)
					if (this->Kanten[(x - 1) / 2][(y - 1) / 2][2]->hindernis)
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

City* const Board::durchsucheListe(short x, short y) const {
	for (int i = 0; i < anzahlStaedte; i++) {
		if (Stadtliste[i]->x == x && Stadtliste[i]->y == y) {
			return Stadtliste[i];
		}
	}
	cout << "Eingabedaten passen nicht zusammen." << endl;
	cout << x << "," << y << endl;
	assert(true);
	return Stadtliste[0];
}

Connection**** Board::kantenAnlegen() const {
	//Verbindungen einzeichnen
	Connection**** testKanten = new Connection***[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		testKanten[i] = new Connection**[MAX_Y];
		for (int j = 0; j < MAX_Y; j++) {
			testKanten[i][j] = new Connection*[3];
			if (i + 1 < MAX_X)
				if (!Gitter[i][j] == 0 && !Gitter[i + 1][j] == 0)
					testKanten[i][j][0] = new Connection(*Gitter[i][j],
							*Gitter[i + 1][j], false);
				else
					testKanten[i][j][0] = 0;
			else
				testKanten[i][j][0] = 0;
			if (j + 1 < MAX_Y)
				if (!Gitter[i][j] == 0 && !Gitter[i][j + 1] == 0)
					testKanten[i][j][1] = new Connection(*Gitter[i][j],
							*Gitter[i][j + 1], false);
				else
					testKanten[i][j][1] = 0;
			else
				testKanten[i][j][1] = 0;
			if (j + 1 < MAX_Y && i + 1 < MAX_X)
				if (!Gitter[i][j] == 0 && !Gitter[i + 1][j + 1] == 0)
					testKanten[i][j][2] = new Connection(*Gitter[i][j],
							*Gitter[i + 1][j + 1], false);
				else
					testKanten[i][j][2] = 0;
			else
				testKanten[i][j][2] = 0;
		}
	}
	ifstream Verbindungsinput((BRETTNAME + "barriers.txt").data());
	string input;
	Vector pos(0, 0);
	while (true) {
		Verbindungsinput >> input;
		if (input[0] == 'X') {
			break;
			cout << "Ende" << endl;
		}
		if (input[0] == '#') {
			Verbindungsinput >> pos.x;
			Verbindungsinput >> pos.y;
		} else {
			switch (input[0]) {
			case '0':
				delete testKanten[pos.x][pos.y][0];
				testKanten[pos.x][pos.y][0] = new Connection(
						*Gitter[pos.x][pos.y], *Gitter[pos.x + 1][pos.y], true);
				pos = pos + Vector(1, 0);
				break;
			case '1':
				delete testKanten[pos.x][pos.y][1];
				testKanten[pos.x][pos.y][1] = new Connection(
						*Gitter[pos.x][pos.y], *Gitter[pos.x][pos.y + 1], true);
				pos = pos + Vector(0, 1);
				break;
			case '2':
				delete testKanten[pos.x][pos.y][2];
				testKanten[pos.x][pos.y][2] = new Connection(
						*Gitter[pos.x][pos.y], *Gitter[pos.x + 1][pos.y + 1],
						true);
				pos = pos + Vector(1, 1);
				break;
			case '3':
				delete testKanten[pos.x - 1][pos.y][0];
				testKanten[pos.x - 1][pos.y][0] = new Connection(
						*Gitter[pos.x - 1][pos.y], *Gitter[pos.x][pos.y], true);
				pos = pos + Vector(-1, 0);
				break;
			case '4':
				delete testKanten[pos.x][pos.y - 1][1];
				testKanten[pos.x][pos.y - 1][1] = new Connection(
						*Gitter[pos.x][pos.y - 1], *Gitter[pos.x][pos.y], true);
				pos = pos + Vector(0, -1);
				break;
			case '5':
				delete testKanten[pos.x - 1][pos.y - 1][2];
				testKanten[pos.x - 1][pos.y - 1][2] = new Connection(
						*Gitter[pos.x - 1][pos.y - 1], *Gitter[pos.x][pos.y],
						true);
				pos = pos + Vector(-1, -1);
				break;
			default:
				cout << "Brett::kantenAnelgen: fehlerhafter Input" << endl;
				break;
			}
		}
	}
	return testKanten;
}

City** Board::stadtlisteAnlegen() const {
	ifstream Stadtinput((BRETTNAME + "cities.txt").data());
	City** testStadtliste = new City*[anzahlStaedte];
	for (int i = 0; i < anzahlStaedte; i++) {
		string name;
		short number;
		CITYCOLOUR cityColour;
		Vector place(0, 0);
		Stadtinput >> name;
		Stadtinput >> place.x;
		Stadtinput >> place.y;
		Stadtinput >> cityColour;
		Stadtinput >> number;
		testStadtliste[i] = new City(name, cityColour, number, place);
	}
	return testStadtliste;
}

Coordinate*** Board::gitterAnlegen() const {
	Coordinate*** testGitter = new Coordinate**[MAX_X];
	for (int i = 0; i < MAX_X; i++) {
		testGitter[i] = new Coordinate*[MAX_Y];
	}
	ifstream Koordinateninput((BRETTNAME + "coordinates.txt").data());
	for (int y = 0; y < MAX_Y; y++) {
		string input;
		Koordinateninput >> input;
		for (int x = 0; x < MAX_X; x++) {
			char inputletter = input[x];
			if (inputletter == 'c') {
				testGitter[x][y] = new Coordinate(x, y, durchsucheListe(x, y));
			} else if (inputletter == 'x') {
				testGitter[x][y] = new Coordinate(x, y);
			} else if (inputletter == '-') {
				testGitter[x][y] = 0;
			}
		}
	}
	return testGitter;
}

City* Board::getStadt(short farbe, short nr) const {
	for (int i = 0; i < anzahlStaedte; i++) {
		City* aktStadt = this->Stadtliste[i];
		if (aktStadt->cityColour == farbe && aktStadt->number == nr)
			return aktStadt;
	}
	assert(true);
	return Stadtliste[0];
}
