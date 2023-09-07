#include "Array.h"
#include "Tool.h"

Array::Array() {
	p = NULL;
}

void Array::set_ptr(Person* ptr) { p = ptr; }

void Array::set_length(int num) { length += num; real_length += num; }
int Array::get_length() { return length; }
void Array::init_length() { 
	real_length = length = 6; 
}

Person* Array::get_ptr() { return p; }

int Array::exam_id(int id, Array p[]) {
	for (int i = 1; i < this->length; i++)
		if (p[i].get_ptr()->get_job() != "空")
			if (id == p[i].p->get_id()) 
				return false;
	return true;
}

void Array::find_id(int id, Array p[], int index[], int& count) {
	for (int i = 1; i <= this->length; i++)
		if (p[i].get_ptr()->get_job() != "空")
			if (id == p[i].p->get_id()) {
				index[++count] = i;
				return;
			}
}

void Array::find_name(string name, Array p[], int index[], int& count) {
	for (int i = 1; i <= this->length; i++)
		if (p[i].get_ptr()->get_job() != "空")
			if (name == p[i].p->get_name()) index[++count] = i;
}

void Array::find_sex(string sex, Array p[], int index[], int& count) {
	for (int i = 1; i <= this->length; i++)
		if (p[i].get_ptr()->get_job() != "空")
			if (sex == p[i].p->get_sex()) index[++count] = i;
}

void Array::find_job(string job, Array p[], int index[], int& count) {
	for (int i = 1; i <= this->length; i++)
		if(p[i].get_ptr()->get_job() != "空")
			if (job == p[i].p->get_job()) index[++count] = i;
}

void Array::del_ele(int index, Array p[]) {
	p[index].get_ptr()->set_job("空");
	real_length--;
}

void Array::job_num(Array p[], int& e, int& t, int& sp, int& sm) {
	string job;
	for (int i = 1; i <= this->length; i++) {
		int job = Tool::judge_job(p[i].get_ptr()->get_job());
		switch (job)
		{
		default:
			break;
		case EXECUTIVE:e++; break;
		case TECHNICAL:t++; break;
		case SALESPEOPLE:sp++; break;
		case SALESMANAGER:sm++; break;
		}
	}
}

void Array::sex_num(Array p[], int& m, int& w) {
	for (int i = 1; i <= this->length; i++) {
		if (p[i].get_ptr()->get_job() != "空") {
			if (p[i].get_ptr()->get_sex() == "男") m++;
			else w++;
		}
	}
}

Array::~Array() {

}