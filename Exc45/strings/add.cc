#include "strings.ih"

void Strings::add(string const &next)
{
    cout << "In add: d_size:"<< d_size <<">= d_capacity:"<<d_capacity<<'\n';
    if (d_size >= d_capacity)
    {
        
        enlarge(); // make room for the next string, // valgrind leaks
    }   
    resize(d_size + 1);

    d_memory[d_size - 1] = next;                 // store next

}
