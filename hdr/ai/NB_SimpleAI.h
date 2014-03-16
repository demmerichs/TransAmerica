
//==============================
// include guards
#ifndef NB_SIMPLEAI_H
#define NB_SIMPLEAI_H
//==============================
// forward declared dependencies
class Move;
class RoundLogger;
class State;
class Connection;
//==============================
// included dependencies
#include <vector>
using std::vector;

#include "../game/AI.h"
#include "../game/Constants.h"
//==============================
// the actual class

class NBSimpleAI: public AI {
public:
    NBSimpleAI(PLAYERCOLOR playerColor);
    virtual ~NBSimpleAI();
    Move doMove(State &currentState, vector<Move*> moveList);
    const Coordinate* setPawn(State &currentState);
    bool countPoints(State& currentState, vector<Connection*>& returnPath);
    void gatherInformationEndOfRound(const RoundLogger* informationAboutGame);
};

#endif // NB_SIMPLEAI_H
