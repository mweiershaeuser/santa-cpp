#include "box.hpp"

#include <iostream>

Box::Box() : Wrap()
{
}

void Box::wrapMeThat(Object *gift)
{
    if (this->open)
    {
        Wrap::wrapMeThat(gift);
    }
    else
    {
        std::cerr << "The gift cannot be wrapped in the Box, because the Box is closed." << std::endl;
    }
}