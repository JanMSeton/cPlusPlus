#ifndef CopyCat_hh_7854
#define CopyCat_hh_7854

// Declarations go here:


extern char **environ;

class CopyCat
{
    std::size_t d_size;
    char **d_data;

    public:
        CopyCat();                          // copies environ
        CopyCat(int argc, char **argv);
        CopyCat(char **data);               // cp. any environ-like variable

    private: // static?
        static void ntbsCopy(char *dest, char *orig); // copy ntbs
        static size_t nElements(char **environ); // how many variables in nElements
        void duplicate(); //prob some copy function
};

inline CopyCat::CopyCat()
{
    //make array of ntbs's big enough to store environ
    for(size_t idx = 0; idx!= nElements(environ); ++idx)
    {
        ntbsCopy(d_data[idx], environ[idx]);
    }
}

#endif
