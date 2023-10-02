#ifndef LINE_HH_
#define LINE_HH_

#include <string>


class Line
{   std::string d_currentString;
    size_t start = 0;

    public:
        bool getLine(std::istream &in);
        std::string next(size_t start);

}




#endif