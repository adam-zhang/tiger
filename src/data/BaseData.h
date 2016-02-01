#ifndef __BASEDATA__H
#define __BASEDATA__H

#include <QObject>

class BaseData : public QObject
{
	//Q_OBJECT
public:
	BaseData(QObject* parent = 0);
	virtual ~BaseData();

	Q_PROPERTY(id READ id WRITE setId);
};
#endif//__BASEDATA__H
