#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string str{ next() };               // get the next string

    if (str.empty())
        return EOLN;                    // no string available

    return convert(dest, str);          // try to convert to number
}