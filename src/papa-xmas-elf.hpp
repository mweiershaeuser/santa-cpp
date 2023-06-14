#ifndef PAPA_XMAS_ELF_HPP
#define PAPA_XMAS_ELF_HPP

#include "ielf.hpp"
#include "wrap.hpp"
#include "toy.hpp"

class PapaXmasElf : public IElf
{
public:
    PapaXmasElf();
    void processGift(Toy *gift);
};

#endif