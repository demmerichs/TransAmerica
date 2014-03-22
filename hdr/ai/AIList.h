//==============================
// include guards
#ifndef AILIST_H_
#define AILIST_H_
//==============================
// forward declared dependencies
//==============================
// included dependencies
#include "testKI.h"
#include "debuggerAI.h"
#include "DavidAI.h"
#include "NBSimpleAI.h"
//==============================
// the actual class

AI* createAI(string name, PLAYERCOLOR playerColor);

#endif /* AILIST_H_ */
