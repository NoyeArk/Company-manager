#include "perstl.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

PerStl::PerStl(QObject *parent) : QObject(parent)
{
    Init();
}

PerStl* PerStl::pstl = nullptr;

PerStl *PerStl::get_sql()
{
    if(!pstl)
        pstl = new PerStl;
    return pstl;
}

//数据库连接初始化
void PerStl::Init()
{
    mydb = QSqlDatabase::addDatabase("QMYSQL");
    mydb.setHostName("localhost");//设置主机名
    mydb.setPort(3306);//设置端口号
    mydb.setDatabaseName("paff");//设置数据库名称
    mydb.setUserName("root");//用户名
    mydb.setPassword("1234");//密码
    bool ok = mydb.open();
    if (ok){
//        QMessageBox::information(nullptr, "infor", "success");
    }
    else {
        QMessageBox::information(nullptr, "infor", "open failed");
        qDebug() << "error open database because" << mydb.lastError().text();
    }
}

//得到员工总数
int PerStl::get_Cnt()
{
    QSqlQuery query=QSqlQuery(mydb);
    query.exec("select * from work");
    return query.size();
}

//得到所有员工的信息
QVector<Person> PerStl::get_Page(int page, int Cnt)
{
    QVector<Person> v;
    QSqlQuery query = QSqlQuery(mydb);
    QString command = QString("SELECT * FROM work ORDER BY id LIMIT %1 %2").arg((page - 1) * Cnt).arg(Cnt);
    QString str = QString("select * from work order by id limit %1 offset %2").arg(Cnt).arg((page - 1) * Cnt);
    query.exec(str);
    Person p;
    qDebug() << query.next() << endl;
    while(query.next())
    {
        p.id = query.value(0).toInt();
        p.name = query.value(1).toString();
        p.sex = query.value(2).toString();
        p.grade = query.value(3).toString();
        p.job = query.value(4).toString();
        p.work_day = query.value(5).toInt();
        p.salary = query.value(6).toInt();

        v.push_back(p);
    }
    return v;
}

//添加一个员工
bool PerStl::add_per(Person demo)
{
    QSqlQuery query=QSqlQuery(mydb);
    QString command = QString("INSERT INTO work VALUES (%1,'%2','%3','%4','%5',%6,%7)")
            .arg(demo.id).arg(demo.name).arg(demo.sex).arg(demo.grade).arg(demo.job).arg(demo.work_day).arg(demo.salary);
    query.exec(command);
}

//根据ID删除一个员工
bool PerStl::del_per(int id)
{
    QSqlQuery query=QSqlQuery(mydb);
    QString command = QString("DELETE FROM work WHERE id = %1").arg(id);
    return query.exec(command);
}

//编辑一个员工信息
void PerStl::edit_per(Person demo)
{
    QSqlQuery query=QSqlQuery(mydb);
    QString command = QString("UPDATE work SET NAME='%1',sex='%2',grade='%3',job='%4',work_day=%5,salary=%6 WHERE id=%7;")
            .arg(demo.name).arg(demo.sex).arg(demo.grade).arg(demo.job).arg(demo.work_day).arg(demo.salary).arg(demo.id);
    query.exec(command);
}

//根据ID得到一个员工信息
Person PerStl::get_per(int id)
{
    QSqlQuery query=QSqlQuery(mydb);
    QString command = QString("SELECT * FROM work where id = %1").arg(id);
    query.exec(command);
    Person p;
    while(query.next())
    {
        p.id = query.value(0).toInt();
        p.name = query.value(1).toString();
        p.sex = query.value(2).toString();
        p.grade = query.value(3).toString();
        p.job = query.value(4).toString();
        p.work_day = query.value(5).toInt();
        p.salary = query.value(6).toInt();
    }
    return p;
}
