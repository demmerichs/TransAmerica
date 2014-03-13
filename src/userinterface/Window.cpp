#include "../../hdr/userinterface/Window.h"
#include "../../hdr/userinterface/DynamicState.h"
#include "../../hdr/userinterface/Spielbrett.h"
#include "../../hdr/logger/SimulationLogger.h"
#include "../../hdr/logger/GameLogger.h"
#include "../../hdr/logger/RoundLogger.h"

Window::Window(const Board& board) {
	aZp = 0;
	toolBoxLabel = new QLabel(tr("ToolBox"));
	QFont font = toolBoxLabel->font();
	font.setBold(true);
	font.setUnderline(true);
	font.setPointSize(font.pointSize() * 1.4);

	toolBoxLabel->setFont(font);
	showTownsCheckBox = new QCheckBox;
	newGameButton = new QPushButton(tr("New Game"));
    spielbrett = new Spielbrett(board, aZp, Counter(13));
	/**
	 Layout-Design
	 */
    QHBoxLayout* mainLayout = new QHBoxLayout;
	toolLayout = new QFormLayout;
    mainLayout->addWidget(spielbrett);
    mainLayout->addLayout(toolLayout);
	toolLayout->addRow(toolBoxLabel);
	toolLayout->addRow(tr("Zeige Staedte:"), showTownsCheckBox);
	toolLayout->addRow(newGameButton);
	setLayout(mainLayout);

	/**
	 Connect-Implementationen
	 */
	connect(showTownsCheckBox, SIGNAL(toggled(bool)), spielbrett,
			SLOT(drawCityChanged(bool)));
}

Window::~Window() {
	//TODO auto-generated destructor-sub
}
