cmake_minimum_required(VERSION 3.14)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp libraries/Date.cpp interfaces/Date.h libraries/Person.cpp interfaces/Person.h libraries/Author.cpp interfaces/Author.h libraries/Post.cpp interfaces/Post.h libraries/Article.cpp interfaces/Article.h interfaces/Journal.cpp libraries/Journal.h)