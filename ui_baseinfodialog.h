/********************************************************************************
** Form generated from reading UI file 'baseinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEINFODIALOG_H
#define UI_BASEINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BaseInfoDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_next;
    QPushButton *pushButton_2;

    void setupUi(QDialog *BaseInfoDialog)
    {
        if (BaseInfoDialog->objectName().isEmpty())
            BaseInfoDialog->setObjectName(QStringLiteral("BaseInfoDialog"));
        BaseInfoDialog->resize(400, 416);
        BaseInfoDialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color: rgb(207, 236, 248);\n"
"}\n"
"QLineEdit{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);}\n"
"QLabel\n"
"{font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;\n"
"}\n"
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
"}\n"
""));
        label = new QLabel(BaseInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 81, 31));
        label_2 = new QLabel(BaseInfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 130, 71, 41));
        label_3 = new QLabel(BaseInfoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 210, 61, 31));
        comboBox = new QComboBox(BaseInfoDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 210, 131, 31));
        comboBox->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        lineEdit = new QLineEdit(BaseInfoDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 60, 131, 31));
        lineEdit_2 = new QLineEdit(BaseInfoDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 140, 131, 31));
        pushButton_next = new QPushButton(BaseInfoDialog);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(40, 330, 131, 51));
        pushButton_2 = new QPushButton(BaseInfoDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 330, 121, 51));

        retranslateUi(BaseInfoDialog);

        QMetaObject::connectSlotsByName(BaseInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *BaseInfoDialog)
    {
        BaseInfoDialog->setWindowTitle(QApplication::translate("BaseInfoDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("BaseInfoDialog", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("BaseInfoDialog", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("BaseInfoDialog", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("BaseInfoDialog", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("BaseInfoDialog", "\345\245\263", Q_NULLPTR)
        );
        pushButton_next->setText(QApplication::translate("BaseInfoDialog", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("BaseInfoDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BaseInfoDialog: public Ui_BaseInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEINFODIALOG_H
