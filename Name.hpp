// Angel Velazquez
// CST-210
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Name
{
private:
    string first_name;
    string last_name;
    string middle_name;

public:
    void setLast(string str);
    void setFirst(string str);
    void setMiddle(string str);
    string getLast();
    string getFirst();
    string getMiddle();
    void showName();

    // overloaded operators
    friend istream &operator>>(istream &in, Name &rhs);
    friend ostream &operator<<(ostream &out, Name &rhs);

    // constructors
    Name();
    Name(string, string, string);
    Name(const Name &obj);
};