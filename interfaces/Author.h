#ifndef UNTITLED_AUTHOR_H
#define UNTITLED_AUTHOR_H

#include "Person.h"
#include "Post.h"

class Author : public Person{// TODO: agregation Post
private:

    Post *post;

public:
    Author(const Person &person, const Post &post);

    const Post &getPost() const;

    void setPost(const Post &post);
};

#endif
