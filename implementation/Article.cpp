#include "../interfaces/Article.h"

Article::Article(const Author &author, const string &title, int namberOfPages, float namberOfPapers, const Date &date)
        : author(author), title(title), namberOfPages(namberOfPages), namberOfPapers(namberOfPapers), date(date) {}

const Author &Article::getAuthor() const {
    return author;
}

void Article::setAuthor(const Author &author) {
    Article::author = author;
}

const string &Article::getTitle() const {
    return title;
}

void Article::setTitle(const string &title) {
    Article::title = title;
}

int Article::getNamberOfPages() const {
    return namberOfPages;
}

void Article::setNamberOfPages(int namberOfPages) {
    Article::namberOfPages = namberOfPages;
}

float Article::getNamberOfPapers() const {
    return namberOfPapers;
}

void Article::setNamberOfPapers(float namberOfPapers) {
    Article::namberOfPapers = namberOfPapers;
}

const Date &Article::getDate() const {
    return date;
}

void Article::setDate(const Date &date) {
    Article::date = date;
}
