#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "name.h"
#include "address.h"
// Använder inte using namespace i headers p.g.a risk för namespacekrockar
// i större projekt

class Person
{
    private:
        // Medlemsdattribut
        Name name;
        Address address;
        std::string persNr;
        int skoNr;

    public:
        // Konstruktorer
        Person(); // Standardkonstruktor
        Person(Name n, Address a, std::string p, int s); // Överlagrad konstruktor

        // Setters
        void setName(Name n);
        void setAddress(Address a);
        void setPersNr(std::string p);
        void setSkoNr(int s);

        // Getters
        Name getName()const {return name;}
        Address getAddress()const {return address;}
        std::string getPersNr()const {return persNr;}
        int getSkoNr()const {return skoNr;}
};

#endif // PERSON_H
