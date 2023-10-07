#include "line.hh"
namespace
{
    next_non_whitespace(size_t position, std::string line)
    {
        while ((position < d_currentString.length()) && !(isspace(d_currentString[position])))
        {
            ++position;
            // check for whitespace
        }
        return position;
    }

}
string Line::next(std::string);
    {
        
        string substring;
        substring = d_currentString.substr(d_position, next_non_whitespace(position));
        if (d_position == d_line.length())
            d_position = string.npos;

        return substring;
    }