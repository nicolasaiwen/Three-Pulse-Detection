#ifndef GETPULSEDATA_THREE_H
#define GETPULSEDATA_THREE_H

#include <QObject>
#include <QMutex>
#include "tipdialog.h"
class QSerialPort;
extern QMutex mutex;
class QTimer;
class GetPulseData_Three : public QObject
{
    Q_OBJECT
public:
	explicit GetPulseData_Three(QString name, int bandrate, QObject *parent = 0);
	~GetPulseData_Three();
	void setPortName(QString name);
	void startGetData(bool bgetdata);
signals:
    void sendData(const QStringList &data);
    void sendshakehandsignal();
	void sendError(QString error);
public slots:
    void readyReadSlot();
    void handleCommand(const QString &command);
	void ClosePort();
	void checkisUpdate();
private:
    void iniSerialPort();
    void StringToHex(QString str, QByteArray &senddata);
    char ConvertHexChar(char ch);
    void convertarraytostring(QByteArray &array, QStringList &result);
private:
    QSerialPort *m_serial = NULL;
    bool onlyOnce = true;

    QMutex mutex;
    QByteArray tempbuffer;
    QStringList tempbufferStr;
	QString m_portName = "";
	int bandRate = -1;
	bool m_startGetData = true;
	TipDialog*tip = NULL;
	QList<int>Checklist;
	int checknum = 0;
	QTimer *timer = NULL;
};

#endif // GETPULSEDATA_H
