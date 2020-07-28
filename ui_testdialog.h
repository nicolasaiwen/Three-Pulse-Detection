/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestDialog
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit_cunPre;
    QPushButton *pushButton_startcun;
    QPushButton *pushButton_startcun5s;
    QPushButton *pushButton_stopfastcun;
    QPushButton *pushButton_stopslowcun;
    QPushButton *pushButton_stopcun;
    QPushButton *pushButton_fastcun5s;
    QPushButton *pushButton_slowcun5s;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QLineEdit *lineEdit_guanPre;
    QPushButton *pushButton_startguan;
    QPushButton *pushButton_startguan5s;
    QPushButton *pushButton_stopfastguan;
    QPushButton *pushButton_stopslowcun_2;
    QPushButton *pushButton_stopguan;
    QPushButton *pushButton_fastguan5s;
    QPushButton *pushButton_slowguan5s;
    QGroupBox *groupBox_4;
    QLabel *label_6;
    QLineEdit *lineEdit_chiPre;
    QPushButton *pushButton_startchi;
    QPushButton *pushButton_startchi5s;
    QPushButton *pushButton_stopfastchi;
    QPushButton *pushButton_stopslowchi;
    QPushButton *pushButton_stopchi;
    QPushButton *pushButton_fastchi5s;
    QPushButton *pushButton_slowchi5s;
    QPushButton *pushButton_close;
    QLineEdit *lineEdit_command;
    QLabel *label_7;

    void setupUi(QDialog *TestDialog)
    {
        if (TestDialog->objectName().isEmpty())
            TestDialog->setObjectName(QStringLiteral("TestDialog"));
        TestDialog->resize(1920, 1080);
        label_3 = new QLabel(TestDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1920, 1080));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(240, 240, 240,50%);"));
        label = new QLabel(TestDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(610, 90, 700, 961));
        label->setStyleSheet(QLatin1String("background-color: rgb(208, 227, 231);\n"
"border-radius:15px;"));
        label_2 = new QLabel(TestDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 90, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 14px;"));
        groupBox_2 = new QGroupBox(TestDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(640, 120, 631, 241));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:2px solid #4473c5;;\n"
"border-radius:5px;\n"
"margin-top: 2ex; \n"
"	font-family:\"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size:20px;\n"
"	color:#4473c5;\n"
"\n"
"}\n"
"QGroupBox::title {\n"
"      subcontrol-origin: margin;\n"
"       left:10px;\n"
"  }"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 50, 161, 41));
        label_4->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        lineEdit_cunPre = new QLineEdit(groupBox_2);
        lineEdit_cunPre->setObjectName(QStringLiteral("lineEdit_cunPre"));
        lineEdit_cunPre->setGeometry(QRect(170, 50, 321, 41));
        lineEdit_cunPre->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        pushButton_startcun = new QPushButton(groupBox_2);
        pushButton_startcun->setObjectName(QStringLiteral("pushButton_startcun"));
        pushButton_startcun->setGeometry(QRect(500, 50, 121, 41));
        pushButton_startcun->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_startcun5s = new QPushButton(groupBox_2);
        pushButton_startcun5s->setObjectName(QStringLiteral("pushButton_startcun5s"));
        pushButton_startcun5s->setGeometry(QRect(20, 110, 121, 41));
        pushButton_startcun5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopfastcun = new QPushButton(groupBox_2);
        pushButton_stopfastcun->setObjectName(QStringLiteral("pushButton_stopfastcun"));
        pushButton_stopfastcun->setGeometry(QRect(360, 180, 121, 41));
        pushButton_stopfastcun->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopslowcun = new QPushButton(groupBox_2);
        pushButton_stopslowcun->setObjectName(QStringLiteral("pushButton_stopslowcun"));
        pushButton_stopslowcun->setGeometry(QRect(190, 180, 121, 41));
        pushButton_stopslowcun->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopcun = new QPushButton(groupBox_2);
        pushButton_stopcun->setObjectName(QStringLiteral("pushButton_stopcun"));
        pushButton_stopcun->setGeometry(QRect(20, 180, 121, 41));
        pushButton_stopcun->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_fastcun5s = new QPushButton(groupBox_2);
        pushButton_fastcun5s->setObjectName(QStringLiteral("pushButton_fastcun5s"));
        pushButton_fastcun5s->setGeometry(QRect(360, 110, 121, 41));
        pushButton_fastcun5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_slowcun5s = new QPushButton(groupBox_2);
        pushButton_slowcun5s->setObjectName(QStringLiteral("pushButton_slowcun5s"));
        pushButton_slowcun5s->setGeometry(QRect(190, 110, 121, 41));
        pushButton_slowcun5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        label_4->raise();
        lineEdit_cunPre->raise();
        pushButton_stopfastcun->raise();
        pushButton_stopslowcun->raise();
        pushButton_stopcun->raise();
        pushButton_fastcun5s->raise();
        pushButton_slowcun5s->raise();
        pushButton_startcun->raise();
        pushButton_startcun5s->raise();
        groupBox_3 = new QGroupBox(TestDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(640, 380, 631, 241));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:2px solid #4473c5;;\n"
