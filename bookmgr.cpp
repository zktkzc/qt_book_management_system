#include "bookmgr.h"
#include "ui_bookmgr.h"

BookMgr::BookMgr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookMgr)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); // 不可编辑
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows); // 选中整行
}

BookMgr::~BookMgr()
{
    delete ui;
}
