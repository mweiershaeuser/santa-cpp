#include "papa-xmas-conveyor-belt.hpp"

#include <iostream>
#include <list>

#include "iconveyor-belt.hpp"
#include "wrap.hpp"

PapaXmasConveyorBelt::PapaXmasConveyorBelt() : IConveyorBelt()
{
}

void PapaXmasConveyorBelt::put(Wrap *object)
{
    if (this->object == NULL)
    {
        std::cerr << "ConveyorBelt already has something on it." << std::endl;
    }
    else
    {
        this->object = object;
    }
}

Wrap *PapaXmasConveyorBelt::take()
{
    Wrap *temp;
    temp = this->object;
    this->object = NULL;
    return temp;
}

void PapaXmasConveyorBelt::IN()
{
    if (this->input.empty())
    {
        std::cerr << "ConveyorBelt Input has not been initalized yet." << std::endl;
    }
    else
    {
        this->object = *(this->input.begin());
        this->input.pop_front();
    }
}

void PapaXmasConveyorBelt::OUT()
{
    if (this->output.empty())
    {
        std::cerr << "ConveyorBelt Output has not been initalized yet." << std::endl;
    }
    else
    {
        this->output.push_back(this->object);
        this->object = NULL;
    }
}