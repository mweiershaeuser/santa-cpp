#include "papa-xmas-elf.hpp"

#include "ielf.hpp"
#include "wrap.hpp"
#include "toy.hpp"

PapaXmasElf::PapaXmasElf() : IElf()
{
}

void PapaXmasElf::processGift(Toy *gift)
{
    this->table->put(gift);

    this->conveyorBelt->IN();
    this->conveyorBelt->take();

    this->conveyorBelt->OUT();
}