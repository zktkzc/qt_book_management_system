#include "mainwindow.h"

#include <QApplication>
#include "login.h"
#include "sqlmgr.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login login;

    SqlMgr::GetInstance()->Init();
    SqlMgr::GetInstance()->Login("xiaoz", "123456");

    int ret = login.exec();
    if (1 == ret)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    if (0 == ret)
    {
        exit(0);
        return 0;
    }

    return 0;
}
