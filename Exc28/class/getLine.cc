#include "Line.hh"

bool Line::getLine(istream &in)
{
    getline(in, Line::d_currentString);
    return d_currentString.contains(" \t")
}