"border-radius:5px;\n"
"margin-top: 2ex; \n"
"	font-family:\"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size:20px;\n"
"	color:#4473c5;\n"
"\n"
"}\n"
"QGroupBox::title {\n"
"      subcontrol-origin: margin;\n"
"       left:10px;\n"
"  }"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 50, 161, 41));
        label_5->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        lineEdit_guanPre = new QLineEdit(groupBox_3);
        lineEdit_guanPre->setObjectName(QStringLiteral("lineEdit_guanPre"));
        lineEdit_guanPre->setGeometry(QRect(170, 50, 321, 41));
        lineEdit_guanPre->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        pushButton_startguan = new QPushButton(groupBox_3);
        pushButton_startguan->setObjectName(QStringLiteral("pushButton_startguan"));
        pushButton_startguan->setGeometry(QRect(500, 50, 121, 41));
        pushButton_startguan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_startguan5s = new QPushButton(groupBox_3);
        pushButton_startguan5s->setObjectName(QStringLiteral("pushButton_startguan5s"));
        pushButton_startguan5s->setGeometry(QRect(20, 110, 121, 41));
        pushButton_startguan5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopfastguan = new QPushButton(groupBox_3);
        pushButton_stopfastguan->setObjectName(QStringLiteral("pushButton_stopfastguan"));
        pushButton_stopfastguan->setGeometry(QRect(360, 180, 121, 41));
        pushButton_stopfastguan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopslowcun_2 = new QPushButton(groupBox_3);
        pushButton_stopslowcun_2->setObjectName(QStringLiteral("pushButton_stopslowcun_2"));
        pushButton_stopslowcun_2->setGeometry(QRect(190, 180, 121, 41));
        pushButton_stopslowcun_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopguan = new QPushButton(groupBox_3);
        pushButton_stopguan->setObjectName(QStringLiteral("pushButton_stopguan"));
        pushButton_stopguan->setGeometry(QRect(20, 180, 121, 41));
        pushButton_stopguan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_fastguan5s = new QPushButton(groupBox_3);
        pushButton_fastguan5s->setObjectName(QStringLiteral("pushButton_fastguan5s"));
        pushButton_fastguan5s->setGeometry(QRect(360, 110, 121, 41));
        pushButton_fastguan5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_slowguan5s = new QPushButton(groupBox_3);
        pushButton_slowguan5s->setObjectName(QStringLiteral("pushButton_slowguan5s"));
        pushButton_slowguan5s->setGeometry(QRect(190, 110, 121, 41));
        pushButton_slowguan5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        groupBox_4 = new QGroupBox(TestDialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(640, 640, 631, 241));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:2px solid #4473c5;;\n"
