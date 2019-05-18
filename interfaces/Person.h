#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>
#include "interfaces/Date.h"

using namespace std;

class Person {
private:
    string surname;
    string name;
    Date date;

public:
    Person(string, string, Date);
    void setPerson(string surname, string name, Date date);
    void getPerson();
};


#endif //UNTITLED_PERSON_H
