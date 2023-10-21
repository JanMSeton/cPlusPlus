#include "strings.ih"

void Strings::destroy()
{
    for (size_t idx = 0; idx != d_capacity; ++idx)
        delete d_arr[idx];

    delete[] d_arr;
    cout<<"delete[] d_arr\n";
}