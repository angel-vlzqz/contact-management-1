// Angel Velazquez
// CST-210
#include "Address.hpp"
#include <iostream>

void Address::setAddress(string address)
{
    m_streetAddress = address;
}

void Address::setState(string state)
{
    m_state = state;
}

void Address::setZip(string zip)
{
    m_zip = zip;
}

string Address::getAddress()
{
    return m_streetAddress;
}

string Address::getState()
{
    return m_state;
}

string Address::getZip()
{
    return m_zip;
}

void Address::showAddress()
{
    cout << m_streetAddress << endl;
    cout << m_state << ", " << m_zip << endl;
}

Address::Address()
{
    m_streetAddress = "";
    m_state = "";
    m_zip = "";
}

Address::Address(string address, string state, string zip)
    : m_streetAddress(address), m_state(state), m_zip(zip)
{
}

Address::Address(const Address &obj)
{
}

istream &operator>>(istream &in, Address &home)
{
    // inputs parameters from home object to input stream
    in >> home.m_streetAddress >> home.m_state >> home.m_zip;

    return in;
}

ostream &operator<<(ostream &out, Address &home)
{
    // parameters are assigned to output stream
    out << home.m_streetAddress << home.m_state << home.m_zip;

    return out;
}