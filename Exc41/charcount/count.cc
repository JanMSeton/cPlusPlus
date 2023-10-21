#include "charcount.ih"

size_t CharCount::count(istream &in)
{
    size_t nCharObjs = 0;

    char ch;
    size_t idx;

    while (in.get(ch))                  // retrieve all chars from 'in'
    {
        ++nCharObjs;
        cout << "In count() process " << ch << "\n";
        
        (this->*s_process[locate(&idx, ch)])(ch, idx);     // add ch to the set of characters
 

    }

    return nCharObjs;
}