#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>
#include "Date.h"
using namespace std;

class Person : public Date{
private:
    string surname;
    string name;

protected:
    Person(const string surnamePerson, const string namePerson, const Date dateBirthday);

public:
    virtual ~Person();

    const string &getSurname() const;

    void setSurname(const string &surname);

    const string &getName() const;

    void setName(const string &name);

    Person();
};

#endif
