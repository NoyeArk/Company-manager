#include "Person.h"
#include "ºê.h"

Person::Person(int id, string name, string sex, int day = 0) {
	this->id = id;
	this->name = name;
	this->sex = sex;
	this->work_day = day;
}

int Person::get_id() { return id; }
int Person::get_salary() { return salary; }
int Person::get_work_day() { return work_day; }
string Person::get_name() { return name; }
string Person::get_sex() { return sex; }


void Person::set_id(int id) { this->id = id; }
void Person::set_work_day(int day = 0) { this->work_day = day; }
void Person::set_name(string name) { this->name = name; }
void Person::set_sex(string sex) { this->sex = sex; }
