#ifndef BASEINFODIALOG_H
#define BASEINFODIALOG_H

#include <QDialog>
#include "tipdialog.h"
namespace Ui {
class BaseInfoDialog;
}

class BaseInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BaseInfoDialog(QWidget *parent = 0);
    ~BaseInfoDialog();

private slots:
    void on_pushButton_next_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::BaseInfoDialog *ui;
	TipDialog*tip = NULL;
};

#endif // BASEINFODIALOG_H
