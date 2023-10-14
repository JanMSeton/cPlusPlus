#include "calc.ih"

void Calc::evaluate() const
{
    switch(d_operator)
    {
        case '+':
            cout << d_lhs + d_rhs << '\n';
        break;

        case '-':
            cout << d_lhs - d_rhs << '\n';
        break;

        case '*':
            cout << d_lhs * d_rhs << '\n';
        break;

        case '/':
            divide();
        break;

        case '%':
            modulo();
        break;
    }
}