#include "person.ih"
std::string newmass;
void Person::extract(istream &in)
{
    getline(in, Person::d_name, ',');
    getline(in, Person::d_address, ',');
    getline(in, Person::d_phone, ',');
    getline(in, newmass, ','); // needs to input into size_t 
    Person::d_mass = (size_t)(stoi(newmass));
}