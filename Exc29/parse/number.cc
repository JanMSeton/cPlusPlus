#include "parser.hh"

Parser::Return Parser::number(double *dest)
{   
    std::string test;
    test = d_line.next();
    return (test == "")?
    EOLN:
    convert(dest, d_line.next());
}