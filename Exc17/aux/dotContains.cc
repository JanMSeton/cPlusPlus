#include "aux.ih"
bool dotContains(int argc, char const **argv){
    for (int iter = 1; iter != argc; ++iter)
    {
        if (string{argv[iter]}.find('.') != string{argv[iter]}.npos) 
        {
            return true;
        }
        
    }
    return false;
}