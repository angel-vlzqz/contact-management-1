// Angel Velazquez
// CST-210
#include <iostream>
#include "Contact.hpp"

int main()
{
    Name name("Angel", "Velazquez", "Joann");
    Address address("One Apple Way Park", "CA", "95014");
    Contact contact(name, address, "111-222-3333");

    address.showAddress();
    contact.showContact();
}
