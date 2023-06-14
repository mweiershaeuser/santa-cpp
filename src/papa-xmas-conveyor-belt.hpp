#ifndef PAPA_XMAS_CONVEYOR_BELT_HPP
#define PAPA_XMAS_CONVEYOR_BELT_HPP

#include <list>

#include "iconveyor-belt.hpp"
#include "wrap.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt
{
public:
    PapaXmasConveyorBelt();
    PapaXmasConveyorBelt(std::list<Wrap *> *_input);
    void put(Wrap *object);
    Wrap *take();
    void IN();
    void OUT();
};

#endif