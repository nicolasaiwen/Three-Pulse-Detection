#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "tipdialog.h"
#include "ui_tipdialog.h"

TipDialog::TipDialog(QString msg,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TipDialog)
{
    ui->setupUi(this);
	this->setModal(true);
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
	this->setAttribute(Qt::WA_TranslucentBackground, true);
	this->setAttribute(Qt::WA_DeleteOnClose);
	ui->label_2->setText(msg);
}

TipDialog::~TipDialog()
{
    delete ui;
}

void TipDialog::on_pushButton_clicked()
{
	this->close();
}
