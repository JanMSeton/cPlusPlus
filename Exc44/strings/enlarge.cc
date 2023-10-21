#include "strings.ih"

void Strings::enlarge()
{
    cout << "in enlarge()\n";
    reserve(d_capacity * 2);
}
