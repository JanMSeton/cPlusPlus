#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_capacity(1)
    
{
    d_memory = rawStrings(1);
    cout << "Alloc d_memory = rawStrings(1)\n";
}
