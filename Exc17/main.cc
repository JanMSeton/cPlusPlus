#include "main.ih"


int main(int argc, char const **argv)
{
    if (dotContains(argc, argv))
    {
        double accumulator = 0;
        cout << sum(argc, argv, accumulator) << '\n';
    }
    else
    {
        int accumulator = 0;
        cout << sum(argc, argv, accumulator) << '\n';
    }
}