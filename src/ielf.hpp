#ifndef IELF_HPP
#define IELF_HPP

#include "itable.hpp"
#include "iconveyor-belt.hpp"
#include "wrap.hpp"
#include "toy.hpp"

class IElf
{
protected:
    ITable *table;
    IConveyorBelt *conveyorBelt;

public:
    IElf();
    virtual void processGift(Toy *gift) = 0;
};

IElf *createElf();

#endif