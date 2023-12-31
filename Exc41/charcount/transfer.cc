#include "charcount.ih"

void CharCount::transfer(Char *dest, size_t begin, size_t end)
{
    for (; begin != end; ++begin)           // transfer Char objects from
        *dest++ = move(d_info.ptr[begin]);  // begin to end to dest (and
                                            // beyond)
}