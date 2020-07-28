/********************************************************************************
** Form generated from reading UI file 'threepulsedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREEPULSEDIALOG_H
#define UI_THREEPULSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ThreePulseDialog
{
public:
    QLabel *label;
    QLabel *label_realtime_cun;
    QLabel *label_realtime_guan;
    QLabel *label_realtime_chi;
    QPushButton *pushButton_close;
    QLabel *label_jingya_cun;
    QLabel *label_5;
    QLabel *label_jingya_guan;
    QLabel *label_8;
    QLabel *label_jingya_chi;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_open;
    QPushButton *pushButton_open_2;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stopcun;
    QPushButton *pushButton_stopguan;
    QPushButton *pushButton_stopchi;
    QPushButton *pushButton_stopAll;
    QPushButton *pushButton_tiaoshi;
    QLabel *label_cunPre;
    QLabel *label_guanPre;
    QLabel *label_chiPre;
    QPushButton *pushButton_cunPre;
    QPushButton *pushButton_guanPre;
    QPushButton *pushButton_chiPre;
    QLabel *label_6;
    QLabel *label_error;
    QLabel *label_19;
    QLineEdit *lineEdit_command;
    QLabel *label_dongya_cun;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_dongya_guan;
    QLabel *label_dongya_chi;
    QLabel *label_21;
    QLabel *label_7;
    QLabel *label_16;
    QLabel *label_mailv;

    void setupUi(QDialog *ThreePulseDialog)
    {
        if (ThreePulseDialog->objectName().isEmpty())
            ThreePulseDialog->setObjectName(QStringLiteral("ThreePulseDialog"));
        ThreePulseDialog->resize(1920, 1080);
        label = new QLabel(ThreePulseDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1920, 1080));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_realtime_cun = new QLabel(ThreePulseDialog);
        label_realtime_cun->setObjectName(QStringLiteral("label_realtime_cun"));
        label_realtime_cun->setGeometry(QRect(550, 70, 1300, 238));
        label_realtime_cun->setStyleSheet(QStringLiteral("border:1px solid #36d2ff;"));
        label_realtime_guan = new QLabel(ThreePulseDialog);
        label_realtime_guan->setObjectName(QStringLiteral("label_realtime_guan"));
        label_realtime_guan->setGeometry(QRect(550, 390, 1300, 238));
        label_realtime_guan->setStyleSheet(QStringLiteral("border:1px solid #36d2ff;"));
        label_realtime_chi = new QLabel(ThreePulseDialog);
        label_realtime_chi->setObjectName(QStringLiteral("label_realtime_chi"));
        label_realtime_chi->setGeometry(QRect(550, 710, 1300, 238));
        label_realtime_chi->setStyleSheet(QStringLiteral("border:1px solid #36d2ff;"));
        pushButton_close = new QPushButton(ThreePulseDialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(1720, 1000, 121, 51));
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_jingya_cun = new QLabel(ThreePulseDialog);
        label_jingya_cun->setObjectName(QStringLiteral("label_jingya_cun"));
        label_jingya_cun->setGeometry(QRect(1570, 320, 54, 20));
        label_jingya_cun->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_5 = new QLabel(ThreePulseDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1490, 320, 71, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_jingya_guan = new QLabel(ThreePulseDialog);
        label_jingya_guan->setObjectName(QStringLiteral("label_jingya_guan"));
        label_jingya_guan->setGeometry(QRect(1570, 640, 54, 20));
        label_jingya_guan->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_8 = new QLabel(ThreePulseDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1490, 640, 71, 20));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_jingya_chi = new QLabel(ThreePulseDialog);
        label_jingya_chi->setObjectName(QStringLiteral("label_jingya_chi"));
        label_jingya_chi->setGeometry(QRect(1570, 960, 54, 20));
        label_jingya_chi->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_10 = new QLabel(ThreePulseDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1490, 960, 71, 20));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_11 = new QLabel(ThreePulseDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(550, 40, 121, 21));
        label_11->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_12 = new QLabel(ThreePulseDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(550, 680, 121, 21));
        label_12->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_13 = new QLabel(ThreePulseDialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(550, 360, 121, 21));
        label_13->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        groupBox_3 = new QGroupBox(ThreePulseDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(5, 60, 531, 241));
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
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 40, 81, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(250, 40, 111, 31));
        comboBox->setStyleSheet(QLatin1String("\n"
"border-image: url(:/image/loadafter/buchong/bitibaisedise.png);\n"
""));
        pushButton_open = new QPushButton(groupBox_3);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(110, 180, 121, 51));
        pushButton_open->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_open_2 = new QPushButton(groupBox_3);
        pushButton_open_2->setObjectName(QStringLiteral("pushButton_open_2"));
        pushButton_open_2->setGeometry(QRect(290, 180, 121, 51));
        pushButton_open_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 90, 81, 31));
        label_4->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(250, 90, 111, 31));
        comboBox_2->setStyleSheet(QLatin1String("\n"
"border-image: url(:/image/loadafter/buchong/bitibaisedise.png);\n"
""));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 140, 101, 31));
        label_9->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        comboBox_3 = new QComboBox(groupBox_3);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(250, 140, 111, 31));
        comboBox_3->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 18px;\n"
"border-image: url(:/image/loadafter/buchong/bitibaisedise.png);\n"
""));
        groupBox_2 = new QGroupBox(ThreePulseDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(5, 310, 531, 661));
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
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 130, 161, 41));
        label_14->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 210, 161, 41));
        label_15->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        pushButton_start = new QPushButton(groupBox_2);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(20, 300, 141, 61));
        pushButton_start->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_stopcun = new QPushButton(groupBox_2);
        pushButton_stopcun->setObjectName(QStringLiteral("pushButton_stopcun"));
        pushButton_stopcun->setGeometry(QRect(20, 380, 141, 61));
        pushButton_stopcun->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_stopguan = new QPushButton(groupBox_2);
        pushButton_stopguan->setObjectName(QStringLiteral("pushButton_stopguan"));
        pushButton_stopguan->setGeometry(QRect(180, 380, 141, 61));
        pushButton_stopguan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_stopchi = new QPushButton(groupBox_2);
        pushButton_stopchi->setObjectName(QStringLiteral("pushButton_stopchi"));
        pushButton_stopchi->setGeometry(QRect(340, 380, 141, 61));
        pushButton_stopchi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_stopAll = new QPushButton(groupBox_2);
        pushButton_stopAll->setObjectName(QStringLiteral("pushButton_stopAll"));
        pushButton_stopAll->setGeometry(QRect(180, 300, 141, 61));
        pushButton_stopAll->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_tiaoshi = new QPushButton(groupBox_2);
        pushButton_tiaoshi->setObjectName(QStringLiteral("pushButton_tiaoshi"));
        pushButton_tiaoshi->setGeometry(QRect(20, 460, 141, 61));
        pushButton_tiaoshi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_cunPre = new QLabel(groupBox_2);
        label_cunPre->setObjectName(QStringLiteral("label_cunPre"));
        label_cunPre->setGeometry(QRect(170, 50, 321, 41));
        label_cunPre->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        label_guanPre = new QLabel(groupBox_2);
        label_guanPre->setObjectName(QStringLiteral("label_guanPre"));
        label_guanPre->setGeometry(QRect(170, 130, 321, 41));
        label_guanPre->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        label_chiPre = new QLabel(groupBox_2);
        label_chiPre->setObjectName(QStringLiteral("label_chiPre"));
        label_chiPre->setGeometry(QRect(170, 210, 321, 41));
        label_chiPre->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        pushButton_cunPre = new QPushButton(groupBox_2);
        pushButton_cunPre->setObjectName(QStringLiteral("pushButton_cunPre"));
        pushButton_cunPre->setGeometry(QRect(60, 90, 101, 31));
        pushButton_cunPre->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgb(143, 178, 186);\n"
"font: 9pt \"PingFang SC Medium\";"));
        pushButton_guanPre = new QPushButton(groupBox_2);
        pushButton_guanPre->setObjectName(QStringLiteral("pushButton_guanPre"));
        pushButton_guanPre->setGeometry(QRect(59, 170, 101, 31));
        pushButton_guanPre->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgb(143, 178, 186);\n"
"font: 9pt \"PingFang SC Medium\";"));
        pushButton_chiPre = new QPushButton(groupBox_2);
        pushButton_chiPre->setObjectName(QStringLiteral("pushButton_chiPre"));
        pushButton_chiPre->setGeometry(QRect(59, 250, 101, 31));
        pushButton_chiPre->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgb(143, 178, 186);\n"
"font: 9pt \"PingFang SC Medium\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 620, 191, 31));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_error = new QLabel(groupBox_2);
        label_error->setObjectName(QStringLiteral("label_error"));
        label_error->setGeometry(QRect(200, 610, 191, 41));
        label_error->setMaximumSize(QSize(16777215, 16777215));
        label_error->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);\n"
"}"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 530, 101, 31));
        label_19->setMaximumSize(QSize(16777215, 16777215));
        label_19->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_command = new QLineEdit(groupBox_2);
        lineEdit_command->setObjectName(QStringLiteral("lineEdit_command"));
        lineEdit_command->setGeometry(QRect(10, 560, 511, 41));
        lineEdit_command->setStyleSheet(QString::fromUtf8("padding:5px;	\n"
"font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 12px;\n"
"	color: #686868;\n"
"border-radius: 6px;\n"
"	\n"
"	border-image: url(:/image/loadafter/buchong/shexingkuang.png);"));
        lineEdit_command->setReadOnly(true);
        label_dongya_cun = new QLabel(ThreePulseDialog);
        label_dongya_cun->setObjectName(QStringLiteral("label_dongya_cun"));
        label_dongya_cun->setGeometry(QRect(1390, 320, 54, 20));
        label_dongya_cun->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_17 = new QLabel(ThreePulseDialog);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(1310, 320, 71, 20));
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_18 = new QLabel(ThreePulseDialog);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(1310, 640, 71, 20));
        label_18->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_dongya_guan = new QLabel(ThreePulseDialog);
        label_dongya_guan->setObjectName(QStringLiteral("label_dongya_guan"));
        label_dongya_guan->setGeometry(QRect(1390, 640, 54, 20));
        label_dongya_guan->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_dongya_chi = new QLabel(ThreePulseDialog);
        label_dongya_chi->setObjectName(QStringLiteral("label_dongya_chi"));
        label_dongya_chi->setGeometry(QRect(1390, 960, 54, 20));
        label_dongya_chi->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_21 = new QLabel(ThreePulseDialog);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(1310, 960, 71, 20));
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;\n"
"\n"
"}"));
        label_7 = new QLabel(ThreePulseDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 0, 501, 61));
        label_7->setStyleSheet(QString::fromUtf8("font-family: \"\350\213\271\346\226\271 \344\270\255\347\255\211\";\n"
"	font-size: 22px;"));
        label_16 = new QLabel(ThreePulseDialog);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(1650, 30, 161, 31));
        label_16->setStyleSheet(QString::fromUtf8("	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;"));
        label_mailv = new QLabel(ThreePulseDialog);
        label_mailv->setObjectName(QStringLiteral("label_mailv"));
        label_mailv->setGeometry(QRect(1810, 30, 41, 31));
        label_mailv->setStyleSheet(QString::fromUtf8("	background-color: transparent;\n"
"\n"
"	font-family: \"\350\213\271\346\226\271 \347\262\227\344\275\223\";\n"
"	font-size: 18px;\n"
"	color: #737373;"));
        label_mailv->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(ThreePulseDialog);

        QMetaObject::connectSlotsByName(ThreePulseDialog);
    } // setupUi

    void retranslateUi(QDialog *ThreePulseDialog)
    {
        ThreePulseDialog->setWindowTitle(QString());
        label->setText(QString());
        label_realtime_cun->setText(QString());
        label_realtime_guan->setText(QString());
        label_realtime_chi->setText(QString());
        pushButton_close->setText(QApplication::translate("ThreePulseDialog", "\345\205\263\351\227\255", Q_NULLPTR));
        label_jingya_cun->setText(QString());
        label_5->setText(QApplication::translate("ThreePulseDialog", "\351\235\231\345\216\213\345\200\274\357\274\232", Q_NULLPTR));
        label_jingya_guan->setText(QString());
        label_8->setText(QApplication::translate("ThreePulseDialog", "\351\235\231\345\216\213\345\200\274\357\274\232", Q_NULLPTR));
        label_jingya_chi->setText(QString());
        label_10->setText(QApplication::translate("ThreePulseDialog", "\351\235\231\345\216\213\345\200\274\357\274\232", Q_NULLPTR));
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        groupBox_3->setTitle(QApplication::translate("ThreePulseDialog", "\345\237\272\346\234\254\350\256\276\347\275\256\345\214\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("ThreePulseDialog", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("ThreePulseDialog", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_open_2->setText(QApplication::translate("ThreePulseDialog", "\345\205\263\351\227\255\344\270\262\345\217\243", Q_NULLPTR));
        label_4->setText(QApplication::translate("ThreePulseDialog", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ThreePulseDialog", "110", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "300", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "600", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "1200", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "2400", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "4800", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "9600", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "14400", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "19200", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "38400", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "56000", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "57600", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "115200", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "230400", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("ThreePulseDialog", "\346\265\213\351\207\217\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("ThreePulseDialog", "\344\270\211\351\203\250\346\250\241\345\274\217", Q_NULLPTR)
         << QApplication::translate("ThreePulseDialog", "\345\217\214\351\203\250\346\250\241\345\274\217", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("ThreePulseDialog", "\344\270\213\345\217\221\345\221\275\344\273\244\345\214\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("ThreePulseDialog", "\345\257\270\351\203\250\345\216\213\345\212\233\346\242\257\345\272\246\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("ThreePulseDialog", "\345\205\263\351\203\250\345\216\213\345\212\233\346\242\257\345\272\246\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("ThreePulseDialog", "\345\260\272\351\203\250\345\216\213\345\212\233\346\242\257\345\272\246\357\274\232", Q_NULLPTR));
        pushButton_start->setText(QApplication::translate("ThreePulseDialog", "\345\274\200\345\247\213\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_stopcun->setText(QApplication::translate("ThreePulseDialog", "\345\201\234\346\255\242\345\257\270\351\203\250\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_stopguan->setText(QApplication::translate("ThreePulseDialog", "\345\201\234\346\255\242\345\205\263\351\203\250\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_stopchi->setText(QApplication::translate("ThreePulseDialog", "\345\201\234\346\255\242\345\260\272\351\203\250\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_stopAll->setText(QApplication::translate("ThreePulseDialog", "\345\201\234\346\255\242\345\212\240\345\216\213", Q_NULLPTR));
        pushButton_tiaoshi->setText(QApplication::translate("ThreePulseDialog", "\345\205\266\345\256\203\345\221\275\344\273\244", Q_NULLPTR));
        label_cunPre->setText(QString());
        label_guanPre->setText(QString());
        label_chiPre->setText(QString());
        pushButton_cunPre->setText(QApplication::translate("ThreePulseDialog", "\351\200\211\346\213\251\345\216\213\345\212\233", Q_NULLPTR));
        pushButton_guanPre->setText(QApplication::translate("ThreePulseDialog", "\351\200\211\346\213\251\345\216\213\345\212\233", Q_NULLPTR));
        pushButton_chiPre->setText(QApplication::translate("ThreePulseDialog", "\351\200\211\346\213\251\345\216\213\345\212\233", Q_NULLPTR));
        label_6->setText(QApplication::translate("ThreePulseDialog", "\344\270\213\345\217\221\345\221\275\344\273\244\345\217\215\351\246\210\357\274\232", Q_NULLPTR));
        label_error->setText(QString());
        label_19->setText(QApplication::translate("ThreePulseDialog", "\344\270\213\345\217\221\345\221\275\344\273\244\357\274\232", Q_NULLPTR));
        lineEdit_command->setText(QString());
        label_dongya_cun->setText(QString());
        label_17->setText(QApplication::translate("ThreePulseDialog", "\345\212\250\345\216\213\345\200\274\357\274\232", Q_NULLPTR));
        label_18->setText(QApplication::translate("ThreePulseDialog", "\345\212\250\345\216\213\345\200\274\357\274\232", Q_NULLPTR));
        label_dongya_guan->setText(QString());
        label_dongya_chi->setText(QString());
        label_21->setText(QApplication::translate("ThreePulseDialog", "\345\212\250\345\216\213\345\200\274\357\274\232", Q_NULLPTR));
        label_7->setText(QString());
        label_16->setText(QApplication::translate("ThreePulseDialog", "\345\256\236\346\227\266\350\204\211\347\216\207(\346\254\241/min)\357\274\232", Q_NULLPTR));
        label_mailv->setText(QApplication::translate("ThreePulseDialog", "--", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ThreePulseDialog: public Ui_ThreePulseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREEPULSEDIALOG_H