"border-radius:5px;\n"
"margin-top: 2ex; \n"
"	font-family:\"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size:20px;\n"
"	color:#4473c5;\n"
"\n"
"}\n"
"QGroupBox::title {\n"
"      subcontrol-origin: margin;\n"
"       left:10px;\n"
"  }"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 50, 161, 41));
        label_6->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        lineEdit_chiPre = new QLineEdit(groupBox_4);
        lineEdit_chiPre->setObjectName(QStringLiteral("lineEdit_chiPre"));
        lineEdit_chiPre->setGeometry(QRect(170, 50, 321, 41));
        lineEdit_chiPre->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        pushButton_startchi = new QPushButton(groupBox_4);
        pushButton_startchi->setObjectName(QStringLiteral("pushButton_startchi"));
        pushButton_startchi->setGeometry(QRect(500, 50, 121, 41));
        pushButton_startchi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_startchi5s = new QPushButton(groupBox_4);
        pushButton_startchi5s->setObjectName(QStringLiteral("pushButton_startchi5s"));
        pushButton_startchi5s->setGeometry(QRect(20, 110, 121, 41));
        pushButton_startchi5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopfastchi = new QPushButton(groupBox_4);
        pushButton_stopfastchi->setObjectName(QStringLiteral("pushButton_stopfastchi"));
        pushButton_stopfastchi->setGeometry(QRect(360, 180, 121, 41));
        pushButton_stopfastchi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopslowchi = new QPushButton(groupBox_4);
        pushButton_stopslowchi->setObjectName(QStringLiteral("pushButton_stopslowchi"));
        pushButton_stopslowchi->setGeometry(QRect(190, 180, 121, 41));
        pushButton_stopslowchi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_stopchi = new QPushButton(groupBox_4);
        pushButton_stopchi->setObjectName(QStringLiteral("pushButton_stopchi"));
        pushButton_stopchi->setGeometry(QRect(20, 180, 121, 41));
        pushButton_stopchi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_fastchi5s = new QPushButton(groupBox_4);
        pushButton_fastchi5s->setObjectName(QStringLiteral("pushButton_fastchi5s"));
        pushButton_fastchi5s->setGeometry(QRect(360, 110, 121, 41));
        pushButton_fastchi5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_slowchi5s = new QPushButton(groupBox_4);
        pushButton_slowchi5s->setObjectName(QStringLiteral("pushButton_slowchi5s"));
        pushButton_slowchi5s->setGeometry(QRect(190, 110, 121, 41));
        pushButton_slowchi5s->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/image/loadafter/1/xiayibuweixuanzhong.png);\n"
