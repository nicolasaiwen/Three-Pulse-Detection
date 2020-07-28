#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "testdialog.h"
#include "ui_testdialog.h"

TestDialog::TestDialog(int mode,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestDialog)
{
    ui->setupUi(this);
	this->setModal(true);
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
	this->setAttribute(Qt::WA_TranslucentBackground, true);
	this->setAttribute(Qt::WA_DeleteOnClose);
	if (mode == 1)
	{
		ui->groupBox_2->setTitle("左寸调试");
		ui->groupBox_3->setTitle("右寸调试");
		ui->groupBox_4->hide();
		ui->label_4->setText("左寸压力梯度");
		ui->label_5->setText("右寸压力梯度");
	}
}

TestDialog::~TestDialog()
{
    delete ui;
}



void TestDialog::on_pushButton_close_clicked()
{
	this->close();
}



void TestDialog::on_pushButton_startcun5s_clicked()
{
	emit sendorder("aa55021111");
	ui->lineEdit_command->setText("aa55021111");
}

void TestDialog::on_pushButton_slowcun5s_clicked()
{
	emit sendorder("aa55021212");
	ui->lineEdit_command->setText("aa55021212");
}

void TestDialog::on_pushButton_fastcun5s_clicked()
{
	emit sendorder("aa55021313");
	ui->lineEdit_command->setText("aa55021313");
}

void TestDialog::on_pushButton_stopcun_clicked()
{
	emit sendorder("aa55021414");
	ui->lineEdit_command->setText("aa55021414");
}

void TestDialog::on_pushButton_stopslowcun_clicked()
{
	emit sendorder("aa55021515");
	ui->lineEdit_command->setText("aa55021515");
}

void TestDialog::on_pushButton_stopfastcun_clicked()
{
	emit sendorder("aa55021616");
	ui->lineEdit_command->setText("aa55021616");
}

void TestDialog::on_pushButton_startguan5s_clicked()
{
	emit sendorder("aa55022121");
	ui->lineEdit_command->setText("aa55022121");
}

void TestDialog::on_pushButton_slowguan5s_clicked()
{
	emit sendorder("aa55022222");
	ui->lineEdit_command->setText("aa55022222");
}

void TestDialog::on_pushButton_fastguan5s_clicked()
{
	emit sendorder("aa55022323");
	ui->lineEdit_command->setText("aa55022323");
}

void TestDialog::on_pushButton_stopguan_clicked()
{
	emit sendorder("aa55022424");
	ui->lineEdit_command->setText("aa55022424");

}

void TestDialog::on_pushButton_stopslowcun_2_clicked()
{
	emit sendorder("aa55022525");
	ui->lineEdit_command->setText("aa55022525");
}

void TestDialog::on_pushButton_stopfastguan_clicked()
{
	emit sendorder("aa55022626");
	ui->lineEdit_command->setText("aa55022626");
}

void TestDialog::on_pushButton_startchi5s_clicked()
{
	emit sendorder("aa55024141");
	ui->lineEdit_command->setText("aa55024141");
}

void TestDialog::on_pushButton_slowchi5s_clicked()
{
	emit sendorder("aa55024242");
	ui->lineEdit_command->setText("aa55024242");
}

void TestDialog::on_pushButton_fastchi5s_clicked()
{
	emit sendorder("aa55024343");
	ui->lineEdit_command->setText("aa55024343");
}

void TestDialog::on_pushButton_stopchi_clicked()
{
	emit sendorder("aa55024444");
	ui->lineEdit_command->setText("aa55024444");
}

void TestDialog::on_pushButton_stopslowchi_clicked()
{
	emit sendorder("aa55024545");
	ui->lineEdit_command->setText("aa55024545");
}

void TestDialog::on_pushButton_stopfastchi_clicked()
{
	emit sendorder("aa55024646");
	ui->lineEdit_command->setText("aa55024646");
}

void TestDialog::on_pushButton_startcun_clicked()
{
	if (ui->lineEdit_cunPre->text().isEmpty())
	{
		return;
	}
	QString command = combineAddPressCommand(ui->lineEdit_cunPre->text().split(","), 1);
	emit sendorder(command);
	ui->lineEdit_command->setText(command);
}

