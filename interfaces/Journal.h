#ifndef UNTITLED_JOURNAL_H
#define UNTITLED_JOURNAL_H

#include <list>
#include <map>
#include "Article.h"

class Journal : public Date {
private:
    list <Article> listArticles;
    int numberPages;
    map <Author, Article> authors;
public:
    Journal(const list<Article> &listArticles, int numberPages, const map<Author, Article> &authors);

    virtual ~Journal();

    const list<Article> &getListArticles() const;

    void setListArticles(const list<Article> &listArticles);

    int getNumberPages() const;

    void setNumberPages(int numberPages);

    const map<Author, Article> &getAuthors() const;

    void setAuthors(const map<Author, Article> &authors);
};

#endif
