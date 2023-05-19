#include "sqlmgr.h"

SqlMgr* SqlMgr::instance = nullptr;

SqlMgr::SqlMgr()
{

}

SqlMgr::~SqlMgr()
{

}

void SqlMgr::Init()
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    QString strPath = QCoreApplication::applicationDirPath()+"/db/book.db";
    qDebug() << strPath;
    m_db.setDatabaseName(strPath);
    qDebug() << m_db.open();
}

bool SqlMgr::Login(QString strUser, QString strPwd)
{
    QSqlQuery q(m_db);
    QString strSql = QString("select * from user where username='%1' and password='%2'").arg(strUser).arg(strPwd);
    bool ret = q.exec(strSql);
    if (!ret)
    {
        qDebug() << q.lastError().text();
    }
    return ret;
}

QVector<QStringList> SqlMgr::GetUsers(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql = QString("select * from user %1").arg(strCondition);
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if (!ret)
    {
        qDebug() << q.lastError().text();
    }
    else
    {
        int iCols = q.record().count();
        QStringList l;
        while (q.next())
        {
            l.clear();
            for (int i = 0; i<iCols;i++)
            {
                l << q.value(i).toString();
            }

            vec.push_back(l);
        }
    }
    return vec;
}
