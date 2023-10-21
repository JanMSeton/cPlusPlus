#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

ostream &now(ostream& outs)
{
    time_t t = system_clock::to_time_t( system_clock{}.now());

    return outs << put_time(&t, "%c %Z");
}


int main()
{
    cout << "This is the time: " << now << '\n';

    return 0;
}

