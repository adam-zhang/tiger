#ifndef __MAINWINDOW__H
#define __MAINWINDOW__H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
	Q_OBJECT


public:
	MainWindow(QWidget* parent = 0);
	~MainWindow();
private:
	void initialize();
	void createStatusbar();
	void createToolbar();
	void createMenus();
	void createFileMenu();
	void createHelpMenu();
	void createExitAction(QMenu*);
	void addAboutAction(QMenu*);
	void createCentralWidget();
	void createEditMenu();
	void addAccountAction(QMenu* menu);
	QWidget* createRightView();

private slots:
	void onExit();
	void onAbout();
	void onAccount();
};
#endif//__MAINWINDOW__H
