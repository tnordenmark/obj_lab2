#ifndef FUNC_H
#define FUNC_H
#include <vector>
#include "person.h"

void showMenu();
int menuChoice();
void invalidChoice();
void addPerson(std::vector<Person> &v);
void printList(std::vector<Person>const &v);

#endif // FUNC_H
