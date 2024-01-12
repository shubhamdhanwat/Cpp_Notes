#ifndef HEADER_H
#define HEADER_H

#include<iostream>

class Address
{
    int pincode;
    std::string city;
    std::string state;

    public:
    Address();
    Address(int pcode,std::string cty, std::string stat);
    ~Address();
    void Accept();
    void Display()const;

};

#endif // HEADER_H
