#include "aux.ih"
double sum(int argc, char const **argv, double accumulator) {
    for (int iter = 1; iter != argc; ++iter){
        accumulator += stod(argv[iter]);
    }
    return accumulator;
}