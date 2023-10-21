#include "charcount.ih"
#include <iostream>

CharCount::Char* CharCount::enlarge()
{
    d_capacity *= 2;
    cout << "In enlarge(): d_capacity = ";
    cout << d_capacity <<'\n';

    Char *newMemory = rawCapacity(d_capacity);
    cout << "After allocating d_capacity = "<<d_capacity <<'\n';

    return newMemory;
}