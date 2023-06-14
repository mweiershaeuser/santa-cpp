#include <cassert>

#include "src/object.hpp"
#include "src/object-type.hpp"
#include "src/teddy.hpp"
#include "src/little-pony.hpp"
#include "src/wrap.hpp"
#include "src/box.hpp"
#include "src/gift-paper.hpp"
#include "src/itable.hpp"
#include "src/iconveyor-belt.hpp"

Object **MyUnitTests();
Object *MyUnitTests(Object **);
void testTableAndConveyorBelt();

int main()
{
    Object **toys = MyUnitTests();
    std::cout << *toys[0] << "\n"
              << *toys[1]
              << std::endl;

    Teddy *teddy = new Teddy("cuddles");
    Box *box = new Box();
    GiftPaper *giftPaper = new GiftPaper();

    Object **presentParts = new Object *[4];
    presentParts[0] = teddy;
    presentParts[1] = box;
    presentParts[2] = giftPaper;
    presentParts[3] = NULL;

    Wrap *present = (Wrap *)MyUnitTests(presentParts);

    std::cout << "Wrapped Present: " << *(((Wrap *)(present->openMe()))->openMe())
              << std::endl;

    testTableAndConveyorBelt();

    return 0;
}

Object **MyUnitTests()
{
    Object **objects = new Object *[2];

    objects[0] = new LittlePony("happy pony");
    objects[1] = new Teddy("cuddles");

    assert(objects[0]->getTitle() == "happy pony");
    assert(objects[1]->getTitle() == "cuddles");

    return objects;
}

Object *MyUnitTests(Object **presentParts)
{
    int i = 1;
    while (presentParts[i] != NULL)
    {
        if (presentParts[i]->getType() == OWrap)
        {
            ((Wrap *)presentParts[i])->wrapMeThat(presentParts[i - 1]);
            ((Wrap *)presentParts[i])->closeMe();
        }
        i++;
    }

    return presentParts[i - 1];
}

void testTableAndConveyorBelt()
{
    ITable *table = createTable();
    IConveyorBelt *conveyorBelt = createConveyorBelt();

    Wrap *wrap = new Box();
}