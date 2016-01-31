#include "AccountListWidget.h"
#include <QListView>
#include <QHBoxLayout>

AccountListWidget::AccountListWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

AccountListWidget::~AccountListWidget()
{
}

void AccountListWidget::initialize()
{
	QHBoxLayout* layout = new QHBoxLayout(this);
	QListView* list = new QListView;
	layout->addWidget(list);
}
