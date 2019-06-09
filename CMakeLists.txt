cmake_minimum_required(VERSION 3.14)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp implementation/Date.cpp
        interfaces/Date.h
        implementation/Person.cpp interfaces/Person.h
        implementation/Author.cpp interfaces/Author.h  interfaces/Post.h
        implementation/Article.cpp
        interfaces/Article.h implementation/Journal.cpp interfaces/Journal.h
        controllers/File.cpp controllers/File.h
        )