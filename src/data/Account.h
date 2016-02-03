#ifndef __ACCOUNT__H
#define __ACCOUNT__H

#include "BaseData.h"

class Account : public BaseData
{
	//Q_OBJECT
public:
	Account();
	~Account();
public:
	Q_PROPERTY(QString accountName READ accountName WRITE setAccountName)
	Q_PROPERTY(QString password READ password WRITE setPassword)
	Q_PROPERTY(QString sendingServer READ sendingServer WRITE setSendingSever)
	Q_PROPERTY(QString receivingServer READ receivingServer WRITE setReceivingServer)
};
#endif//__ACCOUNT__H
