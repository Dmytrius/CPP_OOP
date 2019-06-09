#ifndef UNTITLED_ARTICLE_H
#define UNTITLED_ARTICLE_H

#include "Author.h"

class Article : public Author, public Date {
private:
    string title;
    int namberOfPages;
    float namberOfPapers;

public:
    Article(Person *pPerson, Date *pDate, const string &title, int namberOfPages, float namberOfPapers);

    virtual ~Article();

    const string &getTitle() const;

    void setTitle(const string &title);

    int getNamberOfPages() const;

    void setNamberOfPages(int namberOfPages);

    float getNamberOfPapers() const;

    void setNamberOfPapers(float namberOfPapers);
};

#endif