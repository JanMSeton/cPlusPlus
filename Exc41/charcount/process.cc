#include "charcount.ih"

void CharCount::process(char ch)// improve
{
    switch (size_t idx; locate(&idx, ch))
    {
        case APPEND:
            append(ch);
        break;

        case INSERT:
            insert(ch, idx);            // insert new entry at index `idx'
        break;

        case INC:
            inc(idx);
        break;
    }
}
