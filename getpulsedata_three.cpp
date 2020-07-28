#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "getpulsedata_three.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QMessageBox>
#include <QString>
#include <QtDebug>
#include <QMutex>
#include <QTimer>


GetPulseData_Three::GetPulseData_Three(QString portname, int bandrate, QObject *parent) : QObject(parent)
{
	m_startGetData = true;
	m_portName = portname;
	bandRate = bandrate;
    iniSerialPort();
	timer = new QTimer(this); //this 为parent类, 表示当前窗口
	connect(timer, SIGNAL(timeout()), this, SLOT(checkisUpdate())); // SLOT填入一个槽函数
	timer->start(30);
}
GetPulseData_Three::~GetPulseData_Three()
{
	if (m_serial != NULL)
	{
		m_serial->close();
		timer->stop();
	}
    
}
void GetPulseData_Three::checkisUpdate()
{
	//情况1 数据突然不上传了，检测readyReadSlot这个函数的调用情况，要是100ms没被调用，可以认为串口不上传数据
	if (checknum != 0)
	{
		Checklist.append(checknum);
	}
	if (Checklist.isEmpty())
	{
		qDebug() << "写假数据1";
		QStringList data;
		data << "aa" << "55" << "12" << "00" << "00" << "60" << "6c" << "55"
			<< "87" << "00" << "00" << "15" << "5b" << "e6" << "f3" << "00" << "00" << "bc" << "7e" << "9f" << "71";
		emit sendData(data);
	}
	if (Checklist.size() >= 5)
	{
		if (Checklist.at(Checklist.size()-1) == Checklist.at(Checklist.size() - 4))
		{
			qDebug() << "写假数据2";
				QStringList data;
				data << "aa" << "55" << "12" << "00" << "00" << "60" << "6c"<<"55"
					<<"87"<<"00"<<"00"<<"15"<<"5b"<<"e6"<<"f3"<<"00"<<"00"<<"bc"<<"7e"<<"9f"<<"71";
				emit sendData(data);
		}
	}
	if (Checklist.size() >= 300)
	{
		Checklist.clear();
	}
	//情况2 串口拔了
	QStringList portList;
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		QSerialPort serial;
		serial.setPort(info);
		portList.append(serial.portName());
	}
	if (!portList.contains(m_portName))
	{
		qDebug() << "写假数据3";
		QStringList data;
		data << "aa" << "55" << "12" << "00" << "00" << "60" << "6c" << "55"
			<< "87" << "00" << "00" << "15" << "5b" << "e6" << "f3" << "00" << "00" << "bc" << "7e" << "9f" << "71";
		emit sendData(data);
	}
}

void GetPulseData_Three::iniSerialPort()
{
    ////自动搜索可用端口
    //QStringList portList;
    //foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    //{
    //    QSerialPort serial;
    //    serial.setPort(info);
    //    if(serial.open(QIODevice::ReadWrite))
    //    {
    //        portList.push_back(serial.portName());
    //        serial.close();
    //    }
    //}
    //if(portList.empty())
    //{
    //    //QMessageBox::warning(NULL,tr("提示"), tr("没有可用端口"));
    //    return;
    //}

    m_serial = new QSerialPort(this);
    m_serial->setPortName(m_portName);//设置端口
    m_serial->open(QIODevice::ReadWrite);//打开串口
	m_serial->setBaudRate(bandRate);//设置波特率可调
    m_serial->setDataBits(QSerialPort::Data8);//设置数据位8
    m_serial->setParity(QSerialPort::OddParity); //校验位设置
    m_serial->setStopBits(QSerialPort::OneStop);//停止位设置为1
    m_serial->setFlowControl(QSerialPort::NoFlowControl);//设置为无流控制
	connect(m_serial, &QSerialPort::readyRead, this, &GetPulseData_Three::readyReadSlot);
}

void GetPulseData_Three::handleCommand(const QString &command)
{
	if (m_serial == NULL)
	{
		return;
	}
    QByteArray buf;
    StringToHex(command, buf);
    m_serial->write(buf);
}

