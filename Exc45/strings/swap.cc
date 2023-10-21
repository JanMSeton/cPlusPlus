#include "strings.ih"

void Strings::swap(Strings &other)
{
    string *tmp = d_memory;
    d_memory = other.d_memory;
    other.d_memory = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;

    size_t capacity = d_capacity;
    d_capacity = other.d_capacity;
    other.d_capacity = capacity;
    
}
