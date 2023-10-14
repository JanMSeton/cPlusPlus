#include "calc.ih"

bool Calc::getOperator()
{   
    string str = d_parser.next();

    if
    (
        str.length() == 1
        and
        "+-*/%"s.find(d_operator = str.front()) != string::npos 
    )
    {
        return true;
    }

    cout << "invalid operator\n";
    return false;
    
}