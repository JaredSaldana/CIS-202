#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
    Person(const string &name);
    void set_name(const string &name);
    string get_name();
private:
    string m_name;
};
#endif
