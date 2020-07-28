/********************************************************************************
** Form generated from reading UI file 'tipdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPDIALOG_H
#define UI_TIPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TipDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *TipDialog)
    {
        if (TipDialog->objectName().isEmpty())
            TipDialog->setObjectName(QStringLiteral("TipDialog"));
        TipDialog->resize(1920, 1080);
        label = new QLabel(TipDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(694, 379, 531, 321));
        label->setStyleSheet(QLatin1String("background-color: rgb(208, 227, 231);\n"
"border-radius:15px;"));
        label_2 = new QLabel(TipDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(730, 440, 451, 91));
        label_2->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 28px;"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(TipDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(900, 620, 131, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: #ffffff;\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 28px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        label_3 = new QLabel(TipDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1920, 1080));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(240, 240, 240,50%);"));
        label_3->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();

        retranslateUi(TipDialog);

        QMetaObject::connectSlotsByName(TipDialog);
    } // setupUi

    void retranslateUi(QDialog *TipDialog)
    {
        TipDialog->setWindowTitle(QApplication::translate("TipDialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("TipDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TipDialog: public Ui_TipDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPDIALOG_H
