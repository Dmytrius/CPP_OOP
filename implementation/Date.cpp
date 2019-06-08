#include "../interfaces/Date.h"
#include <iostream>

using namespace std;

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    while(true) {
        if (day < 1 || day > 31) {
            cout << "incorrection date !!!";
        }
        Date::day = day;
    }
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    while(true) {
        if (month < 1 || month >> 12) {
            cout << "incorrection month !!!";
        }
        Date::month = month;
    }
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    while(true) {
        if (year < 1 || year >> 2019) {
            cout << "incorrection year !!!";
        }
        Date::year = year;
    }
}
