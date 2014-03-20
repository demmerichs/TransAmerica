#include "../../hdr/logger/StatisticsLogger.h"
#include <QList>

StatisticsLogger::StatisticsLogger(SimulationLogger *SLog){
    numberOfGames = SLog->getGameList().size();
    gamesWon = new Counter(SLog->getGamesWon());
    //playerlist = SLog->getPlayerList();
}
StatisticsLogger::~StatisticsLogger(){
    delete gamesWon;
}

void StatisticsLogger::addEvent(int position, PLAYERCOLOR player, BANNED_STATUS status){
    if (positionsUsed.contains(position))
        return;
    positionsUsed.insert(position);
    positionList.append(qMakePair(position,qMakePair(player,status)));
}
QPair<PLAYERCOLOR,BANNED_STATUS> StatisticsLogger::getEventAtPosition(int position){
    //TODO implement or change
}
QList<QPair< int,BANNED_STATUS> > StatisticsLogger::getEventsFromPlayer(PLAYERCOLOR player){
    //TODO implement or change
}
QList <QPair<int,PLAYERCOLOR> > StatisticsLogger::getEventsFromStatus(BANNED_STATUS){
    //TODO implement or change
}
QList<QPair<int, QPair<PLAYERCOLOR, BANNED_STATUS> > > &StatisticsLogger::getPositionList(){
    return positionList;
}
QString StatisticsLogger::playercolorToQString(PLAYERCOLOR pColor){
    QString returnString = QString("%1 (%2)")
                                    .arg(QString::fromStdString(playerlist[pColor]->AIname))
                                    .arg(playercolorToQString(pColor));
    return returnString;
}
