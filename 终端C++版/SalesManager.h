#pragma once
#include "Person.h"

class SalesManager:public Person
{
public:
	SalesManager(int, string, string, string, int);

	virtual string get_job();
	virtual string get_grade();

	virtual void set_job(string);
	virtual void set_grade(string);

	virtual void showinfo();
private:
	string grade;
	string job;
};

