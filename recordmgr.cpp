#include "recordmgr.h"
#include "ui_recordmgr.h"

RecordMgr::RecordMgr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecordMgr)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); // 不可编辑
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows); // 选中整行
}

RecordMgr::~RecordMgr()
{
    delete ui;
}
