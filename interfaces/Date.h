#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H

#include <iostream>
using namespace std;

class Date {

private:
    int day;
    int month;
    int year;
protected:
    int getDay() const;
    int getMonth() const;
    int getYear() const;
public:
    Date();

    virtual ~Date();

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    string getDate() const;
};

#endif