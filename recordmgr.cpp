#include "recordmgr.h"
#include "ui_recordmgr.h"

RecordMgr::RecordMgr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecordMgr)
{
    ui->setupUi(this);
}

RecordMgr::~RecordMgr()
{
    delete ui;
}
