#ifndef PAPA_XMAS_ELF_HPP
#define PAPA_XMAS_ELF_HPP

#include "ielf.hpp"
#include "wrap.hpp"
#include "toy.hpp"

class PapaXmasElf : public IElf
{
public:
    PapaXmasElf();
    PapaXmasElf(ITable *_table, IConveyorBelt *_conveyorBelt);
    void processGifts();
};

#endif