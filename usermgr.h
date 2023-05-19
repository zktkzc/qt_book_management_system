#ifndef USERMGR_H
#define USERMGR_H

#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class UserMgr;
}

class UserMgr : public QWidget
{
    Q_OBJECT

public:
    explicit UserMgr(QWidget *parent = nullptr);
    ~UserMgr();

private:
    Ui::UserMgr *ui;
    QStandardItemModel m_model;
};

#endif // USERMGR_H
