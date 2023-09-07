#pragma once
#include <iostream>
#include "宏.h"
#include "Array.h"
using std::string;
using std::cout;
using std::cin;
class Tool
{
public:
	static int First(string);

	static int judge_job(string);  //将职位转化为对应的宏
	static int judge_grade(string);  //将等级转化为对应的宏

	static int is_number(int);  //判断用户的输入是否为数字

	static int judge_inputjob(string job);  //判断用户输入的职位是否合法
	static int judge_inputgrade(string grade, Array p);  //判断用户输入的等级是否合法

	static void ManagerSearch(int, int, Array[]);   //不同信息的查找综合在一个函数
	static void ManagerEdit(int, int, Array[]);   //不同信息的编辑综合在一个函数

	static string Grade(int);   //将对应等级的宏转化为字符串
};

