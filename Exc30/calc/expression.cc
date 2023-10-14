#include "calc.ih"

bool Calc::expression()
{
    return number(&d_lhs, &d_lhsInt)
           and 
           getOperator()
           and
           number(&d_lhs, &d_lhsInt);
}