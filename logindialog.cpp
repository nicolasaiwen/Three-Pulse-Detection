#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "logindialog.h"
#include "ui_logindialog.h"
#include "baseinfodialog.h"
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_lineEdit_2_textChanged(const QString &arg1)
{
	ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}


void LoginDialog::on_pushButton_login_clicked()
{
	if (ui->lineEdit->text() != "admin")
	{
		tip = new TipDialog("用户名错误！");
		tip->exec();
		return;
	}
	if (ui->lineEdit_2->text() != "123")
	{
		tip = new TipDialog("密码错误！");
		tip->exec();
		return;
	}
	BaseInfoDialog*dlg = new BaseInfoDialog();
	dlg->show();
	this->hide();
}

void LoginDialog::on_pushButton_close_clicked()
{
	this->close();
}

