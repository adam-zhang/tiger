#include "MainWidget.h"
#include "ContentWidget.h"
#include "AccountTreeView.h"
#include <QSplitter>

MainWidget::MainWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

MainWidget::~MainWidget()
{
}

void MainWidget::initialize()
{
	QSplitter* splitter = new QSplitter(this);
	splitter->addWidget(new AccountTreeView);
	splitter->addWidget(new ContentWidget);
}
