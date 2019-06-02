#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H

#include <iostream>
using namespace std;

class Date {

private:
    string day;
    string month;
    string year;
    string date = day + ":" + month + ":" + year;

public:
    Date(const string &date);

    const string &getDate() const;

    void setDate(const string &date);

    virtual ~Date();
};

#endif