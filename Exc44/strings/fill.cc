#include "strings.ih"

void Strings::fill(char *ntbs[])
{
    for (size_t index = 0; index != d_size; ++index)
        *(d_arr[index]) = ntbs[index];
}