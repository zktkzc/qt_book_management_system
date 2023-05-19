#ifndef BOOKMGR_H
#define BOOKMGR_H

#include <QWidget>

namespace Ui {
class BookMgr;
}

class BookMgr : public QWidget
{
    Q_OBJECT

public:
    explicit BookMgr(QWidget *parent = nullptr);
    ~BookMgr();

private:
    Ui::BookMgr *ui;
};

#endif // BOOKMGR_H
