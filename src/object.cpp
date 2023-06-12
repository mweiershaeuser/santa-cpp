#include "object.hpp"

#include <iostream>
#include <string>

Object::Object()
{
}

Object::Object(std::string _title)
{
    this->title = _title;
}

std::string Object::getTitle()
{
    return this->title;
}

std::ostream &operator<<(std::ostream &os, const Object &obj)
{
    os << obj.title;
    return os;
}