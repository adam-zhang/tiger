#ifndef __ACCOUNTLISTWIDGET__H
#define __ACCOUNTLISTWIDGET__H

#include <QWidget>

class AccountListWidget : public QWidget
{
	Q_OBJECT
public:
	AccountListWidget(QWidget* parent = 0);
	virtual ~AccountListWidget();
private:
	void initialize();
};
#endif//__ACCOUNTLISTWIDGET__H
