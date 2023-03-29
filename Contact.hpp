// Angel Velazquez
// CST-210
#pragma once
#include "Address.hpp"
#include "Name.hpp"
#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    Name m_name;
    Address m_address;
    string m_phone;

public:
    void setName(Name);
    void setAddress(Address);
    void setPhone(string);
    Name getName();
    Address getAddress();
    string getPhone();
    void showContact();

    // overloaded operators
    friend istream &operator>>(istream &in, Contact &info);
    friend ostream &operator<<(ostream &out, Contact &info);

    // constructors
    Contact();
    Contact(Name, Address, string);
    Contact(const Contact &obj);
};