#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(const string &name)
{
    set_name(name);
}

void Person::set_name(const string &name)
{
    m_name = name;
}
