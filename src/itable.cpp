#include "itable.hpp"

#include "papa-xmas-table.hpp"

ITable::ITable() : collapsed(false)
{
}

ITable *createTable()
{
    return new PapaXmasTable();
}