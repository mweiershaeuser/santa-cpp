#ifndef ITABLE_HPP
#define ITABLE_HPP

#include <string>
#include <list>

#include "object.hpp"

class ITable
{
protected:
    static const int MAX_OBJECTS = 10;
    std::list<Object *> objects;
    bool collapsed;

public:
    ITable();
    virtual void put(Object *object) = 0;
    virtual Object *take(int index) = 0;
    virtual std::string *look() = 0;
};

ITable *createTable();

#endif