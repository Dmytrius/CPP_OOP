#include "../interfaces/Date.h"
#include <iostream>

using namespace std;

Date::Date(const string &date) : date(date) {}

const string &Date::getDate() const {
    return date;
}

void Date::setDate(const string &date) {
    Date::date = date;
}

Date::~Date() {

}
