#ifndef UNTITLED_JOURNAL_H
#define UNTITLED_JOURNAL_H

using namespace std;

#include <list>
#include <map>
#include "Article.h"

class Journal {
private:
    list<Article> listArticles;
    Date date;
    int numberPages;
    map <Author, Article> authors;
public:
    Journal(const list<Article> &listArticles, const Date &date, int numberPages, const map<Author, Article> &authors);
    const list<Article> &getListArticles() const;
    void setListArticles(const list<Article> &listArticles);
    const Date &getDate() const;
    void setDate(const Date &date);
    int getNumberPages() const;
    void setNumberPages(int numberPages);
    const map<Author, Article> &getAuthors() const;
    void setAuthors(const map<Author, Article> &authors);
};
#endif
