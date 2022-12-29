#pragma once
#include "Header.h"

class student {
	string id_name;
	string id_surname;
	vector<float>nd;
	float exam;
	float mean;
	float median;
	float gradeMean;
	float gradeMedian;
public:
	void Set_name(string a) {
		id_name = a;
	}
	string get_name() const {
		return id_name;
	}
	void Set_surname(string c) {
		id_surname = c;
	}
	string get_surname() const {
		return id_surname;
	}
	void Set_gradeMean(float b) {
		gradeMean = b;
	}
	float get_gradeMean() const {
		return gradeMean;
	}

	student();
	student(string s_id_name, string s_id_surname, float s_gradeMean, float s_gradeMedian);
	student(string new_id_name, string new_id_surname, vector<float>new_nd, float new_exam);
	student(const student& original);

	void setDataMean();
	void setDataMedian();
	float setDataGradeMean();
	float setDataGradeMedian();
	friend istream& operator>>(istream& input, student& set_data);
	friend ostream& operator<<(ostream& output, const student& set_data);
	~student() {};
};

void prtintrez();
void prtint_Up();
void prtint_Less();
float checknd(float nd);
float checkex(float ex);
bool maziau(const student& x, const student& y);
bool lygu5(student& x);
