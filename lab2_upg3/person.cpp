#include "person.h"

Person::Person()
{
    persNr = "";
    skoNr = 0;
}

Person::Person(Name n, Address a, std::string p, int s)
{
    name = n;
    address = a;
    persNr = p;
    skoNr = s;
}

// Setters
void Person::setName(Name n)
{
    name = n;
}

void Person::setAddress(Address a)
{
    address = a;
}

void Person::setPersNr(std::string p)
{
    persNr = p;
}

void Person::setSkoNr(int s)
{
    skoNr = s;
}
