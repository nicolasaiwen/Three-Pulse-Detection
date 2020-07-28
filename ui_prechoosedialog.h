/********************************************************************************
** Form generated from reading UI file 'prechoosedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRECHOOSEDIALOG_H
#define UI_PRECHOOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_PreChooseDialog
{
public:
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_close;
    QPushButton *pushButton_sure;
    QLabel *label_2;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *PreChooseDialog)
    {
        if (PreChooseDialog->objectName().isEmpty())
            PreChooseDialog->setObjectName(QStringLiteral("PreChooseDialog"));
        PreChooseDialog->resize(1920, 1080);
        label = new QLabel(PreChooseDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(760, 260, 380, 501));
        label->setStyleSheet(QLatin1String("background-color: rgb(208, 227, 231);\n"
"border-radius:15px;"));
        label_3 = new QLabel(PreChooseDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-40, -80, 1920, 1080));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(240, 240, 240,50%);"));
        pushButton_close = new QPushButton(PreChooseDialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(990, 690, 141, 61));
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 24px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_sure = new QPushButton(PreChooseDialog);
        pushButton_sure->setObjectName(QStringLiteral("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(780, 690, 141, 61));
        pushButton_sure->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 24px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        label_2 = new QLabel(PreChooseDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(780, 270, 121, 21));
        label_2->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 14px;"));
        treeWidget = new QTreeWidget(PreChooseDialog);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(770, 300, 211, 381));
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(208, 227, 231);\n"
"border-color: rgb(208, 227, 231);\n"
"font: 14pt \"\350\213\271\346\226\271 \345\270\270\350\247\204\";"));
        treeWidget->header()->setVisible(false);
        label_3->raise();
        label->raise();
        pushButton_close->raise();
        pushButton_sure->raise();
        label_2->raise();
        treeWidget->raise();

        retranslateUi(PreChooseDialog);

        QMetaObject::connectSlotsByName(PreChooseDialog);
    } // setupUi

    void retranslateUi(QDialog *PreChooseDialog)
    {
        PreChooseDialog->setWindowTitle(QApplication::translate("PreChooseDialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_3->setText(QString());
        pushButton_close->setText(QApplication::translate("PreChooseDialog", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_sure->setText(QApplication::translate("PreChooseDialog", "\347\241\256\350\256\244", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PreChooseDialog: public Ui_PreChooseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRECHOOSEDIALOG_H
