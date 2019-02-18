#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
public:
	Student();
	
	Student(string students_name);
	
	string get_name();
	
	void add_quiz(int score);
	
	int get_total_score();

	double get_average_score();
	
private:
	string name;
	
	int total_score;
	
	int number_of_quizzes;
	
};

#endif
