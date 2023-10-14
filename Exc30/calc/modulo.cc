#include "calc.ih"

void Calc::modulo() const
{
    if (
        not d_lhsInt or not d_rhsInt or d_lhs < 0
        or 
        d_rhs < 0 or isZero(d_rhs)
    )
        {
            cout << "% operations eeds pos int\n";
        }
    else 
    {
        cout << asSizeT(d_lhs) % asSizeT(d_rhs) <<'\n';
    }
}