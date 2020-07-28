#ifndef THREEPULSEDIALOG_H
#define THREEPULSEDIALOG_H

#include <QDialog>
#include<QKeyEvent>
#include "tipdialog.h"
#include "testdialog.h"
#include "prechoosedialog.h"
class QThread;
class GetPulseData_Three;
namespace Ui {
class ThreePulseDialog;
}

class ThreePulseDialog : public QDialog
{
    Q_OBJECT

public:
	explicit ThreePulseDialog(QStringList info,QWidget *parent = 0);
    ~ThreePulseDialog();
	void setBaseInfo(QStringList info);
signals:
	void sendCommand(const QString &str);
	void closeport();
private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_open_clicked();

	void handleData(const QStringList &dataStr);

	void handleError(QString error);

    void on_pushButton_open_2_clicked();

    void on_pushButton_tiaoshi_clicked();

	void sendTestOrder(QString str);

    void on_pushButton_start_clicked();

    void on_pushButton_stopAll_clicked();

    void on_pushButton_stopcun_clicked();

    void on_pushButton_stopguan_clicked();

    void on_pushButton_stopchi_clicked();

    void on_pushButton_cunPre_clicked();

    void on_pushButton_guanPre_clicked();

    void on_pushButton_chiPre_clicked();

	void LabelShow(int position, QString pre);

    void on_comboBox_3_currentIndexChanged(int index);

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
    Ui::ThreePulseDialog *ui;
	QThread *getPulseDataThread = NULL;
	GetPulseData_Three *getPulseData = NULL;
	QVector<int> pulseData;//寸静力压
	QVector<int> pulseData2;//寸脉搏压
	QVector<int> pulseData3;//关静力压
	QVector<int> pulseData4;//关脉搏压
	QVector<int> pulseData5;//尺静力压
	QVector<int> pulseData6;//尺脉搏压
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	QStringList CaptureDataStr;
	void drawRealtimeData_cun(QPainter &painter, int widgetwidth, int widgetheight);
	void drawRealtimeData_guan(QPainter &painter, int widgetwidth, int widgetheight);
	void drawRealtimeData_chi(QPainter &painter, int widgetwidth, int widgetheight);
	QStringList saveData;
	int flag = -1;
	TipDialog *tip = NULL;
	TestDialog*test = NULL;
	QString combineAddPressCommand();
	QString handleSRC(QList<int> &list);
	PreChooseDialog*predia = NULL;
	QString savePre_cun = "";
	QString savePre_guan = "";
	QString savePre_chi = "";
	QList<int> saveData_cun;
	QList<int> saveData_guan;
	QList<int> saveData_chi;
	void savePulse(QList<int> saveData, int Position);
	QStringList Baseinfo;
	void caculatePulse(QList<int> pulsedata);//计算实时脉率
	QList<int> pulseList;//存放计算脉率的list

};

#endif // THREEPULSEDIALOG_H
