#include <iostream>

namespace
{
    const char Text[] = R"delimiter(^\\s+Encryption key:(\\w+)
^\\s+Quality=(\\d+)
^\\s+E?SSID:\"([[:print:]]+)\"
^\\s+ssid=\"([[:print:]]+)\"
)delimiter";
}

int main(){
std::cout << Text;
};
