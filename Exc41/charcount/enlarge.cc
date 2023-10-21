#include "charcount.ih"
#include <iostream>

CharCount::Char* CharCount::enlarge(size_t d_capacity)
{
    d_capacity *= 2;
    cout << "In enlarge(): d_capacity = ";
    cout << d_capacity <<'\n';

    CharCount::Char *newMemory = CharCount::rawCapacity(d_capacity);
    CharCount::d_capacity = d_capacity;
    cout << "After allocating d_capacity = "<<CharCount::d_capacity <<'\n';

    return newMemory;
}