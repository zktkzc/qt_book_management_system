#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "usermgr.h"
#include "bookmgr.h"
#include "recordmgr.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void InitPage();
    void DealMenu();

private:
    Ui::MainWindow *ui;
    UserMgr *m_userPage;
    BookMgr *m_bookPage;
    RecordMgr *m_recordPage;
};
#endif // MAINWINDOW_H
