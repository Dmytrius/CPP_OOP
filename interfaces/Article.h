#ifndef UNTITLED_ARTICLE_H
#define UNTITLED_ARTICLE_H

#include "Author.h"

class Article {
private:
    Author author;
    string title;
    int namberOfPages;
    float namberOfPapers;
    Date date;

public:
    Article(const Author &author, const string &title, int namberOfPages, float namberOfPapers, const Date &date);

    const Author &getAuthor() const;

    void setAuthor(const Author &author);

    const string &getTitle() const;

    void setTitle(const string &title);

    int getNamberOfPages() const;

    void setNamberOfPages(int namberOfPages);

    float getNamberOfPapers() const;

    void setNamberOfPapers(float namberOfPapers);

    const Date &getDate() const;

    void setDate(const Date &date);
};

#endif