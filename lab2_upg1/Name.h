#ifndef NAME_H
#define NAME_H

class Name
{
    private:
        // Medlemsattribut
        string firstName;
        string lastName;

    public:
        // Konstruktorer
        Name(); // Standardkonstruktor
        Name(string fn, string ln); // Överlagrad konstruktor

        // Setters
        void setFirstName();
        void setLastName();

        // Getters
        const string getFirstName();
        const string getLastName();
}

#endif // NAME_H
