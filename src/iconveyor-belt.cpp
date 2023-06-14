#include "iconveyor-belt.hpp"

#include <list>

#include "wrap.hpp"

IConveyorBelt::IConveyorBelt() : object(NULL)
{
}

IConveyorBelt::IConveyorBelt(std::list<Wrap *> *_input) : object(NULL), input(_input)
{
}