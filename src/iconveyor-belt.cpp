#include "iconveyor-belt.hpp"

#include "papa-xmas-conveyor-belt.hpp"

IConveyorBelt *createConveyorBelt()
{
    return new PapaXmasConveyorBelt();
}