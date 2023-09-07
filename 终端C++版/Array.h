#pragma once

#include "Person.h"
#include "宏.h"

class Array
{
public:
	Array();

	void set_length(int);	//设置存储的人员的个数
	int get_length();	//得到存储的人员的个数
	void init_length();	//初始化存储的人员的个数

	void set_ptr(Person*);	//设置每一个存储单元的指针具体类型
	Person* get_ptr();	//得到每一个存储单元的指针

	int exam_id(int, Array[]);	//检查编号是否重复

	void find_id(int, Array[], int[], int&);//查找指定编号的员工
	void find_name(string, Array[], int[], int&);//查找指定姓名的员工
	void find_sex(string, Array[], int[], int&);//查找指定性别的员工
	void find_job(string, Array[], int[], int&);//查找指定职位的员工

	void del_ele(int, Array[]);	//在数组中删除一个员工
	void job_num(Array[], int&, int&, int&, int&);//统计不同职位员工个数
	void sex_num(Array[], int&, int&);	//统计不同性别员工个数

	~Array();

protected:
	int length;
	int real_length;
	Person* p;
};

