#include "line.ih"

string Line::next()
{
    string ret;

    if (d_position != string::npos)        // there is a(nother) substr in d_currentString
    {
                                        // find the end of the substr.
        size_t end = d_currentString.find_first_of(" \t", d_position);

                                        // determine the substr.
        ret = d_currentString.substr(d_position, end - d_position);    

                                        // first non-bl ch beyond end
        d_position = d_currentString.find_first_not_of(" \t", end);
    }

    return ret;
}