#include "AboutDialog.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QDialogButtonBox>

AboutDialog::AboutDialog(QWidget* parent)
	: QDialog(parent)
{
	initialize();
}

AboutDialog::~AboutDialog()
{
}

void AboutDialog::initialize()
{
	QVBoxLayout * layout = new QVBoxLayout(this);
	layout->addLayout(mainPart());
	layout->addWidget(buttonPart());
}

QLayout* AboutDialog::mainPart()
{
	QHBoxLayout* layout = new QHBoxLayout;
	layout->addWidget(pictureWidget());
	layout->addLayout(info());
	return layout;
}

QWidget* AboutDialog::pictureWidget()
{
	QWidget* widget = new QWidget;
	return widget;
}

QLayout* AboutDialog::info()
{
	QGridLayout* layout = new QGridLayout;
	layout->addWidget(new QLabel(tr("Atuhor:")), 0, 0);
	layout->addWidget(new QLabel(tr("Mingping (Adam) Zhang")), 0, 1);
	layout->addWidget(new QLabel(tr("E-mail:")), 1, 0);
	layout->addWidget(new QLabel(tr("mingpingzhang@163.com")), 1, 1);
	return layout;
}

QWidget* AboutDialog::buttonPart()
{
	QDialogButtonBox* box = new QDialogButtonBox;
	box->addButton(QDialogButtonBox::Ok);
	connect(box, SIGNAL(accepted()), this, SLOT(close()));
	return box;
}
