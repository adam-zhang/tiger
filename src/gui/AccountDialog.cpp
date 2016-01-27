#include "AccountDialog.h"
#include "AccountListWidget.h"
#include "AccountDetailWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDialogButtonBox>

AccountDialog::AccountDialog(QWidget* parent)
	: QDialog(parent)
{
	initialize();
}

AccountDialog::~AccountDialog()
{
}

void AccountDialog::initialize()
{
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addLayout(mainPart());
	layout->addLayout(buttonPart());
}

QLayout* AccountDialog::mainPart()
{
	QHBoxLayout* layout = new QHBoxLayout;
	layout->addWidget(new AccountListWidget);
	layout->addWidget(new AccountDetailWidget);
	return layout;
}

QLayout* AccountDialog::buttonPart()
{
	QHBoxLayout* layout = new QHBoxLayout;
	QDialogButtonBox* box = new QDialogButtonBox;
	box->setStandardButtons(QDialogButtonBox::Ok);
	//box->setStandardButton(QDialogButtonBox::Cancel);
	layout->addWidget(box);
	connect(box, SIGNAL(accepted()), this, SLOT(onAccepted()));
	return layout;
}
