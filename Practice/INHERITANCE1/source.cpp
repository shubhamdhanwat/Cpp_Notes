#include <iostream>
#include "header.h"

Address::Address()
{
    std::cout << "\nThe call to the default constructore of address....\n";
    pincode = 4321;
    city = "Nashik";
    state = "Maharashtra";
}
Address::Address(int pcode, std::string cty, std::string stat)
    : pincode(pcode), city(cty), state(stat)
{
    std::cout << "\nThe call to the parametrized constructor  of address...\n";
}
Address::~Address()
{
    std::cout << "\nThe call to the destructor of address ..";
}
void Address::Accept()
{
    std::cout<<"\nEnter the pincode :";
    std::cin>>pincode;
    std::cout<<"\nEnter the city name :";
    std::cin>>city;
    std::cout<<"\nEnter the state name :";
    std::cin>>state;

}
void Address::Display() const
{
    std::cout << "\nThe pincode of the city is :" << pincode;
    std::cout << "\nThe city is :" << city;
    std::cout << "\nThe state is :" << state << "\n";
}