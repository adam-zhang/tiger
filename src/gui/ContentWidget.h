#ifndef __CONTENTWIDGET__H
#define __CONTENTWIDGET__H

#include <QWidget>

class ContentWidget : public QWidget
{
	Q_OBJECT
public:
	ContentWidget(QWidget* parent = 0);
	virtual ~ContentWidget();
private:
	void initialize();
};
#endif//__CONTENTWIDGET__H
