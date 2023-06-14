#include "ielf.hpp"

#include "papa-xmas-elf.hpp"
#include "itable.hpp"
#include "iconveyor-belt.hpp"

IElf::IElf() : table(createTable()), conveyorBelt(createConveyorBelt())
{
}

IElf *createElf()
{
    return new PapaXmasElf();
}