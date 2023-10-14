#include "main.ih"

void read(Person person[], size_t size = 5)
{
    for(size_t i = 0; i < size; ++i)
    {
        cout << "?";
        person[i].extract(cin);
        
    }
    cout << "\n";
}