#include "parser.ih"

bool Parser::PureDouble(double *dest, std::string const &str)
{
    size_t end;
    double value = stod(str, &end);
    if (end = str.npos)
    {
        d_integral = (str.contains.find_first_of(".eE") == string::npos);
        *dest = value;
    }
    return false;
}