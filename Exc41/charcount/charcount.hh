#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

struct CharCount            // struct, as CharCount defines public types
{
    private:
        size_t d_capacity = 4; // how many char objects can we store

    public:
        struct Char
        {
            char ch;
            size_t count;
        };

        struct CharInfo
        {
            Char *ptr;
            size_t nCharObj; // how many char objects do we have right now
            
        };

    

    private:
        enum Action
        {
            APPEND,
            INSERT,
            INC
        };

        CharInfo d_info = { enlarge() , 0 };
        static void (CharCount::*s_process[])(char ch, size_t idx);
    public:
        size_t count(std::istream &in);
        CharInfo const &info() const;
        size_t const &capacity() const;

        void cleanup();                 // non-automatic cleanup of 
                                        // allocated memory (not required
                                        // for the exercise)
        
    private:
        void process(char ch);
        Action locate(size_t *idx, char ch);
        void inc(char ch, size_t idx);
        void insert(char ch, size_t idx);
        void append(char ch, size_t idx);            // in fact:insert at d_nfo.nCharObj
        

        void transfer(Char *dest, size_t begin, size_t end);
        void transferWithin(size_t begin, size_t end);
        
        Char *rawCapacity(size_t d_capacity);
        Char *enlarge(); // doubles capacity
        void destroy();
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}
        
inline void CharCount::cleanup()
{
    delete[] d_info.ptr;
}

inline size_t const &CharCount::capacity() const
{
    return d_capacity;
}


#endif