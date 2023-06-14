#include <iostream>

#include "src/object.hpp"
#include "src/toy.hpp"
#include "src/teddy.hpp"
#include "src/little-pony.hpp"
#include "src/box.hpp"
#include "src/gift-paper.hpp"
#include "src/itable.hpp"
#include "src/iconveyor-belt.hpp"

#include "tests.hpp"

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

    return 0;
}