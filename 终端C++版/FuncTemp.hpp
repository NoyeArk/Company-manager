#pragma once
#include <iostream>
#include "ºê.h"
using std::string;

template <class T>
string get(T& paff, int type) {
	if (type == ID) return to_string(paff.get_ptr()->get_id());
	else if (type == NAME) return paff.get_ptr()->get_name();
	else if (type == SEX) return paff.get_ptr()->get_sex();
	else if (type == JOB) return paff.get_ptr()->get_job();
	else if (type == DAY) return to_string(paff.get_ptr()->get_work_day());
}
 
template <class T>
void set(T& paff, string input, int type) {
	if (type == ID) {
		const char* arr = input.c_str();
		paff.get_ptr()->set_id(atoi(arr));
	}
	else if (type == NAME) paff.get_ptr()->set_name(input);
	else if (type == SEX) paff.get_ptr()->set_sex(input);
	else if (type == JOB) paff.get_ptr()->set_job(input);
	else if (type == DAY) {
		const char* arr = input.c_str();
		paff.get_ptr()->set_id(atoi(arr));
	}
}