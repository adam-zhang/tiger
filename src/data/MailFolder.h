#ifndef __MAILFOLDER__H
#define __MAILFOLDER__H

#include "BaseData.h"

class MailFolder : public BaseData
{
public:
	MailFolder();
	virtual ~MailFolder();

	Q_PROPERTY(folderName READ folderName WRITE setFolderName)
};
#endif//__MAILFOLDER__H
