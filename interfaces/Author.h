#ifndef UNTITLED_AUTHOR_H
#define UNTITLED_AUTHOR_H


#include "Person.h"
#include "Post.h"

class Author {
private:
    Person person;
    Post post;

public:
    Author(Person, Post);

};


#endif //UNTITLED_AUTHOR_H