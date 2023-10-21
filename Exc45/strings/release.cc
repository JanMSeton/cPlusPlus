#include "strings.ih"

Strings::POD Strings::release()
{
    POD ret{ d_size, d_memory };       // initialize the POD for the caller

    d_size = 0;                     // reinitialize our data members
    d_memory = 0;

    return ret;
}
