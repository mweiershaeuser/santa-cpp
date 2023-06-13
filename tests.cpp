#include "tests.hpp"

#include <cassert>

#include "src/object.hpp"
#include "src/teddy.hpp"
#include "src/little-pony.hpp"
#include "src/wrap.hpp"

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
    // ToDo
    return presentParts[2];
}