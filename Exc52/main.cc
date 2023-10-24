#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

ostream &now(ostream& outs)
{
    time_t t = time(0);
    tm tm = *localtime(&t);

    return outs << put_time(&tm, "%c %Z");
}


int main()
{
    cout << "This is the time: " << now << '\n';

    return 0;
}

