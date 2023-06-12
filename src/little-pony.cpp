#include "little-pony.hpp"

#include <iostream>
#include <string>

#include "toy.hpp"

LittlePony::LittlePony() {}

LittlePony::LittlePony(std::string title) : Toy(title) {}

void LittlePony::isTaken()
{
    std::cout << "yo man" << std::endl;
}