#include "Hospital.h"
#include<iostream>


Hospital::Hospital()
{
    hospital_id="0";
    hospital_name="hos_name";
    hospital_rating="Good";
    std::cout<<"\nThe call to the default constructor of the hospital ...";
    
}


Hospital::Hospital(const Hospital & h)
{
    std::cout<<"\nThe call to the copy constructor of the hospital ...";
    this->hospital_id=h.hospital_id;
    this->hospital_name=h.hospital_name;
    this->hospital_rating=h.hospital_rating;
}

Hospital::Hospital(std::string hos_id, std::string hos_nam, std::string hos_rat)
{
    std::cout<<"\nThe call to the parameterized constructor of the hospital ...";
    hospital_id=hos_id;
    hospital_name=hos_nam;
    hospital_rating=hos_rat;

}

void Hospital::Display()
{
    std::cout<<"\nThe Hospital id is :"<<hospital_id;
    std::cout<<"\nThe Hospital name is :"<<hospital_name;
    std::cout<<"\nThe Hospital rating is :"<<hospital_rating<<"\n";
    
}

void Hospital::Accept()
{
    std::cout<<"\nEnter the Hospital id is :";
    std::cin>>hospital_id;
    std::cout<<"\nEnter the Hospital name is :";
    std::cin>>hospital_name;
    std::cout<<"\nEnter the Hospital rating from the following option only :";
    std::cout<<"\n1.Good\n2.Decent\n3.Average\n4.Poor\n";
    int index;
    std::cin>>index;
    switch (index)
    {
    case 1:
        hospital_rating="Good";
        break;
    case 2:
        hospital_rating="Decent";
        break;
    case 3:
        hospital_rating="Average"    ;
        break;
    case 4:
        hospital_rating="Poor"   ;
        break; 
    }
    
    //std::cin>>hospital_rating;
}

Hospital::~Hospital()
{
    std::cout<<"\nThe call to the hospital destructor..";
}

std::ostream &operator<<(std::ostream & os,const Hospital & h)
{
    os<<"\nThe Hospital id is :";
    os<<h.hospital_id;
    os<<"\nThe Hospital name is :";
    os<<h.hospital_name;
    os<<"\nThe Hospital rating is :";
    os<<h.hospital_rating<<"\n";
    return os;
}
