#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>
#include <iostream>
// Problem: No destructor
// No destroy

class Strings
{
    size_t d_size;
    std::string *d_str;

    public:
        struct POD  // data about the strings
        {
            size_t      size;
            std::string *str;
        };

        Strings(); // init d_size and *d_str
        Strings(int argc, char *argv[]); // init d_size with argc and *d_str with argv, fill argv // uses new
        Strings(char *environLike[]); // same, but with a number of environlikes // uses new
        Strings(std::istream &in); // add input lines to already initiated string
        ~Strings();

        void swap(Strings &other);  //swap 2 objects         

        size_t size() const; // accessor
        std::string const *data() const; // accessor
        POD release();  // reinits POD to 0's

        std::string const &at(size_t idx) const; // returns char at idx, taking a const string as input
        std::string &at(size_t idx);            // same returns nonconst string as input

        void add(std::string const &next);          // add another element // delete new made in enlarge

    private:
        void fill(char *ntbs[]);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string *enlarge();                     // uses new
        void destroy();
        static size_t count(char *environLike[]);   // # elements in env.like
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    std::cout<< "const is used\n";
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    std::cout << "not const is used\n";
    return safeAt(idx);
}

        
#endif

