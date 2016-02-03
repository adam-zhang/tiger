#include "Database.h"
#include <QFile>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>


Database::Database()
{
	initialize();
}

Database::~Database()
{
}

void Database::initialize()
{
	QString dbName("mails.sqlite");
	QFile file(dbName);
	if (file.exists())
		return;
	else
		createDBFile(dbName);
}

void Database::createDBFile(const QString& file)
{
	QSqlDatabase db = createDatabase(file);
	createAccount(db);
}

void Database::createAccount(QSqlDatabase& db)
{
	QSqlQuery query("create table account("
			"id uuid primary,"
			"accountName nvarchar(20),"
			"password varchar(20),"
			"serverID uuid)");
	query.exec();
}

QSqlDatabase Database::createDatabase(const QString& dbName)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName(dbName);
	db.open();
	return db;
}

