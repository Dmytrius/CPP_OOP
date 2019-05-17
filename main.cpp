#include <iostream>
#include "Date.h"

using namespace std;

int main() {

    Date date;
    int day, month, year;
    cout << "Enter day: "; cin >> day;
    cout << "Enter month: "; cin >> month;
    cout << "Enter year: "; cin >> year;
    date.setDate(day, month, year);
    date.getDate();
    return 0;
}