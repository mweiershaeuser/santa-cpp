#include <iostream>

#include "src/object.hpp"
#include "src/toy.hpp"
#include "src/teddy.hpp"
#include "src/little-pony.hpp"

#include "tests.hpp"

int main()
{
    Object **objects = MyUnitTests();
    std::cout << *objects[0] << "\n"
              << *objects[1] << "\n"
              << std::endl;
    return 0;
}