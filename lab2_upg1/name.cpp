#include <string>
#include "name.h"
using namespace std;

// Konstruktorer
Name::Name()
{
    firstName = "";
    lastName = "";
}

Name::Name(string fn, string ln)
{
    firstName = fn;
    lastName = ln;
}

// Setters
void Name::setFirstName(string fn)
{
    firstName = fn;
}

void Name::setLastName(string ln)
{
    lastName = ln;
}
