#include "strings.ih"

Strings::Strings(char *environLike[])
:
    d_size(count(environLike)),
    d_capacity(d_size)
    
    
{
    d_memory = rawStrings(d_size);
    fill(environLike);
}
