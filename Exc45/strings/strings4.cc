#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
    d_capacity(1)
    
{
    d_arr = new string*[1];
    string line;
    while (getline(in, line))
        add(line); //valgrind leak
}