void TestDialog::on_pushButton_startguan_clicked()
{
	if (ui->lineEdit_guanPre->text().isEmpty())
	{
		return;
	}
	QString command = combineAddPressCommand(ui->lineEdit_guanPre->text().split(","), 2);
	emit sendorder(command);
	ui->lineEdit_command->setText(command);
}

void TestDialog::on_pushButton_startchi_clicked()
{
	if (ui->lineEdit_chiPre->text().isEmpty())
	{
		return;
	}
	QString command = combineAddPressCommand(ui->lineEdit_chiPre->text().split(","), 3);
	emit sendorder(command);
	ui->lineEdit_command->setText(command);
}

QString TestDialog::combineAddPressCommand(QStringList text,int position)
{
	QString staticPressure_cun = "";//静压值
	QString staticPressure_guan = "";//静压值
	QString staticPressure_chi = "";//静压值
	QList<int> valueCun_int;//存储指令值
	QList<int> valueGuan_int;//存储指令值
	QList<int> valueChi_int;//存储指令值
	//组合压力
	if (position == 1)
	{
		for (int i = 0; i < 9; ++i)
		{
			if (i < text.size())
			{
				//先将压力转成16进制再转换高低字节
				QString eachValue = QString("%1").arg(text.at(i).toInt(), 4, 16, QLatin1Char('0'));
				bool ok = true;
				valueCun_int.append((eachValue.right(2)).toInt(&ok, 16));
				staticPressure_cun += (eachValue.right(2));
			}
			else
			{
				staticPressure_cun += "00";
			}
		}
		//计算校验位
		QList<int>listsrc;
		listsrc.append(113);
		listsrc.append(text.size());
		listsrc.append(valueCun_int);
		QString src = handleSRC(listsrc);
		QString pressNum_str_cun = QString("%1").arg(text.size(), 4, 16, QLatin1Char('0')).right(2);
		QString command = "aa552071" + pressNum_str_cun + staticPressure_cun +"0000000000000000000000000000000000000000" + src;//最终指令结果

		return command;
	}
	else if (position == 2)
	{
		for (int i = 0; i < 9; ++i)
		{
			if (i < text.size())
			{
				//先将压力转成16进制再转换高低字节
				QString eachValue = QString("%1").arg(text.at(i).toInt(), 4, 16, QLatin1Char('0'));
				bool ok = true;
				valueGuan_int.append((eachValue.right(2)).toInt(&ok, 16));
				staticPressure_guan += (eachValue.right(2));
			}
			else
			{
				staticPressure_guan += "00";
			}
		}
		//计算校验位
		QList<int>listsrc;
		listsrc.append(114);
		listsrc.append(text.size());
		listsrc.append(valueGuan_int);
		QString src = handleSRC(listsrc);
		QString pressNum_str_guan = QString("%1").arg(text.size(), 4, 16, QLatin1Char('0')).right(2);
		QString command = "aa55207200000000000000000000"+pressNum_str_guan + staticPressure_guan +
			"00000000000000000000" + src;//最终指令结果

		return command;
	}
	else if (position == 3)
	{
		for (int i = 0; i < 9; ++i)
		{
			if (i < text.size())
			{
				//先将压力转成16进制再转换高低字节
				QString eachValue = QString("%1").arg(text.at(i).toInt(), 4, 16, QLatin1Char('0'));
				bool ok = true;
				valueChi_int.append((eachValue.right(2)).toInt(&ok, 16));
				staticPressure_chi += (eachValue.right(2));
			}
			else
			{
				staticPressure_chi += "00";
			}
		}
		//计算校验位
		QList<int>listsrc;
		listsrc.append(116);
		listsrc.append(text.size());
		listsrc.append(valueChi_int);
		QString src = handleSRC(listsrc);
		QString pressNum_str_chi = QString("%1").arg(text.size(), 4, 16, QLatin1Char('0')).right(2);
		QString command = "aa5520740000000000000000000000000000000000000000" + pressNum_str_chi + staticPressure_chi + src;//最终指令结果

		return command;
	}


}


QString TestDialog::handleSRC(QList<int> &list)
{
	//方法为对命令字、命令包总长度、压力梯度数和静压力四个字段进行无进位求和
	int sum = 0;
	for (int i = 0; i < list.size(); ++i)
	{
		sum += list.at(i);
	}

	int yushu = sum % 256;
	QString sunmstr = QString("%1").arg(yushu, 4, 16, QLatin1Char('0'));
	QString final_2 = sunmstr.right(2);
	return final_2;
}
