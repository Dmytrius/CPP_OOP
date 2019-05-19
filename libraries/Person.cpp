#include "../interfaces/Person.h"
#include <iostream>
#include "../interfaces/Date.h"

using namespace std;

Person::Person(const string &surname, const string &name, const Date &date) : surname(surname), name(name),
                                                                              date(date) {}

const string &Person::getSurname() const {
    return surname;
}

void Person::setSurname(const string &surname) {
    Person::surname = surname;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const Date &Person::getDate() const {
    return date;
}

void Person::setDate(const Date &date) {
    Person::date = date;
}
