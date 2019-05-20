#include <iostream>
#include "interfaces/Date.h"
#include "interfaces/Person.h"
#include "interfaces/Author.h"
#include "interfaces/Article.h"

using namespace std;

int main(int argc, char *argv[]) {

    cout << "Enter number for action: " << endl;
    cout << "Press 1 for enter date: " << endl;
    cout << "Press 2 for enter Person: " << endl;
    cout << "Press 3 for enter Author: " << endl;
    cout << "Press 4 for enter Post: " << endl;
    cout << "Press 5 for enter Journal: " << endl;
    int button;
    cin >> button;
    switch (button) {
        case 1: {
            cout << "Please enter date: ";
            int day, month, year;
            cout << "Enter day: ";
            cin >> day;
            cout << "Enter month: ";
            cin >> month;
            cout << "Enter year: ";
            cin >> year;
            Date *date = new Date(day, month, year);
        }
        case 2: {

        }
        case 3: {

        }
        case 4: {

        }
        case 5: {

        }
    }
}