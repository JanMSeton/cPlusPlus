#include "main.ih"

int main()
{
    extern char **environ;
    Strings strings{ environ };

    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
}