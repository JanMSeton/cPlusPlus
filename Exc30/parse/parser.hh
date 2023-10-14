#ifndef PARSE_HH_
#define PARSE_HH_
#include "../class/line.hh"

class Parser
{   
    bool d_integral = false;
    Line d_line;  
    public:
        enum Return
        {
            NO_NUMBER,
            NUMBER,
            EOLN,
        };

        bool reset();
        Return number(double *dest);
        bool isIntegral();
        std::string next();
        
    private:

        Return convert(double *dest, std::string const &str);
        bool pureDouble(double *dest, std::string const &str);
};

#endif