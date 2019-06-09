#include "../interfaces/Article.h"

using namespace std;

Article::Article(Person *pPerson, Date *pDate, const string &title, int namberOfPages, float namberOfPapers) : Author(
        pPerson, pDate), title(title), namberOfPages(namberOfPages), namberOfPapers(namberOfPapers) {}

Article::~Article() {
    cout << "Deleted Article" << endl;
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

