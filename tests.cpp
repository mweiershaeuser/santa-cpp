#include "tests.hpp"

#include <cassert>

#include "src/object.hpp"
#include "src/object-type.hpp"
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