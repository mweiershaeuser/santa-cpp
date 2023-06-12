#include "object.hpp"

#include <iostream>
#include <string>

Object::Object(std::string _title)
{
    this->title = _title;
}

std::ostream &operator<<(std::ostream &os, const Object &obj)
{
    os << obj.title;
    return os;
}