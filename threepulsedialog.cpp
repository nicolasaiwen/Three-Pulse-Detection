#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "threepulsedialog.h"
#include "ui_threepulsedialog.h"
#include "getpulsedata_three.h"
#include <QPainter>
#include <QThread>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDateTime>
#include <QTextStream>
#include <QFile>
#include <MX.h>
const int zoomfactor = 3;
const QString resetsignal = "aa55027070";//复位

QMutex mutex;
ThreePulseDialog::ThreePulseDialog(QStringList info,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThreePulseDialog)
{
    ui->setupUi(this);
	this->setModal(true);
	this->setAttribute(Qt::WA_DeleteOnClose);
	this->setWindowTitle("中医脉象采集软件V2.0.0");
	ui->label_11->setText("寸部脉象：");
	ui->label_13->setText("关部脉象：");
	ui->label_12->setText("尺部脉象：");
	Baseinfo = info;
	ui->label_7->setText("姓名：" + Baseinfo.at(0) + "   " + "年龄：" + Baseinfo.at(1) + "   "
		+ "性别：" + Baseinfo.at(2));
	ui->label_realtime_cun->installEventFilter(this);
	ui->label_realtime_guan->installEventFilter(this);
	ui->label_realtime_chi->installEventFilter(this);
	//自动搜索可用端口
	QStringList portList;
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		QSerialPort serial;
		serial.setPort(info);
		if (serial.open(QIODevice::ReadWrite))
		{
			ui->comboBox->addItem(serial.portName());
			serial.close();
		}
	}

	
	pulseData.clear();//静力压
	pulseData2.clear();//脉搏压
	pulseData3.clear();//静力压
	pulseData4.clear();//脉搏压
	pulseData5.clear();//静力压
	pulseData6.clear();//脉搏压
	count = 0;
	count1 = 0;
	count2 = 0;
}

ThreePulseDialog::~ThreePulseDialog()
{
	if (getPulseDataThread != NULL)
	{
		getPulseDataThread->quit();
		getPulseDataThread->wait();
		delete getPulseDataThread;
		getPulseDataThread = NULL;
	}
	flag = -1;
	delete ui;
}

void ThreePulseDialog::on_pushButton_close_clicked()
{
	sendCommand(resetsignal);
	flag = -1;
	this->close();
}

void ThreePulseDialog::on_pushButton_open_clicked()
{	
	if (ui->comboBox_2->currentText() == "")
	{
		tip = new TipDialog("请选择波特率");
		tip->exec();
		return;
	}
	QString portname = ui->comboBox->currentText();
	int bandrate = ui->comboBox_2->currentText().toInt();
	getPulseDataThread = new QThread();
	getPulseData = new GetPulseData_Three(portname, bandrate);
	getPulseData->moveToThread(getPulseDataThread);
	getPulseDataThread->start();
	connect(getPulseDataThread, SIGNAL(finished()), getPulseData, SLOT(deleteLater()));
	connect(getPulseData, SIGNAL(sendData(const QStringList &)), this, SLOT(handleData(const QStringList &)), Qt::QueuedConnection);//主界面刷新
	connect(this, SIGNAL(sendCommand(QString)), getPulseData, SLOT(handleCommand(QString)));
	connect(this, SIGNAL(closeport()), getPulseData, SLOT(ClosePort()));
	connect(getPulseData, SIGNAL(sendError(QString)), this, SLOT(handleError(QString)));


}

void ThreePulseDialog::handleError(QString error)
{
	ui->label_error->setText(error);
}

