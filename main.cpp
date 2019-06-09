#include <iostream>
#include <winbase.h>
#include "interfaces/Date.h"
#include "interfaces/Person.h"
#include "interfaces/Author.h"
#include "controllers/WriteFile.h"
#include "controllers/ReadFile.h"

using namespace std;

int main(int argc, char *argv[]) {
    int day;
    int month;
    int year;
    cout << "enter day: ";
    cin >> day;
    cout << "enter month: ";
    cin >> month;
    cout << "enter year: ";
    cin >> year;
    Date *date = new Date();
    date->setDay(day);
    date->setMonth(month);
    date->setYear(year);
    Person *person = new Person();
    string name;
    string surname;
    Author *author = new Author(person, date);
    cout << "enter Person info:" << endl;
    cout << "set Person name" << endl;
    cin >> name;
    person->setName(name);
    cout << "set Person surname" << endl;
    cin >> surname;
    person->setSurname(surname);
    author->setPerson(person);
    author->setPost(ASSISTENT);
    WriteFile::writeFile(person->getName() + " " + person->getSurname() + " " + "BrithDay: " + date->getDate());
    WriteFile::writeFile("Author: " + author->getName() + " " + author->getSurname() + " " + author->getDate());// + " " + author->getPost());
    return 0;
}