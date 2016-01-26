#ifndef __ACCOUNTTREEVIEW__H
#define __ACCOUNTTREEVIEW__H

#include <QTreeView>

class AccountTreeView : public QTreeView
{
	Q_OBJECT
public:
	AccountTreeView(QWidget* parent = 0);
	virtual ~AccountTreeView();
};
#endif//__ACCOUNTTREEVIEW__H
