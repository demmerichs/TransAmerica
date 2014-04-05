#include "../../hdr/userinterface/GameExec.h"
#include "../../hdr/game/Human.h"

bool GameExec::isInitialized = false;

GameExec::GameExec(Window* wp, vector<AI*> aiList, int games) :
		wp(wp) {
    assert(!isInitialized);
    isInitialized=true;
	board = new Board((int) aiList.size() > PLAYER_LIMIT);
	simulationLogger = new SimulationLogger(aiList, *board, games);
    hasHuman = 0;
}
GameExec::GameExec(QMainWindow* parent):
    parent(parent)
{
    isInitialized = true;
}
GameExec::~GameExec(){
    delete board;
    delete wp;
    delete simulationLogger;
    for (int i=0;i< (int) aiList.size(); i++){
        delete aiList.at(i);
    }
    isInitialized=false;
}

void GameExec::execute(){
    //if (board)
        //delete board;
    //if (simulationLogger)
        //delete simulationLogger;
    aiList.clear();

    if(handleInitDialog()){
        if (dialog->humanPlayer){
            UsInWinp = new UserInputWindow(board);
            wp = UsInWinp;
            parent->setCentralWidget(wp);
            aiList.push_back(new Human(dialog->humanColor,UsInWinp));
        }
        board = new Board((int) aiList.size() > PLAYER_LIMIT);
        simulationLogger = new SimulationLogger(aiList,*board, dialog->numberOfGames());
        if(dialog->humanPlayer)
            UsInWinp->setSimLogger(simulationLogger);
        simulateSimulation();
        SimWinp = new ShowSimulationWindow(simulationLogger);
        wp = SimWinp;
        parent->setCentralWidget(wp);
//        if (!hasHuman)
//            connect(parent->showDataAct, SIGNAL(triggered()), wp, SLOT(showDataWidget()));
//        else
//            showDataAct->setDisabled(true);
    }

}

void GameExec::simulateSimulation() {
	simulation = new Simulation(simulationLogger);
	simulation->run();

}
bool GameExec::handleInitDialog(){
    dialog = new Initialize(QObject::tr("Initialize Simulation"), parent);
    if (dialog->exec() == QDialog::Accepted) {
        parent->setWindowTitle(dialog->name());
        if (dialog->humanPlayer) {
            hasHuman = false;
        }
        for (int i = 0; i < dialog->aiSelected.size(); i++)
            aiList.push_back(
                    createAI(dialog->aiSelected[i]->aiName.toStdString(),
                            dialog->aiSelected[i]->color));


    }
    else
        return false;
    return true;
}
