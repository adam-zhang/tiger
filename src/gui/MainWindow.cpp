#include "MainWindow.h"
#include "MainWidget.h"
#include "AboutDialog.h"
#include "Macros.h"
#include <QMenuBar>
#include <QMenu>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	setCentralWidget(new MainWidget);
	initialize();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	createMenus();
	createToolbar();
	createStatusbar();
}

void MainWindow::createStatusbar()
{
}

void MainWindow::createToolbar()
{
}

void MainWindow::createMenus()
{
	createFileMenu();
	createHelpMenu();
}

void MainWindow::createHelpMenu()
{
	QMenu* menu = menuBar()->addMenu(tr("&Help"));
	addAboutAction(menu);
}

void MainWindow::addAboutAction(QMenu* menu)
{
	QAction* about = menu->addAction(tr("&About"));
	connect(about, SIGNAL(triggered()), this, SLOT(onAbout()));
}

void MainWindow::onAbout()
{
	SHOW_DIALOG(AboutDialog)
	//AboutDialog dlg(this);
	//dlg.exec();
}

void MainWindow::createFileMenu()
{
	QMenu * menu = menuBar()->addMenu(tr("&File"));
	createExitAction(menu);
}

void MainWindow::createExitAction(QMenu* menu)
{
	QAction* action = menu->addAction(tr("E&xit"));
	connect(action, SIGNAL(triggered()), this, SLOT(onExit()));
}

void MainWindow::onExit()
{
	close();
}
