#ifndef TOY_HPP
#define TOY_HPP

#include <string>

#include "object.hpp"

class Toy : public Object
{
public:
    Toy();
    Toy(std::string title);
};

#endif