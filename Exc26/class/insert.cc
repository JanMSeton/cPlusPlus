#include "person.ih"

void Person::insert(ostream &out)
{
    out << "Name =" << Person::d_name << '\n'
         << "Mass = " << Person::d_mass << '\n'
         << "Adress =" << Person::d_address << '\n'
         << "Phonenumber =" << Person::d_phone << '\n';
}