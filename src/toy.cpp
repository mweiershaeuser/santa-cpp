#include "toy.hpp"

#include <string>

#include "object.hpp"
#include "object-type.hpp"

Toy::Toy() {}

Toy::Toy(std::string title) : Object(title) {}

ObjectType Toy::getType()
{
    return OToy;
}