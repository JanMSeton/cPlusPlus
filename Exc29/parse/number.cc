#include "parser.hh"

Parser::Return Parser::number(double *dest)
{   
    string str{ next() }
    return (str.empty())?
    EOLN:
    convert(dest, str);
}