#ifndef __MAINLISTVIEW__H
#define __MAINLISTVIEW__H

#include <QListView>

class MailListView : public QListView
{
	Q_OBJECT
public:
	MailListView();
	virtual ~MailListView();
};
#endif//__MAINLISTVIEW__H
