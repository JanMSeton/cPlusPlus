#include "aux.ih"
int sum(int argc, char const **argv, int accumulator) {
    for (int iter = 1; iter != argc; ++iter){
        accumulator += stoi(argv[iter]);
    }
    return accumulator;
}