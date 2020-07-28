#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>

namespace Ui {
class TestDialog;
}

class TestDialog : public QDialog
{
    Q_OBJECT

public:
	explicit TestDialog(int mode,QWidget *parent = 0);
    ~TestDialog();

signals:
	void sendorder(QString str);

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_startcun5s_clicked();

    void on_pushButton_slowcun5s_clicked();

    void on_pushButton_fastcun5s_clicked();

    void on_pushButton_stopcun_clicked();

    void on_pushButton_stopslowcun_clicked();

    void on_pushButton_stopfastcun_clicked();

    void on_pushButton_startguan5s_clicked();

    void on_pushButton_slowguan5s_clicked();

    void on_pushButton_fastguan5s_clicked();

    void on_pushButton_stopguan_clicked();

    void on_pushButton_stopslowcun_2_clicked();

    void on_pushButton_stopfastguan_clicked();

    void on_pushButton_startchi5s_clicked();

    void on_pushButton_slowchi5s_clicked();

    void on_pushButton_fastchi5s_clicked();

    void on_pushButton_stopchi_clicked();

    void on_pushButton_stopslowchi_clicked();

    void on_pushButton_stopfastchi_clicked();

    void on_pushButton_startguan_clicked();

    void on_pushButton_startchi_clicked();

    void on_pushButton_startcun_clicked();

private:
    Ui::TestDialog *ui;
	QString combineAddPressCommand(QStringList text, int position);//position 1,2,3代表寸关尺
	QString handleSRC(QList<int> &list);
};

#endif // TESTDIALOG_H
