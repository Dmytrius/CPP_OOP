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

};

#endif
