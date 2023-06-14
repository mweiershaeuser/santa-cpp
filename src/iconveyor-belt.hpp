#ifndef ICONVEYOR_BELT_HPP
#define ICONVEYOR_BELT_HPP

#include <list>

#include "wrap.hpp"

class IConveyorBelt
{
protected:
    Wrap *object;
    std::list<Wrap *> *input;

public:
    std::list<Wrap *> output;

    IConveyorBelt();
    IConveyorBelt(std::list<Wrap *> *_input);
    virtual void put(Wrap *object) = 0;
    virtual Wrap *take() = 0;
    virtual void IN() = 0;
    virtual void OUT() = 0;
};

#endif