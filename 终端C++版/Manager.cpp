#include "Manager.h"
#include "Person.h"
#include "Tool.h"
#include "Executive.h"
#include "SalesManager.h"
#include "SalesPeople.h"
#include "Technical.h"
#include "Array.h"
#include "宏.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

using std::cout;
using std::endl;
using std::system;
extern Array paff[LSIZE];

Manager::Manager() { Num = 0; }

ostream& operator << (ostream& out, Person& paff) {
	out << "编号：" << setw(8) << setiosflags(ios::left) << paff.id;
	out << "姓名：" << setw(10) << setiosflags(ios::left) << paff.name;
	out << "性别：" << setw(6) << setiosflags(ios::left) << paff.sex;
	return out;
}

void Manager::Init() {
	paff[0].init_length();
	paff[++Num].set_ptr(new Executive(101, "张三", "男", "副总", 23));
	paff[++Num].set_ptr(new Executive(102, "李四", "女", "总", 10));
	paff[++Num].set_ptr(new Technical(103, "王五", "男", "高级",3));
	paff[++Num].set_ptr(new SalesManager(104, "赵六", "女", "总",25));
	paff[++Num].set_ptr(new SalesPeople(105, "猪八戒", "男", "初级",23));
	paff[++Num].set_ptr(new SalesPeople(106, "玉兔精", "女", "中级",14));
}

void Manager::ShowMenu() {
	cout << endl << "*************公司员工信息管理系统*************" << endl;
	cout << "-------------0、退出系统   -------------" << endl;
	cout << "-------------1、添加员工信息-------------" << endl;
	cout << "-------------2、查询员工信息-------------" << endl;
	cout << "-------------3、显示员工信息-------------" << endl;
	cout << "-------------4、编辑员工信息-------------" << endl;
	cout << "-------------5、删除员工信息-------------" << endl;
	cout << "-------------6、统计员工信息-------------" << endl;
	cout << "-------------7、保存员工信息-------------" << endl;
	cout << "-------------8、读取员工信息-------------" << endl;
	//cout << "-------------10、测试系统-------------" << endl;
	cout << "*********************************************" << endl << endl;
	cout << "请输入您的选择：";
}

void Manager::Add() {
	system("cls");
	cout << endl << "**************员工信息添加界面**************" << endl;

	int n, id, type, grade, day;
	string sex, name, job;

	cout << endl << "请输入添加员工个数：";
	cin >> n;

	//for循环来进行n个员工的添加
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			system("cls");
			cout << endl << "**************员工信息添加界面**************" << endl;
		}
		cout << endl << "第" << i + 1 << "个员工信息：" << endl;
		cout << endl << "1->经理" << "	    2->技术人员" << "	   3->销售人员" << "	   4->销售经理" << endl;
		//得到正确的人员类别输入
		while (true) {
			cout << endl << "请选择要添加员工的人员类别：";
			type = Tool::is_number(ZERO_N);
			if (type == EXECUTIVE || type == SALESMANAGER || type == TECHNICAL || type == SALESPEOPLE)
				break;
			else cout << endl << "Warning：输入超出范围！" << endl << endl;
		}
		//根据人员类别选相应的级别
		switch (type)
		{
		case EXECUTIVE:
		case SALESMANAGER:
		{
			cout << endl << "1->总经理		" << "2->副总经理"  << endl;
			//得到正确的级别输入
			while (true) {
				cout << endl << "请选择要添加员工的职位等级：";
				grade = Tool::is_number(ZERO_N);
				if (grade == 1 || grade == 2)
					break;
				else cout << endl << "Warning：输入超出范围！" << endl << endl;
			}
			if (grade == 1) grade = ZHENG;
			else if (grade == 2)  grade = FU;
			break;
		}

		case TECHNICAL:
		case SALESPEOPLE:
		{
			cout << endl << "1->初级人员" << "	    2->中级人员" << "	   3->高级人员" << endl;
			//得到正确的级别输入
			while (true) {
				cout << endl << "请选择要添加员工的职位等级：";
				grade = Tool::is_number(ZERO_N); 
				if (grade == 1 || grade == 2 || grade == 3)
					break;
				else cout << endl << "Warning：输入超出范围！" << endl;
			}
			if (grade == 1) grade = LOW;
			else if (grade == 2) grade = MID;
			else grade = HIGH;
			break;
		}

		}

		//添加编号
		cout << endl << "请输入该员工的编号：";
		int valid_id = false;
		//得到有效的编号
		while (!valid_id) {
			id = Tool::is_number(ZERO_N);
			valid_id = paff[0].exam_id(id, paff);
			if (valid_id == false) 
				cout << endl << "Warning：该编号已有员工使用，请重新输入：";
		}

		cout << endl << "请输入该员工的姓名：";
		cin >> name;

		cout << endl << "请输入该员工的性别：";
		while (true) {
			cin >> sex;
			if (sex == "男" || sex == "女") break;
			else cout << endl << "Warning：输入错误，请输入男或女：";
		}

		cout << endl << "请输入该员工的出勤天数：";
		while (true) {
			day = Tool::is_number(ZERO_N);
			if (day >= 0 && day <= 31) break;
			else cout << endl << "Warning：输入错误，请输入1-31之间的天数：";
		}

		switch (type)
		{
		default:
			break;
		case EXECUTIVE:
			paff[++Num].set_ptr(new Executive(id, name, sex, Tool::Grade(grade), day));
			break;
		case SALESMANAGER:
			paff[++Num].set_ptr(new SalesManager(id, name, sex, Tool::Grade(grade), day));
			break;
		case SALESPEOPLE:
			paff[++Num].set_ptr(new SalesPeople(id, name, sex, Tool::Grade(grade), day));
			break;
		case TECHNICAL:
			paff[++Num].set_ptr(new Technical(id, name, sex, Tool::Grade(grade), day));
			break;
		}
		cout << endl << "=》第" << i + 1 << "个员工添加完成！" << endl << endl;
		Sleep(1000);
	}
	//Array数组长度＋1
	paff[0].set_length(1);

	system("pause");
	system("cls");
}

