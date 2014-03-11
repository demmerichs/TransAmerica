#include "../../hdr/userinterface/Window.h"
#include "../../hdr/userinterface/DynamicState.h"
#include "../../hdr/userinterface/Spielbrett.h"
#include "../../hdr/logger/SimulationLogger.h"
#include "../../hdr/logger/GameLogger.h"
#include "../../hdr/logger/RoundLogger.h"

Window::Window(const Board& board) {
	toolBoxLabel = new QLabel(tr("ToolBox"));
	QFont font = toolBoxLabel->font();
	font.setBold(true);
	font.setUnderline(true);
	font.setPointSize(font.pointSize() * 1.4);

	toolBoxLabel->setFont(font);
	showTownsCheckBox = new QCheckBox;
	newGameButton = new QPushButton(tr("New Game"));
	spielbrett = new Spielbrett(this, board);
	/**
	 Layout-Design
	 */
	QGridLayout* mainLayout = new QGridLayout;
	toolLayout = new QFormLayout;
	mainLayout->addWidget(spielbrett, 0, 0, 12, 8);
	mainLayout->addLayout(toolLayout, 0, 9, 8, 1);
	toolLayout->addRow(toolBoxLabel);
	toolLayout->addRow(tr("Zeige Staedte:"), showTownsCheckBox);
	toolLayout->addRow(newGameButton);
	setLayout(mainLayout);

	/**
	 Connect-Implementationen
	 */
	connect(showTownsCheckBox, SIGNAL(toggled(bool)), spielbrett,
			SLOT(drawCityChanged(bool)));
	aZp = 0;
}

Window::~Window() {
	//TODO auto-generated destructor-sub
}
