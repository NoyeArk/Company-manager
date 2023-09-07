#pragma once
#include "Person.h"

class Executive:public Person   //继承Person类
{
public:
	Executive(int, string, string, string, int);   //构造函数

	virtual string get_job();   //得到员工的职位
	virtual string get_grade();   //得到员工的等级

	virtual void set_job(string);   //更新员工的职位
	virtual void set_grade(string);   //更新员工的等级

	virtual void showinfo();   //展示该员工的信息
private:
	string grade;
	string job;
};