void Manager::Search() {
	system("cls");
	cout << endl << "**************员工信息查找界面**************" << endl;

	int* index = (int*)malloc(sizeof(int) * Num), length = 0;

	while (true) {
		if (!index) {
			cout << endl << "Warning：index数组分配空间失败！" << endl;
			exit(OVERFLOW);
		}

		cout << endl << "请选择您要检索的关键字（0：退出查询  1：编号  2：姓名  3：性别  4：职位）：";
		int key = Tool::is_number(ZERO_Y);
		if (key == BREAK) break;
		switch (key)
		{
		default:
			break;
		case ID:Tool::ManagerSearch(ID, Num, paff); break;
		case NAME:Tool::ManagerSearch(NAME, Num, paff); break;
		case SEX:Tool::ManagerSearch(SEX, Num, paff); break;
		case JOB:Tool::ManagerSearch(JOB, Num, paff); break;
		}
	}
	free(index);
	index = NULL;
	//Array::count += 2;
	system("pause");
	system("cls");
}

void Manager::Display(int COUT) {
	if (COUT) std::system("cls");
	if(COUT) cout << endl << "**************员工信息显示界面**************" << endl;
	int cnt = 1;
	for (int i = 1; i <= paff[0].get_length(); i++) {
		if (paff[i].get_ptr()->get_job() != "空") {
			cout << "记录" << cnt++ << "：";
			cout << *paff[i].get_ptr();
			paff[i].get_ptr()->showinfo();
		}
	}
	if (COUT) {
		std::system("pause");
		std::system("cls");
	}
}

