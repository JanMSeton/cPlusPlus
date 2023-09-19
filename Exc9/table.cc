#include <iostream>
#include <string>


int main(int agrc, char **argv){

    int iter;
    std:: string input;
    std:: string output;
    
    input = argv[1];
    int inputvalue = std::stoi(agrv[1]);
    for(iter = 1; iter != 11; ++iter)
    {
        output = std::to_string(int (iter*inputvalue));
        std::cout << std::to_string(int (iter)) << " * " << output << " = " << input<< "\n";
    }
    
}