#pragma once
#include "Person.h"

class Executive:public Person   //�̳�Person��
{
public:
	Executive(int, string, string, string, int);   //���캯��

	virtual string get_job();   //�õ�Ա����ְλ
	virtual string get_grade();   //�õ�Ա���ĵȼ�

	virtual void set_job(string);   //����Ա����ְλ
	virtual void set_grade(string);   //����Ա���ĵȼ�

	virtual void showinfo();   //չʾ��Ա������Ϣ
private:
	string grade;
	string job;
};