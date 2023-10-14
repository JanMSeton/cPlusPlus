#include "calc.ih"

void Calc::divide() const
{
    if (isZero(d_rhs))
    {
        cout << "can't divide by 0\n";
    }
    else
    {
        cout << d_lhs/d_rhs << '\n';
    }

}