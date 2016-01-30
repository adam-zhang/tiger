#ifndef __ACCOUNTDETAILWIDGET__H
#define __ACCOUNTDETAILWIDGET__H

#include <QWidget>

class AccountDetailWidget : public QWidget
{
	Q_OBJECT
public:
	AccountDetailWidget(QWidget* parent = 0);
	virtual ~AccountDetailWidget();
private:
	void initialize();
	QLayout* createAccountName();
	QLayout* createPassword();
	QLayout* createSendingServer();
	QLayout* createReceivingServer();
	QWidget* createServerType();
};
#endif//__ACCOUNTDETAILWIDGET__H
