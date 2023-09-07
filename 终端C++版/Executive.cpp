#include "Executive.h"
#include <string>
#include "宏.h"

Executive::Executive(int id, string name, string sex, string grade, int day = 0):Person(id, name, sex, day) {
	job = "经理";
	this->grade = grade;
	this->salary = ExeSalry * this->work_day;
}

string Executive::get_job() { return job; }
string Executive::get_grade() { return grade; }

void Executive::set_job(string job) { this->job = job; }
void Executive::set_grade(string grade) { this->grade = grade; }

void Executive::showinfo() {
	string str = grade + job;
	cout << "职位：" << setw(17) << setiosflags(ios::left) << str;
	cout << "工资：" << salary << endl;
}