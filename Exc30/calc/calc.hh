#ifndef calc_hh_25012
#define calc_hh_25012

#include "../parse/parser.hh"

// Declarations go here:
class Calc
    {   
        Parser d_parser;

        double d_lhs;
        bool d_lhsInt;

        char d_operator;

        double d_rhs;
        bool d_rhsInt;



        bool expression();
        bool number(double *dest, bool *isInt);
        bool getOperator();

        void evaluate() const;
        void divide() const;
        void modulo() const;

        bool isZero(double value) const; 
        size_t asSizeT(double value) const;

        public:
            void run();
    };

#endif
