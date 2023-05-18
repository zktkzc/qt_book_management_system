#include "mainwindow.h"

#include <QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login login;
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
