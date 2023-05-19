#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), m_userPage(nullptr), m_bookPage(nullptr), m_recordPage(nullptr)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitPage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DealMenu()
{
    auto str = sender()->objectName();
    do{
        if ("btn_user" == str)
        {
            ui->stackedWidget->setCurrentIndex(0);
            break;
        }
        if ("btn_book" == str)
        {
            ui->stackedWidget->setCurrentIndex(1);
            break;
        }
        if ("btn_his" == str)
        {
            ui->stackedWidget->setCurrentIndex(2);
            break;
        }
    } while (false);
}

void MainWindow::InitPage()
{
    m_userPage = new UserMgr(this);
    m_bookPage = new BookMgr(this);
    m_recordPage = new RecordMgr(this);
    ui->stackedWidget->addWidget(m_userPage);
    ui->stackedWidget->addWidget(m_bookPage);
    ui->stackedWidget->addWidget(m_recordPage);
    ui->stackedWidget->setCurrentIndex(0);

    auto l = ui->tool->children();
    for (auto it : l)
    {
        if (it->objectName().contains("btn")) {
            connect(static_cast<QPushButton*>(it), &QPushButton::clicked, this, &MainWindow::DealMenu);
        }
    }
}

