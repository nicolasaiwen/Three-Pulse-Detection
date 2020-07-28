#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "baseinfodialog.h"
#include "ui_baseinfodialog.h"
#include "threepulsedialog.h"
BaseInfoDialog::BaseInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BaseInfoDialog)
{
    ui->setupUi(this);
	this->setModal(true);
	this->setWindowTitle("用户信息录入");
	this->setAttribute(Qt::WA_DeleteOnClose);
	ui->lineEdit_2->setValidator(new QIntValidator(0, 150, this));
}

BaseInfoDialog::~BaseInfoDialog()
{
    delete ui;
}

void BaseInfoDialog::on_pushButton_next_clicked()
{
	if (ui->lineEdit->text() == "")
	{
		tip = new TipDialog("请输入姓名！");
		tip->exec();
		return;
	}
	if (ui->lineEdit_2->text() == "")
	{
		tip = new TipDialog("请输入年龄！");
		tip->exec();
		return;
	}
	if (ui->comboBox->currentText() == "")
	{
		tip = new TipDialog("请输入性别！");
		tip->exec();
		return;
	}

	QStringList list;
	list.append(ui->lineEdit->text());
	list.append(ui->lineEdit_2->text());
	list.append(ui->comboBox->currentText());
	ThreePulseDialog*dlg = new ThreePulseDialog(list);
	dlg->show();
	this->hide();
}

void BaseInfoDialog::on_pushButton_2_clicked()
{
	this->close();
}
