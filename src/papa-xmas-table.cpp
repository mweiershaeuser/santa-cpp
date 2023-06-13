#include "papa-xmas-table.hpp"

#include <iostream>
#include <iterator>

PapaXmasTable::PapaXmasTable()
{
    this->objects[0] = NULL;
}

void PapaXmasTable::put(Object *object)
{
    if (this->collapsed)
    {
        std::cout
            << "The table is collapsed!" << std::endl;
    }
    else
    {
        int elementsOnTable = std::size(this->objects);
        if (elementsOnTable >= this->MAX_OBJECTS)
        {
            this->collapsed = true;
            std::cout
                << "The table was already full and collapsed!" << std::endl;
        }
        else
        {
            this->objects[elementsOnTable] = object;
            this->objects[elementsOnTable + 1] = NULL;
        }
    }
}

Object *PapaXmasTable::take(int index)
{
    if (index >= this->MAX_OBJECTS)
    {
        std::cerr
            << "The table is not big enough to have an element at this place." << std::endl;
        exit(84);
    }

    return this->objects[index];
}

std::string *PapaXmasTable::look()
{
    int i = 0;
    while (this->objects[i] != NULL)
    {
        std::cout << *this->objects[i] << std::endl;
        i++;
    }
}