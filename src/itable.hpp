#ifndef ITABLE_HPP
#define ITABLE_HPP

#include <string>

#include "object.hpp"

class ITable
{
protected:
    static const int MAX_OBJECTS = 10;
    Object *objects[MAX_OBJECTS];
    bool collapsed = false;

public:
    virtual void put() = 0;
    virtual Object *take() = 0;
    virtual std::string *look() = 0;
};

#endif