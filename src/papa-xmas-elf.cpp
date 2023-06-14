#include "papa-xmas-elf.hpp"

#include <iostream>
#include <string>

#include "ielf.hpp"
#include "wrap.hpp"
#include "toy.hpp"

PapaXmasElf::PapaXmasElf() : IElf()
{
}

PapaXmasElf::PapaXmasElf(ITable *_table, IConveyorBelt *_conveyorBelt) : IElf(_table, _conveyorBelt)
{
}

void PapaXmasElf::processGifts()
{
    std::string *titles = this->table->look();

    int i = 0;
    while (titles[i] != (std::string)NULL)
    {
        std::cout << titles[i] << std::endl;
        i++;
    }
}