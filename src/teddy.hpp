#ifndef TEDDY_HPP
#define TEDDY_HPP

#include <string>

#include "toy.hpp"

class Teddy : public Toy
{
public:
    Teddy();
    Teddy(std::string title);
    void isTaken();
};

#endif