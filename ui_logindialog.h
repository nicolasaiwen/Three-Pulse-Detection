/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_login;
    QPushButton *pushButton_close;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(500, 500);
        LoginDialog->setStyleSheet(QLatin1String("\n"
"background-color: rgb(207, 236, 248);"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 231, 161));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/login/M1.png);"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 200, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 290, 101, 41));
        label_3->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        lineEdit = new QLineEdit(LoginDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 205, 201, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size:22px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);"));
        lineEdit_2 = new QLineEdit(LoginDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 295, 201, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);"));
        pushButton_login = new QPushButton(LoginDialog);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(70, 400, 101, 51));
        pushButton_login->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: #ffffff;\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_close = new QPushButton(LoginDialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(310, 400, 101, 51));
        pushButton_close->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: #ffffff;\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineEdit->setText(QString());
        pushButton_login->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
