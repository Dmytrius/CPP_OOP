#include "../interfaces/Person.h"
#include <iostream>
#include "../interfaces/Date.h"

using namespace std;
Person::Person() {}
Person::Person(const string surnamePerson, const string namePerson, const Date dateBirthday) {

}

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

Person::~Person() {
    cout << "delete Person" << endl;
}


