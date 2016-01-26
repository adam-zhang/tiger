#include "ContentWidget.h"
#include "MailListView.h"
#include <QSplitter>
#include <QTextEdit>
#include <QDebug>

ContentWidget::ContentWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

ContentWidget::~ContentWidget()
{
}

void ContentWidget::initialize()
{
	QSplitter * splitter = new QSplitter(this);
	splitter->setOrientation(Qt::Vertical);
	splitter->addWidget(new MailListView);
	splitter->addWidget(new QTextEdit(tr("Hell")));
	qDebug() << "Hello initialize!";
}
