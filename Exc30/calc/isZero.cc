#include "calc.ih"

bool Calc::isZero(double value) const
{
    return (fabs(value) < 1e-8);
}