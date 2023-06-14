#ifndef ICONVEYOR_BELT_HPP
#define ICONVEYOR_BELT_HPP

#include <list>

#include "object.hpp"

class IConveyorBelt
{
protected:
    Object *object;
    std::list<Object *> input;
    std::list<Object *> output;

public:
    IConveyorBelt();
    virtual void put(Object *object) = 0;
    virtual Object *take() = 0;
    virtual void IN() = 0;
    virtual void OUT() = 0;
};

IConveyorBelt *createConveyorBelt();

#endif