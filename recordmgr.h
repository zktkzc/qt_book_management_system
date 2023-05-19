#ifndef RECORDMGR_H
#define RECORDMGR_H

#include <QWidget>

namespace Ui {
class RecordMgr;
}

class RecordMgr : public QWidget
{
    Q_OBJECT

public:
    explicit RecordMgr(QWidget *parent = nullptr);
    ~RecordMgr();

private:
    Ui::RecordMgr *ui;
};

#endif // RECORDMGR_H
