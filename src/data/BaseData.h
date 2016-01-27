#ifndef __BASEDATA__H
#define __BASEDATA__H

#include <QObject>

class BaseData : public QObject
{
public:
	BaseData(QObject* parent = 0);
	virtual ~BaseData();
};
#endif//__BASEDATA__H
