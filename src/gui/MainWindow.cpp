#include "MainWindow.h"
#include "AboutDialog.h"
#include "AccountDialog.h"
#include "Macros.h"
#include "AccountTreeView.h"
#include <QMenuBar>
#include <QMenu>
#include <QSplitter>
#include <QTreeView>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	setGeometry(100, 100, 800, 600);
	initialize();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initialize()
{
	createCentralWidget();
	createMenus();
	createToolbar();
	createStatusbar();
}


void MainWindow::createCentralWidget()
{
	setCentralWidget(new QSplitter(this));
	QSplitter* splitter = static_cast<QSplitter*>(centralWidget());
	splitter->addWidget(new AccountTreeView);
	splitter->addWidget(createRightView());
}

QWidget* MainWindow::createRightView()
{
	QSplitter* splitter = new QSplitter;
	splitter->setOrientation(Qt::Vertical);
	splitter->addWidget(new QTreeView);
	splitter->addWidget(new QTreeView);
	return splitter;
}

void MainWindow::createStatusbar()
{
	statusBar();
}

void MainWindow::createToolbar()
{
}

void MainWindow::createMenus()
{
	createFileMenu();
	createEditMenu();
	createHelpMenu();
}

void MainWindow::createEditMenu()
{
	QMenu* menu = menuBar()->addMenu(tr("&Edit"));
	addAccountAction(menu);
}

void MainWindow::addAccountAction(QMenu* menu)
{
	QAction* account = menu->addAction(tr("Account Settings..."));
	connect(account, SIGNAL(triggered()), this, SLOT(onAccount()));
}

void MainWindow::onAccount()
{
	SHOW_DIALOG(AccountDialog);
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
