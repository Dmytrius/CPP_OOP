#include "../interfaces/Person.h"
#include <iostream>
#include "../interfaces/Date.h"

using namespace std;

Person::Person(string surname, string name, Date date) {
    setPerson(surname, name, date);
}

void Person::setPerson(string surname, string name, Date date) {
    surname = surname;
    name = name;
    date = date;
}

void Person::getPerson() {
    cout << "Person: " << surname + " " << name <<endl;
    cout << "date birthday: ";
    date.getDate();
}