#include "strings.ih"

void Strings::swap(Strings &other)
{
    string **tmp = d_arr;
    d_arr = other.d_arr;
    other.d_arr = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;

    size_t capacity = d_capacity;
    d_capacity = other.d_capacity;
    other.d_capacity = capacity;
    
}
