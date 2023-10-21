#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>
#include <iostream>
// Problem: No destructor
// No destroy

class Strings
{
    size_t d_size;
    size_t d_capacity;
    std::string *d_memory;
    

    public:
        struct POD  // data about the strings
        {
            size_t      size;
            std::string *str;
        };

        Strings(); // init d_size and *d_memory
        Strings(int argc, char *argv[]); // init d_size with argc and **d_memory with argv, fill argv // uses new
        Strings(char *environLike[]); // same, but with a number of environlikes // uses new
        Strings(std::istream &in); // add input lines to already initiated string
        ~Strings();

        void swap(Strings &other);  //swap 2 objects         

        size_t size() const; // accessor
        std::string *data() const; // accessor
        size_t capacity() const;
        POD release();  // reinits POD to 0's

        std::string const &at(size_t idx) const; // returns char at idx, taking a const string as input
        std::string &at(size_t idx);            // same returns nonconst string as input

        void add(std::string const &next);          // add another element // delete new made in enlarge

    private:
        void fill(char *ntbs[]);                    // fill prepared d_memory

        std::string &safeAt(size_t idx) const;      // private backdoor
        void enlarge();                     // uses new
        static size_t count(char *environLike[]);   // # elements in env.like
        void destroy();
        //std::string **rawPointers(size_t n);
        void reserve(size_t request);
        void resize(size_t size);
        std::string *rawStrings(size_t size);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string *Strings::data() const
{
    return d_memory;
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