void ThreePulseDialog::handleData(const QStringList &dataStr)
{
	if (dataStr.size() != 21)
	{
		return;
	}
	QString fileName = QCoreApplication::applicationDirPath() + "/data.txt";
	QFile file(fileName);
	if (file.open(QIODevice::ReadWrite | QIODevice::Append))
	{
		QTextStream stream(&file);
		stream.seek(file.size());
		for (int i = 0; i < dataStr.size();i++)
		{
			stream << dataStr.at(i) << " ";
		}

		file.close();
	}
	static int a = 0;
	mutex.lock();
	QString str = "";
	for (int i = 0; i < dataStr.size(); ++i)
	{
		str.append(dataStr.at(i));

	}
	//寸部数据

	if (str.contains("aa55") && dataStr.at(3) == "ff")
	{
		saveData_cun.append(((dataStr.at(8) + dataStr.at(7)).toInt(0, 16)));
		savePre_cun =QString::number(dataStr.at(4).toInt(0, 16));

	}
	if (str.contains("aa55") && dataStr.at(3) == "00")
	{
		if (!saveData_cun.isEmpty())
		{
			savePulse(saveData_cun,1);
			saveData_cun.clear();
		}
	}

	//关部数据
	if (str.contains("aa55") && dataStr.at(9) == "ff")
	{
		saveData_guan.append(((dataStr.at(14) + dataStr.at(13)).toInt(0, 16)));
		savePre_guan = QString::number(dataStr.at(10).toInt(0, 16));

	}
	if (str.contains("aa55") && dataStr.at(9) == "00")
	{
		if (!saveData_guan.isEmpty())
		{
			savePulse(saveData_guan,2);
			saveData_guan.clear();
		}
	}

	//尺部数据
	if (str.contains("aa55") && dataStr.at(15) == "ff")
	{
		saveData_chi.append(((dataStr.at(20) + dataStr.at(19)).toInt(0, 16)));
		savePre_chi = QString::number(dataStr.at(16).toInt(0, 16));

	}
	if (str.contains("aa55") && dataStr.at(15) == "00")
	{
		if (!saveData_chi.isEmpty())
		{
			savePulse(saveData_chi,3);
			saveData_chi.clear();
		}
	}
	//static int count = 0;
	if (str.contains("aa55"))
	{
		int width = ui->label_realtime_cun->width() / zoomfactor;
		if (pulseData.size() > width)
		{
			pulseData[count] = ((dataStr.at(6) + dataStr.at(5)).toInt(0, 16));
			pulseData2[count] = ((dataStr.at(8) + dataStr.at(7)).toInt(0, 16));
			pulseData3[count1] = ((dataStr.at(12) + dataStr.at(11)).toInt(0, 16));
			pulseData4[count1] = ((dataStr.at(14) + dataStr.at(13)).toInt(0, 16));
			pulseData5[count2] = ((dataStr.at(18) + dataStr.at(17)).toInt(0, 16));
			pulseData6[count2] = ((dataStr.at(20) + dataStr.at(19)).toInt(0, 16));
		}
		else
		{
			pulseData.push_back((dataStr.at(6) + dataStr.at(5)).toInt(0, 16));
			pulseData2.push_back((dataStr.at(8) + dataStr.at(7)).toInt(0, 16));
			pulseData3.push_back((dataStr.at(12) + dataStr.at(11)).toInt(0, 16));
			pulseData4.push_back((dataStr.at(14) + dataStr.at(13)).toInt(0, 16));
			pulseData5.push_back((dataStr.at(18) + dataStr.at(17)).toInt(0, 16));
			pulseData6.push_back((dataStr.at(20) + dataStr.at(19)).toInt(0, 16));
		}

		QString realtimePressure1 = QString::number((((dataStr.at(6) + dataStr.at(5)).toInt(0, 16)) - 32768) / 100, 'f', 1);
		if ((((dataStr.at(6) + dataStr.at(5)).toInt(0, 16)) - 32768) / 100 < 0)
		{
			realtimePressure1 = "0.0";
		}
		ui->label_jingya_cun->setText(realtimePressure1);
		QString realtimePressure2 = QString::number((((dataStr.at(12) + dataStr.at(11)).toInt(0, 16)) - 32768) / 100.0, 'f', 1);
		if ((((dataStr.at(12) + dataStr.at(11)).toInt(0, 16)) - 32768) / 100 < 0)
		{
			realtimePressure2 = "0.0";
		}
		ui->label_jingya_guan->setText(realtimePressure2);
		QString realtimePressure3 = QString::number((((dataStr.at(18) + dataStr.at(17)).toInt(0, 16)) - 32768) / 100.0,'f',1);
		if ((((dataStr.at(18) + dataStr.at(17)).toInt(0, 16)) - 32768) / 100 < 0)
		{
			realtimePressure3 = "0.0";
		}
		ui->label_jingya_chi->setText(realtimePressure3);

		QString realtimedongya1 = QString::number((double)((((dataStr.at(8) + dataStr.at(7)).toInt(0, 16)) - 32768)) / (65535-32768)*80, 'f', 1);
		ui->label_dongya_cun->setText(realtimedongya1);
		QString realtimedongya2 = QString::number((double)((((dataStr.at(14) + dataStr.at(13)).toInt(0, 16)) - 32768))/ (65535 - 32768) * 80, 'f', 1);
		ui->label_dongya_guan->setText(realtimedongya2);
		QString realtimedongya3 = QString::number((double)((((dataStr.at(20) + dataStr.at(19)).toInt(0, 16)) - 32768)) / (65535 - 32768) *80, 'f', 1);
		ui->label_dongya_chi->setText(realtimedongya3);
		
		pulseList.append((dataStr.at(8) + dataStr.at(7)).toInt(0, 16));
		if (pulseList.size() ==500)
		{
			caculatePulse(pulseList);
			QList<int>::iterator i;
			for (i = pulseList.end(); i >pulseList.begin()+300;i--)
			{
				pulseList.erase(i-200);
			}
		}
	}

	if (str.contains("aa55"))
	{
		count1++;
		count2++;
		count++;
		ui->label_realtime_cun->update();
		ui->label_realtime_guan->update();
		ui->label_realtime_chi->update();
	}
	if (count == ui->label_realtime_cun->width() / zoomfactor)
	{
		count = 0;
	}
	if (count1 == ui->label_realtime_guan->width() / zoomfactor)
	{
		count1= 0;
	}
	if (count2 == ui->label_realtime_chi->width() / zoomfactor)
	{
		count2 = 0;
	}
	a++;
	mutex.unlock();
}

