#include "ielf.hpp"

#include "papa-xmas-elf.hpp"
#include "itable.hpp"
#include "iconveyor-belt.hpp"

IElf::IElf()
{
}

IElf::IElf(ITable *_table, IConveyorBelt *_conveyorBelt) : table(_table), conveyorBelt(_conveyorBelt)
{
}