#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str)
{
    size_t end;
    double value = stod(str, &end);
    if (end != str.length())
    {
        return false;
    }
    d_integral = (str.find_first_of(".eE") == string::npos);
    *dest = value;
    return true;
}