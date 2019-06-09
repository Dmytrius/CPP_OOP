
#include "../interfaces/Author.h"

Author::Author(const string &surname, const string &name, const Date &date, Post *post) : Person(surname, name, date),
                                                                                          post(post) {}

void Author::setPost1(Post *post) {
    Author::post = post;
}

Author::~Author() {

}




