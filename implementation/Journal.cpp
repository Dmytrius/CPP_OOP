#include "../interfaces/Journal.h"

Journal::Journal(const list<Article> &listArticles, const Date &date, int numberPages,
                 const map<Author, Article> &authors) : listArticles(listArticles), date(date),
                                                        numberPages(numberPages), authors(authors) {}

const list<Article> &Journal::getListArticles() const {
    return listArticles;
}

void Journal::setListArticles(const list<Article> &listArticles) {
    Journal::listArticles = listArticles;
}

const Date &Journal::getDate() const {
    return date;
}

void Journal::setDate(const Date &date) {
    Journal::date = date;
}

int Journal::getNumberPages() const {
    return numberPages;
}

void Journal::setNumberPages(int numberPages) {
    Journal::numberPages = numberPages;
}

const map<Author, Article> &Journal::getAuthors() const {
    return authors;
}

void Journal::setAuthors(const map<Author, Article> &authors) {
    Journal::authors = authors;
}
