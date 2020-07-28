#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "tipdialog.h"
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_login_clicked();

    void on_pushButton_close_clicked();


private:
    Ui::LoginDialog *ui;
	TipDialog*tip = NULL;
};

#endif // LOGINDIALOG_H
