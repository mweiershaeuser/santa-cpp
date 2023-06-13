#ifndef BOX_HPP
#define BOX_HPP

#include "wrap.hpp"

class Box : public Wrap
{
public:
    Box();
    void wrapMeThat(Object *gift);
};

#endif