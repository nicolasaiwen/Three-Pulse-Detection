#ifndef PRECHOOSEDIALOG_H
#define PRECHOOSEDIALOG_H

#include <QDialog>

namespace Ui {
class PreChooseDialog;
}

class PreChooseDialog : public QDialog
{
    Q_OBJECT

public:
	explicit PreChooseDialog(QString title,QString currentpre, int position, QWidget *parent = 0);
    ~PreChooseDialog();
signals:
	void Sendpre(int position, QString pre);
private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_sure_clicked();

private:
    Ui::PreChooseDialog *ui;
	int Position_Pre = -1;
};

#endif // PRECHOOSEDIALOG_H
