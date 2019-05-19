
#include "../interfaces/Author.h"

Author::Author(const Person &person, const Post &post) : person(person), post(post) {}

const Person &Author::getPerson() const {
    return person;
}

void Author::setPerson(const Person &person) {
    Author::person = person;
}

const Post &Author::getPost() const {
    return post;
}

void Author::setPost(const Post &post) {
    Author::post = post;
}
