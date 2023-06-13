#ifndef WRAP_HPP
#define WRAP_HPP

#include "object.hpp"

class Wrap : public Object
{
protected:
    bool open;
    Object *gift;

public:
    Wrap();
    void wrapMeThat(Object *gift);
    Object *openMe();
    void closeMe();
};

#endif