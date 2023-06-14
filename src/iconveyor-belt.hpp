#ifndef ICONVEYOR_BELT_HPP
#define ICONVEYOR_BELT_HPP

#include <list>

#include "wrap.hpp"

class IConveyorBelt
{
protected:
    Wrap *object;
    std::list<Wrap *> input;
    std::list<Wrap *> output;

public:
    IConveyorBelt();
    virtual void put(Wrap *object) = 0;
    virtual Wrap *take() = 0;
    virtual void IN() = 0;
    virtual void OUT() = 0;
};

IConveyorBelt *createConveyorBelt();

#endif