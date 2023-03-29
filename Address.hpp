// Angel Velazquez
// CST-210
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Address
{
private:
    string m_streetAddress;
    string m_state;
    string m_zip;

public:
    void setAddress(string);
    void setState(string);
    void setZip(string);
    string getAddress();
    string getState();
    string getZip();
    void showAddress();

    // overloaded operators
    friend istream &operator>>(istream &in, Address &home);
    friend ostream &operator<<(ostream &out, Address &home);

    // constructors
    Address();
    Address(string, string, string);
    Address(const Address &obj);
};