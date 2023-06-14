#ifndef PAPA_XMAS_CONVEYOR_BELT_HPP
#define PAPA_XMAS_CONVEYOR_BELT_HPP

#include "iconveyor-belt.hpp"
#include "wrap.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt
{
public:
    PapaXmasConveyorBelt();
    void put(Wrap *object);
    Wrap *take();
    void IN();
    void OUT();
};

#endif