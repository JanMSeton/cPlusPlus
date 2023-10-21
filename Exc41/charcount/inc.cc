#include "charcount.ih"

    // optionally define this member as an inline function, but then
    // in the internal header, not in the class header itself: it is only
    // used by the members of this class so there's no need for the compiler
    // to compile this when users include charcount.h

void CharCount::inc(size_t idx)
{
    ++d_info.ptr[idx].count;
}