#include "gui.h"
#include "MainWindow.h"
#include <QApplication>

int guiMain(int argc, char** argv)
{
	QApplication app(argc, argv);
	MainWindow w;
	w.show();
	return app.exec();
}

