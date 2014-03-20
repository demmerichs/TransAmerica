#ifndef STATISTICSLOGGER_H
#define STATISTICSLOGGER_H

#include "SimulationLogger.h"
#include <QList>
#include <QPair>
#include <QSet>
#include "../game/Constants.h"
#include "../game/Counter.h"



/*NOTE This is an raw layout for a class to log events. Those events should be displayed on
    the DataWidget of the GUI. NOTICE: There should only be one Event at one particular Position
*/
//TODO @Oetzi: Maybe you have to do some changes or improvements

class StatisticsLogger {
    StatisticsLogger(SimulationLogger*);
    ~StatisticsLogger();
    int numberOfGames;
    Counter* gamesWon;
    QList <QPair <int, QPair <PLAYERCOLOR, BANNED_STATUS> > >positionList;
    QSet <int> positionsUsed;
public:
    void addEvent(int position, PLAYERCOLOR player, BANNED_STATUS status);
    QPair<PLAYERCOLOR, BANNED_STATUS> getEventAtPosition (int position);
    QList<QPair<int,BANNED_STATUS> > getEventsFromPlayer (PLAYERCOLOR player);
    QList<QPair<int, PLAYERCOLOR> > getEventsFromStatus (BANNED_STATUS);
    QList <QPair <int, QPair <PLAYERCOLOR, BANNED_STATUS> > >& getPositionList();
};

#endif // STATISTICSLOGGER_H
