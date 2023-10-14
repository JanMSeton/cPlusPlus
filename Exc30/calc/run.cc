#include "calc.ih"

void Calc::run()
{

   while (true)
   {
    cout << "? ";

    if (not d_parser.reset())
    {
        cout << "Bye\n";
        return;
    }
    if (expression())
    {
        evaluate();
    }
   }

}