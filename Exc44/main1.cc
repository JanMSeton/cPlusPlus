#include "main.ih"

int main(int argc, char **argv)
{
    Strings strings{ };
    std::string const next1 = "ban1";
    std::string const next2 = "ban2";
    std::string const next3 = "ban3";
    std::string const next4 = "ban4";

    strings.add(next1);
    strings.add(next2);
    strings.add(next3);
    strings.add(next4);


    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
}