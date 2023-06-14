#include <list>

#include "src/itable.hpp"
#include "src/papa-xmas-table.hpp"
#include "src/iconveyor-belt.hpp"
#include "src/papa-xmas-conveyor-belt.hpp"
#include "src/teddy.hpp"
#include "src/little-pony.hpp"
#include "src/box.hpp"
#include "src/gift-paper.hpp"
#include "src/ielf.hpp"
#include "src/papa-xmas-elf.hpp"

ITable *createTable();
IConveyorBelt *createConveyorBelt();

int main()
{
    ITable *table = createTable();
    IConveyorBelt *conveyorBelt = createConveyorBelt();

    IElf *elf = new PapaXmasElf(table, conveyorBelt);

    elf->processGifts();

    return 0;
}

ITable *createTable()
{
    ITable *table = new PapaXmasTable();

    table->put(new Teddy("cuddles"));
    table->put(new LittlePony("happy pony"));

    return table;
}

IConveyorBelt *createConveyorBelt()
{
    std::list<Wrap *> input;
    input.push_back(new Box());
    input.push_back(new GiftPaper());
    IConveyorBelt *conveyorBelt = new PapaXmasConveyorBelt(&input);
    return conveyorBelt;
}