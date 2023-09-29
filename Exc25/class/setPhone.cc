#include "person.ih"

void Person::setPhone(string const &phone)
{
    if (phone.empty())
        d_phone = " - not available -";
    else if (phone.find_first_not_of("0123456789") == string::npos)
        d_phone = phone;
    else
        cout << "A phone number may only contain digits\n";
}

/*bool Person::hasOnly(char const *characters, string const &object)
{
// object only contains 'characters'

return object.find_first_not_of(characters) == string::npos;
}*/