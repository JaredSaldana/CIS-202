/*
    File: grade.h
    Description: P5.10
    Author: Jared Saldana
    Email: jareds6070@student.vvc.edu
*/
#ifndef GRADE_H
#define GRADE_H
#include <string>
using namespace std;

class Grade
{
public:
    Grade(string grade);
    double get_numeric_grade();
    string get_named_grade();
private:
    string named_grade;
    double numeric_grade;
    double convert_named_to_numeric(string grade);
};
#endif
