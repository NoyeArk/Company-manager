#pragma once
#include <iomanip>
#include <iostream>
#include "Object.h"
using namespace std;
class Person:public Object
{
	friend ostream& operator << (ostream& out, Person& paff);

public:
	Person(int, string, string, int);

	virtual int get_id();  //得到员工的编号
	virtual int get_salary();  //得到员工的工资
	virtual int get_work_day();  //得到员工的工作天数
	virtual string get_name();  //得到员工的姓名
	virtual string get_sex();  //得到员工的性别


	virtual void set_id(int);  //更新员工的编号
	virtual void set_work_day(int);  //更新员工的工作天数
	virtual void set_name(string);  //更新员工的姓名
	virtual void set_sex(string);  //更新员工的性别

protected:
	int id;//编号
	string name;//姓名
	string sex;//性别
	int work_day;//工作天数
	int salary;//工资
};

