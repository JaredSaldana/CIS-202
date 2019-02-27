/*
    File: student.cpp
    Description: P5.9
    Author: Jared Saldana
    Email: jareds6070@student.vvc.edu
*/
#include "student.h"
#include <string>
using namespace std;

Student::Student()
{
    total_score = 0;
}

void Student::set_name(string new_name)
{
    name = new_name;
}

string Student::get_name()
{
    return name;
}

void Student::add_quiz(double quiz_score)
{
    total_score = total_score + quiz_score;
}

double Student::get_total_score()
{
    return total_score;
}

double Student::get_average_score(int number_quizes)
{
    double average = (total_score * 1.0) / number_quizes;
    return average;
}

void Student::add_grade(Grade new_grade)
{
    grade = new_grade;
}

double Student::get_GPA()
{
    return grade.convert_grade();
}
