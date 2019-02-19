#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Student
{
public:
void get_name();
void add_quiz(int score);
void get_total_score();
void get_average_score();
private:
    int quiz_count;
    int total_score;
    double average_score;
};

void Student::get_name()
{
    string name;
    cout << "Enter name" << endl;
    cin >> name;
    cout << endl;
}

void Student::add_quiz(int score)
{
    cout << "enter score: " << endl;
    cin >> score;
    quiz_count++;
}

void Student:: get_average_score()
{
    average_score = total_score / quiz_count;
}

void Student:: get_total_score()
{
    cout << "Total score: " << total_score << endl;
}

int main ()
{
    Student student1;
    cout << student1.add_quiz << endl;
    cout << student1.get_name << endl;
    cout << student1.get_total_score << endl;
    cout << student1.get_average_score << endl;
return 0;
}
