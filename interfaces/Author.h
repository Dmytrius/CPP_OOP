#ifndef UNTITLED_AUTHOR_H
#define UNTITLED_AUTHOR_H

#include "Person.h"
#include "Post.h"

class Author : public Person {
private:
    Post post;
public:
    Author();

    Author(const Person &person, const Date &dateBirthday);

    virtual ~Author();

    void getPost();

    string getAuthor();

    void setPerson(Person *pPerson);

    void setPost(Post post);

    Author(Person *pPerson);

    Author(Person *pPerson, Date *pDate);
};

#endif
