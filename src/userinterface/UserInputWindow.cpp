/*
 * UserInputWindow.cpp
 *
 *  Created on: 11.03.2014
 *      Author: David
 */

#include "UserInputWindow.h"
#include "../../hdr/game/Move.h"
#include "../../hdr/userinterface/DynamicState.h"
#include "../../hdr/game/Board.h"

UserInputWindow::UserInputWindow(const Board& board) :
		Window(board) {
	enterMove = new QPushButton(tr("Enter Move"));
	toolLayout->addRow(enterMove);
}

UserInputWindow::~UserInputWindow() {
	// TODO Auto-generated destructor stub
}

Move UserInputWindow::getMoveFromUser(vector<Move*> moveList) {
	aZp = new DynamicState(this->spielbrett->board);
	for (int i = 0; i < (int) moveList.size(); i++)
		moveList[i]->execute(*aZp);
	if (moveList.size() > 0)
		aZp->lastMove = moveList[moveList.size() - 1];
	this->spielbrett->update();
	this->update();
	this->show();
	QEventLoop* pause = new QEventLoop;
	connect(enterMove, SIGNAL(clicked(bool)), pause, SLOT(quit()));
	pause->exec();
	const Connection* one = 0, *two = 0;
	int counter = 0;
	for (int i = 0; i < MAX_X; i++)
		for (int j = 0; j < MAX_Y; j++)
			for (int k = 0; k < 3; k++)
				if (aZp->fromUserSelectedRails[i][j][k]) {
					counter++;
					if (counter == 1)
						one = aZp->board.edges[i][j][k];
					else
						two = aZp->board.edges[i][j][k];
				}
	return Move(P_YELLOW, one, two);
}