void Manager::Edit() {
		int flag = 1;
	while (true) {
		if (flag) {
			system("cls");
			cout << endl << "**************员工信息编辑界面**************" << endl;
			Manager::Display(0);
			cout << endl << "请选择要修改的记录：（0：退出编辑）";
		}

		int index = Tool::is_number(ZERO_Y);
		flag = 1;
		if (index == BREAK) break; //退出编辑
		else if (index < 0 || index > Num) {
			flag = 0;
			printf("\nWarings：输入的数字不合法，请输入1-%d之间的数字：", Num);
		}
		else {
			cout << endl << "记录" << index << "：";
			cout << *paff[index].get_ptr();
			paff[index].get_ptr()->showinfo();
			int key;
			while (true) {
				cout << endl << "请输入要修改的信息（1：编号  2：姓名  3：性别  4：职位  5:级别  6:工作天数）：";
				key = Tool::is_number(ZERO_N);
				if (key < 0 || key > 6)
					printf("\nWarings：输入的数字不合法，请输入1-5之间的数字\n");
				else break;
			}
			switch (key)
			{
			default:
				break;

			case ID:Tool::ManagerEdit(ID, index, paff); break;
			case NAME:Tool::ManagerEdit(NAME, index, paff); break;
			case SEX:Tool::ManagerEdit(SEX, index, paff); break;
			case JOB:Tool::ManagerEdit(JOB, index, paff); break;
			case GRADE:Tool::ManagerEdit(GRADE, index, paff); break;
			case DAY:Tool::ManagerEdit(DAY, index, paff); break;
			}
		}
	}

	system("pause");
	system("cls");
}

void Manager::Delete() {
	/*删除功能：主要实现对已添加的人员记录进行删除。
	如果当前系统中没有相应的人员记录，则提示“记录为空！”并返回操作；
	否则，输入要删除的人员的编号或姓名，根据所输入的信息删除该人员记录，
	如果没有找到该人员信息，则提示相应的记录不存。*/
	system("cls");
	cout << endl << "**************员工信息删除界面**************" << endl << endl;
	Manager::Display(0);
	while(true) {

		cout << endl << "->请选择要删除人员的编号或姓名（0：退出删除）：";

		string input;
		cin >> input;
		if (input == "0") break; //退出删除
		else {
			Num--;
			const char* arr = input.c_str();
			int is_number = atoi(arr);

			//输入为编号
			if (is_number) {
				int id = is_number, index[2], length = 0;
				paff[0].find_id(id, paff, index, length);
				if (length) {
					paff[0].del_ele(index[1], paff);
					cout << endl << "删除成功！！！" << endl;
				}
				else cout << endl << "记录为空！" << endl;
			}

			//输入为姓名
			else {
				int* index = (int*)malloc(sizeof(int) * Num), length = 0;
				string name = input;
				paff[0].find_name(name, paff, index, length);
				if(!length) cout << endl << "记录为空！" << endl;
				else if (length == 1) {
					paff[0].del_ele(index[length], paff);
					cout << endl << "删除成功！！！" << endl;
				}
				else {
					//有重名
					cout << endl;
					for (int i = 1; i <= length; i++) {
						cout << "记录" << i << "：";
						cout << *paff[index[i]].get_ptr();
						paff[index[i]].get_ptr()->showinfo();
					}
					cout << endl << "有多条记录姓名为\"" << name << "\"，请您选择要删除的记录：";
					int number = 1;
					while (true) {
						number = Tool::is_number(ZERO_N);
						if (number < 0 || number > length) cout << endl << "Warings：输入不合法，请重新输入：";
						else break;
					}
					paff[0].del_ele(number, paff);
					cout << endl << "删除成功！！！" << endl;
					free(index);
					index = NULL;
				}
			}

		}
	}

	system("pause");
	system("cls");
}

