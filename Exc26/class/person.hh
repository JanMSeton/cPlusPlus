#ifndef PERSON_HH_
#define PERSON_HH_

#include <string>
class Person
{   std::string d_name;
    std::string d_address;
    std::string d_phone;
    size_t  d_mass;

    public:
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setMass(size_t mass);
        void setPhone(std::string const &phone);
        void insert(std::ostream &out);
        void extract(std::istream &in);

        std::string const &name() const;
        std::string const &address() const;
        std::string const &phone() const;
        size_t mass() const;
        
};

inline void Person::setName(std::string const &name)
    {
        d_name = name;
    }

inline void Person::setAddress(std::string const &address)
    {
        d_address = address;
    }

inline void Person::setMass(size_t mass)
    {
        d_mass = mass;
    }
#endif