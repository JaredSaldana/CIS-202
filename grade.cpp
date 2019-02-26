/*
    File: grade.cpp
    Description: P5.10
    Author: Jared Saldana
    Email: jareds6070@student.vvc.edu
*/
#include "grade.h"
#include <string>
using namespace std;

Grade::Grade()
    :grade_score("")
{}

Grade::Grade(string new_grade)
    :grade_score(new_grade)
{}

double Grade::convert_grade() const
{
    string letter_grade = grade_score;
    string letter = letter_grade.substr(0, 1);
    string sign = letter_grade.substr(1, 2);
    double grade;
    if (letter == "A")
        grade = 4;
    else if (letter == "B")
        grade = 3;
    else if (letter == "C")
        grade = 2;
    else if (letter == "D")
        grade = 1;
    else if (letter == "F")
        grade = 0;
    if (sign == "+" && letter != "A" && letter != "F")
        grade = grade + 0.3;
    else if (sign == "-" && letter != "F")
        grade = grade - 0.3;
    return grade;
}
