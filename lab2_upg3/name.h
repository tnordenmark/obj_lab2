#ifndef NAME_H
#define NAME_H
#include <string>
// Använder inte using namespace i headers p.g.a risk för namespacekrockar
// i större projekt

class Name
{
    private:
        // Medlemsattribut
        std::string firstName;
        std::string lastName;

    public:
        // Konstruktorer
        Name(); // Standardkonstruktor
        Name(std::string fn, std::string ln); // Överlagrad konstruktor

        // Setters
        void setFirstName(std::string fn);
        void setLastName(std::string ln);

        // Getters inline
        std::string getFirstName()const {return firstName;}
        std::string getLastName()const {return lastName;}
};

#endif // NAME_H
