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
    Date(int, int, int);
    void setDate(int i, int i1, int i2);
    void getDate();
};


#endif