bool ThreePulseDialog::eventFilter(QObject *obj, QEvent *event)
{
	if (obj == ui->label_realtime_cun && event->type() == QEvent::Paint)
	{
		QPainter painter(ui->label_realtime_cun);
		drawRealtimeData_cun(painter, ui->label_realtime_cun->width(), ui->label_realtime_cun->height());
	}
	if (obj == ui->label_realtime_guan && event->type() == QEvent::Paint)
	{
		QPainter painter(ui->label_realtime_guan);
		drawRealtimeData_guan(painter, ui->label_realtime_guan->width(), ui->label_realtime_guan->height());
	}
	if (obj == ui->label_realtime_chi && event->type() == QEvent::Paint)
	{
		QPainter painter(ui->label_realtime_chi);
		drawRealtimeData_chi(painter, ui->label_realtime_chi->width(), ui->label_realtime_chi->height());
	}
	return QWidget::eventFilter(obj, event);
}

void ThreePulseDialog::drawRealtimeData_cun(QPainter &painter, int widgetwidth, int widgetheight)
{
	float lineInterval = 10;
	int lineNumber1 = widgetwidth / lineInterval + 1;
	int lineNumber2 = widgetheight / lineInterval + 1;
	painter.setRenderHint(QPainter::Antialiasing);
	//画背景
	for (int i = 0; i < lineNumber1; ++i)
	{
		if (i % 25 == 0)
		{
			painter.setPen(QPen(Qt::blue, 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		}
		else
		{
			painter.setPen(QPen(QColor(54, 210, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		}
		painter.drawLine(i * lineInterval, 0, i * lineInterval, widgetheight);
	}

	for (int i = 0; i < lineNumber2; ++i)
	{
		painter.setPen(QPen(QColor(54, 210, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		painter.drawLine(0, i * lineInterval, widgetwidth, i * lineInterval);
	}

	//画实时数据
	painter.setPen(QPen(Qt::red, 1.1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
	for (int i = 0; i < pulseData2.size() - 1; ++i)
	{
		float y1 = widgetheight - widgetheight / 2 * pulseData2.at(i) / 32678.0;
		float y2 = widgetheight - widgetheight / 2 * pulseData2.at(i + 1) / 32678.0;

		if (y1 >= widgetheight)
		{
			y1 = 235;
		}

		if (y2 >= widgetheight)
		{
			y2 = 235;
		}
		if (i == pulseData2.size() - 2)
		{
			painter.drawLine(i*zoomfactor, y1, i * zoomfactor, y1);
		}
		else
		{
			painter.drawLine(i*zoomfactor, y1, (i + 1) * zoomfactor, y2);
		}

	}

	//画擦除区域
	painter.setPen(QPen(QColor(102, 146, 27), 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
	painter.drawLine(count*zoomfactor, 0, count * zoomfactor, widgetheight);
	painter.fillRect(QRect(count*zoomfactor, 0, count * zoomfactor + lineInterval, widgetheight), QBrush(Qt::transparent));

}
void ThreePulseDialog::drawRealtimeData_guan(QPainter &painter, int widgetwidth, int widgetheight)
{
	float lineInterval = 10;
	int lineNumber1 = widgetwidth / lineInterval + 1;
	int lineNumber2 = widgetheight / lineInterval + 1;
	painter.setRenderHint(QPainter::Antialiasing);
	//画背景
	for (int i = 0; i < lineNumber1; ++i)
	{
		if (i % 25 == 0)
		{
			painter.setPen(QPen(Qt::blue, 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		}
		else
		{
			painter.setPen(QPen(QColor(54, 210, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		}
		painter.drawLine(i * lineInterval, 0, i * lineInterval, widgetheight);
	}

	for (int i = 0; i < lineNumber2; ++i)
	{
		painter.setPen(QPen(QColor(54, 210, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		painter.drawLine(0, i * lineInterval, widgetwidth, i * lineInterval);
	}

	//画实时数据
	painter.setPen(QPen(Qt::red, 1.1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
	for (int i = 0; i < pulseData4.size() - 1; ++i)
	{
		float y1 = widgetheight - widgetheight / 2 * pulseData4.at(i) / 32678.0;
		float y2 = widgetheight - widgetheight / 2 * pulseData4.at(i + 1) / 32678.0;

		if (y1 >= widgetheight)
		{
			y1 = 235;
		}

		if (y2 >= widgetheight)
		{
			y2 = 235;
		}
		if (i == pulseData4.size() - 2)
		{
			painter.drawLine(i*zoomfactor, y1, i * zoomfactor, y1);
		}
		else
		{
			painter.drawLine(i*zoomfactor, y1, (i + 1) * zoomfactor, y2);
		}

	}

	//画擦除区域
	painter.setPen(QPen(QColor(102, 146, 27), 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
	painter.drawLine(count*zoomfactor, 0, count * zoomfactor, widgetheight);
	painter.fillRect(QRect(count*zoomfactor, 0, count * zoomfactor + lineInterval, widgetheight), QBrush(Qt::transparent));

}
void ThreePulseDialog::drawRealtimeData_chi(QPainter &painter, int widgetwidth, int widgetheight)
{
	float lineInterval = 10;
	int lineNumber1 = widgetwidth / lineInterval + 1;
	int lineNumber2 = widgetheight / lineInterval + 1;
	painter.setRenderHint(QPainter::Antialiasing);
	//画背景
	for (int i = 0; i < lineNumber1; ++i)
	{
		if (i % 25 == 0)
		{
			painter.setPen(QPen(Qt::blue, 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		}
		else
		{
			painter.setPen(QPen(QColor(54, 210, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		}
		painter.drawLine(i * lineInterval, 0, i * lineInterval, widgetheight);
	}

	for (int i = 0; i < lineNumber2; ++i)
	{
		painter.setPen(QPen(QColor(54, 210, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
		painter.drawLine(0, i * lineInterval, widgetwidth, i * lineInterval);
	}

	//画实时数据
	painter.setPen(QPen(Qt::red, 1.1, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
	for (int i = 0; i < pulseData6.size() - 1; ++i)
	{
		float y1 = widgetheight - widgetheight / 2 * pulseData6.at(i) / 32678.0;
		float y2 = widgetheight - widgetheight / 2 * pulseData6.at(i + 1) / 32678.0;

		if (y1 >= widgetheight)
		{
			y1 = 235;
		}

		if (y2 >= widgetheight)
		{
			y2 = 235;
		}
		if (i == pulseData6.size() - 2)
		{
			painter.drawLine(i*zoomfactor, y1, i * zoomfactor, y1);
		}
		else
		{
			painter.drawLine(i*zoomfactor, y1, (i + 1) * zoomfactor, y2);
		}

	}

	//画擦除区域
	painter.setPen(QPen(QColor(102, 146, 27), 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin));
	painter.drawLine(count*zoomfactor, 0, count * zoomfactor, widgetheight);
	painter.fillRect(QRect(count*zoomfactor, 0, count * zoomfactor + lineInterval, widgetheight), QBrush(Qt::transparent));
}



void ThreePulseDialog::on_pushButton_open_2_clicked()
{
	emit closeport();
}

void ThreePulseDialog::on_pushButton_tiaoshi_clicked()
{
	test = new TestDialog(ui->comboBox_3->currentIndex(),this);
	connect(test, SIGNAL(sendorder(QString)), this, SLOT(sendTestOrder(QString)));
	test->exec();

}

void ThreePulseDialog::sendTestOrder(QString str)
{
	emit sendCommand(str);
}

QString ThreePulseDialog::combineAddPressCommand()
{
	QStringList gradientValueCun =ui->label_cunPre->text().split(",");
	QStringList gradientValueGuan = ui->label_guanPre->text().split(",");
	QStringList gradientValueChi = ui->label_chiPre->text().split(",");
	QString staticPressure_cun = "";//静压值
	QString staticPressure_guan = "";//静压值
	QString staticPressure_chi = "";//静压值
	QList<int> valueCun_int;//存储指令值
	QList<int> valueGuan_int;//存储指令值
	QList<int> valueChi_int;//存储指令值
	//组合压力
	for (int i = 0; i < 9; ++i)
	{
		if (i < gradientValueCun.size())
		{
			//先将压力转成16进制再转换高低字节
			QString eachValue = QString("%1").arg(gradientValueCun.at(i).toInt(), 4, 16, QLatin1Char('0'));
			bool ok = true;
			valueCun_int.append((eachValue.right(2)).toInt(&ok, 16));
			staticPressure_cun += (eachValue.right(2));
		}
		else
		{
			staticPressure_cun += "00";
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		if (i < gradientValueGuan.size())
		{
			//先将压力转成16进制再转换高低字节
			QString eachValue = QString("%1").arg(gradientValueGuan.at(i).toInt(), 4, 16, QLatin1Char('0'));
			bool ok = true;
			valueGuan_int.append((eachValue.right(2)).toInt(&ok, 16));
			staticPressure_guan += (eachValue.right(2));
		}
		else
		{
			staticPressure_guan += "00";
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		if (i < gradientValueChi.size())
		{
			//先将压力转成16进制再转换高低字节
			QString eachValue = QString("%1").arg(gradientValueChi.at(i).toInt(), 4, 16, QLatin1Char('0'));
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
	listsrc.append(119);
	if (!(gradientValueCun.size() == 1 && gradientValueCun.at(0).isEmpty()))
	{
		listsrc.append(gradientValueCun.size());
	}
	if (!(gradientValueGuan.size() == 1 && gradientValueGuan.at(0).isEmpty()))
	{
		listsrc.append(gradientValueGuan.size());
	}
	if (!(gradientValueChi.size() == 1 && gradientValueChi.at(0).isEmpty()))
	{
		listsrc.append(gradientValueChi.size());
	}
	listsrc.append(valueCun_int);
	listsrc.append(valueGuan_int);
	listsrc.append(valueChi_int);
	QString src = handleSRC(listsrc);
	QString pressNum_str_cun = "";
	QString pressNum_str_guan = "";
	QString pressNum_str_chi = "";
	if (gradientValueCun.size() == 1 && gradientValueCun.at(0).isEmpty())
	{
		pressNum_str_cun = "00";
	}
	else
	{
		pressNum_str_cun = QString("%1").arg(gradientValueCun.size(), 4, 16, QLatin1Char('0')).right(2);
	}
	if (gradientValueGuan.size() == 1 && gradientValueGuan.at(0).isEmpty())
	{
		pressNum_str_guan = "00";
	}
	else
	{
		pressNum_str_guan = QString("%1").arg(gradientValueGuan.size(), 4, 16, QLatin1Char('0')).right(2);
	}
	if (gradientValueChi.size() == 1 && gradientValueChi.at(0).isEmpty())
	{
		pressNum_str_chi = "00";
	}
	else
	{
		pressNum_str_chi = QString("%1").arg(gradientValueChi.size(), 4, 16, QLatin1Char('0')).right(2);
	}
	QString command = "aa552077" + pressNum_str_cun + staticPressure_cun + pressNum_str_guan + staticPressure_guan+
		pressNum_str_chi + staticPressure_chi+src;//最终指令结果

	return command;
}


QString ThreePulseDialog::handleSRC(QList<int> &list)
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

void ThreePulseDialog::on_pushButton_start_clicked()
{

	QString command = combineAddPressCommand();
	emit sendCommand(command);
	ui->lineEdit_command->setText(command);
}

void ThreePulseDialog::on_pushButton_stopAll_clicked()
{
	emit sendCommand("aa55027070");
	ui->lineEdit_command->setText("aa55027070");
}

void ThreePulseDialog::on_pushButton_stopcun_clicked()
{
	emit sendCommand("aa55021010");
	ui->lineEdit_command->setText("aa55021010");
}

void ThreePulseDialog::on_pushButton_stopguan_clicked()
{
	emit sendCommand("aa55022020");
	ui->lineEdit_command->setText("aa55022020");
}

void ThreePulseDialog::on_pushButton_stopchi_clicked()
{
	emit sendCommand("aa55024040");
	ui->lineEdit_command->setText("aa55024040");
}

void ThreePulseDialog::on_pushButton_cunPre_clicked()
{
	predia = new PreChooseDialog(ui->label_2->text(), ui->label_cunPre->text(), 1);
	connect(predia, SIGNAL(Sendpre(int, QString)), this, SLOT(LabelShow(int, QString)));
	predia->exec();
}

void ThreePulseDialog::on_pushButton_guanPre_clicked()
{
	predia = new PreChooseDialog(ui->label_14->text(), ui->label_guanPre->text(), 2);
	connect(predia, SIGNAL(Sendpre(int, QString)), this, SLOT(LabelShow(int, QString)));
	predia->exec();
}

void ThreePulseDialog::on_pushButton_chiPre_clicked()
{
	predia = new PreChooseDialog(ui->label_15->text(), ui->label_chiPre->text(), 3);
	connect(predia, SIGNAL(Sendpre(int, QString)), this, SLOT(LabelShow(int, QString)));
	predia->exec();
}

void ThreePulseDialog::LabelShow(int position, QString pre)
{
	if (position == 1)
	{
		ui->label_cunPre->setText(pre);
	}
	else if (position == 2)
	{
		ui->label_guanPre->setText(pre);
	}
	else if (position == 3)
	{
		ui->label_chiPre->setText(pre);
	}
}


void ThreePulseDialog::savePulse(QList<int> saveData,int Position)
{
	if (Position == 1)
	{
		QString fileName = QCoreApplication::applicationDirPath()+"/PulseData/cun_" + savePre_cun + ".txt";
		QFile data(fileName);
		if (data.open(QFile::WriteOnly | QFile::Truncate)) {
			QTextStream out(&data);
			for (int j = 0; j < saveData.size(); j++)
			{
				out << saveData.at(j) << " ";
			}
			data.close();

		}
	}
	else if (Position == 2)
	{
		QString fileName = QCoreApplication::applicationDirPath() + "/PulseData/guan_" + savePre_guan + ".txt";
		QFile data(fileName);
		if (data.open(QFile::WriteOnly | QFile::Truncate)) {
			QTextStream out(&data);
			for (int j = 0; j < saveData.size(); j++)
			{
				out << saveData.at(j) << " ";
			}
			data.close();

		}
	}
	else if (Position == 3)
	{
		QString fileName = QCoreApplication::applicationDirPath() + "/PulseData/chi_" + savePre_chi + ".txt";
		QFile data(fileName);
		if (data.open(QFile::WriteOnly | QFile::Truncate)) {
			QTextStream out(&data);
			for (int j = 0; j < saveData.size(); j++)
			{
				out << saveData.at(j) << " ";
			}
			data.close();

		}
	}
}




void ThreePulseDialog::on_comboBox_3_currentIndexChanged(int index)
{
	if (index == 0)
	{
		ui->label_21->show();
		ui->label_dongya_chi->show();
		ui->label_10->show();
		ui->label_jingya_chi->show();
		ui->label_realtime_chi->show();
		ui->label_12->show();
		ui->label_11->setText("寸部脉象：");
		ui->label_13->setText("关部脉象：");
		ui->label_12->setText("尺部脉象：");
		ui->label_2->setText("寸部压力梯度");
		ui->label_14->setText("关部压力梯度");
		ui->label_15->setText("尺部压力梯度");
		ui->label_15->show();
		ui->label_chiPre->show();
		ui->pushButton_chiPre->show();
		ui->pushButton_stopcun->setText("停止寸部加压");
		ui->pushButton_stopguan->setText("停止关部加压");
		ui->pushButton_stopchi->setText("停止尺部加压");
		ui->pushButton_stopchi->show();
	}
	else
	{
		ui->label_21->hide();
		ui->label_dongya_chi->hide();
		ui->label_10->hide();
		ui->label_jingya_chi->hide();
		ui->label_realtime_chi->hide();
		ui->label_12->hide();
		ui->label_11->setText("左手寸部：");
		ui->label_13->setText("右手寸部：");
		ui->label_2->setText("左寸压力梯度：");
		ui->label_14->setText("左寸压力梯度");
		ui->label_15->hide();
		ui->label_chiPre->hide();
		ui->pushButton_chiPre->hide();
		ui->pushButton_stopcun->setText("停止左寸加压");
		ui->pushButton_stopguan->setText("停止右寸加压");
		ui->pushButton_stopchi->hide();
	}
}

void ThreePulseDialog::caculatePulse(QList<int> pulsedata)
{
	QString filename = QCoreApplication::applicationDirPath() +"/calculate_pulse.txt";
	QFile file(filename);
	if (file.open(QFile::WriteOnly | QFile::Truncate))
	{
		QTextStream out(&file);
		for (int j = 0; j < pulsedata.size(); j++)
		{
			out << pulsedata.at(j) << " ";
		}
		file.close();
	}
	char*pluseresult = new char[1024];
	double* canshu = new double[25]{0};
	char*  ch;
	QByteArray ba = filename.toLatin1(); 
	ch = ba.data();
	int a=AnalysisMX(ch, pluseresult, canshu,100, 100, 100,32768,4, 6.6, 25);
	if (a == 1)
	{
		int mailv = canshu[22];
		ui->label_mailv->setText(QString::number(mailv));
	}
	
	if (pluseresult != NULL)
	{
		delete[]pluseresult;
		pluseresult = NULL;
	}
	if (canshu != NULL)
	{
		delete[]canshu;
		canshu = NULL;
	}

}



