#include "strings.ih"


void Strings::resize(size_t newSize)
{
    if (newSize >= d_size)
    {
        for(size_t index = d_size; index != newSize; ++index)
        {
            cout << "In resize: alloc new string at d_memory[" << index << "]\n";
            new (d_memory + index) std::string{ };
            
        }
    }
    else
    {
        for (std::string *sp = d_memory + d_size; sp-- != d_memory + newSize; )
        {
            sp->~string();
        }
    }
    d_size = newSize;
    
}