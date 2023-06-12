#include <iostream>

#include "src/object.hpp"
#include "src/toy.hpp"
#include "src/teddy.hpp"
#include "src/little-pony.hpp"

int main()
{
    Object obj("MyObject");
    std::cout << "Hello " << obj << "!\n"
              << std::endl;
    return 0;
}