#include "strings.ih"

void Strings::reserve(size_t request)
{
    if (request > d_capacity)
    {
        string **newStrings = rawPointers(request);
        for(size_t index = 0; index!= d_size; ++index)
        {
            newStrings[index] = d_arr[index];
        }
        destroy();
        d_arr = newStrings;
        d_capacity = request;
        
    }

}