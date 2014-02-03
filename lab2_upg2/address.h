#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
// Använder inte using namespace i headers p.g.a risk för namespacekrockar
// i större projekt

class Address
{
    private:
        // Medlemsattribut
        std::string street;
        std::string postalno;
        std::string city;

    public:
        // Konstruktorer
        Address(); // Standardkonstruktor
        Address(std::string s, std::string p, std::string c); // Överlagrad konstruktor

        // Setters
        void setStreet(std::string s);
        void setPostalNo(std::string p);
        void setCity(std::string c);

        // Getters inline
        std::string getStreet()const {return street;}
        std::string getPostalNo()const {return postalno;}
        std::string getCity()const {return city;}
};

#endif // ADDRESS_H
