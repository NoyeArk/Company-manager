#pragma once
#include <iostream>
using std::string;
class Object
{
public:
	virtual void showinfo() = 0;

	virtual int get_id() = 0;
	virtual int get_salary() = 0;
	virtual int get_work_day() = 0;
	virtual string get_name() = 0;
	virtual string get_sex() = 0;
	virtual string get_job() = 0;
	virtual string get_grade() = 0;

	virtual void set_id(int) = 0;
	virtual void set_work_day(int) = 0;
	virtual void set_name(string) = 0;
	virtual void set_sex(string) = 0;
	virtual void set_job(string) = 0;

};

