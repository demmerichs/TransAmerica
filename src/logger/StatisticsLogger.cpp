#include "../../hdr/logger/StatisticsLogger.h"
#include <QList>
#include <cassert>

StatisticsLogger::StatisticsLogger(SimulationLogger* SLogger):simLogger(SLogger)
{}

StatisticsLogger::~StatisticsLogger(){}

void StatisticsLogger::addEvent(int position, PLAYERCOLOR player, BANNED_STATUS status){
    if (positionsUsed.contains(position))
        return;
    positionsUsed.insert(position);
    positionList.append(qMakePair(position,qMakePair(player,status)));
}
//QPair<PLAYERCOLOR,BANNED_STATUS> StatisticsLogger::getEventAtPosition(int position){
//    //TODO implement or change
//}
//QList<QPair< int,BANNED_STATUS> > StatisticsLogger::getEventsFromPlayer(PLAYERCOLOR player){
//    //TODO implement or change
//}
//QList <QPair<int,PLAYERCOLOR> > StatisticsLogger::getEventsFromStatus(BANNED_STATUS){
//    //TODO implement or change
//}
//void StatisticsLogger::setGamesWon(Counter *counter){
//    gamesWon = counter;
//}
//void StatisticsLogger::setPlayerlist(const vector<AI*>& list){
//    playerlist = &list;
//}

QList<QPair<int, QPair<PLAYERCOLOR, BANNED_STATUS> > > &StatisticsLogger::getPositionList(){
    return positionList;
}
//BUG this function is a spawn of the devil
QString StatisticsLogger::playercolorToQString(PLAYERCOLOR pColor){
    assert(simLogger);
    QString AIname;
    for (int i=0; i<simLogger->getPlayerList().size();i++){
        if (simLogger->getPlayerList()[i]->playerColor == pColor)
            AIname = QString("%1").arg(QString::fromStdString(simLogger->getPlayerList()[i]->AIname));
    }
    QString returnString = QString("%1 (%2)")
            .arg("buggy")
            .arg(playercolorToQString(pColor));
    return returnString;
}