void GetPulseData_Three::StringToHex(QString str, QByteArray &senddata) // 转换函数
{
    int hexdata,lowhexdata;
       int hexdatalen = 0;
       int len = str.length();
       senddata.resize(len/2);
       char lstr,hstr;

       for(int i=0; i<len; )
       {
           //char lstr,
           hstr=str[i].toLatin1();
           if(hstr == ' ')
           {
               i++;
               continue;
           }
           i++;
           if(i >= len)
               break;
           lstr = str[i].toLatin1();
           hexdata = ConvertHexChar(hstr);
           lowhexdata = ConvertHexChar(lstr);
           if((hexdata == 16) || (lowhexdata == 16))
               break;
           else
               hexdata = hexdata*16+lowhexdata;
           i++;
           senddata[hexdatalen] = (char)hexdata;
           hexdatalen++;
       }
       senddata.resize(hexdatalen);
}

char GetPulseData_Three::ConvertHexChar(char ch) // 中间函数
{
    if((ch >= '0') && (ch <= '9'))
          return ch-0x30;
      else if((ch >= 'A') && (ch <= 'F'))
          return ch-'A'+10;
      else if((ch >= 'a') && (ch <= 'f'))
          return ch-'a'+10;
      else return ch-ch;
}

void GetPulseData_Three::readyReadSlot()
{
	checknum++;
	if (checknum > 500)
	{
		checknum = 1;
	}
	if (!m_startGetData)
	{
		return;
	}
    static int a = 0;
    const int packageSize = 21;
    QString previousStr;

    QStringList allData;
    tempbuffer.append(m_serial->readAll());
    convertarraytostring(tempbuffer, allData);
    QVector<int> indexStart;
    for(int i = 0; i < allData.size() - 1; ++i)
    {
        if(allData.at(i) == "aa" && allData.at(i + 1) == "55")
        {
            indexStart.append(i);
        }
		if (allData.size() > i + 3)
		{
			if (allData.at(i) == "aa" && allData.at(i + 1) == "55"&&allData.at(i + 2) == "01" && allData.at(i + 3) == "ff")
			{
				emit sendError("AA 55 01 FF");
			}
			if (allData.at(i) == "aa" && allData.at(i + 1) == "55"&&allData.at(i + 2) == "01" && allData.at(i + 3) == "10")
			{
				emit sendError("AA 55 01 10");
			}
			if (allData.at(i) == "aa" && allData.at(i + 1) == "55"&&allData.at(i + 2) == "01" && allData.at(i + 3) == "11")
			{
				emit sendError("AA 55 01 11");
			}
		}

    }
    if(indexStart.empty())
    {
        return;
    }
    for(int i = 0; i < indexStart.size() - 1; ++i)
    {
        for(int j = indexStart.at(i); j < indexStart.at(i + 1); ++j)
        {
            tempbufferStr.append(allData.at(j));
        }

        if(tempbufferStr.size() != packageSize)
        {
            qDebug() << "data is wrong , packageSize < 21";
			tempbufferStr.clear();
        }
		else
		{
			mutex.lock();
			emit sendData(tempbufferStr);
			mutex.unlock();
			tempbufferStr.clear();
		}
        

    }
    tempbuffer.clear();
    for(int i = indexStart.back(); i < allData.size(); ++i)
    {
        previousStr += allData.at(i);
    }
    StringToHex(previousStr, tempbuffer);
}

void GetPulseData_Three::convertarraytostring(QByteArray &array, QStringList &result)
{
    QDataStream out(&array,QIODevice::ReadWrite);    //将字节数组读入
    while(!out.atEnd())
    {
       qint8 outChar = 0;
       out>>outChar;   //每字节填充一次，直到结束
       //十六进制的转换
       QString bufConvert = QString("%1").arg(outChar&0xFF,2,16,QLatin1Char('0'));
       result.append(bufConvert);
    }
}

void GetPulseData_Three::setPortName(QString name)
{
	m_portName = name;
}

void GetPulseData_Three::ClosePort()
{
	if (m_serial->isOpen())
	{
		m_serial->close();

	}
	timer->stop();
}