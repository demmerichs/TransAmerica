#include "../../hdr/userinterface/Window.h"

#include <QLabel>
#include <QCheckBox>
#include <QGridLayout>
#include <QFormLayout>
#include <QTabWidget>

#include "../../hdr/userinterface/DynamicState.h"
#include "../../hdr/userinterface/GUIBoard.h"
#include "../../hdr/logger/SimulationLogger.h"
#include "../../hdr/logger/GameLogger.h"
#include "../../hdr/logger/RoundLogger.h"

Window::Window(const Board* board) {
    toolBox = new QGroupBox("Tool Box");
	showTownsCheckBox = new QCheckBox;
	spielbrett = new GUIBoard(board, Counter(13));
	/**
	 Layout-Design
	 */
	tabWidget = new QTabWidget();
    tabWidget->setTabPosition(QTabWidget::East);
	tabWidget->setSizePolicy(spielbrett->sizePolicy());
	tabWidget->addTab(spielbrett, "Spielbrett");
	mainLayout = new QGridLayout;
	toolLayout = new QFormLayout;
	mainLayout->addWidget(tabWidget, 0, 0);
    mainLayout->addWidget(toolBox, 0, 1);
	mainLayout->setColumnMinimumWidth(0, 300);
	mainLayout->setColumnStretch(0, 1);
	mainLayout->setColumnStretch(1, 0.5);
    toolLayout->addRow(tr("Show city names:"), showTownsCheckBox);
    toolBox->setLayout(toolLayout);
//	toolLayout->addRow(newGameButton);
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
