#include "strings.ih"

string **Strings::rawPointers(size_t n)
{
    cout<< "in rawPointers: Creating new block of" << n << " pointers\n";
    string **ret = new string*[n];
    cout << "Alloc new string[" << n << "]\n";

    return ret;
}