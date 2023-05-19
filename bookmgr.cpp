#include "bookmgr.h"
#include "ui_bookmgr.h"

BookMgr::BookMgr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookMgr)
{
    ui->setupUi(this);
}

BookMgr::~BookMgr()
{
    delete ui;
}
