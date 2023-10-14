#include "line.ih"

    #include "line.ih"

    bool Line::getLine()
    {
        d_currentString.clear();

        if (not getline(cin, d_currentString))
        {
            d_position = string::npos;             // no line content available
            return false;
        }
                                                // find the first non-blank ch.
        d_position = d_currentString.find_first_not_of(" \t");

        return d_position != string::npos;         // got a line with content
    }