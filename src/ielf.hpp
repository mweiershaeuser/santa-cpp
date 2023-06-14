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
    IElf(ITable *_table, IConveyorBelt *_conveyorBelt);
    virtual void processGifts() = 0;
};

#endif