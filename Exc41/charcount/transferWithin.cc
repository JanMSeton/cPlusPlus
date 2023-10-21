#include "charcount.ih"

void CharCount::transferWithin(size_t begin, size_t end)
{
    for (size_t idx = end; idx != begin; --idx)           // transfer Char objects from
        d_info.ptr[idx + 1] = move(d_info.ptr[idx]);  // begin to end to dest (and
                                            // beyond)
}