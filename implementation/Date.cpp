#include "../interfaces/Date.h"
#include <iostream>
#include <sstream>

using namespace std;

Date::Date() {}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::setDay(int day) {
    if (day < 1 || day > 31) {
        cout << "incorrection date !!!";
    }
    Date::day = day;
}

void Date::setMonth(int month) {
    if (month < 1 || month > 12) {
        cout << "incorrection month !!!";
    }
    Date::month = month;
}

void Date::setYear(int year) {
    if (year < 1 || year > 2019) {
        cout << "incorrection year !!!";
    }
    Date::year = year;
}

string Date::getDate() const {
    stringstream day;
    day << getDay();
    stringstream month;
    month << getMonth();
    stringstream year;
    year << getYear();
    string date;
    date = day.str() + "." + month.str() + "." + year.str();
    return date;
}

Date::~Date() {
    cout << "delete Date" << endl;
}

