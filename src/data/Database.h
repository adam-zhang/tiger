#ifndef __DATABASE__H
#define __DATABASE__H

#include <QObject>
#include <QtSql/QSqlDatabase>

class Database : public QObject
{
public:
	Database();
	virtual ~Database();
private:
	void initialize();
	void createDBFile(const QString& );
	QSqlDatabase createDatabase(const QString& dbName);
	void createAccount(QSqlDatabase& db);

};
#endif//__DATABASE__H
