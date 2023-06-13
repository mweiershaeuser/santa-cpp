#ifndef PAPA_XMAS_TABLE_HPP
#define PAPA_XMAS_TABLE_HPP

#include <string>

#include "itable.hpp"
#include "object.hpp"

class PapaXmasTable : public ITable
{
public:
    PapaXmasTable();
    void put(Object *object);
    Object *take(int index);
    std::string *look();
};

#endif