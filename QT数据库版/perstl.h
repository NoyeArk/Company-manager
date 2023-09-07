#ifndef PERSTU_H
#define PERSTU_H

#include <QObject>
#include <QSqlDatabase>

struct Person
{
    int id;
    QString name;
    QString grade;
    QString job;
    QString sex;
    int salary, work_day;
};

class PerStl : public QObject
{
    Q_OBJECT
public:
    explicit PerStl(QObject *parent = nullptr);

    static PerStl* get_sql();

    void Init();

    //查询所有员工数量
    int get_Cnt();

    //查询第几页员工
    QVector<Person> get_Page(int page, int Cnt);

    //添加员工
    bool add_per(Person);

    //删除员工
    bool del_per(int id);

    //修改员工信息
    void edit_per(Person);

    //根据id得到一个员工的信息
    Person get_per(int id);

signals:

public slots:

private:
    QSqlDatabase mydb;
    static PerStl *pstl;
};

#endif // PERSTU_H
