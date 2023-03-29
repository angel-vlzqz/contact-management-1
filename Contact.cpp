// Angel Velazquez
// CST-210
#include "Contact.hpp"
#include "Address.hpp"

void Contact::setName(Name name)
{
    m_name.setFirst(name.getFirst());
    m_name.setMiddle(name.getMiddle());
    m_name.setLast(name.getLast());
}

void Contact::setAddress(Address address)
{
    m_address.setAddress(address.getAddress());
}

void Contact::setPhone(string phone)
{
    m_phone = phone;
}

Name Contact::getName()
{
    return m_name;
}

Address Contact::getAddress()
{
    return m_address;
}

string Contact::getPhone()
{
    return m_phone;
}

Contact::Contact()
{
}

Contact::Contact(Name name, Address address, string phone)
//: m_name(name), m_address(address), m_phone(phone)
{
    m_name = name;
    m_address = address;
    m_phone = phone;
}

Contact::Contact(const Contact &obj)
{
}

void Contact::showContact()
{
    m_name.showName();
    m_address.showAddress();
    cout << m_phone << endl;
}

istream &operator>>(istream &in, Contact &info)
{
    // assigns parameters to input stream
    in >> info.m_name >> info.m_address >> info.m_phone;

    return in;
}

ostream &operator<<(ostream &out, Contact &info)
{
    // assigns parameters to output stream
    out << info.m_name << info.m_address << info.m_phone;

    return out;
}
