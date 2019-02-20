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
    for (int i = 0; i < number_of_grades; ++i)
	    delete all_Grades[i];
    delete all_Grades;
}

Student::Student(string students_name)
{
    this->name = students_name;
    this->number_of_grades = 0;
    this->all_Grades = new Grade*[200];
}

string Student::get_name()
{
    return name;
}

void Student::add_grade(string grade)
{
    all_Grades[number_of_grades] = new Grade(grade);
    number_of_grades++;
}

double Student::get_GPA()
{
    double GPA = 0;
    if (number_of_grades == 0)
        return -1;
    else
    {
        for (int i = 0; i < number_of_grades; ++i)
	    GPA += all_Grades[i]->get_numeric_grade();
        GPA = GPA / number_of_grades;
    }
    return GPA;
}
