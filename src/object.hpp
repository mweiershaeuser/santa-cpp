#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <iostream>
#include <string>

class Object
{
private:
    std::string title;

public:
    Object(std::string _title);
    friend std::ostream &operator<<(std::ostream &os, const Object &obj);
};

#endif