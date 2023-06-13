#include "wrap.hpp"

#include <iostream>

Wrap::Wrap()
{
    this->open = true;
    this->gift = NULL;
    std::cout << "whistles while working" << std::endl;
}

void Wrap::wrapMeThat(Object *gift)
{
    if (this->gift == NULL)
    {
        this->gift = gift;
        std::cout << "tuuuut tuuut tuut" << std::endl;
    }
    else
    {
        std::cerr << "The gift cannot be wrapped, because the Wrap already contains a gift." << std::endl;
    }
}

Object *Wrap::openMe()
{
    this->open = true;

    Object *giftTemp;
    giftTemp = this->gift;
    this->gift = NULL;
    return giftTemp;
}

void Wrap::closeMe()
{
    this->open = false;
}