#include <iostream> // cout, cin
#include "address.h"
using namespace std;

// ============
// Huvudprogram
// ============
int main()
{
    // Skapa objektet address1 mha standardkonstruktorn
    cout << "Skapar address1 mha standardkonstruktorn..." << endl;
    Address address1;

    // Sätt värden på address1
    address1.setStreet("Storgatan 40");
    address1.setPostalNo("84531");
    address1.setCity("Albylien");

    // Hämta och skriv ut värdena för address1
    cout << "Hämtar och skriver ut värdena för address1:" << endl;
    cout << address1.getStreet() << " " << address1.getPostalNo()
         << " " << address1.getCity() << endl;

    // Skapa objektet address2 mha den överlagrade konstruktorn
    cout << endl;
    cout << "Skapar address2 mha den överlagrade konstruktorn..." << endl;
    Address address2("Esplanaden 5", "76548", "Kobol");

    // Hämta och skriv ut värdena för address2
    cout << "Hämtar och skriver ut värdena för address2:" << endl;
    cout << address2.getStreet() << " " << address2.getPostalNo()
         << " " << address2.getCity() << endl;

    return 0;
}
