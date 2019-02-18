#include "student.h"

Student::Student(string students_name)
{
	name = students_name;
	number_of_quizzes = 0;
	total_score = 0;
}

string Student::get_name()
{
	return name;
}

void Student::add_quiz(int score)
{
	total_score += score;
	number_of_quizzes++;
	return total_score;
}

int Student::get_total_score()
{
	return total_score;
}

double Student::get_average_score()
{
	return ((double) total_score) / number_of_quizzes;
}
