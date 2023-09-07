#include "SalesPeople.h"
#include <string>
#include "宏.h"

SalesPeople::SalesPeople(int id, string name, string sex, string grade, int day = 0) :Person(id, name, sex, day) {
	job = "销售人员";
	this->grade = grade;
	this->salary = SaPeSalry * this->work_day;
}

string SalesPeople::get_job() { return job; }
string SalesPeople::get_grade() { return grade; }

void SalesPeople::set_job(string job) { this->job = job; }
void SalesPeople::set_grade(string grade) { this->grade = grade; }

void SalesPeople::showinfo() {
	string str = grade + job;
	cout << "职位：" << setw(17) << setiosflags(ios::left) << str;
	cout << "工资：" << salary << endl;
}