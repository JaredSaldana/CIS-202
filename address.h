#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include <vector>
#include "person.h"
using namespace std;

class Address
{
public:
    Address(const string &street, const string &city, const string &state, const string &zip);
    void set_street(const string &street);
    void set_city(const string &city);
    void set_state(const string &state);
    void set_zip(const string &zip);
    string get_street();
    string get_city();
    string get_state();
    string get_zip();
private:
    string m_street;
    string m_city:
    string m_state;
    string m_zip;
    vector<Person*> m_persons;
}

#endif
