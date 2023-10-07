#include "main.ih"

int main (int argc, char **argv)
{
    Line myLine;
    while (myLine.getLine(std:: cin))
    {
        Line::start += next(Line::start).length()
    }

}