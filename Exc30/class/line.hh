#ifndef LINE_HH_
#define LINE_HH_

#include <string>


class Line
{   std::string d_currentString;
    size_t d_position; // begin of string
    

    public:
        bool getLine();
        std::string next();
        

};




#endif