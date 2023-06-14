#include "iconveyor-belt.hpp"

#include "papa-xmas-conveyor-belt.hpp"

IConveyorBelt::IConveyorBelt() : object(NULL)
{
}

IConveyorBelt *createConveyorBelt()
{
    return new PapaXmasConveyorBelt();
}