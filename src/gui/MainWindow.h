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
private slots:
	void onExit();
	void onAbout();
};
#endif//__MAINWINDOW__H
