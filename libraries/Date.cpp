#include "Date.h"
#include <iostream>

using namespace std;

Date::Date(int day, int month, int year) {
    setDate(day, month, year);
}

void Date::setDate(int day, int month, int year) {
    day = day;
    month = month;
    year = year;
}

void Date::getDate() {
    cout << "Date: " << day << "." << month << "." << year << endl;
}