"border-radius: 22px;\n"
"color: rgb(24, 24, 24);\n"
"font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;}\n"
"QPushButton:focus,QPushButton:hover{\n"
"border-image: url(:/image/loadafter/tab/2/\347\273\20425.png);\n"
"}\n"
"	\n"
"QPushButton:pressed{\n"
"url(:/image/loadafter/1/xiayibuanzhong.png)\n"
"}"));
        pushButton_close = new QPushButton(TestDialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(1120, 980, 141, 61));
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
        lineEdit_command = new QLineEdit(TestDialog);
        lineEdit_command->setObjectName(QStringLiteral("lineEdit_command"));
        lineEdit_command->setGeometry(QRect(740, 900, 531, 41));
        lineEdit_command->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        lineEdit_command->setReadOnly(true);
        label_7 = new QLabel(TestDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(630, 900, 161, 41));
        label_7->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_3->raise();
        label->raise();
        label_2->raise();
        pushButton_close->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        lineEdit_command->raise();
        label_7->raise();

        retranslateUi(TestDialog);

        QMetaObject::connectSlotsByName(TestDialog);
    } // setupUi

    void retranslateUi(QDialog *TestDialog)
    {
        TestDialog->setWindowTitle(QApplication::translate("TestDialog", "Dialog", Q_NULLPTR));
        label_3->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("TestDialog", "\350\260\203\350\257\225\347\225\214\351\235\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TestDialog", "\345\257\270\351\203\250\350\260\203\350\257\225", Q_NULLPTR));
        label_4->setText(QApplication::translate("TestDialog", "\345\257\270\351\203\250\345\216\213\345\212\233\346\242\257\345\272\246\357\274\232", Q_NULLPTR));
        lineEdit_cunPre->setText(QString());
        lineEdit_cunPre->setPlaceholderText(QApplication::translate("TestDialog", "\345\216\213\345\212\233\345\200\274\344\273\216\345\244\247\345\210\260\345\260\217\346\216\222\345\210\227\357\274\214\344\273\245,\351\232\224\345\274\200\357\274\214\346\234\200\345\244\232\346\224\257\346\214\2019\344\270\252\346\242\257\345\272\246", Q_NULLPTR));
        pushButton_startcun->setText(QApplication::translate("TestDialog", "\345\274\200\345\247\213\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_startcun5s->setText(QApplication::translate("TestDialog", "\345\212\240\345\216\2135\347\247\222", Q_NULLPTR));
        pushButton_stopfastcun->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\345\277\253\346\224\276\346\260\224", Q_NULLPTR));
        pushButton_stopslowcun->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\346\205\242\346\224\276\346\260\224", Q_NULLPTR));
        pushButton_stopcun->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\346\260\224\346\263\265", Q_NULLPTR));
        pushButton_fastcun5s->setText(QApplication::translate("TestDialog", "\345\277\253\346\224\276\346\260\2245\347\247\222", Q_NULLPTR));
        pushButton_slowcun5s->setText(QApplication::translate("TestDialog", "\346\205\242\346\224\276\346\260\2245\347\247\222", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("TestDialog", "\345\205\263\351\203\250\350\260\203\350\257\225", Q_NULLPTR));
        label_5->setText(QApplication::translate("TestDialog", "\345\205\263\351\203\250\345\216\213\345\212\233\346\242\257\345\272\246\357\274\232", Q_NULLPTR));
        lineEdit_guanPre->setText(QString());
        lineEdit_guanPre->setPlaceholderText(QApplication::translate("TestDialog", "\345\216\213\345\212\233\345\200\274\344\273\216\345\244\247\345\210\260\345\260\217\346\216\222\345\210\227\357\274\214\344\273\245,\351\232\224\345\274\200\357\274\214\346\234\200\345\244\232\346\224\257\346\214\2019\344\270\252\346\242\257\345\272\246", Q_NULLPTR));
        pushButton_startguan->setText(QApplication::translate("TestDialog", "\345\274\200\345\247\213\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_startguan5s->setText(QApplication::translate("TestDialog", "\345\212\240\345\216\2135\347\247\222", Q_NULLPTR));
        pushButton_stopfastguan->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\345\277\253\346\224\276\346\260\224", Q_NULLPTR));
        pushButton_stopslowcun_2->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\346\205\242\346\224\276\346\260\224", Q_NULLPTR));
        pushButton_stopguan->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\346\260\224\346\263\265", Q_NULLPTR));
        pushButton_fastguan5s->setText(QApplication::translate("TestDialog", "\345\277\253\346\224\276\346\260\2245\347\247\222", Q_NULLPTR));
        pushButton_slowguan5s->setText(QApplication::translate("TestDialog", "\346\205\242\346\224\276\346\260\2245\347\247\222", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("TestDialog", "\345\260\272\351\203\250\350\260\203\350\257\225", Q_NULLPTR));
        label_6->setText(QApplication::translate("TestDialog", "\345\260\272\351\203\250\345\216\213\345\212\233\346\242\257\345\272\246\357\274\232", Q_NULLPTR));
        lineEdit_chiPre->setText(QString());
        lineEdit_chiPre->setPlaceholderText(QApplication::translate("TestDialog", "\345\216\213\345\212\233\345\200\274\344\273\216\345\244\247\345\210\260\345\260\217\346\216\222\345\210\227\357\274\214\344\273\245,\351\232\224\345\274\200\357\274\214\346\234\200\345\244\232\346\224\257\346\214\2019\344\270\252\346\242\257\345\272\246", Q_NULLPTR));
        pushButton_startchi->setText(QApplication::translate("TestDialog", "\345\274\200\345\247\213\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_startchi5s->setText(QApplication::translate("TestDialog", "\345\212\240\345\216\2135\347\247\222", Q_NULLPTR));
        pushButton_stopfastchi->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\345\277\253\346\224\276\346\260\224", Q_NULLPTR));
        pushButton_stopslowchi->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\346\205\242\346\224\276\346\260\224", Q_NULLPTR));
        pushButton_stopchi->setText(QApplication::translate("TestDialog", "\345\201\234\346\255\242\346\260\224\346\263\265", Q_NULLPTR));
        pushButton_fastchi5s->setText(QApplication::translate("TestDialog", "\345\277\253\346\224\276\346\260\2245\347\247\222", Q_NULLPTR));
        pushButton_slowchi5s->setText(QApplication::translate("TestDialog", "\346\205\242\346\224\276\346\260\2245\347\247\222", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("TestDialog", "\345\205\263\351\227\255", Q_NULLPTR));
        lineEdit_command->setText(QString());
        lineEdit_command->setPlaceholderText(QString());
        label_7->setText(QApplication::translate("TestDialog", "\344\270\213\345\217\221\345\221\275\344\273\244\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestDialog: public Ui_TestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