void Manager::Stats() {
	system("cls");
	//1、统计人数	2、统计男，女，各部门人数		
	while (true) {
		cout << endl << "**************员工信息统计界面**************" << endl;

		cout << endl << "A、统计公司总人数" << endl << "B、统计各部门人数" << endl << "C、统计男女人数" << endl;
		cout << endl << "请输入一个英文字母代表您的选择（0:退出统计）：";
		char aim_input[6] = { 'A','a','B','b','C','c' };
		string input;
		cin >> input;
		if (input == "0") break;
		while (true) {
			if (input.size() > 1) {
				cout << endl << "Warning：输入错误，请重新输入一个英文字母：";
				cin >> input;
			}
			else {
				int flag = 0;
				for (int i = 0; i < 6; i++)
					if (aim_input[i] == input[0]) {
						flag = 1;
						break;
					}
				if (flag) break;
				else {
					cout << endl << "Warning：输入错误，请重新输入一个英文字母：";
					cin >> input;
				}
			}
		}
		switch (input[0])
		{
		case 'A':
		case 'a':
		{
			cout << endl << "查询结果如下：" << endl << endl << setw(8) << "	  公司总人数为：" << Num << "人" << endl;
			break;
		}
		case 'B':
		case 'b':
		{
			int exec_cnt = 0, tech_cnt = 0, salep_cnt = 0, salem_cnt = 0;
			paff[0].job_num(paff, exec_cnt, tech_cnt, salep_cnt, salem_cnt);
			cout << endl << "查询结果如下：" << endl << endl;
			cout << setw(8) << "	  经理部门总人数：" << exec_cnt << "人" << endl;
			cout << setw(8) << "	  技术人员部门总人数：" << tech_cnt << "人" << endl;
			cout << setw(8) << "	  销售人员部门总人数：" << salep_cnt << "人" << endl;
			cout << setw(8) << "	  销售经理部门总人数：" << salem_cnt << "人" << endl;
			break;
		}
		case 'C':
		case 'c':
		{
			int man = 0, woman = 0;
			paff[0].sex_num(paff, man, woman);
			cout << endl << "查询结果如下：" << endl << endl;
			cout << setw(8) << "	  女性总人数：" << woman << "人" << endl;
			cout << setw(8) << "	  男性总人数：" << man << "人" << endl;
			break;
		}
		}
		system("pause");
		system("cls");
	}

	system("pause");
	system("cls");
}

void Manager::End() {
	for (int i = 1; i <= paff[0].get_length(); i++) {
		free(paff[i].get_ptr());
		paff[i].set_ptr(NULL);
	}
}

void Manager::Save() {
	int cnt = 1;
	ofstream ofs;
	ofs.open("人员信息.txt", ios::app);
	ofs << "编号\t\t    " << "姓名\t\t" << "性别\t\t" << "级别\t\t" << "    职位\t" << "工作天数\t\t" << endl;
	for (int i = 1; i <= paff[0].get_length(); i++) {
		if (paff[i].get_ptr()->get_job() != "空") {
			ofs << setw(20) << setiosflags(ios::left) << paff[i].get_ptr()->get_id();
			ofs << setw(20) << setiosflags(ios::left) << paff[i].get_ptr()->get_name();
			ofs << setw(20) << setiosflags(ios::left) << paff[i].get_ptr()->get_sex();
			ofs << setw(20) << setiosflags(ios::left) << paff[i].get_ptr()->get_grade();
			ofs << setw(20) << setiosflags(ios::left) << paff[i].get_ptr()->get_job();
			ofs << setw(20) << setiosflags(ios::left) << paff[i].get_ptr()->get_work_day() << endl;
		}
	}
	cout << endl << "人员信息将保存在与该程序同目录下的“人员信息.txt”文件中..." << endl;
	cout << endl << "人员信息保存成功！" << endl;
	system("pause");
	system("cls");
}

void Manager::Read() {
	//cout << "Num:" << Num << endl;
	ifstream ifs;
	ifs.open("人员信息.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败！" << endl;
		return;
	}
	int cnt = 0, id, day;
	string name, job, grade, sex;
	char buf[21] = { 0 };
	while (ifs >> buf) {//1-id 2-name 3-sex 4-grade 5-job 0-work_day
		cnt++;
		if (cnt > 6) {
			switch (cnt % 6)
			{
			case 0:day = atoi(buf); break;
			case 1:id = atoi(buf); break;
			case 2:name = buf; break;
			case 3:sex = buf; break;
			case 4:grade = buf; break;
			case 5:job = buf; break;
			}
			if (cnt % 6 == 0) {
				//cout << 1111 << "name:" << name;
				if (job == "经理") paff[++Num].set_ptr(new Executive(id, name, sex, grade, day));
				else if (job == "销售经理") paff[++Num].set_ptr(new SalesManager(id, name, sex, grade, day));
				else if (job == "技术人员") paff[++Num].set_ptr(new Technical(id, name, sex, grade, day));
				else if (job == "销售人员") paff[++Num].set_ptr(new SalesPeople(id, name, sex, grade, day));
			}
		}
	}
	paff[0].set_length(cnt / 6 - 1);
	ifs.close();
	cout << endl << "人员信息读取成功！" << endl;
	system("pause");
	system("cls");
}