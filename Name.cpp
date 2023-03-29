// Angel Velazquez
// CST-210
#include "Name.hpp"
#include <iostream>

// setters
void Name::setLast(string str)
{
    last_name = str;
}

void Name::setFirst(string str)
{
    first_name = str;
}

void Name::setMiddle(string str)
{
    middle_name = str;
}

// getters
string Name::getLast()
{
    return last_name;
}

string Name::getFirst()
{
    return first_name;
}

string Name::getMiddle()
{
    return middle_name;
}

void Name::showName()
{
    cout << last_name << ", " << first_name << " " << middle_name[0] << "." << endl;
}

// constructors
Name::Name()
{
    last_name = "";
    first_name = "";
    middle_name = "";
}

Name::Name(string first, string last, string middle)
    : first_name(first), last_name(last), middle_name(middle)
{
}

Name::Name(const Name &obj)
    : first_name(obj.first_name), last_name(obj.last_name), middle_name(obj.middle_name)
{
}

istream &operator>>(istream &in, Name &rhs)
{
    // gives parameters to input stream
    in >> rhs.first_name >> rhs.last_name >> rhs.middle_name;

    return in;
}

ostream &operator<<(ostream &out, Name &rhs)
{
    // gives parameters to output stream
    out << rhs.last_name << rhs.first_name << rhs.middle_name;

    return out;
}