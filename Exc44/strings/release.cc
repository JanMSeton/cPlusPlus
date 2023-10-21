#include "strings.ih"

Strings::POD Strings::release()
{
    POD ret{ d_size, d_arr };       // initialize the POD for the caller

    d_size = 0;                     // reinitialize our data members
    d_arr = 0;

    return ret;
}
