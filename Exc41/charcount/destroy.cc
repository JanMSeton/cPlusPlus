#include "charcount.ih"

void CharCount::destroy()
{
    delete[] d_info.ptr;
}