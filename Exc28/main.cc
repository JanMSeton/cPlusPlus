#include "main.ih"

int main (int argc, char **argv)
{
    Line l;
    string output;
    size_t i = 0;
    while(l.getLine())
    {
        cout << "Here " << i << '\n';
        while (1)
        {
            output = l.next();
            if (output == "")
            {
                break;
            }
            cout << output << '\n';
            cout << "Here " << i << '\n';
            ++i;
        }
    }
    cout << "Finished\n";

    return 0;
}