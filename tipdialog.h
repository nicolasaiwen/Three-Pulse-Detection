#ifndef TIPDIALOG_H
#define TIPDIALOG_H

#include <QDialog>

namespace Ui {
class TipDialog;
}

class TipDialog : public QDialog
{
    Q_OBJECT

public:
	explicit TipDialog(QString msg,QWidget *parent = 0);
    ~TipDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TipDialog *ui;
};

#endif // TIPDIALOG_H
