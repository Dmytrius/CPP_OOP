#ifndef UNTITLED_EXCEPTION_H
#define UNTITLED_EXCEPTION_H
#include <string>

class Exception
{
private:
    std::string m_error;

public:
    ArrayException(std::string error)
            : m_error(error)
    {
    }

    const char* getError() { return m_error.c_str(); }
};

#endif