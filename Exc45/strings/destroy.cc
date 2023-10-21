#include "strings.ih"

void Strings::destroy()
{
    delete d_memory;
    cout<<"delete d_memory\n";
}