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

	virtual int get_id();  //�õ�Ա���ı��
	virtual int get_salary();  //�õ�Ա���Ĺ���
	virtual int get_work_day();  //�õ�Ա���Ĺ�������
	virtual string get_name();  //�õ�Ա��������
	virtual string get_sex();  //�õ�Ա�����Ա�


	virtual void set_id(int);  //����Ա���ı��
	virtual void set_work_day(int);  //����Ա���Ĺ�������
	virtual void set_name(string);  //����Ա��������
	virtual void set_sex(string);  //����Ա�����Ա�

protected:
	int id;//���
	string name;//����
	string sex;//�Ա�
	int work_day;//��������
	int salary;//����
};

