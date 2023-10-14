#include "calc.ih"

bool Calc::number(double *dest, bool *isInt)
{
    switch(d_parser.number(dest))
    {
        case Parser::EOLN:
            cout << "Incomplete expression\n";
        break;

        case Parser::NO_NUMBER:
        cout << *dest << '\n';
            cout << "Not a valid expression\n";
        break;

        case Parser::NUMBER:
            *isInt = d_parser.isIntegral();
        return true;
    }

    return false;
}