#include <string>
#include "address.h"
using namespace std;

// Konstruktorer
Address::Address()
{
    street = "";
    postalno = "";
    city = "";
}

Address::Address(string s, string p, string c)
{
    street = s;
    postalno = p;
    city = c;
}

// Setters
void Address::setStreet(string s)
{
    street = s;
}

void Address::setPostalNo(string p)
{
    postalno = p;
}

void Address::setCity(string c)
{
    city = c;
}
