#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    argc-1 > 0 ? // Checks if there is more than 1 argument
    std::cout << "hello " <<  
            (argc-1 > 1 ? argv[std::stoul(argv[1])] : argv[1]) // Checks if there are more than 2 arguments,
                                    //  if yes, uses first argument as index for argument to be displayed
        :
            std::cout << " hello world";
    


} 