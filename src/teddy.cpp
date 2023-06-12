#include "teddy.hpp"

#include <iostream>
#include <string>

#include "toy.hpp"

Teddy::Teddy() {}

Teddy::Teddy(std::string title) : Toy(title) {}

void Teddy::isTaken()
{
    std::cout << "gra hu" << std::endl;
}