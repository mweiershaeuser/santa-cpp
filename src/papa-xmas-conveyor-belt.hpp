#ifndef PAPA_XMAS_CONVEYOR_BELT_HPP
#define PAPA_XMAS_CONVEYOR_BELT_HPP

#include "iconveyor-belt.hpp"
#include "object.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt
{
public:
    PapaXmasConveyorBelt();
    void put(Object *object);
    Object *take();
};

#endif