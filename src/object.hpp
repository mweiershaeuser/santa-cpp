#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <iostream>
#include <string>

#include "object-type.hpp"

class Object
{
private:
    std::string title;

public:
    Object();
    Object(std::string _title);
    friend std::ostream &operator<<(std::ostream &os, const Object &obj);
    std::string getTitle();
    virtual ObjectType getType() = 0;
};

#endif