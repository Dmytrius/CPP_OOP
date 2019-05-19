#ifndef UNTITLED_AUTHOR_H
#define UNTITLED_AUTHOR_H

#include "Person.h"
#include "Post.h"

class Author {
private:
    Person person;
    Post post;

public:
    Author(const Person &person, const Post &post);

    const Person &getPerson() const;

    void setPerson(const Person &person);

    const Post &getPost() const;

    void setPost(const Post &post);
};

#endif
