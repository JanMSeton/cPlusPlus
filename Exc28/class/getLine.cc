#include "line.hh"

bool Line::getLine()
{
    getline(std::cin, Line::d_currentString);
    return d_currentString.contains(" \t");
}