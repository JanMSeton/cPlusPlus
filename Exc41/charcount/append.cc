#include "charcount.ih"

    // optionally define this member as an inline function, but then
    // in the internal header, not in the class header itself: it is only
    // used by the members of this class so there's no need for the compiler
    // to compile this when users include charcount.h

void CharCount::append(char ch)     // in fact:insert at the end, 
{                                   //  at d_nfo.nCharObj
    insert(ch, d_info.nCharObj);
}