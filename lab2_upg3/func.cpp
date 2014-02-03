#include <iostream> // cout, cin
#include <limits> // numeric_limits
#include "func.h"
using namespace std;

//------------------------------------------------------------------------------
// showMenu
//------------------------------------------------------------------------------
// Uppgift: Visar en huvudmeny
// Indata :
// Utdata : Menyn skrivs till skärmen
//------------------------------------------------------------------------------
void showMenu()
{
    cout << "=========================" << endl;
    cout << "        Huvudmeny" << endl;
    cout << "1. Lägg till person" << endl;
    cout << "2. Skriv info om person" << endl;
    cout << "3. Avsluta" << endl;
    cout << "=========================" << endl;
}

//------------------------------------------------------------------------------
// menuChoice
//------------------------------------------------------------------------------
// Uppgift: Hanterar menyval för en huvudmeny
// Indata :
// Utdata : menu_choice returneras som en integer
//------------------------------------------------------------------------------
int menuChoice()
{
    // Lagra menyvalet
    int menuChoice;

    // Fråga efter och läs in menyvalet med teckenverifiering
    while ((cout << "Menyval: ")
             && (!(cin >> menuChoice)
             || menuChoice < 1
             || menuChoice > 3))
    {
        invalidChoice();
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Returnera menyvalet som en integer
    return menuChoice;
}

//------------------------------------------------------------------------------
// invalidChoice
//------------------------------------------------------------------------------
// Uppgift: Skriver ut felmeddelande vid ogiltig inmatning
// Indata :
// Utdata : Funktionen skriver ut ett felmeddelande
//------------------------------------------------------------------------------
void invalidChoice()
{
    cout << "Ogiltigt val, mata in en siffra mellan 1 och 3." << endl;
}

//------------------------------------------------------------------------------
// addPerson
//------------------------------------------------------------------------------
// Uppgift: Lägger till en person i en vector
// Indata : p (Person), v (vector)
// Utdata : Funktionen lägger till en person i vectorn
//------------------------------------------------------------------------------
void addPerson(vector<Person> &v)
{
    // Skapa de objekt som behövs
    Person p;
    Name n;
    Address a;

    // Variabler för inmatad data
    string fname, lname, street, postalno, city, persnr;
    int skonr = 0;

    // Fråga efter, mata in och tilldela data till rätt objekts attribut
    cout << "Förnamn: ";
    cin >> fname;
    n.setFirstName(fname);

    cout << "Efternamn: ";
    cin >> lname;
    n.setLastName(lname);

    // Läs bort skit i tuben
    cin.get();
    cout << "Gatuadress: ";
    getline(cin, street);
    a.setStreet(street);

    cout << "Postnr: ";
    cin >> postalno;
    a.setPostalNo(postalno);

    cout << "Stad: ";
    cin >> city;
    a.setCity(city);

    cout << "Personnr: ";
    cin >> persnr;
    p.setPersNr(persnr);

    cout << "Skonr: ";
    cin >> skonr;
    p.setSkoNr(skonr);

    // Sätt Person-objektets "vanliga" variabler till rätt inmatad data
    p.setName(n);
    p.setAddress(a);

    // Lägg hela personobjektet i vectorn
    v.push_back(p);
}

//------------------------------------------------------------------------------
// printList
//------------------------------------------------------------------------------
// Uppgift: Skriver ut information om objekt i en vector
// Indata : const v (konstant vector)
// Utdata : Funktionen skriver ut informationen till skärmen
//------------------------------------------------------------------------------
void printList(vector<Person> const &v)
{
    for(size_t i = 0; 0 < v.size(); ++i)
    {
        cout << "Namn: " << v[i].getName().getFirstName() << " " << v[i].getName().getLastName() << endl;
        cout << "Gatuadress: " << v[i].getAddress().getStreet() << endl;
        cout << "Postadress: " << v[i].getAddress().getPostalNo() << " " << v[i].getAddress().getCity() << endl;
        cout << "Personnr: " << v[i].getPersNr() << endl;
        cout << "Skostorlek: " << v[i].getSkoNr() << endl << endl;
    }
}
