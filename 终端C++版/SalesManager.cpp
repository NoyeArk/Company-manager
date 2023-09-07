#include "SalesManager.h"
#include "宏.h"
#include <string>

SalesManager::SalesManager(int id, string name, string sex, string grade, int day = 0) :Person(id, name, sex, day) {
	job = "销售经理";
	this->grade = grade;
	this->salary = SaMaSalry * this->work_day;
}

string SalesManager::get_job() { return job; }
string SalesManager::get_grade() { return grade; }

void SalesManager::set_job(string job) { this->job = job; }
void SalesManager::set_grade(string grade) { this->grade = grade; }

void SalesManager::showinfo() {
	string str = grade + job;
	cout << "职位：" << setw(17) << setiosflags(ios::left) << str;
	cout << "工资：" << salary << endl;
}