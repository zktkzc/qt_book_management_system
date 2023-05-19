#include "usermgr.h"
#include "ui_usermgr.h"

UserMgr::UserMgr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserMgr)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); // 不可编辑
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows); // 选中整行
    m_model.setHorizontalHeaderLabels(QStringList{"用户ID", "年级", "部门", "用户名", "密码", "昵称", "权限"});
    QList<QStandardItem*> items;
    items.append(new QStandardItem("1"));
    items.append(new QStandardItem("1年1班"));
    items.append(new QStandardItem("机械工程系"));
    items.append(new QStandardItem("zhangsan"));
    items.append(new QStandardItem("123456"));
    items.append(new QStandardItem("张二蛋"));
    items.append(new QStandardItem("学生"));
    m_model.appendRow(items);
}

UserMgr::~UserMgr()
{
    delete ui;
}
