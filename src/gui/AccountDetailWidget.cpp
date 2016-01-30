#include "AccountDetailWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>

AccountDetailWidget::AccountDetailWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

AccountDetailWidget::~AccountDetailWidget()
{
}

void AccountDetailWidget::initialize()
{
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addLayout(createAccountName());
	layout->addLayout(createPassword());
	layout->addLayout(createSendingServer());
	layout->addLayout(createReceivingServer());
}

QLayout* AccountDetailWidget::createReceivingServer()
{
	QLayout* layout = new QHBoxLayout;
	layout->addWidget(new QLabel(tr("Receiving Server:")));
	layout->addWidget(createServerType());
	layout->addWidget(new QLineEdit);


	return layout;
}

QLayout* AccountDetailWidget::createSendingServer()
{
	QLayout* layout = new QHBoxLayout;
	layout->addWidget(new QLabel(tr("Sending Server:")));
	layout->addWidget(new QLineEdit);
	return layout;
}

QLayout* AccountDetailWidget::createPassword()
{
	QLayout* layout = new QHBoxLayout;
	layout->addWidget(new QLabel(tr("Password:")));
	layout->addWidget(new QLineEdit);
	return layout;
}

QLayout* AccountDetailWidget::createAccountName()
{
	QLayout* layout = new QHBoxLayout;
	layout->addWidget(new QLabel(tr("Account Name:")));
	layout->addWidget(new QLineEdit);
	return layout;
}

QWidget* AccountDetailWidget::createServerType()
{
	QComboBox* widget = new QComboBox;
	widget->addItem(tr("IMAP"));
	widget->addItem(tr("POP3"));
	return widget;
}
