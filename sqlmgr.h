#ifndef SQLMGR_H
#define SQLMGR_H

#include <QString>
#include <QtSql/QSqlDatabase>
#include <QCoreApplication>
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QStringList>
#include <QVector>
#include <QSqlRecord>

class SqlMgr
{
public:
    SqlMgr();
    ~SqlMgr();

    static SqlMgr* instance;

    static SqlMgr* GetInstance()
    {
        if (nullptr == instance) {
            instance = new SqlMgr();
        }
        return instance;
    }

    void Init();

    // 登录
    bool Login(QString strUser, QString strPwd);
    // 获取所有用户
    QVector<QStringList> GetUsers(QString strCondition = "");
    // 添加用户
    void AddUser(QVector<QString>);
    // 删除用户
    void DeleteUser(QString strId);
    // 获取所有的图书
    QVector<QStringList> GetBooks(QString strCondition = "");
    // 增加图书
    void AddBooks(QVector<QStringList>);
    // 修改图书
    void UpdateBooks(QStringList);
    // 删除图书
    void DeleteBooks(QString strId);
    // 归还图书
    void ReturnBook(QString strUserId, QString strBookId);
    // 图书借阅
    void BorrowBook(QString strUserId, QString strBookId);
    // 获取借阅记录
    QVector<QStringList> GetRecords(QString strCondition="");
    // 清空借阅记录
    QString CleatRecords();

private:
    QSqlDatabase m_db;
};

#endif // SQLMGR_H
