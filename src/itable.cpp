#include "itable.hpp"

#include "papa-xmas-table.hpp"

ITable *createTable()
{
    return new PapaXmasTable();
}