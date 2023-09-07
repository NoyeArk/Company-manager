#include "Technical.h"
#include <string>
#include "宏.h"

Technical::Technical(int id, string name, string sex, string grade, int day = 0) :Person(id, name, sex, day) {
	job = "技术人员";
	this->grade = grade;
	this->salary = TecSalry * this->work_day;
}

string Technical::get_job() { return job; }
string Technical::get_grade() { return grade; }

void Technical::set_job(string job) { this->job = job; }
void Technical::set_grade(string grade) { this->grade = grade; }

void Technical::showinfo() {
	string str = grade + job;
	cout << "职位：" << setw(17) << setiosflags(ios::left) << str;
	cout << "工资：" << salary << endl;
}