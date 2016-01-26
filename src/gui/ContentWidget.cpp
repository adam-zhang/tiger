#include "ContentWidget.h"
#include "MailListView.h"
#include <QSplitter>

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
	splitter->addWidget(new MailListView);
	splitter->addWidget(new QWidget);
}
