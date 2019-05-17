#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H


#include <iostream>

class Date {

private:
    int day;
    int month;
    int year;

public:
    int setDate(int i, int i1, int i2) {
        day = day;
        month = month;
        year = year;
    }

    int getDate(){
        std::cout << "Date: " << day << "." << month << "." << year;
    }
};


#endif