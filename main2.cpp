#include <iostream>
#include "person.h"
#include "address.h"
#include <string>
using namespace std;

int main()
{
    Person p1("Kazuchika Okada");
    Person *p2 = new Person("Pikachu");
    
    Address *a = new Address("100 Slate St. ", "Bedrock", "California", "99999");
    
    a->add_person(&p1):
    a->add_person(p2);
    p2 = new Person("Jibanyan");
    a->add_person(p2);
    a->add_person(new Person("Freddy Fazbear"));
}
