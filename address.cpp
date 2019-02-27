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
