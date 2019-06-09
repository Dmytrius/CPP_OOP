#include "../interfaces/Journal.h"

Journal::Journal(const list<Article> &listArticles, int numberPages, const map<Author, Article> &authors)
        : listArticles(listArticles), numberPages(numberPages), authors(authors) {}

Journal::~Journal() {
    cout << "Deleted Journal" << endl;
}

const list<Article> &Journal::getListArticles() const {
    return listArticles;
}

void Journal::setListArticles(const list<Article> &listArticles) {
    Journal::listArticles = listArticles;
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

