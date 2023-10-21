#include "strings.ih"


void Strings::resize(size_t newSize)
{
    if (newSize >= d_size)
    {
        for(size_t index = d_size; index != newSize; ++index)
        {
            cout << "In resize: alloc new string at d_arr[" << index << "]\n";
            d_arr[index] = new string();
            
        }
    }
    else
    {
        for(size_t index = d_size; index!= newSize; --index)
        {
            delete d_arr[index];
        }
    }
    d_size = newSize;
    
}