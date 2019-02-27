#include "address.h"
#include <string>
using namespace std;

Address::Address(const string &street,)
    :m_street(street), 
{}

void Address::set_street(tring &street)
{
    m_street = street;
}

string Address::get_street()
{
    return m_street:
}

void Address::add_person(Person *p)
{
    m_person.push_back(p);
}

string Address::to_string()
{
    string ret = string("Street: ") + m_street + "\n" 
        + "City: " + m_city + "\n"
        + "State: " + m_state + "\n"
        + "Zip: " + m+zip + "\n"
        + "Occupants: ";
    for(int i=0; i<m_persons.siz(); i++)
        ret += m_persons[i]->to_string();
}
