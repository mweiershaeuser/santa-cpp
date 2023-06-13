#ifndef ICONVEYOR_BELT_HPP
#define ICONVEYOR_BELT_HPP

#include "object.hpp"

class IConveyorBelt
{
protected:
    Object *object = NULL;

public:
    virtual void put(Object *object) = 0;
    virtual Object *take() = 0;
};

IConveyorBelt *createConveyorBelt();

#endif