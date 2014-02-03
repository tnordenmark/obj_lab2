#include <iostream> // cout, cin
#include "name.h"
using namespace std;

// ============
// Huvudprogram
// ============
int main()
{
    // Skapa objektet person1 mha standardkonstruktorn
    cout << "Skapar person1 mha standardkonstruktorn..." << endl;
    Name person1;

    // Sätt värden på person1
    person1.setFirstName("Arne");
    person1.setLastName("Andersson");

    // Hämta och skriv ut värdena för person1
    cout << "Hämtar och skriver ut värdena för person1:" << endl;
    cout << person1.getFirstName() << " " << person1.getLastName() << endl;

    // Skapa objektet person2 mha den överlagrade konstruktorn
    cout << endl;
    cout << "Skapar person2 mha den överlagrade konstruktorn..." << endl;
    Name person2("Beata", "Bertilsson");

    // Hämta och skriv ut värdena för person2
    cout << "Hämtar och skriver ut värdena för person2:" << endl;
    cout << person2.getFirstName() << " " << person2.getLastName() << endl;

    return 0;
}
