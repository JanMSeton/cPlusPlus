#include "strings.ih"

string *Strings::rawStrings(size_t size)
{
    string *ret = static_cast<string *>(operator new (size * sizeof(string)));
    cout << "Allocate a block of memory of " << size << " strings\n";
    return ret;
}