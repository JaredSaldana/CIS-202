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
    void set_name(string new_name);
    string get_name();
    void add_quiz(double quiz_score);
    double get_total_score();
    double get_average_score(int number_quizes);
    void add_grade(Grade new_grade);
    double get_GPA();
private:
    string name;
    double total_score;
    Grade g;
};
#endif
