#include "strings.ih"

void Strings::reserve(size_t request)
{
    if (request > d_capacity)
    {
        string *newStringsBlock = rawStrings(request);
        for (size_t idx = 0; idx != d_size; ++idx)
        {
            new (newStringsBlock + idx) string{ d_memory[idx] };
        }

        destroy();
        d_memory = newStringsBlock;
        d_capacity = request;
        
    }

}