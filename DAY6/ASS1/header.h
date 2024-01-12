#ifndef HEADER_H
#define HEADER_H

#include<iostream>

//interitance brings polymorphism as well as extensibility
class address{
   // string in cpp is class it is the built in class in cpp
   std::string city;
   int pincode;
   std::string state;
   public:
    address ()
    {
        std::cout<<"\nAddress default class .";
        city="pune";
        pincode=1234;
        state="MH";

    }
    address(std::string cit,int pinc,std::string stat):city(cit),pincode(pinc),state(stat)
    {
        std::cout<<"\nThe address para....";

    }
    ~address()
    {
        std::cout<<"\nTHe address destrcutor  ";
    }

    void accept();
    void display();


};

#endif // HEADER_H
