#include "pch.h"
#include "Header.h"
#include "global.h"
#include "student.h"

student::student() {
	exam = 0;
	mean = 0;
	median = 0;
	gradeMean = 0;
	gradeMedian = 0;
	id_name = "no name";
	vector<float>nd{ 0 };
	id_surname = "no surname";
};
student::student(string s_id_name, string s_id_surname, float s_gradeMean, float s_gradeMedian) {
	id_name = s_id_name;
	gradeMean = s_gradeMean;
	id_surname = s_id_surname;
	gradeMedian = s_gradeMedian;
};

student::student(string new_id_name, string new_id_surname, vector<float>new_nd, float new_exam) {
	nd = new_nd;
	exam = new_exam;
	id_name = new_id_name;
	id_surname = new_id_surname;
};

student::student(const student& original) {
	nd = original.nd;
	exam = original.exam;
	id_name = original.id_name;
	gradeMean = original.gradeMean;
	id_surname = original.id_surname;
	gradeMedian = original.gradeMedian;
};

istream& operator>>(istream& input, student& set_data) {

	set_data.setDataMean();
	set_data.setDataMedian();
	set_data.setDataGradeMean();
	set_data.setDataGradeMedian();

	return input;
};

ostream& operator<<(ostream& output, const student& set_data) {


	if (option == 3) {
		output << fixed << setprecision(2) << "\t" << set_data.id_name << "\t" << set_data.id_surname << "\t" << set_data.gradeMean << endl;
	}
	if (option == 4) {
		output << fixed << setprecision(2) << "\t" << set_data.id_name << "\t" << set_data.id_surname << "\t" << set_data.gradeMedian << endl;
	}
	if (option == 5)
	{
		//output << fixed << setprecision(2) << setw(15) << left << set_data.id_name << setw(15) << set_data.id_surname << setw(15) << "" << set_data.gradeMean << setw(15) << "" << set_data.gradeMedian << endl;
		output << fixed << setprecision(2) << set_data.id_name << "\t" << set_data.id_surname << "\t" << set_data.gradeMean << "\t" << set_data.gradeMedian << "\n";
	}
	if (option == 7)
	{
		output << fixed << setprecision(2) << set_data.id_name << "\t" << set_data.id_surname << "\t" << set_data.gradeMean << "\n";
	}
	return output;
};


void prtintrez()
{
	cout << "" << setw(5) << "Vardas" << setw(10) << "" << setw(4) << "Pavarde"
		<< setw(15) << "" << setw(10) << "Galutinis (Vid.)" << " / " << "Galutinis (Med.)" << endl;
	cout << "--------------------------------------------------------------------------" << endl;

};

void prtint_Less()
{
	cout << "\n\n" << setw(5) << "Vardas" << setw(10) << "" << setw(4) << "Pavarde"
		<< setw(15) << "" << setw(10) << "Galutinis (Vid. < 5)" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
};
void prtint_Up()
{
	cout << "\n\n" << setw(5) << "Vardas" << setw(10) << "" << setw(4) << "Pavarde"
		<< setw(15) << "" << setw(10) << "Galutinis (Vid. >= 5)" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
};


float checknd(float nd)
{
	if (nd < 0 || nd > 10) {
		throw runtime_error("\nIvesta namu darbu reikme negali but maziau uz 0 ir daugiau uz 10\n");
	}
	return nd;
};

float checkex(float ex) {
	if (ex < 0 || ex > 10) {
		throw runtime_error("\nIvesta eksamino reikme negali but maziau uz 0 ir daugiau uz 10\n");
	}
	return ex;
};


void student::setDataMean() {
	mean = 0;
	float sum = 0;

	for (auto& a : nd) {
		sum = sum + a;
	}
	mean = sum / nd.size();
};

void student::setDataMedian() {

	median = 0;
	int size = nd.size();

	sort(nd.begin(), nd.end());

	if (size % 2 != 0) {
		median = nd.at(size / 2);
	}
	else {
		median = (nd.at(size / 2 - 1) + nd.at(size / 2)) / 2;
	}
};

float student::setDataGradeMean() {
	setDataMean();
	gradeMean = ((mean * 0.4) + (exam * 0.6));
	return gradeMean;
};

float student::setDataGradeMedian() {
	setDataMedian();
	gradeMedian = ((median * 0.4) + (exam * 0.6));
	return gradeMedian;
};
bool maziau(const student& x, const student& y)
{
	return x.get_gradeMean() < y.get_gradeMean();
}
bool surname(const student& x, const student& y)
{
	return x.get_name() < y.get_name();
}
bool lygu5(student& x) { return x.get_gradeMean() >= separ; };