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
    Grade();
    Grade(string new_grade);
    double convert_grade();
private:
    string grade_score;
};
#endif
