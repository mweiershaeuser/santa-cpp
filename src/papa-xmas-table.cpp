#include "papa-xmas-table.hpp"

#include <iostream>
#include <string>
#include <list>

#include "itable.hpp"

PapaXmasTable::PapaXmasTable() : ITable()
{
}

void PapaXmasTable::put(Object *object)
{
    if (this->collapsed)
    {
        std::cerr
            << "The table has already collapsed!" << std::endl;
    }
    else
    {
        if (this->objects.size() >= this->MAX_OBJECTS)
        {
            this->collapsed = true;
            std::cerr
                << "The table was already full and has now collapsed!" << std::endl;
        }
        else
        {
            this->objects.push_back(object);
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

    std::list<Object *>::iterator it = this->objects.begin();
    int i = 0;
    while (i < this->objects.size())
    {
        if (i == index)
        {
            it = this->objects.erase(it);
            i = this->objects.size();
        }
        else
        {
            i++;
            it++;
        }
    }

    return *it;
}

std::string *PapaXmasTable::look()
{
    int elementsOnTable = this->objects.size();

    std::string *titles = new std::string[elementsOnTable + 1];

    std::list<Object *>::iterator it = this->objects.begin();
    for (int i = 0; i < elementsOnTable; i++)
    {
        titles[i] = (*it)->getTitle();
        it++;
    }

    titles[elementsOnTable] = (std::string)NULL;

    return titles;
}