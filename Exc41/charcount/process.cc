#include "charcount.ih"

void (CharCount::* CharCount::s_process[])(char ch, size_t idx)
{
    &CharCount::append,
    &CharCount::insert,
    &CharCount::inc

};
