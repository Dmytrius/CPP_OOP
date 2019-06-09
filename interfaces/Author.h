#ifndef UNTITLED_AUTHOR_H
#define UNTITLED_AUTHOR_H

#include "Person.h"
#include "Post.h"

class Author : public Person{
private:

    Post *post;
public:
    virtual ~Author();

public:
    void setPost1(Post *post);

public:
    Author(const string &surname, const string &name, const Date &date, Post *post);

public:
    Author(const Person &person, const Post &post);

    const Post &getPost() const;

    void setPost(const Post &post);
};

#endif
