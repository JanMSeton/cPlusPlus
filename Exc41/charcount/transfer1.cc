#include "charcount.ih"

void CharCount::transfer(Char *dest, size_t begin, size_t end, size_t step)
{
    for (; end != begin; --end)           // transfer Char objects from
        dest[end+step] = move(d_info.ptr[end]);  // end to begin to dest (and
                                            // before)
}