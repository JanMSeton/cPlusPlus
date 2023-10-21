#include "charcount.ih"
#include <iostream>
CharCount::Char* CharCount::rawCapacity(size_t d_capacity)
{
    CharCount::Char *ret = static_cast<CharCount::Char *>(
                        operator new[](d_capacity * sizeof(CharCount::Char)));

    return ret;
}