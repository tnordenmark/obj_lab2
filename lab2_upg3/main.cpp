#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    // Vector för objekt av typen Person
    vector<Person> Pers_vec;

    // Skapa och lägg 3 st implicit objects i vectorn Pers_vec
    Pers_vec.push_back(Person(Name("Arne", "Andersson"), Address("Storgatan 4", "83146", "Östersund"), "810512-8417", 44));
    Pers_vec.push_back(Person(Name("Beata", "Bertilsson"), Address("Esplanaden 5", "83132", "Östersund"), "610721-8216", 38));
    Pers_vec.push_back(Person(Name("Caesar", "Caligula"), Address("Kejsargatan 10", "55567", "Rom"), "141212-8415", 36));

    // Lagra menyvalet
    int menu_choice;

    do
    {
        // Visa huvudmenyn
        showMenu();
        // Hämta menyvalet
        menu_choice = menuChoice();

        // Hantera huvudmenyns olika val
        switch(menu_choice)
        {
            case 1:
                // Lägg till person
                addPerson(Pers_vec);
                break;
            case 2:
                // Skriv ut listan till skärm
                printList(Pers_vec);
                break;
            case 3:
                // Avsluta program
                cout << "Avslutar program..." << endl;
                return 0;
            default:
                // Bör inte hända, skriver felmeddelande
                invalidChoice();
        }
    // Upprepa så länge menyvalet inte är 3
    }while(menu_choice != 3);

    return 0;
}
