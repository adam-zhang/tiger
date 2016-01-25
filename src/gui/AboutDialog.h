#ifndef __ABOUTDIALOG__H
#define __ABOUTDIALOG__H

#include <QDialog>

class QLayout;

class AboutDialog : public QDialog
{
	Q_OBJECT
public:
	AboutDialog(QWidget* parent = 0);
	virtual ~AboutDialog();
private:
	void initialize();
	QLayout* mainPart();
	QWidget* buttonPart();
	QLayout* info();
	QWidget* pictureWidget();
};
#endif//__ABOUTDIALOG__H
