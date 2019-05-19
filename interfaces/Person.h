#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>
#include "Date.h"
using namespace std;

class Person {
private:
    string surname;
    string name;
    Date date;

public:
    Person(const string &surname, const string &name, const Date &date);

    const string &getSurname() const;

    void setSurname(const string &surname);

    const string &getName() const;

    void setName(const string &name);

    const Date &getDate() const;

    void setDate(const Date &date);
};

#endif
