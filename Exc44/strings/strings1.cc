#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_capacity(1)
    
{
    d_arr = new string*[1];
    cout << "Alloc d_arr = new string*[1]\n";
}
