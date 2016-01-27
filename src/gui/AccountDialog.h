#ifndef __ACCOUNTDIALOG__H
#define __ACCOUNTDIALOG__H

#include <QDialog>

class AccountDialog : public QDialog
{
	Q_OBJECT
public:
	AccountDialog(QWidget* parent = 0);
	virtual ~AccountDialog();
private:
	void initialize();
	QLayout* mainPart();
	QLayout* buttonPart();
private slots:
	void onAccepted();
	void onRejected();
};
#endif//__ACCOUNTDIALOG__H
