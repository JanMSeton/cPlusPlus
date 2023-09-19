#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cin >> input;
    std::string output;
    auto reverseIterator = input.rbegin();


    for(reverseIterator;(reverseIterator != input.rend()); ++reverseIterator)
    {
        std::cout << output.insert(reverseIterator, *reverseIterator);
    }

}