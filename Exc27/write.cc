#include "main.ih"

void write(Person person[], size_t size)
{
    for(size_t i = 0; i < size; ++i)
    {
        person[i].insert(cout);
        cout << "\n";
    }
}