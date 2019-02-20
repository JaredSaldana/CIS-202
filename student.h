/*
    File: student.h
    Description: P5.9
    Author: Jared Saldana
    Email: jareds6070@student.vvc.edu
*/
#ifndef STUDENT_H
#define STUDENT_H
#include "grade.h"
#include <string>

class Student
{
public:
    Student();
    Student(string students_name);
    string get_name();
    void add_grade(string grade);
    double get_GPA();
private:
    string name;
    Grade** all_Grades;
    int number_of_grades;	
};
#endif
