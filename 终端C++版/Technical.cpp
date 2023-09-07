#include "Technical.h"
#include <string>
#include "��.h"

Technical::Technical(int id, string name, string sex, string grade, int day = 0) :Person(id, name, sex, day) {
	job = "������Ա";
	this->grade = grade;
	this->salary = TecSalry * this->work_day;
}

string Technical::get_job() { return job; }
string Technical::get_grade() { return grade; }

void Technical::set_job(string job) { this->job = job; }
void Technical::set_grade(string grade) { this->grade = grade; }

void Technical::showinfo() {
	string str = grade + job;
	cout << "ְλ��" << setw(17) << setiosflags(ios::left) << str;
	cout << "���ʣ�" << salary << endl;
}