#include "Tool.h"
#include <string>
#include "FuncTemp.hpp"

int Tool::First(string input) {
	if (input == "1") return 1;
	else if (input == "2") return 2;
	else if (input == "3") return 3;
	else if (input == "4") return 4;
	else if (input == "5") return 5;
	else if (input == "6") return 6;
	else if (input == "7") return 7;
	else if (input == "8") return 8;
	else if (input == "10") return 10;
	else return 0;
}

int Tool::judge_job(string job) {
	if (job == "经理") return EXECUTIVE;
	else if (job == "技术人员") return TECHNICAL;
	else if (job == "销售人员") return SALESPEOPLE;
	else return SALESMANAGER;
}

int Tool::judge_grade(string grade) {
	if (grade == "总级") return ZHENG;
	else if (grade == "副级") return FU;
	else if (grade == "初级") return LOW;
	else if (grade == "中级") return MID;
	else if (grade == "高级") return HIGH;
	else return false;
}

int Tool::is_number(int zero) {
	string input;
	cin >> input;
	int number = 0;
	while (!number) { //检测输入是否为数字
		const char* arr = input.c_str();
		number = atoi(arr);
		/*一共分为两种：
		1、number可以为0
			a、输入不合法导致为0
			b、输入为数字0
			c、输入为整数，合法
		2、number不能为0
			a、输入不合法*/
		if (zero == ZERO_Y) {
			if (input != "0" && number == 0) {
				cout << endl << "Warings：输入不合法，请重新输入：";
				cin >> input;
			}
			else if (input == "0" && number == 0) return BREAK;
		}
		else if (zero == ZERO_N && !number) {
			cout << endl << "Warings：输入不合法，请重新输入：";
			cin >> input;
		}
	}
	return number;
}

int Tool::judge_inputjob(string job) {
	if (job == "经理" || job == "技术人员" || job == "销售人员" || job == "销售经理")
		return true;
	return false;
}

int Tool::judge_inputgrade(string grade, Array p) {
	if (Tool::judge_grade(grade) == false)
		return true;
}

void Tool::ManagerSearch(int type, int n, Array p[]) {
	while (true) {
		string input;
		int* index = (int*)malloc(sizeof(int) * n), length = 0, id;
		switch (type)
		{
		case ID:cout << endl << "请输入您要查找人员的编号(输入0可重新选择关键字)："; break;
		case NAME:cout << endl << "请输入您要查找人员的姓名(输入0可重新选择关键字)："; break;
		case SEX:cout << endl  << "请输入您要查找人员的性别(输入0可重新选择关键字)："; break;
		case JOB:cout << endl << "请输入您要查找人员的职位(输入0可重新选择关键字)："; break;
		}
		if (type == ID) {
			id = Tool::is_number(ZERO_Y);
			if (id == -1) return;
		}
		else {
			cin >> input;
			if (input == "0") return;
		}
		switch (type)
		{
		case ID:p[0].find_id(id, p, index, length); break;
		case NAME:p[0].find_name(input, p, index, length); break;
		case SEX:p[0].find_sex(input, p, index, length);; break;
		case JOB:p[0].find_job(input, p, index, length);; break;
		}
		for (int i = 1; i <= length; i++) {
			cout << *p[index[i]].get_ptr();
			p[index[i]].get_ptr()->showinfo();
		}
		if (!length) {
			switch (type)
			{
			case ID:cout << endl << "Warning：您输入的编号为" << id << "的员工不存在！" << endl; break;
			case NAME:cout << endl << "Warning：您输入的姓名为" << input << "的员工不存在！" << endl; break;
			case SEX :cout << endl << "Warning：您输入的性别为" << input << "的员工不存在！" << endl; break;
			case JOB :cout << endl << "Warning：您输入的职位为" << input << "的员工不存在！" << endl; break;
			}
		}
		free(index);
		index = NULL;
	}
	return;
}

void Tool::ManagerEdit(int type, int index, Array p[]) {
	string input;
	char arr[5][5] = { "占位", "编号","姓名", "性别", "职位" };
	int id;
	switch (type)
	{
	case ID:cout << endl << "请输入修改后的编号："; break;
	case NAME:cout << endl << "请输入修改后的姓名："; break;
	case SEX:cout << endl << "请输入修改后的性别："; break;
	case JOB:cout << endl << "请输入修改后的职位："; break;
	case DAY:cout << endl << "请输入修改后的工作天数："; break;
	}

	while (true) {
		if (type == ID) {
			id = Tool::is_number(ZERO_Y);
			input = to_string(id);
		}
		else if (type == ID) {
			while (true) {
				id = Tool::is_number(ZERO_Y);
				if (id >= 0 || id <= 31) break;
				else cout << "Warning：输入错误，请输入1-31之间的天数：";
			}
				
			input = to_string(id);
		}
		else 
			cin >> input;
		if (get(p[index], type) == input)
			cout << endl << "Warning：不能与原信息相同，请重新输入：";
		else if(type == ID && p[0].exam_id(id, p) == false) 
			cout << endl << "Warning：该编号已有员工使用，请重新输入：";
		else break;
	}
	set(p[index], input, type);
	cout << endl << "->该信息修改成功！" << endl;
	return;
}


string Tool::Grade(int grade) {
	switch (grade)
	{
	case LOW:return "初级";
	case MID:return "中级";
	case HIGH:return "高级";
	case ZHENG:return "总级";
	case FU:return "副级";
	}
}