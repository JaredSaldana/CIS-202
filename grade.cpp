/*
    File: grade.cpp
    Description: P5.10
    Author: Jared Saldana
    Email: jareds6070@student.vvc.edu
*/
#include "grade.h"
#include <string>
using namespace std;

Grade::Grade(string grade);
{
    this->named_grade = grade;
    this->numeric_grade = convert_named_to_numeric(new_grade);
}

double Grade::get_numeric_grade()
{
    return numeric_grade;
}

string Grade::get_named_grade();
{
    return named_grade;
}

double Grade::convert_named_to_numeric(string grade)
{
    double n, decimal;
    if (grade[1] == '+')
        decimal = 0.3;
    else if (grade[1] == '-')
        decimal = -0.3;
    else
        decimal = 0;
	
    switch (grade[0])
    {
    case 'A': n = 4;
        break;
    case 'B': n = 3;
        break;
    case 'C': n = 2;
        break;
    case 'D': n = 1;
        break;
    default: n = 0;
        break;
    }
    return n + decimal;
}
