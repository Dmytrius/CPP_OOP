#include <iostream>
#include "interfaces/Date.h"
#include "interfaces/Person.h"


using namespace std;

int main( int   argc,char *argv[] )
{
    int c;
    cin >> c;
    switch (c) {
        case 1:
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
            cout << date->getDate();
            break;
        case 2:
            cout << "enter Person info:";
            Person *person = new Person();
            cout << "";
            person->setDay(day);

            break;

    }
    return 0;
}