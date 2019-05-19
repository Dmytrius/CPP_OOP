#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H

#include <iostream>
using namespace std;

class Date {

private:
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year);

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);
};

#endif