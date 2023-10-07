#ifndef PARSE_HH_
#define PARSE_HH_
#include "../../Exc28/class/line.hh"

class Parser
{   enum Return
    {
        NO_NUMBER,
        NUMBER,
        EOLN,
    };

    Return convert(double *dest, std::string const &str);
    bool pureDouble(double *dest, std::string const &str);
    bool d_integral;
    Line d_line;

public:
    bool reset();
    Return number(double *dest);
    bool isIntegral();
    std::string next();
};

#endif