#include <iostream>
#include "interfaces/Date.h"
#include "interfaces/Person.h"
#include "interfaces/Author.h"
#include "Article.h"

using namespace std;

int main(int argc, char*argv[]) {

    while(true) {
        int day, month, year;
        cout << "Enter day: "; cin >> day;
        cout << "Enter month: "; cin >> month;
        cout << "Enter year: "; cin >> year;
        Date date(day, month, year);
        date.getDate();
        Person person(string name, string surname, Date date);
        Author author() = new Author(person, post);
        Article article() = new Article(author, title, namberOfPages, namberOfPappers, date);
        system("pause");
    }
}