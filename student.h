/*
    File: student.h
    Description: P5.9
    Author: Jared Saldana
    Email: jareds6070@student.vvc.edu
*/
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "grade.h"
using namespace std;

class Student
{
public:
	Student();
	Student(std::string student_name, double student_total_score, Grade student_grade);
	std::string get_name() const;
    void add_quiz(double quiz_score);
	double get_total_score() const;
	double get_average_score(int number_quizes) const;
	void add_grade(Grade new_grade);
	double get_GPA() const;
private:
	std::string name;
	double total_score;
	Grade grade;
};
#endif
