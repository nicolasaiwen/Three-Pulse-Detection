#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QApplication>
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog w;

    w.show();

    return a.exec();
}
