#ifndef LITTLEPONY_HPP
#define LITTLEPONY_HPP

#include <string>

#include "toy.hpp"

class LittlePony : public Toy
{
public:
    LittlePony();
    LittlePony(std::string title);
    void isTaken();
};

#endif