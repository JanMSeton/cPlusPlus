#ifndef LINE_HH_
#define LINE_HH_

#include <string>


class Line
{   std::string d_currentString;
    size_t d_position;
    

    public:
        bool getLine();
        std::string next();
        

};




#endif