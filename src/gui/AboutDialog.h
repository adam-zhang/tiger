#ifndef __ABOUTDIALOG__H
#define __ABOUTDIALOG__H

#include <QDialog>

class AboutDialog : public QDialog
{
	Q_OBJECT
public:
	AboutDialog(QWidget* parent = 0);
	virtual ~AboutDialog();
};
#endif//__ABOUTDIALOG__H
